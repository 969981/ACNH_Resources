
void FUN_001a3250(ulong *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar11 < param_2) {
    puVar11 = (undefined8 *)((long)puVar11 - *param_1);
    puVar1 = (undefined1 *)((long)puVar11 + param_2);
    if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(param_1);
    }
    uVar7 = param_1[2] - *param_1;
    puVar8 = (undefined1 *)(uVar7 * 2);
    if (puVar8 <= puVar1) {
      puVar8 = puVar1;
    }
    if (0x3ffffffffffffffe < uVar7) {
      puVar8 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar8 == (undefined1 *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_00187df4(puVar8);
      puVar11 = (undefined8 *)(lVar4 + (long)puVar11);
    }
    puVar6 = puVar11;
    if ((param_2 & 7) != 0) {
      uVar7 = param_2 & 7;
      puVar9 = puVar11;
      do {
        uVar7 = uVar7 - 1;
        *(undefined1 *)puVar9 = 0;
        puVar6 = (undefined8 *)((long)puVar9 + 1);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)((long)puVar11 + param_2);
    if (7 < param_2) {
      do {
        puVar10 = puVar6 + 1;
        *puVar6 = 0;
        puVar6 = puVar10;
      } while (puVar10 != puVar9);
    }
    puVar1 = (undefined1 *)*param_1;
    puVar5 = (undefined1 *)param_1[1];
    if (puVar5 != puVar1) {
      uVar3 = (int)puVar5 - (int)puVar1;
      puVar2 = puVar5 + ~(ulong)puVar1;
      uVar7 = (ulong)uVar3 & 3;
      if ((uVar3 & 3) != 0) {
        do {
          puVar5 = puVar5 + -1;
          uVar7 = uVar7 - 1;
          puVar11 = (undefined8 *)((long)puVar11 + -1);
          *(undefined1 *)puVar11 = *puVar5;
        } while (uVar7 != 0);
      }
      if ((undefined1 *)0x2 < puVar2) {
        do {
          *(undefined1 *)((long)puVar11 + -1) = puVar5[-1];
          *(undefined1 *)((long)puVar11 + -2) = puVar5[-2];
          *(undefined1 *)((long)puVar11 + -3) = puVar5[-3];
          puVar5 = puVar5 + -4;
          puVar11 = (undefined8 *)((long)puVar11 + -4);
          *(undefined1 *)puVar11 = *puVar5;
        } while (puVar5 != puVar1);
      }
      puVar5 = (undefined1 *)*param_1;
    }
    *param_1 = (ulong)puVar11;
    param_1[1] = (ulong)puVar9;
    param_1[2] = (ulong)(puVar8 + lVar4);
    if (puVar5 != (undefined1 *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  else {
    puVar6 = puVar11;
    if (param_2 != 0) {
      puVar6 = (undefined8 *)((long)puVar11 + param_2);
      for (uVar7 = param_2 & 7; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = 0;
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      }
      if (7 < param_2) {
        do {
          puVar9 = puVar11 + 1;
          *puVar11 = 0;
          puVar11 = puVar9;
        } while (puVar9 != puVar6);
      }
    }
    param_1[1] = (ulong)puVar6;
  }
  return;
}

