
undefined8 FUN_027fa2dc(long param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long lStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar4 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar4) {
    uVar4 = 0x14;
  }
  uVar2 = param_2 - uVar4;
  if (param_2 < uVar4) {
    local_70 = *param_3;
    uStack_6c = param_3[1];
    FUN_0277e56c(&local_70,1);
    puVar3 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = local_70;
        uStack_44 = uStack_6c;
        FUN_01b09918(&local_68,&local_48);
        local_70 = (undefined4)local_68;
        uStack_6c = local_68._4_4_;
      }
    }
    uVar5 = FUN_0277e788(&local_70);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lStack_60 = param_1 + 0xb8;
    local_68 = &PTR_LAB_04a91620;
    uVar4 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar4) {
      uVar4 = 0x14;
    }
    local_58 = PTR_LAB_04bc3870;
    uStack_50 = 0;
    uVar5 = FUN_0277b494(param_2,&local_70,uVar4,&local_68,0,param_4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + (ulong)param_2 + 0x15c) = 0xff;
  }
  else {
    local_70 = *param_3;
    uStack_6c = param_3[1];
    FUN_0277e56c(&local_70,1);
    puVar3 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = local_70;
        uStack_44 = uStack_6c;
        FUN_01b09918(&local_68,&local_48);
        local_70 = (undefined4)local_68;
        uStack_6c = local_68._4_4_;
      }
    }
    uVar5 = FUN_0277e8b4(&local_70);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    local_68 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
    local_58 = PTR_LAB_04bc3860;
    uStack_50 = 0;
    uVar4 = *(uint *)(param_1 + 0xa0);
    if (0x13 < uVar4) {
      uVar4 = 0x14;
    }
    lStack_60 = param_1;
    uVar5 = FUN_0277b494(uVar2,&local_70,uVar4,&local_68,0,param_4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    puVar1 = (undefined1 *)(param_1 + 0xa4) + uVar2;
    if (0x13 < uVar2) {
      puVar1 = (undefined1 *)(param_1 + 0xa4);
    }
    *puVar1 = 0xff;
  }
  return 1;
}

