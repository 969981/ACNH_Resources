
void FUN_039071d0(long param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  ushort uVar19;
  int iVar20;
  long lVar21;
  long local_268 [32];
  long local_168 [33];
  
  bVar4 = *(byte *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar4 | 2;
  if ((bVar4 & 1) == 0) goto LAB_039073d0;
  pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x58);
  nn::os::LockMutex(pMVar2);
  lVar10 = *(long *)(param_1 + 8);
  lVar13 = *(long *)(lVar10 + 0x18);
  iVar8 = *(int *)(lVar10 + 0x30);
  if (iVar8 == 0) {
LAB_03907358:
    lVar10 = *(long *)(lVar13 + 0x88);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x48) = 0;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      *(long *)(param_1 + 0x88) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0x98);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x48) = 0;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      *(long *)(param_1 + 0x98) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0xa8);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x48) = 0;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      *(long *)(param_1 + 0xa8) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0xb8);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x48) = 0;
      *(undefined4 *)(lVar10 + 0x58) = 0;
LAB_039073a4:
      *(long *)(param_1 + 0xb8) = lVar10;
    }
  }
  else {
    lVar21 = *(long *)(lVar10 + 0x38);
    iVar20 = 0;
    uVar15 = (uint)*(ushort *)(param_1 + 0x1e);
    plVar16 = local_168;
    plVar11 = local_268;
    do {
      plVar14 = (long *)(lVar21 + (long)iVar20 * 0x38);
      uVar5 = 0;
      if (*(ushort *)(plVar14 + 6) != 0) {
        uVar5 = (int)uVar15 / (int)(uint)*(ushort *)(plVar14 + 6);
      }
      (**(code **)(*plVar14 + 0x18))(plVar14);
      *plVar16 = plVar14[1];
      uVar3 = uVar5;
      if (*(uint *)(plVar14 + 4) <= uVar5) {
        uVar3 = 0;
      }
      plVar1 = (long *)(plVar14[5] + (long)(int)uVar3 * 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      *plVar11 = plVar1[1];
      uVar15 = uVar15 - uVar5 * *(ushort *)(plVar14 + 6);
      iVar20 = iVar20 + 1;
      plVar16 = plVar16 + 1;
      plVar11 = plVar11 + 1;
    } while (iVar8 != iVar20);
    uVar9 = (ulong)*(uint *)(lVar10 + 0x30);
    if ((int)*(uint *)(lVar10 + 0x30) < 1) goto LAB_03907358;
    lVar10 = *(long *)(lVar13 + 0x88);
    if (lVar10 != 0) {
      iVar8 = 0;
      plVar16 = local_168;
      *(undefined4 *)(lVar10 + 0x48) = 0;
      plVar11 = local_268;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      uVar12 = uVar9;
      do {
        if (*(int *)(lVar10 + 0x48) < *(int *)(lVar10 + 0x4c)) {
          *(long *)(*(long *)(lVar10 + 0x50) + (long)*(int *)(lVar10 + 0x48) * 8) = *plVar16;
          *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
          iVar8 = *(int *)(lVar10 + 0x58);
        }
        if (iVar8 < *(int *)(lVar10 + 0x5c)) {
          *(long *)(*(long *)(lVar10 + 0x60) + (long)iVar8 * 8) = *plVar11;
          iVar8 = *(int *)(lVar10 + 0x58) + 1;
          *(int *)(lVar10 + 0x58) = iVar8;
        }
        plVar16 = plVar16 + 1;
        uVar12 = uVar12 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar12 != 0);
      *(long *)(param_1 + 0x88) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0x98);
    if (lVar10 != 0) {
      iVar8 = 0;
      plVar16 = local_168;
      *(undefined4 *)(lVar10 + 0x48) = 0;
      plVar11 = local_268;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      uVar12 = uVar9;
      do {
        if (*(int *)(lVar10 + 0x48) < *(int *)(lVar10 + 0x4c)) {
          *(long *)(*(long *)(lVar10 + 0x50) + (long)*(int *)(lVar10 + 0x48) * 8) = *plVar16;
          *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
          iVar8 = *(int *)(lVar10 + 0x58);
        }
        if (iVar8 < *(int *)(lVar10 + 0x5c)) {
          *(long *)(*(long *)(lVar10 + 0x60) + (long)iVar8 * 8) = *plVar11;
          iVar8 = *(int *)(lVar10 + 0x58) + 1;
          *(int *)(lVar10 + 0x58) = iVar8;
        }
        plVar16 = plVar16 + 1;
        uVar12 = uVar12 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar12 != 0);
      *(long *)(param_1 + 0x98) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0xa8);
    if (lVar10 != 0) {
      iVar8 = 0;
      plVar16 = local_168;
      *(undefined4 *)(lVar10 + 0x48) = 0;
      plVar11 = local_268;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      uVar12 = uVar9;
      do {
        if (*(int *)(lVar10 + 0x48) < *(int *)(lVar10 + 0x4c)) {
          *(long *)(*(long *)(lVar10 + 0x50) + (long)*(int *)(lVar10 + 0x48) * 8) = *plVar16;
          *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
          iVar8 = *(int *)(lVar10 + 0x58);
        }
        if (iVar8 < *(int *)(lVar10 + 0x5c)) {
          *(long *)(*(long *)(lVar10 + 0x60) + (long)iVar8 * 8) = *plVar11;
          iVar8 = *(int *)(lVar10 + 0x58) + 1;
          *(int *)(lVar10 + 0x58) = iVar8;
        }
        plVar16 = plVar16 + 1;
        uVar12 = uVar12 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar12 != 0);
      *(long *)(param_1 + 0xa8) = lVar10;
    }
    lVar10 = *(long *)(lVar13 + 0xb8);
    if (lVar10 != 0) {
      iVar8 = 0;
      plVar16 = local_168;
      *(undefined4 *)(lVar10 + 0x48) = 0;
      plVar11 = local_268;
      *(undefined4 *)(lVar10 + 0x58) = 0;
      do {
        if (*(int *)(lVar10 + 0x48) < *(int *)(lVar10 + 0x4c)) {
          *(long *)(*(long *)(lVar10 + 0x50) + (long)*(int *)(lVar10 + 0x48) * 8) = *plVar16;
          *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
          iVar8 = *(int *)(lVar10 + 0x58);
        }
        if (iVar8 < *(int *)(lVar10 + 0x5c)) {
          *(long *)(*(long *)(lVar10 + 0x60) + (long)iVar8 * 8) = *plVar11;
          iVar8 = *(int *)(lVar10 + 0x58) + 1;
          *(int *)(lVar10 + 0x58) = iVar8;
        }
        plVar16 = plVar16 + 1;
        uVar9 = uVar9 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar9 != 0);
      goto LAB_039073a4;
    }
  }
  nn::os::UnlockMutex(pMVar2);
  (**(code **)PTR_DAT_04bcf5e0)(param_1 + 0xc0);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
LAB_039073d0:
  (*DAT_04c61f40)(param_1 + 0xc0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  plVar16 = *(long **)(param_1 + 0x80);
  if (plVar16 == (long *)0x0) {
    uVar15 = 0;
    uVar18 = 0;
    plVar16 = *(long **)(param_1 + 0x90);
  }
  else {
    local_168[0] = *plVar16 + *(long *)(param_1 + 0x140);
    local_168[1] = *(undefined8 *)((long)plVar16 + 0xc);
    (**(code **)(PTR_PTR_04c4ba70 + 0x18))(&PTR_PTR_04c4ba70);
    puVar6 = PTR_s_RegisterUBO_04c4ba78;
    uVar9 = (ulong)*(uint *)((long)plVar16 + 0x14);
    if (*(uint *)((long)plVar16 + 0x14) != 0) {
      puVar17 = (undefined8 *)plVar16[3];
      do {
        iVar8 = strcmp((char *)*puVar17,puVar6);
        if (iVar8 == 0) {
          uVar18 = *(undefined4 *)((long)puVar17 + 0xc);
          goto LAB_03907488;
        }
        puVar17 = puVar17 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar18 = 0;
LAB_03907488:
    uVar15 = 1;
    plVar16 = *(long **)(param_1 + 0x90);
  }
  if (plVar16 == (long *)0x0) {
    plVar16 = *(long **)(param_1 + 0xa0);
    uVar5 = uVar15;
  }
  else {
    uVar5 = uVar15 | 2;
    uVar19 = (ushort)uVar5;
    local_168[(ulong)uVar15 * 2] = *plVar16 + *(long *)(param_1 + 0x140);
    local_168[(ulong)uVar15 * 2 + 1] = *(long *)((long)plVar16 + 0xc);
    (**(code **)(PTR_PTR_04c4ba70 + 0x18))(&PTR_PTR_04c4ba70);
    puVar6 = PTR_s_RegisterUBO_04c4ba78;
    uVar9 = (ulong)*(uint *)((long)plVar16 + 0x14);
    if (*(uint *)((long)plVar16 + 0x14) != 0) {
      puVar17 = (undefined8 *)plVar16[3];
      do {
        iVar8 = strcmp((char *)*puVar17,puVar6);
        if (iVar8 == 0) {
          uVar18 = *(undefined4 *)((long)puVar17 + 0xc);
          plVar16 = *(long **)(param_1 + 0xa0);
          uVar15 = uVar15 + 1;
          goto joined_r0x03907578;
        }
        puVar17 = puVar17 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    plVar16 = *(long **)(param_1 + 0xa0);
    uVar15 = uVar15 + 1;
  }
  uVar19 = (ushort)uVar5;
joined_r0x03907578:
  if (plVar16 != (long *)0x0) {
    uVar19 = uVar19 | 4;
    uVar9 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    local_168[uVar9 * 2] = *plVar16 + *(long *)(param_1 + 0x140);
    local_168[uVar9 * 2 + 1] = *(long *)((long)plVar16 + 0xc);
    (**(code **)(PTR_PTR_04c4ba70 + 0x18))(&PTR_PTR_04c4ba70);
    puVar6 = PTR_s_RegisterUBO_04c4ba78;
    uVar9 = (ulong)*(uint *)((long)plVar16 + 0x14);
    if (*(uint *)((long)plVar16 + 0x14) != 0) {
      puVar17 = (undefined8 *)plVar16[3];
      do {
        iVar8 = strcmp((char *)*puVar17,puVar6);
        if (iVar8 == 0) {
          uVar18 = *(undefined4 *)((long)puVar17 + 0xc);
          break;
        }
        puVar17 = puVar17 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  plVar16 = *(long **)(param_1 + 0xb0);
  if (plVar16 != (long *)0x0) {
    uVar19 = uVar19 | 0x20;
    uVar9 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    local_168[uVar9 * 2] = *plVar16 + *(long *)(param_1 + 0x140);
    local_168[uVar9 * 2 + 1] = *(long *)((long)plVar16 + 0xc);
    (**(code **)(PTR_PTR_04c4ba70 + 0x18))(&PTR_PTR_04c4ba70);
    puVar6 = PTR_s_RegisterUBO_04c4ba78;
    uVar9 = (ulong)*(uint *)((long)plVar16 + 0x14);
    if (*(uint *)((long)plVar16 + 0x14) != 0) {
      puVar17 = (undefined8 *)plVar16[3];
      do {
        iVar8 = strcmp((char *)*puVar17,puVar6);
        if (iVar8 == 0) {
          uVar18 = *(undefined4 *)((long)puVar17 + 0xc);
          break;
        }
        puVar17 = puVar17 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  cVar7 = (**(code **)PTR_DAT_04bcf5f0)(param_1 + 0xc0,uVar15,local_168);
  if (cVar7 != '\0') {
    *(ushort *)(param_1 + 0x148) = uVar19;
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar18;
  return;
}

