
void FUN_004074e0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_00407618(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar9 = param_1[1];
    lVar7 = FUN_00187df4(param_2 * 0x30);
    lVar2 = lVar7 + param_2 * 0x30;
    puVar3 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar7 = lVar7 + (lVar9 - lVar8);
    if (puVar11 == puVar3) {
      *param_1 = lVar7;
      param_1[1] = lVar7;
      param_1[2] = lVar2;
    }
    else {
      puVar1 = PTR_DAT_04bd2848 + 0x10;
      lVar8 = 0;
      do {
        lVar9 = lVar7 + lVar8;
        uVar5 = *(undefined1 *)((long)puVar11 + lVar8 + -0x28);
        lVar10 = lVar8 + -0x30;
        *(undefined **)(lVar9 + -0x30) = puVar1;
        *(undefined1 *)(lVar9 + -0x28) = uVar5;
        uVar4 = *(undefined8 *)((long)puVar11 + lVar8 + -0x18);
        *(undefined8 *)(lVar9 + -0x20) = *(undefined8 *)((long)puVar11 + lVar8 + -0x20);
        *(undefined8 *)(lVar9 + -0x18) = uVar4;
        *(undefined4 *)(lVar9 + -0x10) = *(undefined4 *)((long)puVar11 + lVar8 + -0x10);
        uVar6 = *(undefined2 *)((long)puVar11 + lVar8 + -0xc);
        *(undefined4 *)(lVar9 + -8) = *(undefined4 *)((long)puVar11 + lVar8 + -8);
        *(undefined2 *)(lVar9 + -0xc) = uVar6;
        lVar8 = lVar10;
      } while ((undefined8 *)((long)puVar11 + lVar10) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar7 + lVar10;
      param_1[1] = lVar7;
      do {
        puVar11 = puVar11 + -6;
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

