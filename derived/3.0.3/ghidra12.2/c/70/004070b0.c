
void FUN_004070b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar9 = *param_1;
  if ((ulong)(param_1[2] - lVar9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_0040731c(param_1);
                    /* WARNING: Does not return */
      pcVar7 = (code *)UndefinedInstructionException(0,0x4071ac);
      (*pcVar7)();
    }
    lVar10 = param_1[1];
    lVar8 = FUN_00187df4(param_2 * 0x20);
    lVar2 = lVar8 + param_2 * 0x20;
    puVar3 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar8 = lVar8 + (lVar10 - lVar9);
    if (puVar11 == puVar3) {
      *param_1 = lVar8;
      param_1[1] = lVar8;
      param_1[2] = lVar2;
    }
    else {
      lVar9 = 0;
      puVar1 = PTR_DAT_04bd2910 + 0x10;
      do {
        lVar10 = lVar8 + lVar9;
        uVar6 = *(undefined1 *)((long)puVar11 + lVar9 + -0x18);
        uVar4 = *(undefined8 *)((long)puVar11 + lVar9 + -0x10);
        uVar5 = *(undefined8 *)((long)puVar11 + lVar9 + -8);
        lVar9 = lVar9 + -0x20;
        *(undefined **)(lVar10 + -0x20) = puVar1;
        *(undefined8 *)(lVar10 + -0x10) = uVar4;
        *(undefined8 *)(lVar10 + -8) = uVar5;
        *(undefined1 *)(lVar10 + -0x18) = uVar6;
      } while ((undefined8 *)((long)puVar11 + lVar9) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar8 + lVar9;
      param_1[1] = lVar8;
      do {
        puVar11 = puVar11 + -4;
        (**(code **)*puVar11)(puVar11);
      } while (puVar11 != puVar3);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar3);
      return;
    }
  }
  return;
}

