
/* WARNING: Removing unreachable block (ram,0x01675680) */
/* WARNING: Removing unreachable block (ram,0x01675648) */
/* WARNING: Removing unreachable block (ram,0x01675688) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01675460(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
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
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb27c8;
  if ((((((param_2 & 1) != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) &&
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar9 != 0)) &&
      ((uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2 &&
       (uVar3 = *(uint *)(param_1 + 0xc), -1 < (int)uVar3)))) &&
     (uVar2 < *(uint *)(lVar9 + 0x38) && uVar3 < *(uint *)(lVar9 + 0x3c))) {
    uVar2 = uVar2 + *(uint *)(lVar9 + 0x38) * uVar3;
    if ((uVar2 < *(uint *)(lVar9 + 0x68) && *(long *)(lVar9 + 0x70) != 0) &&
       ((*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar2 * 4) >> 3 & 1) != 0)) {
      return false;
    }
  }
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  local_68 = (undefined *)0x0;
  local_c0._0_4_ = 8;
  local_68 = (undefined *)0x100;
  lVar9 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x90) == 0)) ||
     (uVar7 = FUN_0094b958(lVar9 + 0x28,param_1,&local_68), (uVar7 & 1) == 0)) {
    local_68 = (undefined *)0xffffffffffffffff;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x1ff);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,7);
    local_68._0_4_ = 0xffffff7f;
    local_68._4_4_ = 0xffffffff;
    lVar9 = *(long *)puVar4;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x90) == 0)) ||
       (uVar7 = FUN_0094b840(lVar9 + 0x28,param_1,&local_68), (uVar7 & 1) == 0)) {
      puVar4 = PTR_DAT_04bb2010;
      local_98 = PTR_DAT_04bc43f8 + 0x10;
      local_90 = DAT_05636e70;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      local_c0 = PTR_DAT_04bc4608 + 0x10;
      local_b8 = PTR_DAT_04bbc570[8];
      local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (DAT_05636e70 != 0) {
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        local_78 = (undefined1 *)&local_c0;
        if (puVar1[1] != 0) {
          local_78 = (undefined1 *)&local_c0;
          plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
          iVar6 = (**(code **)(*plVar8 + 0x18))();
          if (0 < iVar6) {
            iVar10 = 0;
            do {
              FUN_01360490(&local_68,puVar1[1],iVar10);
              uVar7 = (*(code *)*local_88)(&local_88,&local_68);
              if ((uVar7 & 1) != 0) break;
              bVar5 = iVar6 + -1 != iVar10;
              iVar10 = iVar10 + 1;
            } while (bVar5);
          }
        }
      }
      if (local_b4 == 0) {
        return false;
      }
      local_60 = puVar4 + 0x10;
      local_58 = 0;
      local_48 = 0;
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      local_50 = local_60;
      FUN_02a8f7b0(&local_c0,&local_68);
      if (*(int *)(param_1 + 8) < (int)local_58) {
        return false;
      }
      if ((int)local_48 < *(int *)(param_1 + 8)) {
        return false;
      }
      if (*(int *)(param_1 + 0xc) < local_58._4_4_) {
        return false;
      }
      if (local_48._4_4_ < *(int *)(param_1 + 0xc)) {
        return false;
      }
      return true;
    }
  }
  iVar10 = *(int *)(param_1 + 8);
  lVar9 = *(long *)PTR_DAT_04bb5c90;
  iVar6 = *(int *)(lVar9 + 0x2c);
  if (((*(int *)(lVar9 + 0x38) + -3 <= iVar10 && iVar10 <= *(int *)(lVar9 + 0x38)) &&
      (iVar6 <= *(int *)(param_1 + 0xc))) && (*(int *)(param_1 + 0xc) <= iVar6 + 3)) {
    return false;
  }
  if (iVar10 < *(int *)(lVar9 + 0x28)) {
    return true;
  }
  if (*(int *)(lVar9 + 0x28) + 3 < iVar10) {
    return true;
  }
  return *(int *)(param_1 + 0xc) < iVar6 || iVar6 + 3 < *(int *)(param_1 + 0xc);
}

