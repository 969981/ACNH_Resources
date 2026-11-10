
void FUN_001cbcc0(long param_1,long *param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined *local_80;
  undefined2 local_78;
  undefined *local_70;
  undefined2 local_68;
  
  puVar7 = PTR_DAT_04bcc320;
  uVar18 = param_4 & 0xff;
  local_70 = PTR_DAT_04bcc320 + 0x10;
  local_68 = *(undefined2 *)(param_3 + 8);
  lVar12 = FUN_001cc650(*(undefined8 *)(*(long *)(param_1 + 0xe0) + uVar18 * 8),&local_70);
  if ((lVar12 == 0) ||
     (uVar13 = FUN_001c5a20(*(long *)(param_1 + 8) + 0x40,lVar12), puVar9 = PTR_DAT_04bcbb78,
     puVar8 = PTR_DAT_04bcb910, (uVar13 & 1) == 0)) {
    *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x420) + 1;
    return;
  }
  uVar3 = *(ushort *)(lVar12 + 0x200);
  uVar16 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001cbdcc:
    uVar13 = *(ulong *)(puVar9 + (ulong)uVar16 * 0x2a8 + 0x100);
    pcVar6 = PTR_DAT_04bcb908;
  }
  else {
    puVar14 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar14 == 0) goto LAB_001cbdcc;
    uVar13 = *(ulong *)(*(long *)(puVar9 + (ulong)uVar16 * 0x2a8 + 0x10) + (ulong)*puVar14 * 0x148 +
                       0xe8);
    pcVar6 = PTR_DAT_04bcb908;
  }
  PTR_DAT_04bcb908 = pcVar6;
  if (uVar3 < uVar13) {
    uVar13 = *param_2 - *(long *)(lVar12 + 0x1d0);
    if (uVar13 < 0xea61) {
      iVar15 = (int)uVar13;
      if (*(char *)(param_1 + 0x134) == '\0') {
        iVar5 = iVar15 - (*(uint *)(param_1 + 0x128) >> 3);
        uVar16 = iVar5 + *(uint *)(param_1 + 0x128);
        iVar1 = -iVar5;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        *(uint *)(param_1 + 0x128) = uVar16;
        uVar17 = (*(uint *)(param_1 + 300) - (*(uint *)(param_1 + 300) >> 2)) + iVar1;
      }
      else {
        uVar16 = iVar15 << 3;
        *(undefined1 *)(param_1 + 0x134) = 0;
        uVar17 = iVar15 << 1;
        *(uint *)(param_1 + 0x128) = uVar16;
      }
      *(uint *)(param_1 + 300) = uVar17;
      *(int *)(param_1 + 0x130) = iVar15;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x128);
      uVar17 = *(uint *)(param_1 + 300);
    }
    uVar17 = uVar17 & 0xfffffffc;
    if (uVar17 < 0x22) {
      uVar17 = 0x21;
    }
    uVar17 = uVar17 + (uVar16 >> 3);
    if (*(uint *)(param_1 + 0x498) < uVar17) {
      *(uint *)(param_1 + 0x498) = uVar17;
    }
    if (uVar17 < *(uint *)(param_1 + 0x49c)) {
      *(uint *)(param_1 + 0x49c) = uVar17;
    }
  }
  uVar13 = *(ulong *)(lVar12 + 0x1d0);
  local_80 = puVar7 + 0x10;
  local_78 = *(undefined2 *)(param_3 + 8);
  FUN_001cc7a0(*(undefined8 *)(*(long *)(param_1 + 0xe0) + uVar18 * 8),&local_80,param_1 + 0x4b0);
  puVar7 = PTR_DAT_04bcb900;
  lVar12 = *(long *)(*(long *)(param_1 + 0xe0) + uVar18 * 8);
  plVar19 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*pcVar6 != '\0') {
    puVar14 = (uint *)FUN_03876070(*(undefined8 *)puVar8);
    uVar16 = *puVar14;
    if (uVar16 != 0) {
      lVar2 = **(long **)(puVar7 + 0xa0);
      if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar16) goto LAB_001cc064;
      plVar19 = (long *)(*(long *)(lVar2 + (ulong)uVar16 * 8) + 0x20);
    }
  }
  (**(code **)(*(long *)(*(long *)(*(long *)(*plVar19 + 0x10) + 0x10) + 0x78) + 0x10))();
  plVar19 = *(long **)(lVar12 + 8);
  if (((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar18 * 8) + 0x10) != plVar19) &&
     (lVar12 = plVar19[6], lVar12 != 0)) {
    sVar4 = *(short *)(param_3 + 8);
    iVar15 = 0;
    while ((short)((*(short *)(lVar12 + 0x70) - sVar4) + 2) < 1) {
      if ((*(ulong *)(lVar12 + 0x1d0) < uVar13) && (*(ushort *)(lVar12 + 0x200) < 5)) {
        FUN_001c5a20(*(long *)(param_1 + 8) + 0x40,lVar12);
        FUN_001c6660(param_1,lVar12);
        iVar15 = iVar15 + 1;
      }
      plVar10 = (long *)plVar19[1];
      plVar20 = plVar19;
      if ((long *)plVar19[1] == (long *)0x0) {
        do {
          plVar19 = (long *)plVar20[2];
          bVar11 = (long *)*plVar19 != plVar20;
          plVar20 = plVar19;
        } while (bVar11);
      }
      else {
        do {
          plVar19 = plVar10;
          plVar10 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
      if ((((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar18 * 8) + 0x10) == plVar19) ||
          (1 < iVar15)) || (lVar12 = plVar19[6], lVar12 == 0)) break;
    }
  }
  plVar19 = (long *)(puVar7 + 0x28);
  if (*pcVar6 != '\0') {
    puVar14 = (uint *)FUN_03876070(*(undefined8 *)puVar8);
    uVar16 = *puVar14;
    if (uVar16 != 0) {
      lVar12 = **(long **)(puVar7 + 0xa0);
      if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar12 >> 3) <= (ulong)uVar16) {
LAB_001cc064:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar19 = (long *)(*(long *)(lVar12 + (ulong)uVar16 * 8) + 0x20);
    }
  }
  (**(code **)(*(long *)(*(long *)(*(long *)(*plVar19 + 0x10) + 0x10) + 0x78) + 0x20))();
  FUN_001c95ac(param_1,param_4 & 0xffffffff);
  return;
}

