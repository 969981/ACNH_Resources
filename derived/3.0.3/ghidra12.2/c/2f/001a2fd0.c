
undefined4 *
FUN_001a2fd0(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,ulong param_5
            )

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  size_t __n;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if (0 < (long)param_5) {
    puVar2 = (undefined4 *)param_1[1];
    if (param_1[2] - (long)puVar2 >> 2 < (long)param_5) {
      lVar7 = *param_1;
      uVar1 = param_5 + ((long)puVar2 - lVar7 >> 2);
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001a3240(param_1);
      }
      uVar6 = param_1[2] - lVar7;
      uVar8 = (long)uVar6 >> 1;
      lVar7 = (long)param_2 - lVar7 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar8 = 0x3fffffffffffffff;
      }
      if (uVar8 == 0) {
        lVar3 = 0;
        puVar2 = (undefined4 *)(lVar7 << 2);
        uVar1 = param_5 & 3;
        puVar4 = puVar2;
      }
      else {
        lVar3 = FUN_00187df4(uVar8 << 2);
        puVar2 = (undefined4 *)(lVar3 + lVar7 * 4);
        uVar1 = param_5 & 3;
        puVar4 = puVar2;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *param_3;
        puVar4 = puVar4 + 1;
        param_3 = param_3 + 1;
      }
      if (2 < (param_5 - 1 & 0x3fffffffffffffff)) {
        do {
          *puVar4 = *param_3;
          puVar4[1] = param_3[1];
          puVar4[2] = param_3[2];
          puVar5 = param_3 + 3;
          param_3 = param_3 + 4;
          puVar4[3] = *puVar5;
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar2 + param_5);
      }
      puVar5 = (undefined4 *)*param_1;
      puVar4 = puVar2;
      if (puVar5 != param_2) {
        puVar9 = param_2;
        do {
          puVar9 = puVar9 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar9;
        } while (puVar9 != puVar5);
      }
      puVar11 = (undefined4 *)param_1[1];
      puVar9 = puVar2 + param_5;
      for (; puVar11 != param_2; param_2 = param_2 + 1) {
        *puVar9 = *param_2;
        puVar9 = puVar9 + 1;
      }
      *param_1 = (long)puVar4;
      param_1[1] = (long)puVar9;
      param_1[2] = lVar3 + uVar8 * 4;
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00187e4c(puVar5);
      }
      param_2 = puVar2;
    }
    else {
      lVar7 = (long)puVar2 - (long)param_2 >> 2;
      puVar4 = puVar2;
      if (lVar7 < (long)param_5) {
        puVar5 = param_3 + lVar7;
        if (puVar5 != param_4) {
          puVar9 = puVar5;
          puVar11 = puVar2;
          do {
            puVar12 = puVar9 + 1;
            puVar4 = puVar4 + 1;
            *puVar11 = *puVar9;
            puVar9 = puVar12;
            puVar11 = puVar11 + 1;
          } while (puVar12 != param_4);
        }
        param_1[1] = (long)puVar4;
        if ((long)puVar2 - (long)param_2 < 1) {
          return param_2;
        }
        puVar9 = puVar4 + -param_5;
      }
      else {
        puVar5 = param_3 + param_5;
        puVar9 = puVar2 + -param_5;
      }
      puVar11 = puVar4;
      if (puVar9 < puVar2) {
        puVar12 = puVar4;
        do {
          puVar10 = puVar9 + 1;
          *puVar12 = *puVar9;
          puVar9 = puVar10;
          puVar11 = puVar12 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar10 < puVar2);
      }
      param_1[1] = (long)puVar11;
      if (puVar4 != param_2 + param_5) {
        __n = (long)puVar4 - (long)(param_2 + param_5);
        memmove(puVar4 + -((long)__n >> 2),param_2,__n);
      }
      if ((long)puVar5 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)puVar5 - (long)param_3);
        return param_2;
      }
    }
  }
  return param_2;
}

