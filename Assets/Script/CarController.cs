using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarController : MonoBehaviour {

	float speed = 0; // 車のスピード
	Vector2 startPos;

	private const float SPEED = 0.2f; // 車のスピードの設定値
	private const float SPEEDCOEF = 0.98f; // 減速設定値

	void Start () {
	}

	void Update () {

		// スワイプの長さを求める
		if (Input.GetMouseButtonDown (0)) { // マウスが押された時
			// マウスをクリックした座標
			this.startPos = Input.mousePosition;
		} else if(Input.GetMouseButtonUp(0)){ // マウスが離れた時
			// マウスを離した座標
			Vector2 endPos = Input.mousePosition;
			float swipeLength = (endPos.x - this.startPos.x);

			// スワイプの長さを初速度に変換する
			this.speed = swipeLength / 500.0f;

		}

		transform.Translate (this.speed, 0, 0); // 車の移動
		this.speed *= SPEEDCOEF; // 減速

	}
}
