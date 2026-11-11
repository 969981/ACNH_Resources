
void FUN_00409480(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar6 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0xcccccccccccccc < uVar1) {
    FUN_00405c80(param_1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x4095f8);
    (*pcVar3)();
  }
  lVar5 = param_1[2] - *param_1 >> 6;
  uVar7 = lVar5 * -0x6666666666666666;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x66666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar7 = 0xcccccccccccccc;
  }
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00187df4(uVar7 * 0x140);
  }
  plVar10 = (long *)(lVar5 + lVar6 * 0x40);
  lVar11 = lVar5 + uVar7 * 0x140;
  FUN_00405930(plVar10,param_2);
  puVar8 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = PTR_DAT_04bc0ef0 + 0x10;
  *plVar10 = (long)puVar2;
  if (puVar9 == puVar8) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 0x28);
    param_1[2] = lVar11;
  }
  else {
    plVar4 = (long *)(lVar5 + lVar6 * 0x40);
    do {
      plVar4 = plVar4 + -0x28;
      puVar9 = puVar9 + -0x28;
      FUN_00405930(plVar4,puVar9);
      *plVar4 = (long)puVar2;
    } while (puVar9 != puVar8);
    puVar9 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar4;
    param_1[1] = (long)(plVar10 + 0x28);
    param_1[2] = lVar11;
    while (puVar8 != puVar9) {
      puVar8 = puVar8 + -0x28;
      (**(code **)*puVar8)(puVar8);
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar9);
  return;
}

