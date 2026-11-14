
/* WARNING: Removing unreachable block (ram,0x01a23c20) */
/* WARNING: Removing unreachable block (ram,0x01a23c74) */

void FUN_01a23bd0(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  uint local_48;
  uint uStack_44;
  long *local_28;
  
  puVar2 = PTR_DAT_04bb2200;
  local_28 = (long *)0x0;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar7 != 0)) {
    local_48 = 0;
    plVar10 = *(long **)(lVar7 + 0x118);
    iVar9 = 0;
    if (plVar10 == (long *)0x0) goto LAB_01a23ca4;
    if ((((char)plVar10[7] != '\0') &&
        (uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10), (uVar5 & 1) != 0)) &&
       ((local_28 = plVar10, *(long *)puVar2 == 0 ||
        (((lVar7 = *(long *)(*(long *)puVar2 + 0x50), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x118), lVar7 == 0)) || (*(char *)(lVar7 + 0xe0b) != '\0'))))))
    {
      iVar9 = *(int *)(plVar10[0x164] + (long)(int)plVar10[0x166] * 0x10) + -1;
      goto LAB_01a23ca4;
    }
  }
  iVar9 = 0;
LAB_01a23ca4:
  uVar6 = *(uint *)(param_1 + 0x338);
  if ((0 < (int)uVar6) && (uVar8 = *(uint *)(param_1 + 0x33c), 0 < (int)uVar8)) {
    uVar11 = 0;
    do {
      if (0 < (int)uVar8) {
        uVar12 = 0;
        do {
          local_48 = uVar11;
          uStack_44 = uVar12;
          iVar3 = FUN_015afa70(&local_28,&local_48,iVar9);
          iVar4 = FUN_015afb74(&local_28,&local_48,iVar9);
          uVar6 = *(uint *)(param_1 + 0x338);
          uVar8 = *(uint *)(param_1 + 0x33c);
          piVar1 = (int *)(*(long *)(param_1 + 0x340) + (long)(int)(uVar11 + uVar6 * uVar12) * 4);
          if (uVar8 <= uVar12 || uVar6 <= uVar11) {
            piVar1 = (int *)0x0;
          }
          if (iVar4 + iVar3 != *piVar1) {
            *piVar1 = iVar4 + iVar3;
            FUN_01a23690(param_1,uVar11,uVar12);
            return;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar8);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar6);
  }
  return;
}

