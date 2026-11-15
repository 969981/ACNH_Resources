
/* WARNING: Removing unreachable block (ram,0x0232e6a8) */

undefined8 FUN_0232e4c4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  FUN_02549bb8(PTR_DAT_04bb32e0);
  puVar2 = PTR_DAT_04bb4718;
  if (*(long *)(param_1 + 0x70) == 0) {
    local_40._0_4_ = 0;
LAB_0232e54c:
    uVar1 = (uint)local_40 - 0x126;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar4 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = &DAT_054f08c0;
      }
    }
    else {
      puVar4 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    if (uVar1 < 7) {
      local_40._0_4_ = 9;
      if ((*puVar4 >> 9 & 1) == 0) {
        return 0;
      }
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
            puVar4 = &DAT_054f08c0;
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      local_40._0_4_ = 0xc;
      if ((*puVar4 >> 0xc & 1) != 0) {
        puVar4 = (uint *)FUN_02519664();
        local_40._0_4_ = 0xc;
        *puVar4 = *puVar4 & 0xffffefff;
        puVar4 = (uint *)FUN_02519664();
        local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
        *puVar4 = *puVar4 & 0xfffffdff;
        local_50 = PTR_DAT_04bb2020 + 0x10;
        puStack_48 = &DAT_040a1a00;
        FUN_02a0d7e0(*(long *)PTR_DAT_04bb26a8 + 0xa7660,&local_50);
        return 1;
      }
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      *puVar4 = *puVar4 | 0x1000;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb26a8 + 0xa7660;
      puStack_38 = &DAT_04063019;
      for (lVar7 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f840); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 8)) {
        while (iVar3 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar3) {
          if (iVar3 == 0) goto LAB_0232eb48;
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_0232eb40;
        }
      }
    }
    else {
      local_40._0_4_ = 9;
      if ((*puVar4 >> 9 & 1) == 0) {
        return 0;
      }
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
            puVar4 = &DAT_054f08c0;
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
      *puVar4 = *puVar4 & 0xfffffdff;
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      *puVar4 = *puVar4 & 0xfffffbff;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb26a8 + 0xa7660;
      puStack_38 = &DAT_040a1a00;
      for (lVar7 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f840); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 8)) {
        while (iVar3 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar3) {
          if (iVar3 == 0) goto LAB_0232eb48;
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_0232eb40;
        }
      }
    }
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_40._0_4_ = 0;
    if (uVar1 < 0x149) {
      local_40._0_4_ = uVar1;
    }
    if ((uint)local_40 != 0x7a) goto LAB_0232e54c;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar4 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar4 = &DAT_054f08c0;
      }
    }
    else {
      puVar4 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    local_40._0_4_ = 9;
    if ((*puVar4 >> 9 & 1) == 0) {
      return 0;
    }
    if (*(long *)puVar2 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar4 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar4 = &DAT_054f08c0;
      }
    }
    else {
      puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
    }
    local_40._0_4_ = 10;
    lVar6 = *(long *)puVar2;
    if ((*puVar4 >> 10 & 1) == 0) {
      if (lVar6 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(lVar6 + 0x1fc);
      }
      *puVar4 = *puVar4 | 0x400;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb26a8 + 0xa7660;
      puStack_38 = &DAT_04097679;
      for (lVar7 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f840); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 8)) {
        while (iVar3 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar3) {
          if (iVar3 == 0) goto LAB_0232eb48;
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_0232eb40;
        }
      }
    }
    else {
      if (lVar6 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(lVar6 + 0x1fc);
      }
      local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
      *puVar4 = *puVar4 & 0xfffffdff;
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar4 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar4 = &DAT_054f08c0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      *puVar4 = *puVar4 & 0xfffffbff;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb26a8 + 0xa7660;
      puStack_38 = &DAT_040a1a00;
      for (lVar7 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f840); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 8)) {
        while (iVar3 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar3) {
          if (iVar3 == 0) goto LAB_0232eb48;
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_0232eb40;
        }
      }
    }
  }
LAB_0232eb40:
  uVar5 = 0xffff;
LAB_0232eb4c:
  FUN_02a0d880(lVar6,uVar5);
  return 1;
LAB_0232eb48:
  uVar5 = *(undefined2 *)(lVar7 + 0x30);
  goto LAB_0232eb4c;
}

