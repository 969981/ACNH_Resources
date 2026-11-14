
bool FUN_017fa1ac(long param_1,byte param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 0xe8);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_1 + 0xc0);
      lVar5 = *(long *)puVar1;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_58 = 0;
          local_60 = *(undefined4 *)(param_1 + 0xc0);
          uStack_5c = *(undefined4 *)(param_1 + 0xc4);
          local_68 = &PTR_FUN_04a36b50;
          uVar4 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar1 != 0) {
            lVar5 = *(long *)(lVar5 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar5 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(param_1 + 0xc0);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
                 (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
                local_58 = lVar5;
              }
            }
          }
          sVar2 = FUN_01b020f0(&local_68);
          local_78 = *(undefined4 *)(param_1 + 0xe8);
          uStack_74 = *(undefined4 *)(param_1 + 0xec);
          local_80 = &PTR_FUN_04a36b50;
          lVar5 = *(long *)puVar1;
          local_70 = 0;
          uVar4 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar1 != 0) {
            lVar5 = *(long *)(lVar5 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar5 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(param_1 + 0xe8);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
                 (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
                local_70 = lVar5;
              }
            }
          }
          sVar3 = FUN_01b01f10(&local_80);
          if ((sVar2 != 0xb5 & param_2) != 0) {
            return false;
          }
          if (sVar3 != 0xe5) {
            return false;
          }
          if (*(uint *)(param_1 + 0x140) < 4) {
            return (*(uint *)(param_1 + 0x140) & 0xf) == 2;
          }
          return true;
        }
      }
    }
  }
  return false;
}

