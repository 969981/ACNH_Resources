
void FUN_004c4f20(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong local_f8;
  long lStack_f0;
  ulong local_e8;
  int local_e0;
  ulong local_58;
  ulong local_50;
  long local_48;
  long *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 200) + (long)param_2 * 0x20;
  FUN_0043bd50(&local_58,lVar3);
  local_50 = *(ulong *)(lVar3 + 8);
  local_48 = *(long *)(lVar3 + 0x10);
  local_40 = *(long **)(lVar3 + 0x18);
  if ((local_58 & 0xfffffffffffffffe) == 0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),local_48)
    ;
    if (lVar3 != 0) {
      local_48 = lVar3;
    }
    FUN_004225b0(&local_e8);
    FUN_00427570(local_48,&local_e8,0,0);
    lStack_f0 = local_e8 + (long)local_e0 + -1;
    local_f8 = local_e8;
    uVar1 = FUN_00427340(local_48);
    local_28 = FUN_0047b100(*(undefined8 *)(param_1 + 0x110),&local_f8,uVar1);
    local_38 = 0xffffffffffffffff;
    puVar2 = (ulong *)FUN_004706d0(param_1 + 0x68,&local_28,&local_38);
    uVar4 = *puVar2;
    plVar6 = (long *)0x0;
    if ((-1 < (int)uVar4) && ((int)uVar4 != 0x50000000)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x58) +
                         (-(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3));
    }
    FUN_00422550(&local_e8);
  }
  else {
    FUN_004297c0(&local_e8,local_58 & 0xfffffffffffffffe);
    local_f8 = FUN_0047b100(*(undefined8 *)(param_1 + 0x110),&local_e8,local_50 & 0xffffffff);
    local_28 = 0xffffffffffffffff;
    puVar2 = (ulong *)FUN_004706d0(param_1 + 0x68,&local_f8,&local_28);
    uVar4 = *puVar2;
    plVar6 = (long *)0x0;
    if ((-1 < (int)uVar4) && ((int)uVar4 != 0x50000000)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x58) +
                         (-(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3));
    }
  }
  if (plVar6 == (long *)0x0) {
    FUN_0043bd50(&local_f8,&local_58);
    lVar3 = local_48;
    uVar4 = local_50;
    FUN_004297c0(&local_e8,local_f8 & 0xfffffffffffffffe);
    plVar6 = (long *)FUN_004c51d0(param_1,&local_e8,uVar4 & 0xffffffff,lVar3);
    if (plVar6 == (long *)0x0) {
      if (((local_f8 & 0xfffffffffffffffe) == 0) ||
         (lVar3 = (**(code **)(**(long **)(param_1 + 0x118) + 0x20))
                            (*(long **)(param_1 + 0x118),local_f8 & 0xfffffffffffffffe), lVar3 == 0)
         ) {
        lVar5 = 0;
      }
      else {
        uVar4 = FUN_00428440();
        lVar5 = 0;
        if ((uVar4 & 0x1f) != 7) {
          lVar5 = lVar3;
        }
      }
    }
    else {
      lVar5 = *plVar6;
    }
    if (local_40 != (long *)0x0) {
      *local_40 = lVar5;
    }
    FUN_0043be10(&local_f8);
  }
  else if (local_40 != (long *)0x0) {
    *local_40 = *plVar6;
  }
  FUN_0043be10(&local_58);
  return;
}

