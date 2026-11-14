
/* WARNING: Removing unreachable block (ram,0x01a4fbdc) */
/* WARNING: Removing unreachable block (ram,0x01a4fb68) */
/* WARNING: Removing unreachable block (ram,0x01a4fb58) */
/* WARNING: Removing unreachable block (ram,0x01a4fb74) */
/* WARNING: Removing unreachable block (ram,0x01a4fbcc) */
/* WARNING: Removing unreachable block (ram,0x01a4fc20) */
/* WARNING: Removing unreachable block (ram,0x01a4fc30) */
/* WARNING: Removing unreachable block (ram,0x01a4fc3c) */

undefined8 FUN_01a4fafc(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar3 = *(long *)PTR_DAT_04bb27a8;
  if (uVar2 == 0) {
    if (*(long *)(lVar3 + 0x1f8) == 0) {
      return 0;
    }
    plVar4 = (long *)(*(long *)(lVar3 + 0x1f8) + 0x60);
    plVar1 = plVar4 + param_2;
    if (7 < param_2) {
      plVar1 = plVar4;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    if (*(long *)(lVar3 + 0x1f8) != 0) {
LAB_01a4fcf4:
      plVar4 = (long *)(lVar3 + 0x1f8);
LAB_01a4fcf8:
      lVar3 = *plVar4;
LAB_01a4fcfc:
      puVar5 = (undefined8 *)(lVar3 + 0x38);
      goto LAB_01a4fd0c;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar2 == 0) {
      lVar6 = *(long *)(lVar3 + 0x1f8);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar4 = (long *)(lVar3 + 0x30);
      }
      lVar6 = *plVar4;
    }
    if (lVar6 == 0) {
      return 0;
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      if (uVar2 == 0) {
        plVar4 = (long *)(lVar3 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar3 + 0x30) + uVar2;
        if (0x38 < uVar2) {
          plVar4 = (long *)(lVar3 + 0x30);
        }
      }
      lVar6 = *plVar4;
    }
    plVar4 = (long *)(lVar6 + 0x60) + param_2;
    if (7 < param_2) {
      plVar4 = (long *)(lVar6 + 0x60);
    }
    if (*plVar4 == 0) {
      return 0;
    }
    if (uVar2 != 0) {
      if (uVar2 == 0) {
        lVar6 = *(long *)(lVar3 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar3 + 0x30) + uVar2;
        if (0x38 < uVar2) {
          plVar4 = (long *)(lVar3 + 0x30);
        }
        lVar6 = *plVar4;
      }
      if (lVar6 != 0) {
        if (uVar2 != 0) {
          if (uVar2 == 0) goto LAB_01a4fcf4;
          plVar4 = (long *)(lVar3 + 0x30) + uVar2;
          if (0x38 < uVar2) {
            plVar4 = (long *)(lVar3 + 0x30);
          }
          goto LAB_01a4fcf8;
        }
        lVar3 = 0;
        goto LAB_01a4fcfc;
      }
    }
  }
  puVar5 = &DAT_05300388;
LAB_01a4fd0c:
  if ((((*(int *)(param_3 + 0x10) < *(int *)(puVar5 + 2)) ||
       (*(int *)(puVar5 + 4) < *(int *)(param_3 + 0x20))) ||
      (*(int *)(param_3 + 0x14) < *(int *)((long)puVar5 + 0x14))) ||
     (*(int *)((long)puVar5 + 0x24) < *(int *)(param_3 + 0x24))) {
    return 0;
  }
  return 1;
}

