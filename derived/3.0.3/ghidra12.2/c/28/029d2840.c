
void FUN_029d2840(long param_1,char *param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined1 *__src;
  undefined1 auStack_8c [31];
  undefined1 local_6d;
  int local_68;
  
  puVar9 = PTR_DAT_04bb26a8;
  cVar5 = *(char *)(param_1 + 0x280);
  cVar6 = *param_2;
  *(char *)(param_1 + 0x280) = cVar6;
  lVar15 = *(long *)puVar9;
  nn::os::LockMutex((MutexType *)(lVar15 + 0x89660));
  uVar7 = *(ushort *)(lVar15 + 0x895e4);
  sVar8 = *(short *)(lVar15 + 0x895e6);
  uVar11 = *(uint *)(lVar15 + 0x89618);
  uVar3 = *(uint *)(lVar15 + 0x89620);
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x89660));
  if (cVar5 != '\0') {
    return;
  }
  if (cVar6 == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x282) = *(undefined1 *)(param_1 + 0x281);
  bVar14 = 0;
  if (DAT_05ab8198 != (undefined2 *)0x0) {
    bVar14 = (byte)*DAT_05ab8198 & 1;
  }
  *(byte *)(param_1 + 0x281) = bVar14;
  if (DAT_05aed670 == 0) {
    plVar17 = &DAT_055c04a0;
  }
  else {
    plVar17 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      plVar17 = (long *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        plVar17 = &DAT_055c04a0;
      }
    }
  }
  local_6d = 0;
  (**(code **)(*plVar17 + 0x18))(plVar17);
  __src = (undefined1 *)plVar17[1];
  if (auStack_8c != __src) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    lVar15 = 0;
    do {
      if (*(char *)(plVar17[1] + lVar15) == '\0') goto LAB_029d29e0;
      lVar1 = plVar17[1] + lVar15;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_029d29e0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_029d29e0;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_029d29e0:
    iVar10 = (int)lVar15;
    if (0x1f < (int)lVar15) {
      iVar10 = 0x1f;
    }
    memcpy(auStack_8c,__src,(long)iVar10);
    auStack_8c[iVar10] = 0;
  }
  iVar10 = (int)plVar17[7];
  if ((-1 < (short)uVar7) &&
     ((((uVar3 == uVar7 && *(char *)(param_1 + 0x282) != '\0' ||
        (uVar11 == uVar7 && *(char *)(param_1 + 0x281) != '\0')) || (uVar3 == (int)sVar8)) ||
      (uVar11 == (int)sVar8)))) {
    uVar4 = *(undefined4 *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x284);
    *(undefined4 *)(param_1 + 0x284) = uVar4;
  }
  sVar8 = DAT_04c487d4;
  if (DAT_04c487d4 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x284) = 0;
      return;
    }
  }
  if (iVar10 < -0x10e0fba8) {
    if (iVar10 < -0x280cede1) {
      if (iVar10 != -0x7975b8e8) {
        iVar16 = -0x3e092032;
        goto LAB_029d2b9c;
      }
    }
    else {
      if (iVar10 == -0x280cede1) goto LAB_029d2bac;
      iVar16 = -0x17df00c3;
LAB_029d2b9c:
      if (iVar10 != iVar16) goto LAB_029d2bb4;
    }
    iVar10 = 4;
  }
  else {
    if (iVar10 < 0x11889761) {
      if (iVar10 == -0x10e0fba8) {
LAB_029d2bac:
        iVar10 = 1;
        goto LAB_029d2c48;
      }
      if (iVar10 == -0xbb9f562) goto LAB_029d2b7c;
    }
    else {
      if (iVar10 != 0x11889761) {
        if (iVar10 == 0x565b4aba) {
LAB_029d2b7c:
          iVar10 = 2;
          goto LAB_029d2c48;
        }
        if (iVar10 != 0x3411ee5c) goto LAB_029d2bb4;
      }
      *(undefined4 *)(param_1 + 0x284) = 0;
      if (iVar10 == 0x11889761) {
        return;
      }
      if (iVar10 == 0x3411ee5c) {
        return;
      }
    }
LAB_029d2bb4:
    uVar11 = (uint)sVar8;
    if (uVar11 != 0xffffffff) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar11 * 8);
      if (0xff < uVar11) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        iVar10 = 3;
        goto LAB_029d2c48;
      }
    }
    local_68 = iVar10;
    uVar13 = FUN_035a3310();
    if ((uVar13 & 1) == 0) {
      if ((iVar10 != 0x617f19ef) && (iVar10 != -0x143208e5)) {
        return;
      }
      iVar10 = -1;
    }
    else {
      uVar11 = FUN_0092ddb4();
      iVar10 = uVar11 + 5;
      if (2 < uVar11) {
        iVar10 = -1;
      }
    }
  }
LAB_029d2c48:
  *(int *)(param_1 + 0x284) = iVar10;
  return;
}

