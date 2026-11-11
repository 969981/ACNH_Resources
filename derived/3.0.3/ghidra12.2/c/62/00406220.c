
void FUN_00406220(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == (undefined8 *)param_1[2]) {
    puVar12 = (undefined8 *)*param_1;
    uVar8 = (long)puVar7 - (long)puVar12;
    uVar1 = ((long)uVar8 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_004063ac(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    uVar3 = (long)uVar8 >> 4;
    if ((ulong)((long)uVar8 >> 4) <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar3 = 0x7ffffffffffffff;
    }
    if (uVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_00187df4(uVar3 << 5);
      puVar12 = (undefined8 *)*param_1;
      puVar7 = (undefined8 *)param_1[1];
    }
    puVar2 = (undefined8 *)(lVar6 + ((long)uVar8 >> 5) * 0x20);
    lVar6 = lVar6 + uVar3 * 0x20;
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    puVar2[2] = uVar9;
    *(undefined4 *)(puVar2 + 3) = uVar4;
    *puVar2 = &DAT_04851940;
    if (puVar7 == puVar12) {
      *param_1 = (long)puVar2;
      param_1[1] = (long)(puVar2 + 4);
      param_1[2] = lVar6;
    }
    else {
      lVar10 = 0;
      do {
        uVar5 = *(undefined1 *)((long)puVar7 + lVar10 + -0x18);
        uVar9 = *(undefined8 *)((long)puVar7 + lVar10 + -0x10);
        lVar11 = lVar10 + -0x20;
        *(undefined **)((long)puVar2 + lVar10 + -0x20) = &DAT_04851940;
        *(undefined4 *)((long)puVar2 + lVar10 + -8) = *(undefined4 *)((long)puVar7 + lVar10 + -8);
        *(undefined1 *)((long)puVar2 + lVar10 + -0x18) = uVar5;
        *(undefined8 *)((long)puVar2 + lVar10 + -0x10) = uVar9;
        lVar10 = lVar11;
      } while ((undefined8 *)((long)puVar7 + lVar11) != puVar12);
      param_1[2] = lVar6;
      *param_1 = (long)puVar2 + lVar11;
      param_1[1] = (long)(puVar2 + 4);
      do {
        puVar7 = puVar7 + -4;
        (**(code **)*puVar7)(puVar7);
      } while (puVar7 != puVar12);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar12);
      return;
    }
  }
  else {
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    puVar7[2] = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(puVar7 + 3) = uVar4;
    *puVar7 = &DAT_04851940;
    param_1[1] = (long)(puVar7 + 4);
  }
  return;
}

