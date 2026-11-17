
/* WARNING: Removing unreachable block (ram,0x02b6250c) */
/* WARNING: Removing unreachable block (ram,0x02b6251c) */

undefined8 FUN_02b62490(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar10 = 0;
  if (param_1 != 0) {
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    if (0xf < param_2) {
      param_2 = 0;
    }
    local_90 = (&DAT_05636e58)[(int)param_2];
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x150) == 0)) {
      local_c0 = PTR_DAT_04bc4608 + 0x10;
      local_b8 = PTR_DAT_04bbc570[8];
      local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    }
    else {
      local_c0 = PTR_DAT_04bc4608 + 0x10;
      local_b8 = PTR_DAT_04bbc570[8];
      local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_90 != 0) {
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        local_78 = (undefined1 *)&local_c0;
        plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x150) + 0x10))();
        iVar7 = (**(code **)(*plVar8 + 0x18))();
        if (0 < iVar7) {
          iVar11 = 0;
          do {
            FUN_01360490(&local_68,*(undefined8 *)(lVar12 + 0x150),iVar11);
            uVar9 = (*(code *)*local_88)(&local_88,&local_68);
            if ((uVar9 & 1) != 0) break;
            bVar5 = iVar7 + -1 != iVar11;
            iVar11 = iVar11 + 1;
          } while (bVar5);
        }
      }
    }
    if ((local_b4 == 0) || (uVar9 = FUN_02a8ec10(&local_c0), (uVar9 & 1) == 0)) {
      uVar10 = 0;
    }
    else {
      local_58 = 0;
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_60 = PTR_DAT_04bb2010 + 0x10;
      local_48 = 0;
      local_50 = puStack_60;
      FUN_02a8f7b0(&local_c0,&local_68);
      iVar4 = local_48._4_4_;
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      iVar2 = (int)local_58 + -2;
      iVar3 = local_48._4_4_ + -1;
      iVar7 = (int)local_48 + 2;
      bVar6 = FUN_02b677c0(&local_88,local_b4);
      uVar10 = 1;
      iVar11 = 0xc;
      if ((bVar6 & (int)local_88 == 0xf) == 0) {
        iVar11 = 10;
      }
      iVar1 = iVar2;
      if (iVar7 <= iVar2) {
        iVar1 = iVar7;
      }
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0x14) = iVar3;
      if (iVar2 <= iVar7) {
        iVar2 = iVar7;
      }
      *(int *)(param_1 + 0x20) = iVar2;
      *(int *)(param_1 + 0x24) = iVar11 + iVar4;
    }
  }
  return uVar10;
}

