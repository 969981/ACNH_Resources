
void FUN_01c87f18(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined *local_190;
  char *pcStack_188;
  undefined *local_180;
  char *pcStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  lVar18 = *(long *)(*(long *)PTR_DAT_04bb2118 + 0x540);
  cVar2 = *PTR_DAT_04bd2dc0;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  pcStack_178 = "NetHeapRoot";
  uVar8 = FUN_038c6d48(0xe00000,&local_180,param_2,8,1,0);
  plVar15 = (long *)PTR_DAT_04bb3350;
  *(undefined8 *)(param_1 + 8) = uVar8;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
  lVar23 = *(long *)(lVar9 + 0xa8);
  *(undefined8 *)(lVar9 + 0xa8) = uVar8;
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),8);
  FUN_01ca9854(0);
  FUN_01c8311c(0);
  FUN_01c9c834(0);
  FUN_01c9a2ac(0);
  FUN_01dbc26c(0);
  puVar14 = (undefined8 *)PTR_DAT_04bc1048;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bc1048 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      puVar12 = malloc(0x58);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x58,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = puVar12 + 7;
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[8] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      puVar12[8] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar5 = PTR_DAT_04bc1208;
    puVar12[2] = puVar12 + 1;
    puVar12[3] = 0x1800000000;
    puVar6 = PTR_DAT_04bc1210;
    puVar12[4] = 0;
    puVar12[5] = 0;
    *(long **)puVar6 = plVar11;
    *puVar12 = 0;
    puVar12[1] = puVar12 + 1;
    *puVar14 = puVar12;
    puVar12[6] = 0;
    puVar12[7] = puVar5 + 0x10;
  }
  if (*(long *)PTR_DAT_04bb8860 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar12 = malloc(0x40);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = puVar12 + 4;
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[5] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      puVar12[5] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar5 = PTR_DAT_04bc11f8;
    puVar12[2] = puVar12 + 1;
    puVar12[3] = 0x1800000000;
    *(long **)PTR_DAT_04bc1200 = plVar11;
    puVar12[4] = puVar5 + 0x10;
    *puVar12 = 0;
    puVar12[1] = puVar12 + 1;
    *(undefined8 **)PTR_DAT_04bb8860 = puVar12;
  }
  FUN_01c8ea6c(0);
  puVar5 = PTR_DAT_04bc1078;
  if (*(long *)PTR_DAT_04bc1078 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar13 = malloc(0x28);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = (undefined4 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x28,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = (long *)(puVar13 + 2);
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    *(undefined8 *)(puVar13 + 6) = 0;
    *(undefined8 *)(puVar13 + 8) = 0;
    *(long *)(puVar13 + 4) = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      *(long *)(puVar13 + 4) = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    *(undefined **)(puVar13 + 2) = PTR_DAT_04bc10e8 + 0x10;
    *(long **)PTR_DAT_04bc10f0 = plVar11;
    *puVar13 = 0;
    *(undefined4 **)puVar5 = puVar13;
  }
  FUN_01c80600(0);
  if (*(long *)PTR_DAT_04bc1090 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      plVar11 = malloc(0x40);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar22 = plVar11 + 4;
    *plVar22 = (long)(PTR_DAT_04bd0d40 + 0x10);
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[5] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar20 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar20 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar20;
      plVar11[5] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar21 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar21;
        plVar20 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar22);
        *plVar21 = (long)plVar20;
        *plVar20 = lVar19;
        plVar20[1] = (long)plVar21;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar20;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar6 = PTR_DAT_04bc1088;
    puVar5 = PTR_DAT_04bc1080;
    plVar11[2] = 0;
    *(long **)puVar6 = plVar22;
    puVar6 = PTR_DAT_04bc1098;
    plVar11[4] = (long)(puVar5 + 0x10);
    *(undefined1 *)(plVar11 + 3) = 0;
    *plVar11 = (long)(puVar6 + 0x10);
    plVar11[1] = 0;
    *(long **)PTR_DAT_04bc1090 = plVar11;
  }
  if (*(long *)PTR_DAT_04bb49e8 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      plVar11 = malloc(0x68);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x68,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar22 = plVar11 + 9;
    *plVar22 = (long)(PTR_DAT_04bd0d40 + 0x10);
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[10] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar20 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar20 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar20;
      plVar11[10] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar21 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar21;
        plVar20 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar22);
        *plVar21 = (long)plVar20;
        *plVar20 = lVar19;
        plVar20[1] = (long)plVar21;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar20;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    *(long **)PTR_DAT_04bc1108 = plVar22;
    puVar5 = PTR_DAT_04bc1100;
    plVar11[4] = 0;
    plVar11[5] = 0;
    puVar6 = PTR_DAT_04bc1110;
    plVar11[6] = 0;
    plVar11[7] = 0;
    *(undefined1 *)(plVar11 + 8) = 0;
    plVar11[9] = (long)(puVar5 + 0x10);
    *plVar11 = (long)(puVar6 + 0x10);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = (long)(puVar6 + 0x30);
    *(long **)PTR_DAT_04bb49e8 = plVar11;
  }
  if (*(long *)PTR_DAT_04bb49f0 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      plVar11 = malloc(0xd8);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0xd8,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar22 = plVar11 + 0x17;
    *plVar22 = (long)(PTR_DAT_04bd0d40 + 0x10);
    plVar11[0x19] = 0;
    plVar11[0x1a] = 0;
    plVar11[0x18] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar20 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar20 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar20;
      plVar11[0x18] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar21 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar21;
        plVar20 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar22);
        *plVar21 = (long)plVar20;
        *plVar20 = lVar19;
        plVar20[1] = (long)plVar21;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar20;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    *(long **)PTR_DAT_04bc13d0 = plVar22;
    puVar6 = PTR_DAT_04bc13d8;
    puVar5 = PTR_DAT_04bc13c8;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[0x17] = (long)(puVar5 + 0x10);
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar11[0x13] = 0;
    plVar11[0x14] = 0;
    plVar11[0x15] = 0;
    *plVar11 = (long)(puVar6 + 0x10);
    plVar11[1] = 0;
    *(undefined2 *)(plVar11 + 0x16) = 0xff00;
    *(long **)PTR_DAT_04bb49f0 = plVar11;
  }
  FUN_01da20cc(0);
  FUN_01c91224(0);
  puVar5 = PTR_DAT_04bc10b8;
  if (*(long *)PTR_DAT_04bc10b8 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      plVar11 = malloc(0x28);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x28,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar22 = plVar11 + 1;
    *plVar22 = (long)(PTR_DAT_04bd0d40 + 0x10);
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[2] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar20 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar20 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar20;
      plVar11[2] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar21 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar21;
        plVar20 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar22);
        *plVar21 = (long)plVar20;
        *plVar20 = lVar19;
        plVar20[1] = (long)plVar21;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar20;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar6 = PTR_DAT_04bc14d8;
    *(long **)PTR_DAT_04bc14e0 = plVar22;
    *plVar11 = (long)(PTR_DAT_04bc14e8 + 0x10);
    plVar11[1] = (long)(puVar6 + 0x10);
    *(long **)puVar5 = plVar11;
  }
  FUN_01d82714(0);
  puVar5 = PTR_DAT_04bc10c0;
  if (*(long *)PTR_DAT_04bc10c0 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar12 = malloc(0x40);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = puVar12 + 4;
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[5] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      puVar12[5] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    *(long **)PTR_DAT_04bc14f8 = plVar11;
    puVar6 = PTR_DAT_04bc14f0;
    puVar12[2] = 0;
    puVar12[4] = puVar6 + 0x10;
    *puVar12 = 0;
    puVar12[1] = 0xffffffffffffffff;
    *(undefined8 **)puVar5 = puVar12;
  }
  FUN_01db2f44(0);
  FUN_01ddbdf8(0);
  FUN_01df4668(0);
  FUN_01dd80cc(0);
  puVar5 = PTR_DAT_04bb43e8;
  if (*(long *)PTR_DAT_04bb43e8 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar13 = malloc(0x50);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = (undefined4 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x50,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = (long *)(puVar13 + 0xc);
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x12) = 0;
    *(long *)(puVar13 + 0xe) = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      *(long *)(puVar13 + 0xe) = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar6 = PTR_DAT_04bc1028;
    puVar13[2] = 0;
    puVar4 = PTR_DAT_04bc1030;
    *(undefined8 *)(puVar13 + 4) = 0;
    puVar13[6] = 0;
    *(undefined8 *)(puVar13 + 8) = 0;
    puVar13[10] = 0;
    *(long **)puVar4 = plVar11;
    *puVar13 = 0;
    *(undefined **)(puVar13 + 0xc) = puVar6 + 0x10;
    *(undefined4 **)puVar5 = puVar13;
  }
  FUN_01dcb9dc(0);
  FUN_01d86428(0);
  puVar12 = (undefined8 *)PTR_DAT_04bb4a00;
  if (*(long *)PTR_DAT_04bb4a00 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar14 = malloc(0x38);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x38,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar11 = puVar14 + 3;
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[4] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar22 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar22 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar22;
      puVar14[4] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar20 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar20;
        plVar22 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar11);
        *plVar20 = (long)plVar22;
        *plVar22 = lVar19;
        plVar22[1] = (long)plVar20;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar22;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar4 = PTR_DAT_04bc1418;
    puVar6 = PTR_DAT_04bc1410;
    *(undefined2 *)(puVar14 + 2) = 0;
    *(long **)puVar4 = plVar11;
    *puVar14 = 0;
    *puVar12 = puVar14;
    puVar14[3] = puVar6 + 0x10;
    puVar14 = (undefined8 *)PTR_DAT_04bc1048;
  }
  FUN_01d8c70c(0);
  FUN_01dc72c8(0);
  FUN_01dc18f8(0);
  FUN_01d7f330(0);
  FUN_01dfb194(0);
  FUN_01de2d08(0);
  puVar6 = PTR_DAT_04bc10e0;
  if (*(long *)PTR_DAT_04bc10e0 == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
      puVar12 = malloc(0x60);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar15 = (long *)(lVar10 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x60,8);
      }
    }
    lVar9 = *(long *)puVar3;
    plVar15 = puVar12 + 8;
    *plVar15 = (long)(PTR_DAT_04bd0d40 + 0x10);
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[9] = 0;
    if (lVar9 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      lVar9 = *plVar11;
      puVar12[9] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar22 = (long *)(lVar9 + 0x70);
        lVar19 = *plVar22;
        plVar11 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar15);
        *plVar22 = (long)plVar11;
        *plVar11 = lVar19;
        plVar11[1] = (long)plVar22;
        if (lVar19 != 0) {
          *(long **)(lVar19 + 8) = plVar11;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar7 = PTR_DAT_04bc1500;
    *(undefined4 *)((long)puVar12 + 0x14) = 0;
    *(long **)PTR_DAT_04bc1508 = plVar15;
    puVar4 = PTR_DAT_04bb3950;
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined1 *)(puVar12 + 2) = 0;
    puVar12[8] = puVar7 + 0x10;
    *(undefined1 *)(puVar12 + 7) = 0;
    *(undefined8 **)puVar6 = puVar12;
    puVar12[3] = puVar4 + 0x10;
    plVar15 = (long *)PTR_DAT_04bb3350;
    puVar12 = (undefined8 *)PTR_DAT_04bb4a00;
  }
  FUN_01de8a24(0);
  FUN_01c70ab0(0);
  FUN_01c7c808(0);
  FUN_01c76490(0);
  if ((lVar18 != 0) && (cVar2 != '\0')) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    lVar10 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar18;
    if (lVar10 != 1) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      *(long *)(lVar9 + 0xa8) = lVar10;
    }
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar11 = malloc(0x150);
  }
  else {
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    puVar1 = (undefined8 *)(lVar9 + 8);
    if (lVar18 != 0) {
      puVar1 = (undefined8 *)(lVar18 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x150,8);
  }
  local_190 = PTR_DAT_04bb2020 + 0x10;
  pcStack_178 = "Net";
  pcStack_188 = "NetConfig";
  local_180 = local_190;
  FUN_01c86670(plVar11,&local_180,&local_190);
  *(long **)(param_1 + 0x180) = plVar11;
  pcStack_178 = local_16c;
  local_170 = 0x100;
  local_6d = 0;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  uVar16 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_180,1);
  if ((uVar16 & 1) != 0) {
    (**(code **)(*plVar11 + 0x108))(plVar11,&local_180);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),8);
  FUN_01caaefc(*(undefined8 *)PTR_DAT_04bc10a8,*(undefined8 *)(param_1 + 8));
  FUN_01c9cc70(*(undefined8 *)PTR_DAT_04bb21d0,*(undefined8 *)(param_1 + 8));
  FUN_01c9a3d0(*(undefined8 *)PTR_DAT_04bb36f0,*(undefined8 *)(param_1 + 8));
  FUN_01dbc4e8(*(undefined8 *)PTR_DAT_04bb27d0,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)*puVar14 = *(undefined8 *)(param_1 + 8);
  puVar4 = PTR_DAT_04bc1060;
  **(undefined8 **)PTR_DAT_04bb8860 = *(undefined8 *)(param_1 + 8);
  FUN_01c84710(*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 8));
  FUN_01c8ed1c(*(undefined8 *)PTR_DAT_04bc10b0,*(undefined8 *)(param_1 + 8));
  lVar9 = *(long *)PTR_DAT_04bc1038;
  plVar11 = (long *)((long)*(int *)(lVar9 + 0x34) + *(long *)PTR_DAT_04bc1090);
  plVar22 = (long *)(lVar9 + 0x20);
  lVar18 = *plVar22;
  *plVar22 = (long)plVar11;
  *plVar11 = lVar18;
  plVar11[1] = (long)plVar22;
  if (lVar18 != 0) {
    *(long **)(lVar18 + 8) = plVar11;
  }
  *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
  FUN_01c8cc1c(*(undefined8 *)PTR_DAT_04bb49e8,*(undefined8 *)(param_1 + 8));
  lVar18 = *(long *)puVar3;
  lVar9 = *(long *)PTR_DAT_04bb49f0;
  if (lVar18 == 0) {
    puVar14 = malloc(0x10);
  }
  else {
    plVar11 = *(long **)(param_1 + 8);
    if (plVar11 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar11 = (long *)(lVar18 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x10,8);
  }
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar4 = PTR_DAT_04bb49f8;
  *(undefined8 **)(lVar9 + 8) = puVar14;
  FUN_01da22a0(*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 8));
  FUN_01c91370(*(undefined8 *)PTR_DAT_04bb8930,*(undefined8 *)(param_1 + 8));
  FUN_01d82870(*(undefined8 *)PTR_DAT_04bb5030,*(undefined8 *)(param_1 + 8));
  FUN_01db39fc(*(undefined8 *)PTR_DAT_04bc10c8,*(undefined8 *)(param_1 + 8));
  FUN_01ddbf0c(*(undefined8 *)PTR_DAT_04bb5020,*(undefined8 *)(param_1 + 8));
  FUN_01df4778(*(undefined8 *)PTR_DAT_04bb8658,*(undefined8 *)(param_1 + 8));
  FUN_01dd8230(*(undefined8 *)PTR_DAT_04bb49c0,*(undefined8 *)(param_1 + 8));
  FUN_01c7f900(*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 8));
  FUN_01dcbb70(*(undefined8 *)PTR_DAT_04bb4ca8,*(undefined8 *)(param_1 + 8));
  FUN_01d86538(*(undefined8 *)PTR_DAT_04bb4408,*(undefined8 *)(param_1 + 8));
  FUN_01d802e8(*puVar12,*(undefined8 *)(param_1 + 8));
  FUN_01d8c928(*(undefined8 *)PTR_DAT_04bb3730,*(undefined8 *)(param_1 + 8));
  FUN_01dc73dc(*(undefined8 *)PTR_DAT_04bc10d0,*(undefined8 *)(param_1 + 8));
  FUN_01dc1a48(*(undefined8 *)PTR_DAT_04bb7ec0,*(undefined8 *)(param_1 + 8));
  FUN_01d7f43c(*(undefined8 *)PTR_DAT_04bb8850,*(undefined8 *)(param_1 + 8));
  FUN_01dffa40(*(undefined8 *)PTR_DAT_04bb7bc0,*(undefined8 *)(param_1 + 8));
  lVar9 = *(long *)puVar3;
  puVar14 = *(undefined8 **)PTR_DAT_04bc10d8;
  if (lVar9 == 0) {
    puVar17 = malloc(0x28);
  }
  else {
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    puVar12 = (undefined8 *)(lVar9 + 8);
    if (lVar18 != 0) {
      puVar12 = (undefined8 *)(lVar18 + 0xa8);
    }
    puVar17 = (undefined1 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x28,8);
  }
  *(undefined8 *)(puVar17 + 0x18) = 0;
  *(undefined8 *)(puVar17 + 0x20) = 0;
  puVar17[0x20] = 0xff;
  *puVar17 = 0;
  *(undefined8 *)(puVar17 + 8) = 0;
  *(undefined8 *)(puVar17 + 0x10) = 0;
  *puVar14 = puVar17;
  FUN_01de3cb4(*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 8));
  FUN_01de8b58(*(undefined8 *)PTR_DAT_04bb8688,*(undefined8 *)(param_1 + 8));
  FUN_01c70d64(*(undefined8 *)PTR_DAT_04bb3728,*(undefined8 *)(param_1 + 8));
  FUN_01db2af0();
  if (lVar23 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar23;
  }
  return;
}

