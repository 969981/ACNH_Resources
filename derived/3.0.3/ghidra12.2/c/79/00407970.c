
void FUN_00407970(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  lVar7 = *param_1;
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_00407a9c(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar8 = param_1[1];
    lVar6 = FUN_00187df4(param_2 * 0x28);
    lVar2 = lVar6 + param_2 * 0x28;
    puVar3 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar6 = lVar6 + (lVar8 - lVar7);
    if (puVar11 == puVar3) {
      *param_1 = lVar6;
      param_1[1] = lVar6;
      param_1[2] = lVar2;
    }
    else {
      puVar1 = PTR_DAT_04bd28e8 + 0x10;
      lVar7 = 0;
      do {
        lVar8 = lVar6 + lVar7;
        uVar4 = *(undefined1 *)((long)puVar11 + lVar7 + -0x20);
        uVar10 = *(undefined8 *)((long)puVar11 + lVar7 + -0x18);
        lVar9 = lVar7 + -0x28;
        *(undefined **)(lVar8 + -0x28) = puVar1;
        uVar5 = *(undefined2 *)((long)puVar11 + lVar7 + -0x10);
        *(undefined1 *)(lVar8 + -0x20) = uVar4;
        *(undefined8 *)(lVar8 + -8) = *(undefined8 *)((long)puVar11 + lVar7 + -8);
        *(undefined8 *)(lVar8 + -0x18) = uVar10;
        *(undefined2 *)(lVar8 + -0x10) = uVar5;
        lVar7 = lVar9;
      } while ((undefined8 *)((long)puVar11 + lVar9) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar6 + lVar9;
      param_1[1] = lVar6;
      do {
        puVar11 = puVar11 + -5;
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

