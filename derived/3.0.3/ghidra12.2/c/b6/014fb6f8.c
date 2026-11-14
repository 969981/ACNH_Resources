
/* WARNING: Removing unreachable block (ram,0x014fb920) */
/* WARNING: Removing unreachable block (ram,0x014fb7f4) */
/* WARNING: Removing unreachable block (ram,0x014fb780) */
/* WARNING: Removing unreachable block (ram,0x014fb770) */
/* WARNING: Removing unreachable block (ram,0x014fb78c) */
/* WARNING: Removing unreachable block (ram,0x014fb7e4) */
/* WARNING: Removing unreachable block (ram,0x014fb910) */
/* WARNING: Removing unreachable block (ram,0x014fb92c) */
/* WARNING: Removing unreachable block (ram,0x014fb98c) */
/* WARNING: Removing unreachable block (ram,0x014fb99c) */

void FUN_014fb6f8(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint local_48 [2];
  undefined *local_40;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb27a8;
  uVar7 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  if (uVar7 == 0) {
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(lVar5 + 0x1f8) + 0x60);
    plVar2 = plVar6 + param_2;
    if (7 < param_2) {
      plVar2 = plVar6;
    }
    if (*plVar2 == 0) {
      return;
    }
LAB_014fb890:
    plVar6 = (long *)(lVar5 + 0x1f8);
LAB_014fb894:
    lVar8 = *plVar6;
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    if (uVar7 == 0) {
      lVar8 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x30) + uVar7;
      if (0x38 < uVar7) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      lVar8 = *plVar6;
    }
    if (lVar8 == 0) {
      return;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar7 == 0) {
        plVar6 = (long *)(lVar5 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x30) + uVar7;
        if (0x38 < uVar7) {
          plVar6 = (long *)(lVar5 + 0x30);
        }
      }
      lVar8 = *plVar6;
    }
    plVar6 = (long *)(lVar8 + 0x60) + param_2;
    if (7 < param_2) {
      plVar6 = (long *)(lVar8 + 0x60);
    }
    if (*plVar6 == 0) {
      return;
    }
    local_48[0] = uVar7;
    if (uVar7 != 0) {
      if (uVar7 == 0) goto LAB_014fb890;
      plVar6 = (long *)(lVar5 + 0x30) + uVar7;
      if (0x38 < uVar7) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      goto LAB_014fb894;
    }
    lVar8 = 0;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,param_2);
  lVar1 = lVar8 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar1 = lVar8 + 200;
  }
  if (*(long *)(lVar1 + 8) != 0) {
    FUN_012e5af4(*(long *)(lVar1 + 8),param_3);
    uVar7 = *(uint *)(param_1 + 8);
    lVar5 = *(long *)puVar4;
  }
  if (uVar7 == 0) {
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(lVar5 + 0x1f8) + 0x60);
    plVar2 = plVar6 + param_2;
    if (7 < param_2) {
      plVar2 = plVar6;
    }
    if (*plVar2 == 0) {
      return;
    }
LAB_014fba38:
    plVar6 = (long *)(lVar5 + 0x1f8);
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    if (uVar7 == 0) {
      lVar8 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x30) + uVar7;
      if (0x38 < uVar7) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      lVar8 = *plVar6;
    }
    if (lVar8 == 0) {
      return;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar7 == 0) {
        plVar6 = (long *)(lVar5 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x30) + uVar7;
        if (0x38 < uVar7) {
          plVar6 = (long *)(lVar5 + 0x30);
        }
      }
      lVar8 = *plVar6;
    }
    plVar6 = (long *)(lVar8 + 0x60) + param_2;
    if (7 < param_2) {
      plVar6 = (long *)(lVar8 + 0x60);
    }
    if (*plVar6 == 0) {
      return;
    }
    local_48[0] = uVar7;
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_014fba40;
    }
    local_40 = (undefined *)(ulong)uVar7;
    if (uVar7 == 0) goto LAB_014fba38;
    plVar6 = (long *)(lVar5 + 0x30) + (long)local_40;
    if (0x38 < uVar7) {
      plVar6 = (long *)(lVar5 + 0x30);
    }
  }
  lVar5 = *plVar6;
LAB_014fba40:
  lVar8 = lVar5 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar8 = lVar5 + 200;
  }
  lVar5 = *(long *)(lVar8 + 8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
    local_40 = PTR_DAT_04bb2010 + 0x10;
    local_38 = 0;
    FUN_012e4f58(local_48,lVar5,param_3,&local_40);
    if ((short)local_48[0] != -2) {
      uVar7 = (int)local_38 - *(int *)(lVar5 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x18);
      if (uVar7 < *(uint *)(lVar8 + 8)) {
        uVar3 = local_38._4_4_ - *(int *)(lVar5 + 0x14);
        if (uVar3 < *(uint *)(lVar8 + 0xc)) {
          *(undefined4 *)
           (*(long *)(lVar8 + 0x10) + (long)(int)(uVar7 + *(uint *)(lVar8 + 8) * uVar3) * 4) =
               *(undefined4 *)PTR_DAT_04bbc188;
        }
      }
    }
  }
  return;
}

