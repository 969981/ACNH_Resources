
void FUN_0040a8b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar9 = *param_1;
  if ((ulong)((param_1[2] - lVar9 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
      FUN_00405918(param_1);
                    /* WARNING: Does not return */
      pcVar7 = (code *)UndefinedInstructionException(0,0x40aa08);
      (*pcVar7)();
    }
    lVar10 = param_1[1];
    lVar8 = FUN_00187df4(param_2 * 0x38);
    lVar3 = lVar8 + param_2 * 0x38;
    puVar4 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    lVar8 = lVar8 + (lVar10 - lVar9);
    if (puVar12 == puVar4) {
      *param_1 = lVar8;
      param_1[1] = lVar8;
      param_1[2] = lVar3;
    }
    else {
      puVar1 = PTR_DAT_04bd26e0 + 0x10;
      puVar2 = PTR_DAT_04bd28a0 + 0x10;
      lVar9 = 0;
      do {
        lVar10 = lVar8 + lVar9;
        uVar6 = *(undefined2 *)((long)puVar12 + lVar9 + -0x30);
        lVar11 = lVar9 + -0x38;
        *(undefined **)(lVar10 + -0x28) = puVar1;
        *(undefined **)(lVar10 + -0x38) = puVar2;
        *(undefined2 *)(lVar10 + -0x30) = uVar6;
        *(undefined1 *)(lVar10 + -0x20) = *(undefined1 *)((long)puVar12 + lVar9 + -0x20);
        *(undefined8 *)(lVar10 + -0x18) = *(undefined8 *)((long)puVar12 + lVar9 + -0x18);
        uVar5 = *(undefined4 *)((long)puVar12 + lVar9 + -0x10);
        *(undefined8 *)(lVar10 + -8) = *(undefined8 *)((long)puVar12 + lVar9 + -8);
        *(undefined4 *)(lVar10 + -0x10) = uVar5;
        lVar9 = lVar11;
      } while ((undefined8 *)((long)puVar12 + lVar11) != puVar4);
      param_1[2] = lVar3;
      *param_1 = lVar8 + lVar11;
      param_1[1] = lVar8;
      do {
        puVar12 = puVar12 + -7;
        (**(code **)*puVar12)(puVar12);
      } while (puVar12 != puVar4);
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar4);
      return;
    }
  }
  return;
}

