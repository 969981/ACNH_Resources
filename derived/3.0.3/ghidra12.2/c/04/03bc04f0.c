
long * FUN_03bc04f0(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  char *__dest;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined *local_e0;
  char *local_d8;
  undefined4 local_d0;
  char local_cc [63];
  undefined1 local_8d;
  int local_88;
  long local_80;
  undefined8 local_78;
  int local_6c [3];
  
  if (*(char *)(param_1 + 8) == '\0') {
    return (long *)0x0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x38)) {
    plVar11 = *(long **)(param_1 + 0x28);
    plVar17 = (long *)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      *(long *)(param_1 + 0x28) = *plVar11;
    }
    puVar2 = PTR_DAT_04bd22b0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar13 = plVar11 + 0xc;
    *plVar13 = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xd] = 0;
    plVar16 = plVar11 + 2;
    *plVar16 = (long)(puVar2 + 0x10);
    plVar11[5] = (long)plVar16;
    plVar11[6] = 0;
    lVar7 = *plVar17;
    *plVar17 = (long)plVar13;
    plVar11[0xd] = (long)plVar17;
    *plVar13 = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar13;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *plVar11 = param_2;
    plVar11[1] = (long)plVar16;
    plVar11[9] = 0;
    lVar7 = *(long *)(param_2 + 0x1e0);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x40) == 0) {
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
        lVar5 = *(long *)(lVar7 + 0x20);
        if (lVar5 != 0) {
          uVar19 = *(undefined4 *)(lVar5 + 0xc);
          uVar20 = *(undefined4 *)(lVar5 + 0x1c);
          uVar21 = *(undefined4 *)(lVar5 + 0x2c);
          plVar11[1] = (long)plVar16;
          *(undefined4 *)(plVar11 + 7) = uVar19;
          *(undefined4 *)((long)plVar11 + 0x3c) = uVar20;
          *(undefined4 *)(plVar11 + 8) = uVar21;
        }
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0xb0));
      }
      else {
        plVar11[1] = *(long *)(lVar7 + 0x40) + 0x18;
      }
    }
    cVar1 = DAT_05aebc00;
    local_d0 = 0x40;
    lVar10 = *(long *)(param_2 + 0x120);
    local_8d = 0;
    local_cc[0] = '\0';
    local_88 = 0;
    local_80 = 0;
    local_e0 = PTR_DAT_04bb2bc0 + 0x10;
    lVar5 = *(long *)(lVar10 + 8);
    lVar7 = *(long *)(lVar5 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar7 = lVar5 + 0x70;
    }
    local_d8 = local_cc;
    if (lVar7 != 0) {
      if ((*(byte *)(lVar7 + 0x11) >> 5 & 1) == 0) {
        lVar5 = *(long *)(lVar7 + 8);
        if ((lVar5 == 0) || ((ulong)*(uint *)(lVar5 + 0x24) == -lVar5 - 0x24U)) goto LAB_03bc071c;
        if (*(long *)(lVar7 + 8) == 0) {
          pcVar15 = (char *)0x0;
        }
        else {
          puVar6 = (uint *)(*(long *)(lVar7 + 8) + 0x24);
          pcVar15 = (char *)((ulong)*puVar6 + (long)puVar6);
          if (local_cc == pcVar15) goto LAB_03bc071c;
        }
      }
      else {
        pcVar15 = "<NoSound>";
      }
      lVar7 = 0;
      do {
        if (pcVar15[lVar7] == '\0') {
LAB_03bc06fc:
          iVar4 = (int)lVar7;
          if (0x3f < iVar4) {
            iVar4 = 0x3f;
          }
          goto LAB_03bc0708;
        }
        if (pcVar15[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_03bc06fc;
        }
        if (pcVar15[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_03bc06fc;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      iVar4 = 0;
LAB_03bc0708:
      memcpy(local_cc,pcVar15,(long)iVar4);
      local_cc[iVar4] = '\0';
    }
LAB_03bc071c:
    local_80 = *(long *)(param_2 + 0x108);
    lVar5 = *(long *)(lVar10 + 8);
    lVar7 = *(long *)(lVar5 + 0x38);
    if (cVar1 != '\0') {
      lVar7 = lVar5 + 0x70;
    }
    if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x11) & 0x21) == 0)) {
      local_88 = *(int *)(*(long *)PTR_DAT_04bc3ee8 + 200);
    }
    else {
      local_88 = 0;
    }
    plVar17 = (long *)(param_1 + 0x48);
    plVar18 = (long *)*plVar17;
    plVar16 = (long *)(param_1 + 0x40);
    if (plVar18 != plVar16) {
      plVar12 = plVar18 + -0x13;
      do {
        plVar14 = plVar12 + 3;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        (**(code **)(*plVar14 + 0x18))(plVar14);
        pcVar15 = (char *)plVar12[4];
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar15 == local_d8) {
LAB_03bc0854:
          if ((((int)plVar12[0xe] == local_88) && (plVar12[0xf] == local_80)) &&
             ((int)plVar12[0x12] != 0)) goto LAB_03bc0c28;
        }
        else {
          uVar9 = 0;
          bVar3 = true;
          do {
            lVar7 = plVar12[4] + 2 + uVar9;
            cVar1 = *(char *)(lVar7 + -2);
            if (cVar1 != local_d8[uVar9]) break;
            if (cVar1 == '\0') {
              if (bVar3) goto LAB_03bc0854;
              break;
            }
            cVar1 = *(char *)(lVar7 + -1);
            if (cVar1 != local_d8[uVar9 + 1]) break;
            if (cVar1 == '\0') goto LAB_03bc0854;
            cVar1 = *(char *)(plVar12[4] + 2 + uVar9);
            if (cVar1 != local_d8[uVar9 + 2]) break;
            if (cVar1 == '\0') goto LAB_03bc0854;
            bVar3 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
        }
        plVar18 = (long *)plVar18[1];
        plVar12 = plVar18 + -0x13;
      } while (plVar12 != (long *)(param_1 + -0x58));
    }
    if (*(int *)(param_1 + 0x68) <= *(int *)(param_1 + 0x50)) {
      do {
        lVar7 = *plVar17;
        plVar17 = (long *)(lVar7 + 8);
      } while ((long *)(lVar7 + -0x98) != (long *)(param_1 + -0x58));
      plVar11 = (long *)0x0;
      goto LAB_03bc0bc4;
    }
    plVar12 = *(long **)(param_1 + 0x58);
    if (plVar12 != (long *)0x0) {
      *(long *)(param_1 + 0x58) = *plVar12;
    }
    puVar2 = PTR_DAT_04bb2bc0;
    *(undefined4 *)(plVar12 + 2) = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    *(undefined1 *)((long)plVar12 + 0x6b) = 0;
    *(undefined4 *)(plVar12 + 0xe) = 0;
    plVar12[0x14] = 0;
    plVar17 = plVar12 + 0x13;
    *plVar17 = 0;
    plVar12[3] = (long)(puVar2 + 0x10);
    *(undefined1 *)((long)plVar12 + 0x2c) = 0;
    plVar12[4] = (long)plVar12 + 0x2c;
    *(undefined4 *)(plVar12 + 5) = 0x40;
    plVar12[0x11] = (long)(plVar12 + 0x10);
    plVar12[0x12] = 0x5000000000;
    plVar12[0xf] = 0;
    plVar12[0x10] = (long)(plVar12 + 0x10);
    lVar7 = *plVar16;
    *plVar16 = (long)plVar17;
    plVar12[0x14] = (long)plVar16;
    *plVar17 = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar17;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    __dest = (char *)plVar12[4];
    (**(code **)(local_e0 + 0x18))(&local_e0);
    pcVar15 = local_d8;
    if (__dest != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar7 = 0;
      do {
        if (local_d8[lVar7] == '\0') goto LAB_03bc09ac;
        if (local_d8[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_03bc09ac;
        }
        if (local_d8[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_03bc09ac;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_03bc09ac:
      iVar4 = (int)lVar7;
      if ((int)plVar12[5] <= (int)lVar7) {
        iVar4 = (int)plVar12[5] + -1;
      }
      memcpy(__dest,pcVar15,(long)iVar4);
      __dest[iVar4] = '\0';
    }
    *(int *)(plVar12 + 0xe) = local_88;
    plVar12[0xf] = local_80;
    lVar7 = FUN_03bc7490(*(undefined8 *)(DAT_05aebb78 + 0x38),plVar12 + 3,0);
    *plVar12 = lVar7;
    local_e6 = 0;
    local_f8 = *(undefined8 *)(param_2 + 0x108);
    uStack_f0 = 0;
    local_e8 = *(undefined2 *)(param_2 + 0x14);
    lVar10 = *plVar12;
    lVar5 = *(long *)(*(long *)(param_2 + 0x120) + 8);
    lVar7 = *(long *)(lVar5 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar7 = lVar5 + 0x70;
    }
    if (lVar10 == 0) {
      iVar4 = 9;
    }
    else {
      if (*(long *)(lVar10 + 0xb0) == 0) {
        lVar7 = 0;
        uVar19 = 0;
        iVar4 = 8;
      }
      else {
        local_6c[0] = 0;
        auVar22 = FUN_03b3d1bc(*(long *)(lVar10 + 0xb0),lVar7,&local_f8,local_6c);
        lVar7 = auVar22._0_8_;
        local_78 = auVar22._8_8_;
        if (local_6c[0] < 1) {
          if (lVar7 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = lVar7;
            if (*(int *)(lVar7 + 0x10) != auVar22._8_4_) {
              lVar5 = 0;
            }
          }
          if ((*(int *)(lVar5 + 0xc) != 0) && (*(int *)(lVar5 + 0xc) != 7)) {
            FUN_03b46230(lVar5,lVar10);
          }
          iVar4 = 0;
          puVar8 = &local_78;
        }
        else {
          lVar7 = 0;
          puVar8 = (undefined8 *)(PTR_DAT_04bc3db0 + 8);
          iVar4 = local_6c[0];
        }
        uVar19 = *(undefined4 *)puVar8;
      }
      plVar12[1] = lVar7;
      *(undefined4 *)(plVar12 + 2) = uVar19;
    }
    if (((iVar4 < 1) && (lVar7 = plVar12[1], lVar7 != 0)) &&
       ((*(int *)(lVar7 + 0x10) == (int)plVar12[2] &&
        ((*(int *)(lVar7 + 0xc) != 0 && (*(int *)(lVar7 + 0xc) != 7)))))) {
      FUN_03bc17d0(plVar12,param_2);
LAB_03bc0c28:
      FUN_03bc1618(plVar12,plVar11);
      plVar11[9] = (long)plVar12;
      goto LAB_03bc0bc4;
    }
    FUN_03bc12b0(iVar4,plVar12);
    if (plVar12[0x13] != 0) {
      *(long *)(plVar12[0x13] + 8) = plVar12[0x14];
    }
    if ((long *)plVar12[0x14] != (long *)0x0) {
      *(long *)plVar12[0x14] = *plVar17;
    }
    *plVar17 = 0;
    plVar12[0x14] = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    FUN_03bc11c0(plVar12);
    *plVar12 = *(long *)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = plVar12;
    plVar11[9] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    if (plVar11[0xc] != 0) {
      *(long *)(plVar11[0xc] + 8) = plVar11[0xd];
    }
    if ((long *)plVar11[0xd] != (long *)0x0) {
      *(long *)plVar11[0xd] = *plVar13;
    }
    *plVar13 = 0;
    plVar11[0xd] = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    plVar11[9] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = (long)&PTR_LAB_04b7aaf8;
    *plVar11 = *(long *)(param_1 + 0x28);
    *(long **)(param_1 + 0x28) = plVar11;
  }
  plVar11 = (long *)0x0;
LAB_03bc0bc4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return plVar11;
}

