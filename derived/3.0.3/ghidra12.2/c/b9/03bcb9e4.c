
void FUN_03bcb9e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  *param_1 = (long)(PTR_DAT_04bd2338 + 0x10);
  FUN_003ba454(param_1 + 1);
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *param_1 = (long)&PTR_LAB_04b7ae00;
  param_1[1] = (long)&PTR_LAB_04b7ae88;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  FUN_038e18e4(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x3bc) = 0;
  param_1[0x76] = (long)param_1 + 0x3bc;
  *(undefined4 *)(param_1 + 0x77) = 0x20;
  *(undefined1 *)((long)param_1 + 0x3db) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x75] = (long)&PTR_LAB_048f9700;
  param_1[0x7e] = 0;
  lVar1 = DAT_05ae7600;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  if (lVar1 == 0) {
    puVar4 = malloc(0x268);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar1 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x268,8);
    }
  }
  FUN_003dff98(puVar4);
  puVar4[0x48] = 0;
  puVar4[0x49] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4b] = 0;
  *(undefined1 *)(puVar4 + 0x4c) = 0;
  *puVar4 = &PTR_FUN_04b7aff0;
  puVar4[3] = &PTR_LAB_04b7b030;
  param_1[0x69] = (long)puVar4;
  return;
}

