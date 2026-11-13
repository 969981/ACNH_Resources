
void FUN_01472654(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  uint local_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = param_1 + 0x288;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(lVar5);
  puVar2 = PTR_DAT_04bc0510;
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_80 = *(undefined4 *)(param_1 + 0x288);
      local_78 = 0;
      uStack_7c = *(undefined4 *)(param_1 + 0x28c);
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(lVar5);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
            if (lVar7 != 0) {
              local_78 = lVar7;
            }
          }
        }
      }
      iVar4 = FUN_01ae7550(&local_88);
      if (iVar4 - 1U < 6) {
        local_90 = 0;
        local_60 = 0;
        local_58 = puVar2 + 0x10;
        local_50 = *(undefined4 *)(param_1 + 0x288);
        uStack_4c = *(undefined4 *)(param_1 + 0x28c);
        local_48 = 0;
        local_b0 = PTR_DAT_04bbc1a0 + 0x10;
        lVar7 = *(long *)puVar1;
        puStack_a8 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = 0;
        puStack_98 = puStack_a8;
        uVar3 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(lVar5);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
              lVar5 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar5 != 0) {
                local_48 = lVar5;
              }
            }
          }
        }
        FUN_01afb1a0(&local_58,auStack_68);
        local_6c = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,*(int *)(param_1 + 0x2d0));
        iVar6 = (int)local_60;
        iVar4 = local_60._4_4_;
        if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
          iVar4 = (int)local_60;
          iVar6 = local_60._4_4_;
          if ((local_6c & 0x80000001) != 1) {
            iVar4 = local_60._4_4_;
            iVar6 = (int)local_60;
          }
        }
        local_a0 = *(undefined8 *)(param_1 + 0x2c8);
        local_90 = CONCAT44(iVar4 + *(int *)(param_1 + 0x2cc) + -1,
                            iVar6 + *(int *)(param_1 + 0x2c8) + -1);
        if ((param_2 & 1) == 0) {
          FUN_011e56f0(&local_b0,*(undefined4 *)PTR_DAT_04bb3238);
        }
        else {
          FUN_011e58c0();
        }
      }
    }
  }
  return;
}

