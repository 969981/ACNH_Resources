
bool FUN_021e0360(undefined4 *param_1,long param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    return false;
  }
  lVar6 = *(long *)(lVar6 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar2) {
    return false;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return false;
  }
  local_58 = 0;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  local_68 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar5 != 0) {
          local_58 = lVar5;
        }
      }
    }
  }
  local_78 = *param_1;
  uStack_74 = param_1[1];
  lVar6 = *(long *)puVar1;
  local_70 = 0;
  uVar2 = FUN_0277d6c4(&local_78);
  lVar5 = DAT_04ca7a08;
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (DAT_04ca7a08 != 0)) {
      uVar4 = FUN_0277d6c4(param_1);
      local_70 = lVar5 + (uVar4 & 0xffffffff) * 0x23;
      if (0x752 < ((uint)(uVar4 >> 3) & 0x1fffffff)) {
        local_70 = lVar5;
      }
    }
  }
  iVar3 = FUN_007b0ea4(&local_78,param_2 + 4);
  if (((param_3 & 1) != 0) && (iVar3 == 4)) {
    return false;
  }
  local_34 = 0x1e;
  iVar3 = FUN_007b0ea4(&local_78,&local_34);
  if (iVar3 != 4) {
    return true;
  }
  if ((param_4 & 1) != 0) {
    if (((DAT_05459758 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05459758), iVar3 != 0)) {
      DAT_05459734 = 0x1700000016;
      DAT_0545973c = 0x1900000018;
      DAT_05459744 = 0x1b0000001a;
      DAT_0545974c = 0x1d0000001c;
      __cxa_guard_release(&DAT_05459758);
    }
    iVar3 = FUN_007b0ea4(&local_78,&DAT_05459734);
    if (((((iVar3 == 4) && (iVar3 = FUN_007b0ea4(&local_78,0x5459738), iVar3 == 4)) &&
         (iVar3 = FUN_007b0ea4(&local_78,&DAT_0545973c), iVar3 == 4)) &&
        ((iVar3 = FUN_007b0ea4(&local_78,0x5459740), iVar3 == 4 &&
         (iVar3 = FUN_007b0ea4(&local_78,&DAT_05459744), iVar3 == 4)))) &&
       ((iVar3 = FUN_007b0ea4(&local_78,0x5459748), iVar3 == 4 &&
        ((iVar3 = FUN_007b0ea4(&local_78,&DAT_0545974c), iVar3 == 4 &&
         (iVar3 = FUN_007b0ea4(&local_78,0x5459750), iVar3 == 4)))))) {
      return true;
    }
  }
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    local_34 = 0x16;
    break;
  case 1:
    local_34 = 0x17;
    break;
  case 2:
    local_34 = 0x18;
    break;
  case 3:
    local_34 = 0x19;
    break;
  case 4:
    local_34 = 0x1a;
    break;
  case 5:
    local_34 = 0x1b;
    break;
  case 6:
    local_34 = 0x1c;
    break;
  case 7:
    local_34 = 0x1d;
  }
  iVar3 = FUN_007b0ea4(&local_78,&local_34);
  return iVar3 != 4;
}

