
void FUN_033fec90(int *param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  ushort uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long *plVar17;
  uint uVar18;
  int *piVar19;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  if (param_1 == (int *)0x0) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_033fed04:
    if (7 < *pbVar12) {
LAB_033fed10:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar6 = *(byte *)(lVar13 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar16 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar16 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar16 & 8) != 0) {
            pbVar12 = (byte *)(lVar13 + 0x471);
          }
        }
        local_24[0] = *pbVar12;
        if (local_24[0] < 8) goto LAB_033fed90;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_033fed04;
      }
      goto LAB_033fed10;
    }
  }
  local_24[0] = *pbVar12;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_033fed90:
  bVar8 = (param_2 & 1) == 0;
  pcStack_48 = "WHEREAREN_Prev_Unlock_EnvSound_01";
  if (bVar8) {
    pcStack_48 = "WHEREAREN_Unlock_EnvSound_01";
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcVar3 = "WHEREAREN_Prev_Unlock_EnvSound_02";
  if (bVar8) {
    pcVar3 = "WHEREAREN_Unlock_EnvSound_02";
  }
  pcVar4 = "WHEREAREN_Prev_Unlock_EnvSound_03";
  if (bVar8) {
    pcVar4 = "WHEREAREN_Unlock_EnvSound_03";
  }
  local_50 = puVar1;
  iVar9 = FUN_0274bce0(local_24,&local_50);
  local_50 = puVar1;
  pcStack_48 = pcVar3;
  iVar10 = FUN_0274bce0(local_24,&local_50);
  uVar2 = (uint)(iVar9 != 0) << 1;
  if (iVar10 != 0) {
    uVar2 = (uint)(iVar9 != 0) << 1 | 4;
  }
  local_50 = puVar1;
  pcStack_48 = pcVar4;
  iVar9 = FUN_0274bce0(local_24,&local_50);
  if (iVar9 != 0) {
    uVar2 = uVar2 | 8;
  }
  uVar7 = uVar2 - (uVar2 >> 1 & 0x55);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  if (0 < *param_1) {
    lVar13 = 0;
    puVar14 = *(undefined8 **)(param_1 + 4);
    do {
      puVar15 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar13 * 8);
      lVar13 = lVar13 + 1;
      *puVar15 = puVar14;
      *(undefined8 **)(param_1 + 4) = puVar15;
      puVar14 = puVar15;
    } while (lVar13 < *param_1);
  }
  *param_1 = 0;
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar9 != 0))
  {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  iVar9 = *(int *)PTR_DAT_04bbddf8;
  if (iVar9 != 0) {
    pbVar12 = PTR_DAT_04bbde00;
    puVar16 = (uint *)PTR_DAT_04bbddf8;
    plVar17 = (long *)PTR_DAT_04bb26a8;
    iVar10 = 0;
    do {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar10);
      lVar13 = *plVar17;
      if ((*pbVar12 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04bbde00);
        pbVar12 = PTR_DAT_04bbde00;
        puVar16 = (uint *)PTR_DAT_04bbddf8;
        plVar17 = (long *)PTR_DAT_04bb26a8;
        if (iVar11 != 0) {
          FUN_016cb6ac(PTR_DAT_04bbddf8);
          __cxa_guard_release(PTR_DAT_04bbde00);
          pbVar12 = PTR_DAT_04bbde00;
          puVar16 = (uint *)PTR_DAT_04bbddf8;
          plVar17 = (long *)PTR_DAT_04bb26a8;
        }
      }
      iVar11 = 0x17;
      lVar13 = *(long *)(lVar13 + 0x122a60);
      uVar18 = (uint)local_50;
      if (*puVar16 <= (uint)local_50) {
        uVar18 = 0;
      }
      if (lVar13 != 0) {
        uVar5 = *(ushort *)
                 (*(long *)(puVar16 + 2) +
                 (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2));
        do {
          while (uVar5 < *(ushort *)(lVar13 + 0x20)) {
            lVar13 = *(long *)(lVar13 + 8);
            if (lVar13 == 0) goto LAB_033fef68;
          }
          if (uVar5 <= *(ushort *)(lVar13 + 0x20)) {
            uVar18 = (uint)*(byte *)(lVar13 + 0x23);
            goto LAB_033fef74;
          }
          lVar13 = *(long *)(lVar13 + 0x10);
        } while (lVar13 != 0);
      }
LAB_033fef68:
      uVar18 = 0xffffffff;
LAB_033fef74:
      if ((((uVar2 | (uVar7 + (uVar7 >> 0x10) & 0x3f) != 0) &
           1 << (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU) & 0x1f)) != 0) &&
         (*param_1 < param_1[1])) {
        piVar19 = *(int **)(param_1 + 4);
        if (piVar19 != (int *)0x0) {
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)piVar19;
        }
        *piVar19 = iVar10;
        if (*param_1 < param_1[1]) {
          *(int **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = piVar19;
          *param_1 = *param_1 + 1;
        }
      }
      if (iVar10 < 0x18) {
        iVar11 = iVar10 + 1;
      }
      iVar10 = iVar11;
    } while (iVar11 != iVar9);
  }
  return;
}

