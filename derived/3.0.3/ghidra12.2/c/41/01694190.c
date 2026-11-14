
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01694190(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *local_c8;
  uint local_c0;
  uint local_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  
  puVar3 = PTR_DAT_04bb27c8;
  uVar2 = *(uint *)(param_1 + 8);
  local_bc = *(uint *)(param_1 + 0xc);
  local_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_98 = uVar2 + 1;
  iStack_94 = local_bc + 1;
  uVar1 = local_bc + 2;
  local_c0 = uVar2;
  puStack_b0 = local_c8;
  local_a8 = uVar2;
  uStack_a4 = local_bc;
  local_a0 = local_c8;
  if ((param_2 & 1) == 0) {
    do {
      uVar4 = FUN_0097cff0(&local_c8);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      if (((((*(long *)puVar3 != 0) && (lVar6 = *(long *)(*(long *)puVar3 + 0x90), lVar6 != 0)) &&
           (-1 < (int)local_c0)) &&
          (((-1 < (int)local_bc &&
            (local_c0 < *(uint *)(lVar6 + 0x38) && local_bc < *(uint *)(lVar6 + 0x3c))) &&
           ((FUN_00962530(lVar6,&local_c8,&local_88), local_58 == 0x1d &&
            ((local_57 == 0x1d && (local_56 == 0x1d)))))))) && (local_55 == 0x1d)) {
        return 0;
      }
      uVar4 = FUN_0097d6c0(&local_c8,1);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      local_80 = 0;
      local_88 = 0;
      local_8c = 5;
      local_88 = 0x20;
      local_80 = 0;
      lVar6 = *(long *)puVar3;
      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x90) != 0)) &&
         (uVar4 = FUN_0094b728(lVar6 + 0x28,&local_c8,&local_88), (uVar4 & 1) != 0)) {
        return 0;
      }
      local_80 = 0;
      local_88 = 0;
      local_8c = 0xc;
      local_88 = 0x1000;
      local_80 = 0;
      lVar6 = *(long *)puVar3;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x90) != 0)) {
        uVar4 = FUN_0094b728(lVar6 + 0x28,&local_c8,&local_88);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        lVar6 = *(long *)puVar3;
      }
      if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x90), lVar6 != 0)) &&
         ((-1 < (int)local_c0 &&
          (((-1 < (int)local_bc && (local_c0 < *(uint *)(lVar6 + 0x38))) &&
           (local_bc < *(uint *)(lVar6 + 0x3c))))))) {
        FUN_00962530(lVar6,&local_c8,&local_88);
        if (local_58 == 0x2d) {
          return 0;
        }
        if (local_57 == 0x2d) {
          return 0;
        }
        if (local_56 == 0x2d) {
          return 0;
        }
        if (local_55 == 0x2d) {
          return 0;
        }
      }
      if ((int)local_c0 < local_98) {
        local_c0 = local_c0 + 1;
      }
      else {
        local_bc = local_bc + 1;
        local_c0 = local_a8;
      }
    } while ((uVar2 != local_c0) || (uVar1 != local_bc));
  }
  else {
    do {
      uVar4 = FUN_0097cff0(&local_c8);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      lVar6 = *(long *)puVar3;
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar6 + 0x90);
        if (((lVar5 != 0) && (-1 < (int)local_c0)) &&
           ((-1 < (int)local_bc &&
            (local_c0 < *(uint *)(lVar5 + 0x38) && local_bc < *(uint *)(lVar5 + 0x3c))))) {
          FUN_00962530(lVar5,&local_c8,&local_88);
          if (local_58 - 0x29 < 3) {
            return 1;
          }
          if (local_57 - 0x29 < 3) {
            return 1;
          }
          if (local_56 - 0x29 < 3) {
            return 1;
          }
          if (local_55 - 0x29 < 3) {
            return 1;
          }
          lVar6 = *(long *)puVar3;
          if (lVar6 == 0) goto LAB_01694320;
        }
        lVar6 = *(long *)(lVar6 + 0x90);
        if ((((((lVar6 != 0) && (-1 < (int)local_c0)) && (-1 < (int)local_bc)) &&
             ((local_c0 < *(uint *)(lVar6 + 0x38) && local_bc < *(uint *)(lVar6 + 0x3c) &&
              (FUN_00962530(lVar6,&local_c8,&local_88), local_58 == 0x1d)))) && (local_57 == 0x1d))
           && ((local_56 == 0x1d && (local_55 == 0x1d)))) {
          return 0;
        }
      }
LAB_01694320:
      uVar4 = FUN_0097d6c0(&local_c8,1);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      local_80 = 0;
      local_88 = 0;
      local_8c = 5;
      local_88 = 0x20;
      local_80 = 0;
      lVar6 = *(long *)puVar3;
      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x90) != 0)) &&
         (uVar4 = FUN_0094b728(lVar6 + 0x28,&local_c8,&local_88), (uVar4 & 1) != 0)) {
        return 0;
      }
      local_80 = 0;
      local_88 = 0;
      local_8c = 0xc;
      local_88 = 0x1000;
      local_80 = 0;
      lVar6 = *(long *)puVar3;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x90) != 0)) {
        uVar4 = FUN_0094b728(lVar6 + 0x28,&local_c8,&local_88);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        lVar6 = *(long *)puVar3;
      }
      if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x90), lVar6 != 0)) &&
         ((-1 < (int)local_c0 &&
          (((-1 < (int)local_bc && (local_c0 < *(uint *)(lVar6 + 0x38))) &&
           (local_bc < *(uint *)(lVar6 + 0x3c))))))) {
        FUN_00962530(lVar6,&local_c8,&local_88);
        if (local_58 == 0x2d) {
          return 0;
        }
        if (local_57 == 0x2d) {
          return 0;
        }
        if (local_56 == 0x2d) {
          return 0;
        }
        if (local_55 == 0x2d) {
          return 0;
        }
      }
      if ((int)local_c0 < local_98) {
        local_c0 = local_c0 + 1;
      }
      else {
        local_bc = local_bc + 1;
        local_c0 = local_a8;
      }
    } while ((uVar2 != local_c0) || (uVar1 != local_bc));
  }
  return 1;
}

