
undefined8 FUN_03356990(long param_1,long param_2)

{
  void *__s;
  MutexType *pMVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_88;
  undefined *local_80;
  char *local_78;
  
  puVar5 = PTR_DAT_04bc8e68;
  puVar4 = PTR_DAT_04bc1118;
  lVar17 = *(long *)PTR_DAT_04bc1118;
  lVar16 = *(long *)(*(long *)(param_1 + 0x300) + 0xf0);
  pcVar3 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar3 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar3 != '\0') {
    local_80 = PTR_DAT_04bc8e68 + 0x10;
    local_78 = pcVar3;
    lVar16 = FUN_032cb8e0(&local_88,&local_80,lVar16);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0xe8);
    }
  }
  if (*(int *)(param_1 + 0x17a0) == 1) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x300) + 0xf0) + 0x58))(0x3f800000);
    local_88 = *(undefined8 *)(lVar16 + 0x18);
    local_80 = puVar5 + 0x10;
    local_78 = "T_TextBoxMulti";
    lVar8 = FUN_0328b6d0(&local_88,&local_80,0);
    *(long *)(param_1 + 0x308) = lVar8;
    uVar18 = *(undefined4 *)(param_2 + 0x3ac);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 0x17ac) == 2) {
      local_88 = *(undefined8 *)(lVar16 + 0x18);
      local_78 = "T_TextBox_ShortSeparate";
    }
    else if (*(int *)(param_1 + 0x17ac) == 0) {
      local_88 = *(undefined8 *)(lVar16 + 0x18);
      local_78 = "T_TextBox_Short";
    }
    else {
      local_88 = *(undefined8 *)(lVar16 + 0x18);
      local_78 = "T_TextBox_Long";
    }
    local_80 = puVar5 + 0x10;
    lVar8 = FUN_0328b6d0(&local_88,&local_80,0);
    uVar18 = 1;
    *(long *)(param_1 + 0x308) = lVar8;
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if ((lVar8 != 0) && (lVar8 = FUN_032cbf00(), lVar8 != 0)) {
    *(undefined1 *)(lVar8 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0x17a0) == 1) {
    local_88 = *(undefined8 *)(lVar16 + 0x18);
    local_80 = puVar5 + 0x10;
    local_78 = "N_InputCnt";
    plVar9 = (long *)FUN_032d3050(&local_88,local_88,&local_80);
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar25 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar25 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    if (plVar9 == (long *)0x0) goto LAB_03356bf4;
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar10 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)PTR_DAT_04bc8f30 && puVar10 != (undefined8 *)0x0);
LAB_03356bf0:
      if (puVar10 == (undefined8 *)0x0) goto LAB_03356bf4;
    }
  }
  else {
    local_88 = *(undefined8 *)(lVar16 + 0x18);
    local_80 = puVar5 + 0x10;
    local_78 = "N_TextArea";
    plVar9 = (long *)FUN_032d3050(&local_88,local_88,&local_80);
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar25 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar25 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    if (plVar9 != (long *)0x0) {
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
      if (puVar10 != (undefined8 *)PTR_DAT_04bc8f30) {
        do {
          puVar10 = (undefined8 *)*puVar10;
        } while (puVar10 != (undefined8 *)PTR_DAT_04bc8f30 && puVar10 != (undefined8 *)0x0);
        goto LAB_03356bf0;
      }
      goto LAB_03356bf8;
    }
LAB_03356bf4:
    plVar9 = (long *)0x0;
  }
LAB_03356bf8:
  *(long **)(param_1 + 0x360) = plVar9;
  *(undefined8 *)(param_1 + 0x13a0) = 0;
  __s = (void *)(param_1 + 0xb08);
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  uVar28 = *(undefined4 *)(*(long *)(param_1 + 0x308) + 0x50);
  uVar11 = FUN_0038a89c();
  lVar16 = *(long *)(param_1 + 0x308);
  uVar19 = *(undefined4 *)(lVar16 + 0xf8);
  uVar21 = *(undefined4 *)(lVar16 + 0xfc);
  uVar29 = *(undefined4 *)(lVar16 + 0x100);
  uVar30 = *(undefined4 *)(lVar16 + 0x104);
  *(undefined8 *)(param_1 + 0x1310) = uVar11;
  FUN_00350090(uVar19,uVar21,param_1 + 0x12e8);
  *(undefined4 *)(param_1 + 0x132c) = uVar29;
  *(undefined4 *)(param_1 + 0x1328) = uVar30;
  *(undefined4 *)(param_1 + 0x1350) = uVar28;
  *(long *)(param_1 + 0x1358) = param_1;
  memset(__s,0,0x7d8);
  *(undefined4 *)(param_1 + 0x12e4) = uVar18;
  iVar25 = 0;
  *(float *)(param_1 + 0x13bc) =
       *(float *)(*(long *)(param_1 + 0x308) + 0xfc) +
       *(float *)(*(long *)(param_1 + 0x308) + 0x100);
  *(undefined1 *)(lVar17 + 0x484) = 1;
  if (*(int *)(param_2 + 0x20) == 1) {
    iVar25 = *(int *)(lVar17 + 0xbdc);
  }
  iVar26 = *(int *)(param_2 + 0x3ac);
  iVar27 = 500;
  if ((iVar26 < 0x1f5) &&
     (((iVar26 < 0 || (iVar27 = *(int *)(param_2 + 0x3b0), iVar27 <= iVar26)) || (500 < iVar27)))) {
    iVar27 = iVar26;
  }
  *(int *)(param_1 + 0x1798) = iVar27;
  if (0 < *(int *)(lVar17 + 0xbdc)) {
    *(undefined4 *)(param_1 + 0x1378) = 0xffffffff;
    *(undefined1 *)(lVar17 + 0x484) = 1;
    iVar27 = *(int *)(param_1 + 0x1798);
  }
  *(undefined1 *)(param_1 + 0x1360) = 0;
  *(undefined4 *)(param_1 + 0x136c) = 3;
  if (iVar27 < 1) {
    *(undefined4 *)(param_1 + 0x1798) = 500;
  }
  if ((*(uint *)(param_1 + 0x17a0) & 0xfffffffd) == 0) {
    uVar18 = 0x40000000;
    if (*(char *)(param_1 + 0x17b0) != '\0') {
      uVar18 = 0x3f800000;
    }
    if (*(char *)(param_1 + 0x17b1) != '\0') {
      uVar18 = 0;
    }
    FUN_032c8150(uVar18,param_1 + 0x390,4,4);
  }
  FUN_033618d0(__s,0xffffffff);
  FUN_03361cd0(__s,&local_80,&local_88,iVar25);
  if (*(int *)(param_1 + 0x1370) != (int)local_80) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  if (*(int *)(param_1 + 0x1374) != (int)local_88) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  *(int *)(param_1 + 0x1370) = (int)local_80;
  *(int *)(param_1 + 0x1374) = (int)local_88;
  *(undefined4 *)(param_1 + 0x1368) = 0;
  *(undefined4 *)(param_1 + 0x13a4) = 0;
  if (*(int *)(param_1 + 0x17a0) == 1) {
    if ((iVar25 == 0) ||
       (iVar25 = *(int *)(param_1 + 0x12e0) + -3, iVar25 == 0 || *(int *)(param_1 + 0x12e0) < 3)) {
      fVar20 = *(float *)(param_1 + 0x13bc);
      fVar22 = 0.0;
    }
    else {
      fVar20 = *(float *)(param_1 + 0x13bc);
      fVar22 = fVar20 * (float)iVar25;
      *(float *)(param_1 + 0x13a4) = fVar22;
      if (fVar20 <= fVar22) {
        iVar25 = 0;
        do {
          fVar22 = fVar22 - fVar20;
          iVar25 = iVar25 + 1;
        } while (fVar20 <= fVar22);
        *(float *)(param_1 + 0x13a4) = fVar22;
        *(int *)(param_1 + 0x1368) = iVar25;
      }
    }
    lVar16 = *(long *)(param_1 + 0x360);
    *(float *)(lVar16 + 0x34) = fVar20 + fVar22;
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
    lVar16 = *(long *)(param_1 + 0x498);
    if ((lVar16 != 0) && (2 < *(int *)(param_1 + 0x12e0))) {
      lVar17 = *(long *)(lVar16 + 0x60);
      fVar22 = 3.0 / (float)*(int *)(param_1 + 0x12e0);
      fVar23 = *(float *)(*(long *)(lVar16 + 0x68) + 0x54);
      *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
      fVar23 = fVar22 * fVar23;
      fVar20 = *(float *)(lVar17 + 0x50);
      if (*(float *)(lVar17 + 0x50) <= fVar23) {
        fVar20 = fVar23;
      }
      *(float *)(lVar17 + 0x54) = fVar20;
      fVar20 = *(float *)(param_1 + 0x13a4);
      fVar24 = *(float *)(param_1 + 0x13bc);
      iVar26 = *(int *)(param_1 + 0x12e0);
      iVar27 = *(int *)(param_1 + 0x12e4);
      iVar25 = *(int *)(param_1 + 0x1368);
      lVar16 = *(long *)(*(long *)(param_1 + 0x498) + 0x60);
      fVar23 = *(float *)(*(long *)(*(long *)(param_1 + 0x498) + 0x68) + 0x54);
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
      *(float *)(lVar16 + 0x34) =
           (fVar23 + -8.0) *
           -(((fVar22 * 0.5 + (fVar20 / fVar24 + (float)iVar25) / (float)iVar26) * 2.0 + -1.0) *
            (((float)iVar27 + -3.0) / (float)iVar27)) * 0.5;
    }
  }
  FUN_03357190(param_1);
  FUN_032d1220(*(undefined8 *)(param_1 + 0x300));
  puVar5 = PTR_DAT_04bc9410;
  puVar10 = (undefined8 *)(param_1 + 0x390);
  bVar7 = *(int *)(param_1 + 0x17a0) != 1;
  lVar16 = 1000;
  if (bVar7) {
    lVar16 = 0x390;
  }
  plVar9 = *(long **)PTR_DAT_04bc9410;
  puVar2 = (undefined8 *)(param_1 + 1000);
  if (bVar7) {
    puVar2 = puVar10;
  }
  if (*(long *)(param_1 + lVar16) == 0) {
    pMVar1 = (MutexType *)(plVar9 + 5);
    nn::os::LockMutex(pMVar1);
    puVar6 = (undefined8 *)*plVar9;
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
      *plVar9 = (long)puVar2;
    }
    else {
      do {
        puVar14 = puVar6;
        puVar6 = (undefined8 *)puVar14[2];
      } while ((undefined8 *)puVar14[2] != (undefined8 *)0x0);
      puVar14[2] = puVar2;
      puVar2[1] = puVar14;
      plVar9 = (long *)*puVar14;
    }
    *puVar2 = plVar9;
    nn::os::UnlockMutex(pMVar1);
    plVar9 = *(long **)puVar5;
    lVar16 = *(long *)(param_1 + 0x440);
  }
  else {
    lVar16 = *(long *)(param_1 + 0x440);
  }
  if (lVar16 == 0) {
    pMVar1 = (MutexType *)(plVar9 + 5);
    puVar2 = (undefined8 *)(param_1 + 0x440);
    nn::os::LockMutex(pMVar1);
    puVar6 = (undefined8 *)*plVar9;
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
      *plVar9 = (long)puVar2;
    }
    else {
      do {
        puVar14 = puVar6;
        puVar6 = (undefined8 *)puVar14[2];
      } while ((undefined8 *)puVar14[2] != (undefined8 *)0x0);
      puVar14[2] = puVar2;
      *(undefined8 **)(param_1 + 0x448) = puVar14;
      plVar9 = (long *)*puVar14;
    }
    *puVar2 = plVar9;
    nn::os::UnlockMutex(pMVar1);
  }
  lVar16 = *(long *)(*(long *)puVar4 + 0x20);
  iVar25 = *(int *)(lVar16 + 0x1568);
  if (*(int *)(lVar16 + 0x1050) == 1) {
    uVar11 = 0x40000000;
    if (iVar25 != 1) {
      uVar11 = 0x40400000;
    }
  }
  else {
    uVar11 = 0;
    if (((iVar25 != 1) && (*(char *)(lVar16 + 0x106a) == '\0')) &&
       (iVar25 != 0 || *(char *)(lVar16 + 0x16408) == '\0')) {
      uVar11 = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x17a0) == 1) {
    lVar16 = *(long *)(param_1 + 0x408);
    if (lVar16 == 0) goto LAB_033570d8;
    iVar25 = 1;
    lVar17 = lVar16;
    do {
      lVar17 = *(long *)(lVar17 + 0x10);
      iVar25 = iVar25 + -1;
    } while (lVar17 != 0);
    if (iVar25 == 0) goto LAB_033570d8;
    lVar16 = *(long *)(lVar16 + 0x10);
    do {
      plVar9 = (long *)(lVar16 + 0x28);
      lVar16 = *(long *)(lVar16 + 0x18);
    } while (lVar16 != 0 && *plVar9 == 0);
    if (*plVar9 == 0) goto LAB_033570d8;
    uVar12 = 2;
    uVar13 = 1;
    puVar10 = (undefined8 *)(param_1 + 1000);
  }
  else {
    lVar16 = *(long *)(param_1 + 0x3b0);
    if (lVar16 == 0) goto LAB_033570d8;
    uVar15 = 0xffffffff;
    lVar17 = lVar16;
    do {
      lVar17 = *(long *)(lVar17 + 0x10);
      uVar15 = uVar15 + 1;
    } while (lVar17 != 0);
    if (uVar15 < 2) goto LAB_033570d8;
    lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + 0x10);
    do {
      plVar9 = (long *)(lVar16 + 0x28);
      lVar16 = *(long *)(lVar16 + 0x18);
    } while (lVar16 != 0 && *plVar9 == 0);
    if (*plVar9 == 0) goto LAB_033570d8;
    uVar12 = 3;
    uVar13 = 2;
  }
  FUN_032c8150(uVar11,puVar10,uVar12,uVar13);
LAB_033570d8:
  if (((*(long *)(param_1 + 0x28) != 0) && (-1 < *(int *)(param_1 + 0x38))) &&
     (plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x80), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(long *)(param_1 + 0x30) = param_1 + 0xe8;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return 1;
}

