
void FUN_004071b0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)param_1[2]) {
    puVar12 = (undefined8 *)*param_1;
    uVar9 = (long)puVar8 - (long)puVar12;
    uVar1 = ((long)uVar9 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_0040731c(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    uVar3 = (long)uVar9 >> 4;
    if ((ulong)((long)uVar9 >> 4) <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar3 = 0x7ffffffffffffff;
    }
    if (uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_00187df4(uVar3 << 5);
      puVar12 = (undefined8 *)*param_1;
      puVar8 = (undefined8 *)param_1[1];
    }
    puVar2 = (undefined8 *)(lVar7 + ((long)uVar9 >> 5) * 0x20);
    lVar7 = lVar7 + uVar3 * 0x20;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    puVar2[2] = *(undefined8 *)(param_2 + 0x10);
    puVar2[3] = uVar4;
    *puVar2 = &DAT_04851a00;
    if (puVar8 == puVar12) {
      *param_1 = (long)puVar2;
      param_1[1] = (long)(puVar2 + 4);
      param_1[2] = lVar7;
    }
    else {
      lVar10 = 0;
      do {
        uVar6 = *(undefined1 *)((long)puVar8 + lVar10 + -0x18);
        uVar4 = *(undefined8 *)((long)puVar8 + lVar10 + -0x10);
        uVar5 = *(undefined8 *)((long)puVar8 + lVar10 + -8);
        lVar11 = lVar10 + -0x20;
        *(undefined **)((long)puVar2 + lVar10 + -0x20) = &DAT_04851a00;
        *(undefined8 *)((long)puVar2 + lVar10 + -0x10) = uVar4;
        *(undefined8 *)((long)puVar2 + lVar10 + -8) = uVar5;
        *(undefined1 *)((long)puVar2 + lVar10 + -0x18) = uVar6;
        lVar10 = lVar11;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar12);
      param_1[2] = lVar7;
      *param_1 = (long)puVar2 + lVar11;
      param_1[1] = (long)(puVar2 + 4);
      do {
        puVar8 = puVar8 + -4;
        (**(code **)*puVar8)(puVar8);
      } while (puVar8 != puVar12);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar12);
      return;
    }
  }
  else {
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    puVar8[2] = *(undefined8 *)(param_2 + 0x10);
    puVar8[3] = uVar4;
    *puVar8 = &DAT_04851a00;
    param_1[1] = (long)(puVar8 + 4);
  }
  return;
}

