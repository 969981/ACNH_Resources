
undefined1 *
FUN_004044c0(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,ulong param_5
            )

{
  uint uVar1;
  long lVar2;
  size_t __n;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  
  if (0 < (long)param_5) {
    puVar6 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar6 < (long)param_5) {
      lVar7 = *param_1;
      puVar6 = puVar6 + (param_5 - lVar7);
      if ((long)puVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c6e7e8(param_1);
      }
      uVar4 = param_1[2] - lVar7;
      puVar13 = param_2 + -lVar7;
      puVar8 = (undefined1 *)(uVar4 * 2);
      if (puVar8 <= puVar6) {
        puVar8 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        lVar7 = 0;
        uVar4 = param_5 & 3;
        puVar6 = puVar13;
      }
      else {
        lVar7 = FUN_00187df4(puVar8);
        puVar13 = puVar13 + lVar7;
        uVar4 = param_5 & 3;
        puVar6 = puVar13;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *param_3;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      }
      puVar3 = puVar13 + param_5;
      if (3 < param_5) {
        do {
          *puVar6 = *param_3;
          puVar6[1] = param_3[1];
          puVar6[2] = param_3[2];
          puVar9 = param_3 + 3;
          param_3 = param_3 + 4;
          puVar6[3] = *puVar9;
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar3);
      }
      puVar9 = (undefined1 *)*param_1;
      puVar6 = puVar13;
      if (puVar9 != param_2) {
        uVar1 = (int)param_2 - (int)puVar9;
        puVar10 = param_2;
        if ((uVar1 & 3) != 0) {
          lVar2 = 0;
          do {
            lVar5 = lVar2 + -1;
            puVar13[lVar2 + -1] = param_2[lVar2 + -1];
            lVar2 = lVar5;
          } while (-lVar5 != ((ulong)uVar1 & 3));
          puVar6 = puVar13 + lVar5;
          puVar10 = param_2 + lVar5;
        }
        if ((undefined1 *)0x2 < param_2 + ~(ulong)puVar9) {
          do {
            puVar6[-1] = puVar10[-1];
            puVar6[-2] = puVar10[-2];
            puVar6[-3] = puVar10[-3];
            puVar10 = puVar10 + -4;
            puVar6 = puVar6 + -4;
            *puVar6 = *puVar10;
          } while (puVar10 != puVar9);
        }
      }
      puVar9 = (undefined1 *)param_1[1];
      if (puVar9 != param_2) {
        uVar1 = (int)puVar9 - (int)param_2;
        uVar4 = ~(ulong)param_2;
        if ((uVar1 & 3) != 0) {
          uVar12 = 0;
          do {
            puVar3[uVar12] = param_2[uVar12];
            uVar12 = uVar12 + 1;
          } while (((ulong)uVar1 & 3) != uVar12);
          param_2 = param_2 + uVar12;
          puVar3 = puVar3 + uVar12;
        }
        if ((undefined1 *)0x2 < puVar9 + uVar4) {
          do {
            *puVar3 = *param_2;
            puVar3[1] = param_2[1];
            puVar3[2] = param_2[2];
            puVar10 = param_2 + 3;
            param_2 = param_2 + 4;
            puVar3[3] = *puVar10;
            puVar3 = puVar3 + 4;
          } while (param_2 != puVar9);
        }
      }
      lVar2 = *param_1;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar3;
      param_1[2] = (long)(puVar8 + lVar7);
      if (lVar2 != 0) {
        FUN_00187e4c();
      }
      param_2 = puVar13;
    }
    else {
      lVar7 = (long)puVar6 - (long)param_2;
      puVar13 = puVar6;
      if (lVar7 < (long)param_5) {
        puVar3 = param_3 + lVar7;
        if (puVar3 == param_4) {
          param_1[1] = (long)puVar6;
        }
        else {
          puVar8 = puVar6;
          do {
            puVar9 = puVar13 + ((long)param_3 - (long)param_2);
            puVar13 = puVar13 + 1;
            *puVar8 = *puVar9;
            puVar8 = puVar8 + 1;
          } while (puVar13 + ((long)param_3 - (long)param_2) != param_4);
          param_1[1] = (long)puVar13;
        }
        if (lVar7 < 1) {
          return param_2;
        }
        puVar8 = puVar13 + -param_5;
      }
      else {
        puVar3 = param_3 + param_5;
        puVar8 = puVar6 + -param_5;
      }
      puVar9 = puVar13;
      if (puVar8 < puVar6) {
        uVar1 = (int)(puVar6 + param_5) - (int)puVar13;
        uVar4 = (ulong)uVar1 & 3;
        puVar10 = puVar8;
        puVar11 = puVar13;
        if ((uVar1 & 3) != 0) {
          do {
            puVar8 = puVar10 + 1;
            uVar4 = uVar4 - 1;
            puVar9 = puVar11 + 1;
            *puVar11 = *puVar10;
            puVar10 = puVar8;
            puVar11 = puVar9;
          } while (uVar4 != 0);
        }
        if ((undefined1 *)0x2 < puVar6 + param_5 + ~(ulong)puVar13) {
          do {
            *puVar9 = *puVar8;
            puVar9[1] = puVar8[1];
            puVar9[2] = puVar8[2];
            puVar10 = puVar8 + 3;
            puVar8 = puVar8 + 4;
            puVar9[3] = *puVar10;
            puVar9 = puVar9 + 4;
          } while (puVar8 != puVar6);
        }
      }
      param_1[1] = (long)puVar9;
      if (puVar13 != param_2 + param_5) {
        __n = (long)puVar13 - (long)(param_2 + param_5);
        memmove(puVar13 + -__n,param_2,__n);
      }
      if ((long)puVar3 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)puVar3 - (long)param_3);
        return param_2;
      }
    }
  }
  return param_2;
}

