using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; // UI部品を使うために必要

public class GameDirecotor : MonoBehaviour {

	GameObject car;
	GameObject flag;
	GameObject distance;

	void Start () {
		// シーンからオブジェクトを探す
		// Find関数はオブジェクト名を引数に取り引数名と同じものがゲームシーン中にあれば、そのオブジェクトを返す関数
		this.car = GameObject.Find ("car");
		this.flag = GameObject.Find ("flag");
		this.distance = GameObject.Find ("Distance");
		
	}

	void Update () {
		float length = this.flag.transform.position.x - this.car.transform.position.x;
		if (length >= 0) {
			this.distance.GetComponent<Text> ().text = "ゴールまで" + length.ToString ("F2") + "m";
			// TOString関数の引数は小数第２位まで表示と言う意味
		} else {
			this.distance.GetComponent<Text> ().text = "ゲームオーバー!!";
		}
	}
}
