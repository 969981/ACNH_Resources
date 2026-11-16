
ulong FUN_02538ce0(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_0252d8f0(&local_48);
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_50 = 0;
      local_58 = local_48;
      uStack_54 = uStack_44;
      local_60 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_48);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_50 = lVar5;
          }
        }
      }
      iVar3 = FUN_01ad78cc(&local_60);
      if (iVar3 == 0x43) {
        uVar4 = FUN_02538e78(param_1,PTR_DAT_04bb37e0,9,param_4 & 1,param_3 & 1);
        return uVar4;
      }
    }
  }
  local_60 = (undefined **)0x3238;
  FUN_0277d4ac(&local_60);
  uVar2 = FUN_02538e78(param_1,&local_60,9,param_4 & 1,param_3 & 1);
  return (ulong)(uVar2 & 1);
}

