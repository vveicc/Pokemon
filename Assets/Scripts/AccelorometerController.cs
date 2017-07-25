using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AccelorometerController : MonoBehaviour {

	// 位移速度
	float speed = 210;
	// 表示屏幕是否被点击的 static 变量
	static bool isTouched = false;

	// Use this for initialization
	void Start () {
		isTouched = false;
	}
	
	// Update is called once per frame
	void Update () {
		// 如果屏幕被点击至少一次
		if (Input.touchCount > 0) {
			isTouched = true;
		}

		if (isTouched) {
			float vector_x = Input.acceleration.x * speed * Time.deltaTime;
			float vector_y = Input.acceleration.y * speed * Time.deltaTime;
			// 表示三维的随重力加速度的位移向量
			Vector3 mMovement = new Vector3 (-vector_x, vector_y);
			// 根据位移向量来移动游戏对象
			transform.Translate (mMovement);
		}
	}
}
