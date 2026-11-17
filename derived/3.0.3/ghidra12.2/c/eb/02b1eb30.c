
/* WARNING: Removing unreachable block (ram,0x02b1eb7c) */
/* WARNING: Removing unreachable block (ram,0x02b1eb6c) */
/* WARNING: Removing unreachable block (ram,0x02b1eb88) */
/* WARNING: Removing unreachable block (ram,0x02b1ebbc) */
/* WARNING: Removing unreachable block (ram,0x02b1ec08) */

undefined8 FUN_02b1eb30(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint local_88;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined4 local_64;
  
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) {
    return 0;
  }
  if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
    if (((*(long *)(param_2 + 0xc0) == 0) ||
        (lVar10 = *(long *)(*(long *)(param_2 + 0xc0) + 200), lVar10 == 0)) ||
       (*(char *)(lVar10 + 0x48) == '\0')) {
      lVar10 = param_2 + 0x18;
      goto LAB_02b1ec18;
    }
    lVar10 = param_2 + 0x5c8;
  }
  else {
    lVar10 = param_2 + 0x328;
  }
  lVar10 = lVar10 + 0x28;
LAB_02b1ec18:
  local_64 = 1;
  local_88 = 0;
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 200;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  do {
    lVar4 = lVar2 + (ulong)local_88 * 0x10;
    if (7 < local_88) {
      lVar4 = lVar2;
    }
    if (*(long *)(lVar4 + 8) != 0) {
      local_70 = *(int *)(lVar10 + 0x10);
      local_6c = *(int *)(lVar10 + 0x14);
      iVar1 = *(int *)(lVar10 + 0x24) + 1;
      iVar6 = *(int *)(lVar10 + 0x10);
      local_78 = puVar3;
      if ((iVar6 != local_70) || (iVar1 != local_6c)) {
        do {
          uVar7 = FUN_02a7c074(param_2,&local_78);
          if ((uVar7 & 1) != 0) {
            lVar9 = *(long *)(lVar4 + 8);
            if (lVar9 == 0) {
              psVar8 = (short *)PTR_DAT_04bb37e0;
            }
            else {
              lVar5 = lVar9 + 0x130 + (ulong)*(uint *)(lVar9 + 0x198) * 0x30;
              if (1 < *(uint *)(lVar9 + 0x198)) {
                lVar5 = lVar9 + 0x130;
              }
              psVar8 = (short *)FUN_012eb21c(lVar5,&local_78,0);
            }
            if (((*psVar8 != -2) && (uVar7 = FUN_027a991c(psVar8), (uVar7 & 1) != 0)) &&
               (uVar7 = FUN_027a9de4(psVar8), (uVar7 & 1) != 0)) {
              return 1;
            }
          }
          if (local_70 < *(int *)(lVar10 + 0x20)) {
            local_70 = local_70 + 1;
          }
          else {
            local_6c = local_6c + 1;
            local_70 = *(int *)(lVar10 + 0x10);
          }
        } while (iVar6 != local_70 || iVar1 != local_6c);
      }
    }
    uVar11 = 8;
    if ((int)local_88 < 8) {
      uVar11 = local_88 + 1;
    }
    local_88 = uVar11;
    if (uVar11 == 2) {
      return 0;
    }
  } while( true );
}

