using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CharizardButton_Click : MonoBehaviour
{

	public Button mButton;

	// Use this for initialization
	void Start ()
	{
		// 获取 Charizard 按钮
		Button charizardBtn = mButton.GetComponent<Button> ();
		// 给 Charizard 按钮绑定点击事件监听器
		charizardBtn.onClick.AddListener (onCharizardBtnClick);
	}

	void onCharizardBtnClick ()
	{
		// 加载 Scene2
		SceneManager.LoadScene ("Scene2");
	}
}
