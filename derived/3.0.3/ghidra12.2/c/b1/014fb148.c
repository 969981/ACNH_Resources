
/* WARNING: Removing unreachable block (ram,0x014fb2d4) */
/* WARNING: Removing unreachable block (ram,0x014fb1d8) */
/* WARNING: Removing unreachable block (ram,0x014fb1c8) */
/* WARNING: Removing unreachable block (ram,0x014fb1e4) */
/* WARNING: Removing unreachable block (ram,0x014fb2c4) */
/* WARNING: Removing unreachable block (ram,0x014fb2e0) */
/* WARNING: Removing unreachable block (ram,0x014fb340) */
/* WARNING: Removing unreachable block (ram,0x014fb350) */

void FUN_014fb148(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_50;
  undefined8 local_48;
  uint local_28 [2];
  
  puVar4 = PTR_DAT_04bb27a8;
  uVar2 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  if (uVar2 == 0) {
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      return;
    }
LAB_014fb20c:
    plVar6 = (long *)(lVar5 + 0x1f8);
LAB_014fb240:
    lVar5 = *plVar6;
  }
  else {
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 0) {
      lVar7 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      lVar7 = *plVar6;
    }
    if (lVar7 == 0) {
      return;
    }
    local_28[0] = uVar2;
    if (uVar2 != 0) {
      if (uVar2 == 0) goto LAB_014fb20c;
      plVar6 = (long *)(lVar5 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      goto LAB_014fb240;
    }
    lVar5 = 0;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,param_2);
  plVar6 = (long *)(lVar5 + 0x60) + param_2;
  if (7 < param_2) {
    plVar6 = (long *)(lVar5 + 0x60);
  }
  if (*plVar6 == 0) {
    return;
  }
  FUN_01a50970(param_1,param_2,param_3,param_4);
  uVar2 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)puVar4;
  if (uVar2 == 0) {
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(lVar5 + 0x1f8) + 0x60);
    plVar1 = plVar6 + param_2;
    if (7 < param_2) {
      plVar1 = plVar6;
    }
    if (*plVar1 == 0) {
      return;
    }
LAB_014fb3ec:
    plVar6 = (long *)(lVar5 + 0x1f8);
  }
  else {
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 0) {
      lVar7 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar6 = (long *)(lVar5 + 0x30);
      }
      lVar7 = *plVar6;
    }
    if (lVar7 == 0) {
      return;
    }
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      if (uVar2 == 0) {
        plVar6 = (long *)(lVar5 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x30) + uVar2;
        if (0x38 < uVar2) {
          plVar6 = (long *)(lVar5 + 0x30);
        }
      }
      lVar7 = *plVar6;
    }
    plVar6 = (long *)(lVar7 + 0x60) + param_2;
    if (7 < param_2) {
      plVar6 = (long *)(lVar7 + 0x60);
    }
    if (*plVar6 == 0) {
      return;
    }
    local_28[0] = uVar2;
    if (uVar2 == 0) {
      lVar5 = 0;
      goto LAB_014fb3f4;
    }
    local_50 = (undefined *)(ulong)uVar2;
    if (uVar2 == 0) goto LAB_014fb3ec;
    plVar6 = (long *)(lVar5 + 0x30) + (long)local_50;
    if (0x38 < uVar2) {
      plVar6 = (long *)(lVar5 + 0x30);
    }
  }
  lVar5 = *plVar6;
LAB_014fb3f4:
  lVar7 = lVar5 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar7 = lVar5 + 200;
  }
  lVar5 = *(long *)(lVar7 + 8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
    local_50 = PTR_DAT_04bb2010 + 0x10;
    local_48 = 0;
    FUN_012e4f58(local_28,lVar5,param_4,&local_50);
    if ((short)local_28[0] != -2) {
      uVar2 = (int)local_48 - *(int *)(lVar5 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 8)) {
        uVar3 = local_48._4_4_ - *(int *)(lVar5 + 0x14);
        if (uVar3 < *(uint *)(lVar7 + 0xc)) {
          *(undefined4 *)
           (*(long *)(lVar7 + 0x10) + (long)(int)(uVar2 + *(uint *)(lVar7 + 8) * uVar3) * 4) =
               *param_5;
        }
      }
    }
  }
  return;
}

