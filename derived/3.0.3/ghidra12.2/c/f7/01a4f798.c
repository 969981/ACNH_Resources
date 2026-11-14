
/* WARNING: Removing unreachable block (ram,0x01a4f878) */
/* WARNING: Removing unreachable block (ram,0x01a4f804) */
/* WARNING: Removing unreachable block (ram,0x01a4f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a4f810) */
/* WARNING: Removing unreachable block (ram,0x01a4f868) */
/* WARNING: Removing unreachable block (ram,0x01a4f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a4f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a4f8d8) */

bool FUN_01a4f798(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)PTR_DAT_04bb27a8;
  if (uVar2 == 0) {
    if (*(long *)(lVar4 + 0x1f8) == 0) {
      return false;
    }
    plVar5 = (long *)(*(long *)(lVar4 + 0x1f8) + 0x60);
    plVar1 = plVar5 + param_2;
    if (7 < param_2) {
      plVar1 = plVar5;
    }
    if (*plVar1 == 0) {
      return false;
    }
    if (*(long *)(lVar4 + 0x1f8) != 0) {
LAB_01a4f990:
      plVar5 = (long *)(lVar4 + 0x1f8);
LAB_01a4f994:
      lVar4 = *plVar5;
LAB_01a4f998:
      puVar6 = (undefined8 *)(lVar4 + 0x38);
      goto LAB_01a4f9a8;
    }
  }
  else {
    if (uVar2 == 0) {
      return false;
    }
    if (uVar2 == 0) {
      lVar7 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar5 = (long *)(lVar4 + 0x30);
      }
      lVar7 = *plVar5;
    }
    if (lVar7 == 0) {
      return false;
    }
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      if (uVar2 == 0) {
        plVar5 = (long *)(lVar4 + 0x1f8);
      }
      else {
        plVar5 = (long *)(lVar4 + 0x30) + uVar2;
        if (0x38 < uVar2) {
          plVar5 = (long *)(lVar4 + 0x30);
        }
      }
      lVar7 = *plVar5;
    }
    plVar5 = (long *)(lVar7 + 0x60) + param_2;
    if (7 < param_2) {
      plVar5 = (long *)(lVar7 + 0x60);
    }
    if (*plVar5 == 0) {
      return false;
    }
    if (uVar2 != 0) {
      if (uVar2 == 0) {
        lVar7 = *(long *)(lVar4 + 0x1f8);
      }
      else {
        plVar5 = (long *)(lVar4 + 0x30) + uVar2;
        if (0x38 < uVar2) {
          plVar5 = (long *)(lVar4 + 0x30);
        }
        lVar7 = *plVar5;
      }
      if (lVar7 != 0) {
        if (uVar2 != 0) {
          if (uVar2 == 0) goto LAB_01a4f990;
          plVar5 = (long *)(lVar4 + 0x30) + uVar2;
          if (0x38 < uVar2) {
            plVar5 = (long *)(lVar4 + 0x30);
          }
          goto LAB_01a4f994;
        }
        lVar4 = 0;
        goto LAB_01a4f998;
      }
    }
  }
  puVar6 = &DAT_05300388;
LAB_01a4f9a8:
  bVar3 = false;
  if ((*(int *)(puVar6 + 2) <= *(int *)(param_3 + 8)) &&
     (*(int *)(param_3 + 8) <= *(int *)(puVar6 + 4))) {
    if (*(int *)(param_3 + 0xc) < *(int *)((long)puVar6 + 0x14)) {
      return false;
    }
    bVar3 = *(int *)(param_3 + 0xc) <= *(int *)((long)puVar6 + 0x24);
  }
  return bVar3;
}

