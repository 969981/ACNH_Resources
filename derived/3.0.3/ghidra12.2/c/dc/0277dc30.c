
bool FUN_0277dc30(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined2 local_8c [2];
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined2 local_6c [2];
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = *(ushort *)(lVar6 + 0x1f8);
    uVar1 = *(uint *)(lVar6 + 0x1d8);
    uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
    if (uVar5 < uVar1) {
      lVar6 = *(long *)(lVar6 + 0x1e0);
      if (*(long *)(lVar6 + (long)(int)uVar5 * 8) == 0) {
        return false;
      }
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
      if (uVar5 < uVar1) {
        if (*(long *)(lVar6 + (long)(int)uVar5 * 8) == 0) {
          return false;
        }
        local_58 = 0;
        local_60 = *param_1;
        uStack_5c = param_1[1];
        local_68 = &PTR_FUN_04a36b50;
        uVar5 = FUN_0277d6c4(&local_60);
        uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
        if ((uVar5 < uVar1) && (*(long *)(lVar6 + (long)(int)uVar5 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
            local_58 = lVar6;
          }
        }
        local_88 = (undefined **)((ulong)local_88 & 0xffffffffffff0000);
        FUN_01adab50(&local_68,&local_88);
        local_6c[0] = local_88._0_2_;
        local_88 = &PTR_FUN_04a36b50;
        local_80 = *param_2;
        uStack_7c = param_2[1];
        local_78 = 0;
        lVar6 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_80);
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar6 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(param_2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
              local_78 = lVar6;
            }
          }
        }
        local_34 = (uint)local_34._2_2_ << 0x10;
        FUN_01adab50(&local_88,&local_34);
        uVar5 = 0;
        bVar4 = true;
        local_8c[0] = (undefined2)local_34;
        do {
          if (uVar5 < 0xe) {
            uVar1 = uVar5 + 7;
            if (-1 < (int)uVar5) {
              uVar1 = uVar5;
            }
            if ((((uint)((int)uVar1 >> 3) < 2) &&
                ((*(byte *)((long)local_6c + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar5 & 7) &
                 1) != 0)) && (uVar5 < 0xe)) {
              uVar1 = uVar5 + 7;
              if (-1 < (int)uVar5) {
                uVar1 = uVar5;
              }
              if (((uint)((int)uVar1 >> 3) < 2) &&
                 ((*(byte *)((long)local_8c + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar5 & 7)
                  & 1) != 0)) {
                return bVar4;
              }
            }
          }
          bVar4 = uVar5 < 0xd;
          uVar5 = uVar5 + 1;
          if (uVar5 == 0xe) {
            return bVar4;
          }
        } while( true );
      }
    }
  }
  return false;
}

