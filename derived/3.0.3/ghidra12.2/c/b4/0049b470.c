
int FUN_0049b470(long param_1,byte *param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar6 = FUN_0049c130();
  lVar14 = *(long *)(param_1 + 8);
  if (iVar6 != *(int *)(lVar14 + 0xe0)) {
    return iVar6;
  }
  plVar1 = (long *)(lVar14 + 0xd8);
  if ((((*param_2 >> 3 & 1) == 0) ||
      (plVar8 = (long *)FUN_00426db0(param_2,8), plVar8 == (long *)0x0)) ||
     (local_78 = (undefined8 *)*plVar8, local_78 == (undefined8 *)0x0)) {
    lVar15 = *(long *)(param_1 + 8);
    local_78 = &DAT_0407ebb1;
    lVar9 = FUN_0049b3d0(lVar15 + 0x30,&local_78);
    lVar15 = *(long *)(lVar15 + 0x30);
    uVar10 = *(uint *)(lVar14 + 0xe0);
    if (uVar10 == (*(uint *)(lVar14 + 0xe4) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x18);
      uVar10 = *(uint *)(lVar14 + 0xe0);
    }
    puVar11 = (undefined4 *)(*(long *)(lVar14 + 0xd8) + (long)(int)uVar10 * 0x18);
    *puVar11 = (int)((ulong)(lVar9 - lVar15) >> 3);
    puVar11[1] = 1;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
    *(uint *)(lVar14 + 0xe0) = uVar10 + 1;
    return iVar6;
  }
  lVar15 = *(long *)(param_1 + 8);
  lVar9 = FUN_0049b3d0(lVar15 + 0x30,&local_78);
  lVar15 = *(long *)(lVar15 + 0x30);
  uVar10 = *(uint *)(lVar14 + 0xe0);
  if (uVar10 == (*(uint *)(lVar14 + 0xe4) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,plVar1,0x18);
    uVar10 = *(uint *)(lVar14 + 0xe0);
  }
  puVar11 = (undefined4 *)(*(long *)(lVar14 + 0xd8) + (long)(int)uVar10 * 0x18);
  *puVar11 = (int)((ulong)(lVar9 - lVar15) >> 3);
  puVar11[1] = 1;
  *(undefined8 *)(puVar11 + 2) = 0;
  *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
  *(uint *)(lVar14 + 0xe0) = uVar10 + 1;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x8000000000000000;
  if ((((char)param_2[1] < '\0') &&
      (plVar8 = (long *)FUN_00426db0(param_2,0x8000), plVar8 != (long *)0x0)) &&
     (lVar14 = *plVar8, lVar14 != 0)) {
    uVar3 = *(ushort *)(lVar14 + 8);
    uVar12 = (ulong)uVar3;
    if ((local_70._4_4_ & 0x3fffffff) < (uint)uVar3) {
      local_78 = (undefined8 *)
                 FUN_00426720(PTR_DAT_048607b8,uVar12,0x10,local_78,local_70 & 0xffffffff,
                              (long)&local_70 + 4);
    }
    else if (uVar3 == 0) goto LAB_0049b6f8;
    puVar4 = PTR_DAT_048607b8;
    puVar16 = (undefined8 *)(lVar14 + 0x18);
    do {
      uVar10 = (uint)local_70;
      if ((uint)local_70 == (local_70._4_4_ & 0x3fffffff)) {
        FUN_00426990(puVar4,&local_78,0x10);
        uVar10 = (uint)local_70;
      }
      puVar5 = local_78;
      local_70 = CONCAT44(local_70._4_4_,uVar10 + 1);
      lVar9 = *(long *)(param_1 + 8);
      local_68 = *puVar16;
      lVar14 = FUN_0049b3d0(lVar9 + 0x30,&local_68);
      *(long *)((long)puVar5 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar10 << 4))
           = (lVar14 - *(long *)(lVar9 + 0x30)) * 0x20000000 >> 0x20;
      if (*(char *)*puVar16 == 't') {
        iVar7 = FUN_0049b470(param_1,puVar16[-1]);
        lVar14 = (long)iVar7;
      }
      else {
        lVar14 = puVar16[-1];
      }
      puVar16 = puVar16 + 2;
      uVar12 = uVar12 - 1;
      puVar5[(long)(int)uVar10 * 2 + 1] = lVar14;
    } while (uVar12 != 0);
  }
LAB_0049b6f8:
  uVar12 = local_70;
  puVar4 = PTR_DAT_048607b8;
  ppuVar2 = (undefined8 **)(*plVar1 + (long)iVar6 * 0x18 + 8);
  if (&local_78 == ppuVar2) {
    uVar10 = local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < (long)uVar12) && (local_78 != (undefined8 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_78,0x10,uVar10 & 0x3fffffff);
    }
  }
  else {
    lVar14 = *plVar1 + (long)iVar6 * 0x18;
    puVar13 = (uint *)(lVar14 + 0x14);
    puVar11 = (undefined4 *)(lVar14 + 0x10);
    *puVar11 = 0;
    if ((-1 < (int)*puVar13) && (*ppuVar2 != (undefined8 *)0x0)) {
      FUN_00421f90(puVar4,*ppuVar2,0x10,*puVar13 & 0x3fffffff);
    }
    *ppuVar2 = (undefined8 *)0x0;
    *puVar11 = 0;
    *puVar13 = 0x80000000;
    if ((long)local_70 < 0) {
      FUN_00426620(puVar4,&local_78,0x10);
    }
    *ppuVar2 = local_78;
    *puVar11 = (uint)local_70;
    *puVar13 = local_70._4_4_;
  }
  return iVar6;
}

