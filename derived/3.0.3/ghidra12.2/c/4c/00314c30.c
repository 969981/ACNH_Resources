
void FUN_00314c30(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  lVar7 = *param_2;
  param_2[1] = lVar7;
  if ((ulong)(*(long *)(lVar13 + 0x18) - lVar6) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar2 = *(uint *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28) + lVar6);
    uVar12 = (ulong)uVar2;
    *(long *)(param_1 + 0x18) = lVar6 + 4;
    if ((ulong)(param_2[2] - lVar7 >> 2) < uVar12) {
      puVar4 = (undefined4 *)FUN_00187df4(uVar12 * 4);
      puVar9 = (undefined4 *)*param_2;
      puVar5 = (undefined4 *)param_2[1];
      puVar10 = puVar4;
      if (puVar5 != puVar9) {
        do {
          puVar5 = puVar5 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar5;
        } while (puVar5 != puVar9);
      }
      *param_2 = (long)puVar10;
      param_2[1] = (long)puVar4;
      param_2[2] = (long)(puVar4 + uVar12);
      if (puVar9 != (undefined4 *)0x0) {
        FUN_00187e4c();
      }
    }
    if (uVar2 != 0) {
      uVar11 = 0;
      do {
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
        lVar13 = *(long *)(param_1 + 0x10);
        lVar6 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar13 + 0x18) - lVar6) < 4) {
          *(undefined1 *)(param_1 + 8) = 1;
          param_2[1] = *param_2;
          return;
        }
        uVar3 = *(undefined4 *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28) + lVar6);
        *(long *)(param_1 + 0x18) = lVar6 + 4;
        puVar9 = (undefined4 *)param_2[1];
        if (puVar9 == (undefined4 *)param_2[2]) {
          puVar5 = (undefined4 *)*param_2;
          uVar8 = (long)puVar9 - (long)puVar5;
          lVar13 = (long)uVar8 >> 2;
          uVar12 = lVar13 + 1;
          if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_001a3240(param_2);
          }
          uVar1 = (long)uVar8 >> 1;
          if ((ulong)((long)uVar8 >> 1) <= uVar12) {
            uVar1 = uVar12;
          }
          if (0x7ffffffffffffffb < uVar8) {
            uVar1 = 0x3fffffffffffffff;
          }
          if (uVar1 == 0) {
            lVar6 = 0;
            puVar10 = (undefined4 *)(lVar13 * 4);
            puVar4 = puVar10 + 1;
            *puVar10 = uVar3;
            if (puVar9 != puVar5) goto LAB_00314da0;
          }
          else {
            lVar6 = FUN_00187df4(uVar1 << 2);
            puVar5 = (undefined4 *)*param_2;
            puVar9 = (undefined4 *)param_2[1];
            puVar10 = (undefined4 *)(lVar6 + lVar13 * 4);
            puVar4 = puVar10 + 1;
            *puVar10 = uVar3;
            if (puVar9 != puVar5) {
LAB_00314da0:
              do {
                puVar9 = puVar9 + -1;
                puVar10 = puVar10 + -1;
                *puVar10 = *puVar9;
              } while (puVar9 != puVar5);
            }
          }
          *param_2 = (long)puVar10;
          param_2[1] = (long)puVar4;
          param_2[2] = lVar6 + uVar1 * 4;
          if (puVar5 != (undefined4 *)0x0) {
            FUN_00187e4c();
          }
        }
        else {
          *puVar9 = uVar3;
          param_2[1] = (long)(puVar9 + 1);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar2);
    }
  }
  return;
}

