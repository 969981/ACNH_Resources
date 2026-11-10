
undefined8 FUN_0016ad18(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  uVar7 = param_1[6];
  uVar1 = *(long *)(*param_2 + 0x18) + *(long *)(param_2[1] + 0x18) + 0x20;
  lVar10 = param_1[4];
  lVar3 = param_1[5];
  while ((uVar7 < lVar3 + uVar1 && (param_1[3] != 0))) {
    lVar8 = param_1[3] + -1;
    plVar13 = *(long **)(*param_1 + (param_1[2] + lVar8 & param_1[1]) * 8);
    lVar11 = *(long *)(*plVar13 + 0x18);
    lVar12 = *(long *)(plVar13[1] + 0x18);
    param_1[3] = lVar8;
    param_1[5] = (lVar3 - (lVar11 + lVar12)) + -0x20;
    if (param_3 != 0) {
      plVar9 = (long *)(param_3 + ((ulong)*(uint *)((long)plVar13 + 0x4c) & 0x7f) * 8);
      plVar5 = (long *)*plVar9;
      if (plVar5 != (long *)0x0) {
        if (plVar5 != plVar13) {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)plVar9[8];
            if (plVar5 == (long *)0x0) goto LAB_0016adec;
          } while (plVar5 != plVar13);
          plVar9 = plVar9 + 8;
        }
        *plVar9 = plVar13[8];
        plVar13[8] = 0;
      }
    }
LAB_0016adec:
    FUN_0016b194(plVar13[1]);
    FUN_0016b194(*plVar13);
    FUN_001689f8(lVar10,plVar13);
    lVar3 = param_1[5];
    uVar7 = param_1[6];
  }
  if (uVar7 < uVar1) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN_001689e8(lVar10,0x50);
  if (puVar2 == (undefined8 *)0x0) {
LAB_0016af4c:
    uVar4 = 0xfffffc7b;
  }
  else {
    FUN_00168a5c(puVar2,param_2);
    uVar7 = param_1[1];
    if (uVar7 + 1 < param_1[3] + 1U) {
      uVar6 = 1;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 << 1;
      } while (uVar7 < param_1[3] + 1U);
      lVar3 = FUN_001689e8(lVar10,uVar7 << 3);
      if (lVar3 == 0) {
        FUN_0016b194(puVar2[1]);
        FUN_0016b194(*puVar2);
        FUN_001689f8(lVar10,puVar2);
        goto LAB_0016af4c;
      }
      if (param_1[3] != 0) {
        uVar6 = 0;
        do {
          *(undefined8 *)(lVar3 + uVar6 * 8) =
               *(undefined8 *)(*param_1 + (uVar6 + param_1[2] & param_1[1]) * 8);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulong)param_1[3]);
      }
      FUN_001689f8(lVar10,*param_1);
      uVar7 = uVar7 - 1;
      uVar6 = 0xffffffffffffffff;
      *param_1 = lVar3;
      param_1[1] = uVar7;
    }
    else {
      uVar6 = param_1[2] - 1;
      lVar3 = *param_1;
    }
    param_1[2] = uVar6;
    *(undefined8 **)(lVar3 + (uVar6 & uVar7) * 8) = puVar2;
    lVar10 = param_1[7];
    param_1[3] = param_1[3] + 1;
    *(int *)(param_1 + 7) = (int)lVar10 + 1;
    *(int *)(puVar2 + 9) = (int)lVar10;
    *(uint *)((long)puVar2 + 0x4c) = param_4;
    if (param_3 != 0) {
      lVar10 = *(long *)(param_3 + (ulong)(param_4 & 0x7f) * 8);
      if (lVar10 != 0) {
        puVar2[8] = lVar10;
      }
      *(undefined8 **)(param_3 + (ulong)(param_4 & 0x7f) * 8) = puVar2;
    }
    uVar4 = 0;
    param_1[5] = param_1[5] + uVar1;
  }
  return uVar4;
}

