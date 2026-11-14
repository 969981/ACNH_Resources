
/* WARNING: Removing unreachable block (ram,0x014fbdcc) */
/* WARNING: Removing unreachable block (ram,0x014fbdbc) */
/* WARNING: Removing unreachable block (ram,0x014fbdd8) */
/* WARNING: Removing unreachable block (ram,0x014fbe30) */
/* WARNING: Removing unreachable block (ram,0x014fbe40) */

undefined4 * FUN_014fbd50(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_30;
  undefined8 local_28;
  uint local_8 [2];
  
  uVar4 = *(uint *)(param_1 + 8);
  lVar6 = *(long *)PTR_DAT_04bb27a8;
  if (uVar4 == 0) {
    if (*(long *)(lVar6 + 0x1f8) == 0) goto LAB_014fbf88;
    plVar7 = (long *)(*(long *)(lVar6 + 0x1f8) + 0x60);
    plVar2 = plVar7 + param_2;
    if (7 < param_2) {
      plVar2 = plVar7;
    }
    if (*plVar2 == 0) goto LAB_014fbf88;
LAB_014fbedc:
    plVar7 = (long *)(lVar6 + 0x1f8);
LAB_014fbee0:
    lVar6 = *plVar7;
  }
  else {
    if (uVar4 == 0) goto LAB_014fbf88;
    if (uVar4 == 0) {
      lVar8 = *(long *)(lVar6 + 0x1f8);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x30) + uVar4;
      if (0x38 < uVar4) {
        plVar7 = (long *)(lVar6 + 0x30);
      }
      lVar8 = *plVar7;
    }
    if (lVar8 == 0) goto LAB_014fbf88;
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar4 == 0) {
        plVar7 = (long *)(lVar6 + 0x1f8);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x30) + uVar4;
        if (0x38 < uVar4) {
          plVar7 = (long *)(lVar6 + 0x30);
        }
      }
      lVar8 = *plVar7;
    }
    plVar7 = (long *)(lVar8 + 0x60) + param_2;
    if (7 < param_2) {
      plVar7 = (long *)(lVar8 + 0x60);
    }
    if (*plVar7 == 0) goto LAB_014fbf88;
    local_8[0] = uVar4;
    if (uVar4 != 0) {
      local_30 = (undefined *)(ulong)uVar4;
      if (uVar4 == 0) goto LAB_014fbedc;
      plVar7 = (long *)(lVar6 + 0x30) + (long)local_30;
      if (0x38 < uVar4) {
        plVar7 = (long *)(lVar6 + 0x30);
      }
      goto LAB_014fbee0;
    }
    lVar6 = 0;
  }
  lVar8 = lVar6 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar8 = lVar6 + 200;
  }
  lVar6 = *(long *)(lVar8 + 8);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) == 0) {
      return &DAT_0517af58;
    }
    local_30 = PTR_DAT_04bb2010 + 0x10;
    local_28 = 0;
    FUN_012e4f58(local_8,lVar6,param_3,&local_30);
    if ((short)local_8[0] == -2) {
      return (undefined4 *)PTR_DAT_04bbc188;
    }
    uVar4 = (int)local_28 - *(int *)(lVar6 + 0x10);
    lVar8 = *(long *)(lVar6 + 0x18);
    uVar5 = local_28._4_4_ - *(int *)(lVar6 + 0x14);
    puVar1 = (undefined4 *)
             (*(long *)(lVar8 + 0x10) + (long)(int)(uVar4 + *(uint *)(lVar8 + 8) * uVar5) * 4);
    if (*(uint *)(lVar8 + 0xc) <= uVar5 || *(uint *)(lVar8 + 8) <= uVar4) {
      puVar1 = (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)PTR_DAT_04bbc188;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    return puVar3;
  }
LAB_014fbf88:
  return &DAT_04c9a0c8;
}

