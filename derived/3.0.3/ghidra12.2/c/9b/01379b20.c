
/* WARNING: Removing unreachable block (ram,0x01379b54) */
/* WARNING: Removing unreachable block (ram,0x01379b64) */

bool FUN_01379b20(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb2010;
  local_78 = (undefined1 *)&local_c0;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  lVar10 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_90 = 0x19;
  local_98 = PTR_DAT_04bc43f8 + 0x10;
  local_c0 = PTR_DAT_04bc4608 + 0x10;
  local_b8 = PTR_DAT_04bbc570[8];
  local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  lVar6 = *(long *)(lVar10 + 0x150);
  ppuStack_80 = &local_98;
  local_88 = &PTR_FUN_04a9b150;
  ppuVar3 = &local_c0;
  if (lVar6 != 0) {
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x10))();
    iVar5 = (**(code **)(*plVar7 + 0x18))();
    ppuVar3 = (undefined **)local_78;
    if (0 < iVar5) {
      iVar9 = 0;
      do {
        FUN_01360490(&local_68,*(undefined8 *)(lVar10 + 0x150),iVar9);
        uVar8 = (*(code *)*local_88)(&local_88,&local_68);
        ppuVar3 = (undefined **)local_78;
        if ((uVar8 & 1) != 0) break;
        bVar4 = iVar5 + -1 != iVar9;
        iVar9 = iVar9 + 1;
      } while (bVar4);
    }
  }
  local_78 = (undefined1 *)ppuVar3;
  iVar5 = local_b4;
  if (local_b4 != 0) {
    puStack_60 = puVar2 + 0x10;
    local_58 = 0;
    local_48 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    local_50 = puStack_60;
    FUN_02a8f7b0(&local_c0,&local_68);
    local_48._4_4_ = local_48._4_4_ + -2;
    iVar9 = (int)local_58;
    if ((int)local_48 <= (int)local_58) {
      iVar9 = (int)local_48;
    }
    if ((int)local_58 <= (int)local_48) {
      local_58._0_4_ = (int)local_48;
    }
    iVar1 = local_58._4_4_;
    if (local_48._4_4_ <= local_58._4_4_) {
      iVar1 = local_48._4_4_;
    }
    if (local_58._4_4_ <= local_48._4_4_) {
      local_58._4_4_ = local_48._4_4_;
    }
    *(int *)(param_1 + 0x10) = iVar9;
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x20) = (int)local_58;
    *(int *)(param_1 + 0x24) = local_58._4_4_;
  }
  return iVar5 != 0;
}

