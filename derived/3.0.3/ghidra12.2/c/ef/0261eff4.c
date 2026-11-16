
undefined8 FUN_0261eff4(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      local_48 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_38 = lVar5;
          }
        }
      }
      uVar3 = FUN_01ae6420(&local_48);
      if ((uVar3 & 1) != 0) {
        FUN_01b05630(&local_68,&local_48);
        lVar5 = *(long *)puVar1;
        local_60 = &PTR_FUN_04a36b50;
        local_50 = 0;
        local_58 = local_68;
        uStack_54 = uStack_64;
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_68);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
              local_50 = lVar5;
            }
          }
        }
        uVar4 = FUN_01b0c3c8(&local_60);
        return uVar4;
      }
      uVar3 = FUN_01ae67f0(&local_48);
      if ((uVar3 & 1) != 0) {
        FUN_01b059f0(&local_68,&local_48);
        lVar5 = *(long *)puVar1;
        local_60 = &PTR_FUN_04a36b50;
        local_50 = 0;
        local_58 = local_68;
        uStack_54 = uStack_64;
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_68);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
              local_50 = lVar5;
            }
          }
        }
        uVar4 = FUN_01b0d26c(&local_60);
        return uVar4;
      }
    }
  }
  return 0x4c7b;
}

