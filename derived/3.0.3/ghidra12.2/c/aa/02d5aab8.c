
/* WARNING: Removing unreachable block (ram,0x02d5ad48) */
/* WARNING: Removing unreachable block (ram,0x02d5abe4) */
/* WARNING: Removing unreachable block (ram,0x02d5abf0) */
/* WARNING: Removing unreachable block (ram,0x02d5ad54) */

void FUN_02d5aab8(long param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 *puVar14;
  ushort local_3c [2];
  uint local_38;
  uint local_34;
  
  if (*(long *)(param_1 + 0x1680) == 0) {
    return;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570);
  if (lVar11 == 0) {
    return;
  }
  if ((int)param_2 < *(int *)(lVar11 + 0x3d4)) {
    iVar9 = *(int *)(lVar11 + 0x2e8);
    iVar4 = 0;
    if (iVar9 != 0) {
      iVar4 = (int)param_2 / iVar9;
    }
    iVar13 = *(int *)(lVar11 + 0x430) - *(int *)(lVar11 + 0x438);
    if ((*(byte *)(lVar11 + 1000) >> 1 & 1) != 0) {
      uVar3 = *(uint *)(lVar11 + 0x434);
      uVar8 = 0;
      if ((int)uVar3 < iVar13) {
        uVar8 = ~uVar3;
      }
      if (iVar13 < 0) {
        uVar8 = uVar3 + 1;
      }
      iVar13 = uVar8 + iVar13;
    }
    uVar8 = (param_2 - iVar4 * iVar9) + (iVar4 - iVar13) * iVar9;
    uVar3 = *(uint *)(lVar11 + 0x208);
    bVar6 = (int)uVar8 < 0;
    bVar7 = (int)uVar3 <= (int)uVar8;
    if (bVar6 || bVar7) {
      uVar8 = 0xffffffff;
    }
    if ((((bVar6 || bVar7) || (int)uVar3 <= (int)uVar8) || uVar3 < uVar8) ||
        ((!bVar6 && !bVar7) && (int)uVar8 < (int)uVar3) && uVar3 == uVar8) goto LAB_02d5ab5c;
    puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x210) + (ulong)uVar8 * 8);
  }
  else {
LAB_02d5ab5c:
    puVar14 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  uVar10 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc4d90);
  puVar2 = PTR_DAT_04bb3170;
  if ((uVar10 & 1) == 0) {
    return;
  }
  FUN_007ef010(local_3c,PTR_DAT_04bb3170);
  local_34 = 0x52;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x1750) <= (int)param_2)) ||
     (iVar9 = **(int **)(*(long *)(param_1 + 0x1758) + (ulong)param_2 * 8), iVar9 == -1)) {
    local_3c[0] = *(ushort *)puVar2;
  }
  else {
    FUN_0344d0c0(local_3c,iVar9,0);
  }
  if (*(int *)(param_1 + 0x241c) == 4) {
    if (local_3c[0] != *(ushort *)puVar2) {
      local_34 = CONCAT22(local_34._2_2_,*(ushort *)puVar2);
      uVar1 = local_3c[0] & 0x7f;
      uVar8 = FUN_007ef180(local_3c);
      FUN_0344d0c0(&local_34,uVar1,uVar8 & 1);
      lVar11 = *(long *)PTR_DAT_04bb5ce0;
      puVar12 = (undefined *)(lVar11 + 0xe5c);
LAB_02d5acf8:
      if (lVar11 != 0) {
        puVar2 = puVar12;
      }
      FUN_007ef010(&local_38,puVar2);
      bVar7 = (local_34 & 0xffff) == (uint)(ushort)local_38;
      lVar11 = puVar14[0x43];
      goto joined_r0x02d5aca0;
    }
  }
  else if ((*(int *)(param_1 + 0x241c) == 3) && (local_3c[0] != *(ushort *)puVar2)) {
    local_34 = CONCAT22(local_34._2_2_,*(ushort *)puVar2);
    uVar1 = local_3c[0] & 0x7f;
    uVar8 = FUN_007ef180(local_3c);
    FUN_0344d0c0(&local_34,uVar1,uVar8 & 1);
    puVar5 = PTR_DAT_04bb5ce0;
    puVar12 = puVar2;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      puVar12 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
    }
    FUN_007ef010(&local_38,puVar12);
    if ((local_34 & 0xffff) == (local_38 & 0xffff)) {
      bVar7 = true;
      lVar11 = puVar14[0x43];
      goto joined_r0x02d5aca0;
    }
    if (local_3c[0] != *(ushort *)puVar2) {
      local_34 = CONCAT22(local_34._2_2_,*(ushort *)puVar2);
      uVar1 = local_3c[0] & 0x7f;
      uVar8 = FUN_007ef180(local_3c);
      FUN_0344d0c0(&local_34,uVar1,uVar8 & 1);
      lVar11 = *(long *)puVar5;
      puVar12 = (undefined *)(lVar11 + 0xe9c);
      goto LAB_02d5acf8;
    }
  }
  bVar7 = false;
  lVar11 = puVar14[0x43];
joined_r0x02d5aca0:
  if (lVar11 != 0) {
    local_34 = 0;
    local_38 = 7;
    uVar10 = (**(code **)(*(long *)(lVar11 + 0x178) + 0x10))();
    if (bVar7) {
      if ((uVar10 & 1) == 0) {
        FUN_03d5d280(puVar14,7);
        *(undefined1 *)((long)puVar14 + 0x313) = 1;
      }
    }
    else if ((uVar10 & 1) != 0) {
      FUN_03d5d6a4(puVar14,7);
    }
  }
  return;
}

