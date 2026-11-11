
void FUN_00407dd0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_00407ef8(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar9 = param_1[1];
    lVar7 = FUN_00187df4(param_2 * 0x28);
    lVar2 = lVar7 + param_2 * 0x28;
    puVar3 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    lVar7 = lVar7 + (lVar9 - lVar8);
    if (puVar12 == puVar3) {
      *param_1 = lVar7;
      param_1[1] = lVar7;
      param_1[2] = lVar2;
    }
    else {
      puVar1 = PTR_DAT_04bd28c0 + 0x10;
      lVar8 = 0;
      do {
        lVar9 = lVar7 + lVar8;
        uVar6 = *(undefined1 *)((long)puVar12 + lVar8 + -0x20);
        uVar4 = *(undefined8 *)((long)puVar12 + lVar8 + -0x18);
        uVar5 = *(undefined8 *)((long)puVar12 + lVar8 + -0x10);
        lVar10 = lVar8 + -0x28;
        uVar11 = *(undefined8 *)((long)puVar12 + lVar8 + -8);
        *(undefined **)(lVar9 + -0x28) = puVar1;
        *(undefined8 *)(lVar9 + -8) = uVar11;
        *(undefined1 *)(lVar9 + -0x20) = uVar6;
        *(undefined8 *)(lVar9 + -0x18) = uVar4;
        *(undefined8 *)(lVar9 + -0x10) = uVar5;
        lVar8 = lVar10;
      } while ((undefined8 *)((long)puVar12 + lVar10) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar7 + lVar10;
      param_1[1] = lVar7;
      do {
        puVar12 = puVar12 + -5;
        (**(code **)*puVar12)(puVar12);
      } while (puVar12 != puVar3);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar3);
      return;
    }
  }
  return;
}

