
void FUN_01e61130(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_04a5de78;
  if (0 < *(int *)(param_1 + 0x25ea)) {
    lVar5 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x25eb] + lVar5 * 8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x25ea));
  }
  puVar3 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x24af] = PTR_DAT_04bc1558 + 0x10;
  param_1[0x2509] = puVar2;
  param_1[0x24ea] = puVar2;
  param_1[0x24b3] = puVar2;
  if (0 < *(int *)(param_1 + 0x2146)) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined **)(*(long *)(param_1[0x2147] + lVar1) + 0x78) = puVar2;
    } while (lVar5 < *(int *)(param_1 + 0x2146));
  }
  if (0 < *(int *)(param_1 + 0x1de2)) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined **)(*(long *)(param_1[0x1de3] + lVar1) + 0x78) = puVar3 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x1de2));
  }
  puVar2 = puVar3 + 0x10;
  param_1[0x1dc4] = puVar2;
  param_1[0x1dbb] = puVar2;
  param_1[0x1db2] = puVar2;
  param_1[0x1da9] = puVar2;
  param_1[0x1dd6] = puVar2;
  param_1[0x1dcd] = puVar2;
  param_1[0x1da0] = puVar2;
  param_1[0x1d97] = puVar2;
  param_1[0x1d8e] = puVar2;
  param_1[0x1d85] = puVar2;
  puVar4 = param_1 + 0x1cfb;
  do {
    puVar4 = (undefined8 *)puVar4[1];
  } while (puVar4 != param_1 + 0x1cfb);
  param_1[0x1670] = PTR_DAT_04bc24a8 + 0x10;
  puVar4 = (undefined8 *)param_1[0x1673];
  if (puVar4 != param_1 + 0x1672) {
    do {
      puVar4[-10] = puVar3 + 0x10;
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != param_1 + 0x1672);
  }
  FUN_02099520(param_1 + 0x15e7);
  FUN_01e9fc50(param_1);
  return;
}

