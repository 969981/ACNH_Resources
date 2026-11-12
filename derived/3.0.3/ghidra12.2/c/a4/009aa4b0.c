
void FUN_009aa4b0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined4 local_68;
  undefined4 uStack_64;
  
  piVar12 = (int *)(**(code **)(*param_1 + 0x10))();
  if (0 < *piVar12) {
    lVar14 = 0;
    puVar15 = *(undefined8 **)(piVar12 + 4);
    do {
      puVar16 = *(undefined8 **)(*(long *)(piVar12 + 2) + lVar14 * 8);
      lVar14 = lVar14 + 1;
      *puVar16 = puVar15;
      *(undefined8 **)(piVar12 + 4) = puVar16;
      puVar15 = puVar16;
    } while (lVar14 < *piVar12);
  }
  *piVar12 = 0;
  lVar14 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar19 = 0;
  do {
    if ((*(uint *)(lVar14 + (uVar19 >> 5) * 4) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)
    goto LAB_009aa564;
    uVar11 = (uint)uVar19 + 1;
    uVar19 = (ulong)uVar11;
  } while (uVar11 != 15000);
  uVar19 = 0;
LAB_009aa564:
  lVar13 = (**(code **)(*param_2 + 0x20))(param_2);
  puVar10 = PTR_DAT_04bbfe58;
  puVar9 = PTR_DAT_04bb43c0;
  puVar8 = PTR_DAT_04bb37e0;
  iVar17 = 15000;
  do {
    if ((*(uint *)(lVar13 + (ulong)(iVar17 - 1U >> 5) * 4) >> (ulong)(iVar17 - 1U & 0x1f) & 1) != 0)
    break;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  iVar18 = (int)uVar19;
joined_r0x009aa5a0:
  if (iVar17 == iVar18) {
    return;
  }
  lVar13 = *(long *)puVar9;
  puVar2 = (undefined4 *)(puVar10 + uVar19 * 8);
  if (0x752 < (uint)(uVar19 >> 3)) {
    puVar2 = (undefined4 *)puVar10;
  }
  puVar3 = (undefined4 *)puVar8;
  if ((uint)uVar19 < 0x3a99) {
    puVar3 = puVar2;
  }
  local_68 = *puVar3;
  uStack_64 = puVar3[1];
  uVar11 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar9 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      uVar7 = *(undefined2 *)puVar3;
      uVar5 = *(undefined1 *)((long)puVar3 + 2);
      uVar6 = *(undefined1 *)((long)puVar3 + 3);
      uVar4 = puVar3[1];
      piVar12 = (int *)(**(code **)(*param_1 + 0x10))();
      if (*piVar12 < piVar12[1]) {
        puVar15 = *(undefined8 **)(piVar12 + 4);
        if (puVar15 != (undefined8 *)0x0) {
          *(undefined8 *)(piVar12 + 4) = *puVar15;
        }
        *(undefined2 *)puVar15 = uVar7;
        *(undefined1 *)((long)puVar15 + 2) = uVar5;
        *(undefined1 *)((long)puVar15 + 3) = uVar6;
        *(undefined4 *)((long)puVar15 + 4) = uVar4;
        if (*piVar12 < piVar12[1]) {
          *(undefined8 **)(*(long *)(piVar12 + 2) + (long)*piVar12 * 8) = puVar15;
          *piVar12 = *piVar12 + 1;
        }
      }
    }
  }
  do {
    uVar11 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar11;
    if (0x752 < uVar11 >> 3) {
      uVar11 = 0x3a95;
      goto LAB_009aa700;
    }
  } while ((*(uint *)(lVar14 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0);
  goto LAB_009aa5e8;
  while( true ) {
    if ((*(uint *)(lVar14 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_009aa5e4;
    uVar11 = uVar11 - 3;
    if (uVar11 == 0xfffffffd) break;
LAB_009aa700:
    uVar1 = uVar11 + 2;
    if (((*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar11 + 1,
       (*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar11 = uVar1;
LAB_009aa5e4:
      uVar19 = (ulong)(uVar11 + 1);
      goto LAB_009aa5e8;
    }
  }
  uVar19 = 0;
LAB_009aa5e8:
  iVar18 = (int)uVar19;
  goto joined_r0x009aa5a0;
}

