
void FUN_024d69c0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined4 local_50;
  uint local_4c;
  long local_48;
  byte local_24 [4];
  
  local_58 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_58);
  local_58 = *(undefined ***)(param_1 + 0x1900);
  FUN_024d4b68(param_1,&local_58);
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    FUN_024d6c6c(local_24,param_1 + 0x18e0);
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    puVar1 = PTR_DAT_04bb43c0;
    local_60 = *(undefined8 *)(param_1 + 0x1900);
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_60);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_68 = 0;
        local_70 = (undefined4)local_60;
        uStack_6c = local_60._4_4_;
        local_78 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar1 != 0) {
          lVar4 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar4 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_60);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
              local_68 = lVar4;
            }
          }
        }
        uVar3 = FUN_01af0020(&local_78);
        if ((uVar3 & 1) == 0) {
          lVar5 = *(long *)puVar1;
          uVar2 = FUN_0277d6c4(&local_60);
          lVar4 = *(long *)puVar1;
          if (lVar4 == 0) {
            return;
          }
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (*(uint *)(lVar5 + 0x1d8) <= uVar2) {
            return;
          }
          if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
            return;
          }
          local_48 = 0;
          local_58 = &PTR_FUN_04a36b50;
          local_50 = (undefined4)local_60;
          local_4c = local_60._4_4_;
          uVar2 = FUN_0277d6c4(&local_50);
          if (*(long *)puVar1 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
              lVar4 = *(long *)PTR_DAT_04bc0428;
              uVar2 = FUN_0277d6c4(&local_60);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
                 (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
                local_48 = lVar4;
              }
            }
          }
          uVar3 = FUN_01ae5784(&local_58);
          if ((uVar3 & 1) == 0) {
            return;
          }
        }
        local_50 = 6;
        local_58 = (undefined **)((ulong)local_58 & 0xffffff0000000000);
        local_4c = local_4c & 0xff000000;
        FUN_02321e44(auStack_80,param_1,&local_58);
      }
    }
  }
  return;
}

