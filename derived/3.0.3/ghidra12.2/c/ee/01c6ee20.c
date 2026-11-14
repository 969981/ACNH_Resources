
void FUN_01c6ee20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 * -0x1111111111111111 + 1;
  if (0x222222222222222 < uVar1) {
    FUN_01c6e56c(param_1);
    DAT_053504a0 = 4;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053504a4);
    DAT_053504b0 = 0x8004ef;
    DAT_053504b8 = nn::os::GetSystemTick();
    DAT_053504c0 = 0;
    DAT_053504c8 = 1;
    return;
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar4 * -0x2222222222222222;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x111111111111110 < (ulong)(lVar4 * -0x1111111111111111)) {
    uVar6 = 0x222222222222222;
  }
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00187df4(uVar6 * 0x78);
  }
  plVar9 = (long *)(lVar4 + lVar5 * 8);
  lVar10 = lVar4 + uVar6 * 0x78;
  FUN_01c6e580(plVar9,param_2);
  puVar2 = PTR_DAT_04bc0fa0 + 0x10;
  *plVar9 = (long)puVar2;
  puVar8 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == puVar8) {
    *param_1 = (long)plVar9;
    param_1[1] = (long)(plVar9 + 0xf);
    param_1[2] = lVar10;
  }
  else {
    plVar3 = (long *)(lVar4 + lVar5 * 8);
    do {
      plVar3 = plVar3 + -0xf;
      puVar7 = puVar7 + -0xf;
      FUN_01c6e580(plVar3,puVar7);
      *plVar3 = (long)puVar2;
    } while (puVar7 != puVar8);
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar3;
    param_1[1] = (long)(plVar9 + 0xf);
    param_1[2] = lVar10;
    while (puVar8 != puVar7) {
      puVar8 = puVar8 + -0xf;
      (**(code **)*puVar8)(puVar8);
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar7);
  return;
}

