
undefined8 FUN_003e2350(long param_1,int param_2,ulong *param_3,long param_4,ulong param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_68;
  
  if ((param_5 & 0x3f) != 0) {
    return 0;
  }
  local_68 = FUN_003cd670();
  lVar3 = FUN_003c0150(&local_68);
  lVar5 = 0x11d40;
  if (lVar3 != 0) {
    lVar5 = lVar3 * 2 + 0x11d70;
  }
  local_68 = FUN_003cd670();
  FUN_003e2530(param_1,param_5,lVar5 * param_2 + 0x3fU & 0xffffffffffffffc0,&local_68);
  uVar7 = *param_3;
  if (((uVar7 & 0x3f) == 0) && (uVar8 = uVar7 + (long)param_2 * 0x3640, (long)(uVar8 - param_4) < 1)
     ) {
    uVar9 = (ulong)((long)param_2 * 0x3640) / 0x3640;
    if (0 < (int)uVar9) {
      plVar1 = (long *)(param_1 + 0x60);
      uVar6 = uVar7;
      do {
        FUN_003d8ec8(uVar6);
        lVar3 = *(long *)(uVar6 + 0x3610);
        lVar5 = uVar6 + 0x3610;
        uVar2 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar2;
        *(long *)(uVar6 + 0x3610) = *plVar1;
        *(long **)(lVar3 + 8) = plVar1;
        uVar6 = uVar6 + 0x3640;
        *(long *)(*plVar1 + 8) = lVar5;
        *plVar1 = lVar3;
      } while (uVar2 != 0);
    }
    *(ulong *)(param_1 + 0x50) = uVar7;
    *(long *)(param_1 + 0x58) = (long)param_2 * 0x3640;
    *param_3 = uVar8;
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != param_1 + 0x28) {
      do {
        *(long *)(lVar5 + 0x1e0) = param_1 + 0x38;
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != param_1 + 0x28);
    }
    uVar4 = FUN_003ca198();
    FUN_003ca4b4(uVar4,param_1 + 0x38);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

