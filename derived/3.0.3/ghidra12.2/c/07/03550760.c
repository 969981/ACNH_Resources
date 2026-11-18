
void FUN_03550760(long param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  iVar4 = *(int *)(puVar12 + 7);
  if ((((((DAT_05ac0a90 == iVar4) || (DAT_05ac0aa0 == iVar4)) || (DAT_05ac0ab0 == iVar4)) ||
       ((DAT_05ac0ac0 == iVar4 || (DAT_05ac0ad0 == iVar4)))) ||
      ((DAT_05ac0ae0 == iVar4 || ((DAT_05ac0af0 == iVar4 || (DAT_05ac0b00 == iVar4)))))) ||
     ((DAT_05ac0b10 == iVar4 || (DAT_05ac0b20 == iVar4)))) {
    if (*(int *)(param_1 + 0x10a510) < 1) {
      return;
    }
    FUN_0354bdb0(auStack_5c,param_1,param_2);
    local_38 = local_58;
    uStack_34 = uStack_54;
    iVar4 = *(int *)(param_1 + 0x10a510);
    if (iVar4 == 0) {
      return;
    }
    iVar13 = 0;
    do {
      iVar10 = 0;
      if (*(int *)(param_1 + 0x10a508) <= iVar13 + *(int *)(param_1 + 0x10a50c)) {
        iVar10 = *(int *)(param_1 + 0x10a508);
      }
      plVar11 = (long *)(*(long *)(param_1 + 0x10a500) +
                        (long)(iVar13 + (*(int *)(param_1 + 0x10a50c) - iVar10)) * 0x778);
      lVar6 = (**(code **)(*plVar11 + 0x20))(plVar11);
      uVar5 = FUN_0277d6c4(&local_38);
      if (((uVar5 >> 3 & 0x1fff) < 0x753) &&
         ((*(uint *)(lVar6 + (ulong)((uVar5 & 0xffff) >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) != 0)
         ) {
        *(int *)(plVar11 + 0xee) = (int)plVar11[0xee] + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if (lVar6 == 0) {
    return;
  }
  FUN_0354bdb0(auStack_5c,param_1,param_2);
  local_38 = local_58;
  uStack_34 = uStack_54;
  uVar5 = *(uint *)(lVar6 + 0x40);
  uVar7 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    uVar14 = 0;
    do {
      if (uVar14 < (uVar7 & 0xffffffff)) {
        lVar8 = *(long *)(*(long *)(lVar6 + 0x48) + uVar14 * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar7 = FUN_0277d7b4(lVar8 + 8,&local_38);
      if ((uVar7 & 1) != 0) {
        *(byte *)(param_1 + 0x10c2f8) =
             *(byte *)(param_1 + 0x10c2f8) | (byte)(1 << (ulong)((uint)uVar14 & 0x1f));
      }
      uVar5 = *(uint *)(lVar6 + 0x40);
      uVar7 = (ulong)(int)uVar5;
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)uVar7);
  }
  uVar9 = *(uint *)(param_1 + 0x1c288);
  if ((int)uVar9 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c270) <= (int)uVar9) {
    return;
  }
  lVar6 = param_1 + 0x1c260;
  uVar2 = uVar9 + 1 & 3;
  if (2 < uVar9) {
    uVar9 = uVar9 + 1 & 0xfffffffc;
    do {
      uVar9 = uVar9 - 4;
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
    } while (uVar9 != 0);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar6 = *(long *)(lVar6 + 8);
  }
  if (lVar6 == 0) {
    return;
  }
  lVar6 = lVar6 - *(int *)(param_1 + 0x1c274);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x270) != 0x77 || (int)uVar5 <= param_2) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (param_2 < *(int *)(lVar6 + 0x3d4)) {
    iVar4 = *(int *)(lVar6 + 0x2e8);
    iVar13 = 0;
    if (iVar4 != 0) {
      iVar13 = param_2 / iVar4;
    }
    iVar10 = *(int *)(lVar6 + 0x430) - *(int *)(lVar6 + 0x438);
    if ((*(byte *)(lVar6 + 1000) >> 1 & 1) != 0) {
      uVar9 = *(uint *)(lVar6 + 0x434);
      uVar5 = 0;
      if ((int)uVar9 < iVar10) {
        uVar5 = ~uVar9;
      }
      if (iVar10 < 0) {
        uVar5 = uVar9 + 1;
      }
      iVar10 = uVar5 + iVar10;
    }
    uVar5 = (param_2 - iVar13 * iVar4) + (iVar13 - iVar10) * iVar4;
    uVar9 = *(uint *)(lVar6 + 0x208);
    bVar3 = (int)uVar5 < 0;
    bVar1 = (int)uVar9 <= (int)uVar5;
    if (bVar3 || bVar1) {
      uVar5 = 0xffffffff;
    }
    if ((((!bVar3 && !bVar1) && (int)uVar5 < (int)uVar9) && uVar5 <= uVar9) &&
        (((bVar3 || bVar1) || (int)uVar9 <= (int)uVar5) || uVar9 != uVar5)) {
      puVar12 = *(undefined8 **)(*(long *)(lVar6 + 0x210) + (ulong)uVar5 * 8);
      goto LAB_03550aec;
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_03550aec:
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar12 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90), (uVar7 & 1) != 0)) {
    FUN_030bffe0(puVar12,1);
  }
  return;
}

