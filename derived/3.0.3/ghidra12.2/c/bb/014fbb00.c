
/* WARNING: Removing unreachable block (ram,0x014fbb7c) */
/* WARNING: Removing unreachable block (ram,0x014fbb6c) */
/* WARNING: Removing unreachable block (ram,0x014fbb88) */
/* WARNING: Removing unreachable block (ram,0x014fbbe0) */
/* WARNING: Removing unreachable block (ram,0x014fbbf0) */

void FUN_014fbb00(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_30;
  undefined8 local_28;
  uint local_8 [2];
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)PTR_DAT_04bb27a8;
  if (uVar2 == 0) {
    if (*(long *)(lVar4 + 0x1f8) == 0) {
      return;
    }
    plVar5 = (long *)(*(long *)(lVar4 + 0x1f8) + 0x60);
    plVar1 = plVar5 + param_2;
    if (7 < param_2) {
      plVar1 = plVar5;
    }
    if (*plVar1 == 0) {
      return;
    }
LAB_014fbc8c:
    plVar5 = (long *)(lVar4 + 0x1f8);
  }
  else {
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 0) {
      lVar6 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar5 = (long *)(lVar4 + 0x30);
      }
      lVar6 = *plVar5;
    }
    if (lVar6 == 0) {
      return;
    }
    if (uVar2 == 0) {
      lVar6 = 0;
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
      lVar6 = *plVar5;
    }
    plVar5 = (long *)(lVar6 + 0x60) + param_2;
    if (7 < param_2) {
      plVar5 = (long *)(lVar6 + 0x60);
    }
    if (*plVar5 == 0) {
      return;
    }
    local_8[0] = uVar2;
    if (uVar2 == 0) {
      lVar4 = 0;
      goto LAB_014fbc94;
    }
    local_30 = (undefined *)(ulong)uVar2;
    if (uVar2 == 0) goto LAB_014fbc8c;
    plVar5 = (long *)(lVar4 + 0x30) + (long)local_30;
    if (0x38 < uVar2) {
      plVar5 = (long *)(lVar4 + 0x30);
    }
  }
  lVar4 = *plVar5;
LAB_014fbc94:
  lVar6 = lVar4 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar6 = lVar4 + 200;
  }
  lVar4 = *(long *)(lVar6 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
    local_30 = PTR_DAT_04bb2010 + 0x10;
    local_28 = 0;
    FUN_012e4f58(local_8,lVar4,param_3,&local_30);
    if ((short)local_8[0] != -2) {
      uVar2 = (int)local_28 - *(int *)(lVar4 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 8)) {
        uVar3 = local_28._4_4_ - *(int *)(lVar4 + 0x14);
        if (uVar3 < *(uint *)(lVar6 + 0xc)) {
          *(undefined4 *)
           (*(long *)(lVar6 + 0x10) + (long)(int)(uVar2 + *(uint *)(lVar6 + 8) * uVar3) * 4) =
               *(undefined4 *)PTR_DAT_04bbc188;
        }
      }
    }
  }
  return;
}

