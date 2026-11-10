
void FUN_0030ce30(long param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  param_2[1] = *param_2;
  uVar11 = (ulong)*(uint *)(param_1 + 0x238);
  if (param_2[2] - *param_2 < uVar11) {
    puVar5 = (undefined1 *)FUN_00187df4(uVar11);
    puVar3 = (undefined1 *)*param_2;
    puVar6 = (undefined1 *)param_2[1];
    if (puVar6 == puVar3) {
      *param_2 = (ulong)puVar5;
      param_2[1] = (ulong)puVar5;
      param_2[2] = (ulong)(puVar5 + uVar11);
    }
    else {
      uVar4 = (int)puVar6 - (int)puVar3;
      puVar8 = puVar6 + ~(ulong)puVar3;
      uVar10 = (ulong)uVar4 & 3;
      puVar9 = puVar5;
      if ((uVar4 & 3) != 0) {
        do {
          puVar6 = puVar6 + -1;
          uVar10 = uVar10 - 1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar6;
        } while (uVar10 != 0);
      }
      if ((undefined1 *)0x2 < puVar8) {
        do {
          puVar9[-1] = puVar6[-1];
          puVar9[-2] = puVar6[-2];
          puVar9[-3] = puVar6[-3];
          puVar6 = puVar6 + -4;
          puVar9 = puVar9 + -4;
          *puVar9 = *puVar6;
        } while (puVar6 != puVar3);
      }
      puVar6 = (undefined1 *)*param_2;
      *param_2 = (ulong)puVar9;
      param_2[1] = (ulong)puVar5;
      param_2[2] = (ulong)(puVar5 + uVar11);
    }
    if (puVar6 != (undefined1 *)0x0) {
      FUN_00187e4c();
    }
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    uVar11 = 0;
    do {
      puVar3 = (undefined1 *)(param_1 + uVar11 + 0x36);
      puVar6 = (undefined1 *)param_2[1];
      if (puVar6 == (undefined1 *)param_2[2]) {
        uVar12 = (long)puVar6 - *param_2;
        uVar10 = uVar12 + 1;
        if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c6e7e8(param_2);
        }
        uVar2 = uVar12 * 2;
        if (uVar12 * 2 <= uVar10) {
          uVar2 = uVar10;
        }
        if (0x3ffffffffffffffe < uVar12) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_00187df4(uVar2);
        }
        puVar6 = (undefined1 *)(lVar7 + uVar12);
        puVar8 = puVar6 + 1;
        *puVar6 = *puVar3;
        puVar3 = (undefined1 *)*param_2;
        puVar5 = (undefined1 *)param_2[1];
        if (puVar5 != puVar3) {
          uVar4 = (int)puVar5 - (int)puVar3;
          uVar10 = (ulong)uVar4 & 7;
          if ((uVar4 & 7) == 0) {
            if (&DAT_00000006 < puVar5 + ~(ulong)puVar3) goto LAB_0030cfd0;
          }
          else {
            puVar9 = puVar5;
            do {
              puVar9 = puVar9 + -1;
              uVar10 = uVar10 - 1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar9;
            } while (uVar10 != 0);
            puVar1 = puVar5 + ~(ulong)puVar3;
            puVar5 = puVar9;
            if (&DAT_00000006 < puVar1) {
LAB_0030cfd0:
              do {
                puVar6[-1] = puVar5[-1];
                puVar6[-2] = puVar5[-2];
                puVar6[-3] = puVar5[-3];
                puVar6[-4] = puVar5[-4];
                puVar6[-5] = puVar5[-5];
                puVar6[-6] = puVar5[-6];
                puVar6[-7] = puVar5[-7];
                puVar5 = puVar5 + -8;
                puVar6 = puVar6 + -8;
                *puVar6 = *puVar5;
              } while (puVar5 != puVar3);
            }
          }
          puVar5 = (undefined1 *)*param_2;
        }
        *param_2 = (ulong)puVar6;
        param_2[1] = (ulong)puVar8;
        param_2[2] = lVar7 + uVar2;
        if (puVar5 != (undefined1 *)0x0) {
          FUN_00187e4c(puVar5);
        }
      }
      else {
        *puVar6 = *puVar3;
        param_2[1] = (ulong)(puVar6 + 1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x238));
  }
  return;
}

