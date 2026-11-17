
/* WARNING: Removing unreachable block (ram,0x02d5b040) */
/* WARNING: Removing unreachable block (ram,0x02d5af68) */
/* WARNING: Removing unreachable block (ram,0x02d5af74) */
/* WARNING: Removing unreachable block (ram,0x02d5b04c) */

void FUN_02d5ae1c(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  ushort local_3c [2];
  undefined4 local_38;
  uint local_34;
  
  if (*(int *)(param_1 + 0x241c) != 3) {
    return;
  }
  iVar7 = FUN_0274bce0(param_1 + 0x1f8,&DAT_056e44f0);
  if (iVar7 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1680) == 0) {
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570);
  if (lVar10 == 0) {
    return;
  }
  if ((int)param_2 < *(int *)(lVar10 + 0x3d4)) {
    iVar7 = *(int *)(lVar10 + 0x2e8);
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = (int)param_2 / iVar7;
    }
    iVar11 = *(int *)(lVar10 + 0x430) - *(int *)(lVar10 + 0x438);
    if ((*(byte *)(lVar10 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(lVar10 + 0x434);
      uVar8 = 0;
      if ((int)uVar2 < iVar11) {
        uVar8 = ~uVar2;
      }
      if (iVar11 < 0) {
        uVar8 = uVar2 + 1;
      }
      iVar11 = uVar8 + iVar11;
    }
    uVar8 = (param_2 - iVar4 * iVar7) + (iVar4 - iVar11) * iVar7;
    uVar2 = *(uint *)(lVar10 + 0x208);
    bVar5 = (int)uVar8 < 0;
    bVar6 = (int)uVar2 <= (int)uVar8;
    if (bVar5 || bVar6) {
      uVar8 = 0xffffffff;
    }
    if ((((bVar5 || bVar6) || (int)uVar2 <= (int)uVar8) || uVar2 < uVar8) ||
        ((!bVar5 && !bVar6) && (int)uVar8 < (int)uVar2) && uVar2 == uVar8) goto LAB_02d5aee0;
    puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x210) + (ulong)uVar8 * 8);
  }
  else {
LAB_02d5aee0:
    puVar12 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90);
  puVar1 = PTR_DAT_04bb3170;
  if ((uVar9 & 1) == 0) {
    return;
  }
  FUN_007ef010(local_3c,PTR_DAT_04bb3170);
  local_34 = 0x52;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1750))) {
    iVar7 = **(int **)(*(long *)(param_1 + 0x1758) + (ulong)param_2 * 8);
    if (iVar7 == -1) {
      bVar6 = false;
      lVar10 = puVar12[0x43];
      goto joined_r0x02d5b014;
    }
    FUN_0344d0c0(local_3c,iVar7,0);
    uVar3 = *(ushort *)puVar1;
    if (local_3c[0] != uVar3) {
      local_34 = CONCAT22(local_34._2_2_,uVar3);
      uVar8 = FUN_007ef180(local_3c);
      FUN_0344d0c0(&local_34,local_3c[0] & 0x7f,uVar8 & 1);
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      }
      FUN_007ef010(&local_38,puVar1);
      bVar6 = (local_34 & 0xffff) == (uint)(ushort)local_38;
      lVar10 = puVar12[0x43];
      goto joined_r0x02d5b014;
    }
  }
  bVar6 = false;
  lVar10 = puVar12[0x43];
joined_r0x02d5b014:
  if (lVar10 != 0) {
    local_34 = 0;
    local_38 = 6;
    uVar9 = (**(code **)(*(long *)(lVar10 + 0x150) + 0x10))();
    if (bVar6) {
      if ((uVar9 & 1) != 0) {
        FUN_03d5d6a4(puVar12,6);
      }
    }
    else if ((uVar9 & 1) == 0) {
      FUN_03d5d280(puVar12,6);
      *(undefined1 *)((long)puVar12 + 0x313) = 1;
    }
  }
  return;
}

