
/* WARNING: Removing unreachable block (ram,0x02b622c8) */
/* WARNING: Removing unreachable block (ram,0x02b622d8) */

undefined8 FUN_02b62250(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  uVar5 = 0;
  if (param_1 != 0) {
    local_88 = PTR_DAT_04bc43f8 + 0x10;
    if (9 < param_2) {
      param_2 = 0;
    }
    local_80 = (&DAT_05636e30)[(int)param_2];
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x150) == 0)) {
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    }
    else {
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_80 != 0) {
        ppuStack_70 = &local_88;
        local_78 = &PTR_FUN_04a9b150;
        local_68 = (undefined1 *)&local_b0;
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x150) + 0x10))();
        iVar2 = (**(code **)(*plVar3 + 0x18))();
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            FUN_01360490(&local_58,*(undefined8 *)(lVar7 + 0x150),iVar6);
            uVar4 = (*(code *)*local_78)(&local_78,&local_58);
            if ((uVar4 & 1) != 0) break;
            bVar1 = iVar2 + -1 != iVar6;
            iVar6 = iVar6 + 1;
          } while (bVar1);
        }
      }
    }
    if ((local_a4 == 0) || (uVar4 = FUN_02a8e598(&local_b0), (uVar4 & 1) == 0)) {
      uVar5 = 0;
    }
    else {
      local_48 = 0;
      local_58 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_50 = PTR_DAT_04bb2010 + 0x10;
      local_38 = 0;
      local_40 = puStack_50;
      FUN_02a8f7b0(&local_b0,&local_58);
      uVar5 = 1;
      local_38._0_4_ = (int)local_38 + -2;
      iVar2 = (int)local_48;
      if ((int)local_38 <= (int)local_48) {
        iVar2 = (int)local_38;
      }
      if ((int)local_48 <= (int)local_38) {
        local_48._0_4_ = (int)local_38;
      }
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = local_38._4_4_ + -1;
      *(int *)(param_1 + 0x20) = (int)local_48;
      *(int *)(param_1 + 0x24) = local_38._4_4_ + 3;
    }
  }
  return uVar5;
}

