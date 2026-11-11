
void FUN_00406c90(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_00406da8(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar7 = param_1[1];
    lVar5 = FUN_00187df4(param_2 * 0x20);
    lVar2 = lVar5 + param_2 * 0x20;
    puVar3 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    lVar5 = lVar5 + (lVar7 - lVar6);
    if (puVar9 == puVar3) {
      *param_1 = lVar5;
      param_1[1] = lVar5;
      param_1[2] = lVar2;
    }
    else {
      puVar1 = PTR_DAT_04bd27d8 + 0x10;
      lVar6 = 0;
      do {
        lVar7 = lVar5 + lVar6;
        lVar8 = lVar6 + -0x20;
        *(undefined1 *)(lVar7 + -0x18) = *(undefined1 *)((long)puVar9 + lVar6 + -0x18);
        *(undefined4 *)(lVar7 + -0x14) = *(undefined4 *)((long)puVar9 + lVar6 + -0x14);
        *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)((long)puVar9 + lVar6 + -0x10);
        *(undefined4 *)(lVar7 + -8) = *(undefined4 *)((long)puVar9 + lVar6 + -8);
        uVar4 = *(undefined4 *)((long)puVar9 + lVar6 + -4);
        *(undefined **)(lVar7 + -0x20) = puVar1;
        *(undefined4 *)(lVar7 + -4) = uVar4;
        lVar6 = lVar8;
      } while ((undefined8 *)((long)puVar9 + lVar8) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar5 + lVar8;
      param_1[1] = lVar5;
      do {
        puVar9 = puVar9 + -4;
        (**(code **)*puVar9)(puVar9);
      } while (puVar9 != puVar3);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar3);
      return;
    }
  }
  return;
}

