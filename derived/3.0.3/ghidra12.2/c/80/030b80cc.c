
uint FUN_030b80cc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined *local_60;
  long local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined **local_40;
  undefined4 local_38;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x210) + 0x208);
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x210);
  uVar2 = DAT_056ead64;
  if (uVar3 <= DAT_056ead64) {
    uVar2 = 0;
  }
  plVar5 = *(long **)(lVar4 + (long)(int)uVar2 * 8);
  uVar2 = 0;
  if (plVar5 != (long *)0x0) {
    if (plVar5[1] == 0) {
      uVar2 = 0;
    }
    else {
      local_50 = 0;
      local_48 = 0;
      local_60 = PTR_DAT_04bc8e10 + 0x10;
      local_58 = -1;
      local_40 = &PTR_LAB_04a3ee98;
      local_38 = 0x1f;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
      if (local_58 == -1) {
        uVar2 = 0;
      }
      else {
        local_38 = 0;
        local_40 = &local_60;
        uVar2 = FUN_03465d00(param_1 + 0x218,&local_40);
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 0x210) + 0x208);
      lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x210);
    }
  }
  uVar1 = DAT_056ead64;
  if (uVar3 <= DAT_056ead64) {
    uVar1 = 0;
  }
  plVar5 = *(long **)(lVar4 + (long)(int)uVar1 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_60 = PTR_DAT_04bc8e10 + 0x10;
    local_58 = 0xffffffffffffffff;
    local_40 = &PTR_LAB_04a3ee98;
    local_38 = 0x1f;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x210) + 0x208);
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x210);
  }
  uVar1 = DAT_056ead64;
  if (uVar3 <= DAT_056ead64) {
    uVar1 = 0;
  }
  plVar5 = *(long **)(lVar4 + (long)(int)uVar1 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_60 = PTR_DAT_04bc8e10 + 0x10;
    local_58 = 0xffffffffffffffff;
    local_40 = &PTR_LAB_04a3ee98;
    local_38 = 0x1f;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x210) + 0x208);
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x210);
  }
  uVar1 = DAT_056ead64;
  if (uVar3 <= DAT_056ead64) {
    uVar1 = 0;
  }
  plVar5 = *(long **)(lVar4 + (long)(int)uVar1 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_60 = PTR_DAT_04bc8e10 + 0x10;
    local_58 = 0xffffffffffffffff;
    local_40 = &PTR_LAB_04a3ee98;
    local_38 = 0x1f;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x210) + 0x208);
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x210);
  }
  uVar1 = DAT_056ead64;
  if (uVar3 <= DAT_056ead64) {
    uVar1 = 0;
  }
  plVar5 = *(long **)(lVar4 + (long)(int)uVar1 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_60 = PTR_DAT_04bc8e10 + 0x10;
    local_58 = 0xffffffffffffffff;
    local_40 = &PTR_LAB_04a3ee98;
    local_38 = 0x1f;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
  }
  return uVar2 & 1;
}

