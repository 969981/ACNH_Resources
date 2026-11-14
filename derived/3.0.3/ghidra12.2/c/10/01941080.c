
void FUN_01941080(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined1 *__dest;
  char *pcVar15;
  void *pvVar16;
  undefined1 *puVar17;
  void *pvVar18;
  long *plVar19;
  char *__dest_00;
  undefined *local_a0;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined4 local_64;
  
  plVar12 = (long *)PTR_DAT_04bb2698;
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar4 == 0xfffe) {
    *(undefined1 *)(param_1 + 0x2c0) = 1;
  }
  else if (*(char *)(param_1 + 0x2c0) == '\0') {
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    pvVar16 = *(void **)(param_1 + 0x288);
    plVar19 = (long *)(param_2 + 0x30);
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pvVar18 = *(void **)(param_2 + 0x38);
    if (pvVar16 != pvVar18) {
      (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar19);
      lVar14 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x38) + lVar14) == '\0') goto LAB_01941350;
        lVar11 = *(long *)(param_2 + 0x38) + lVar14;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_01941350;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_01941350;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_01941350:
      iVar6 = (int)lVar14;
      if (*(int *)(param_1 + 0x290) <= (int)lVar14) {
        iVar6 = *(int *)(param_1 + 0x290) + -1;
      }
      memcpy(pvVar16,pvVar18,(long)iVar6);
      *(undefined1 *)((long)pvVar16 + (long)iVar6) = 0;
    }
    lVar14 = *plVar12;
    *(int *)(param_1 + 0x2b8) = iVar4;
    *(undefined4 *)(param_1 + 700) = uVar5;
    if (lVar14 == 0) {
      pvVar16 = malloc(0x11f0);
    }
    else {
      plVar19 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar14 + 8);
        if (lVar11 != 0) {
          plVar19 = (long *)(lVar11 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
      }
      pvVar16 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,0x11f0,8);
    }
    FUN_00739870(pvVar16,0,0,1);
    FUN_006f9fc0(param_1,pvVar16,0xffffffff);
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      plVar19 = malloc(0x2e0);
    }
    else {
      plVar19 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar14 + 8);
        if (lVar11 != 0) {
          plVar19 = (long *)(lVar11 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)0x0;
          goto LAB_0194146c;
        }
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x2e0,8);
    }
LAB_0194146c:
    FUN_00705c50(plVar19);
    puVar10 = PTR_DAT_04bb3300;
    plVar19[0x4f] = 0;
    plVar19[0x50] = 0;
    plVar19[0x53] = -0x100000000;
    *plVar19 = (long)(puVar10 + 0x10);
    plVar19[0x52] = (long)(plVar19 + 0x51);
    plVar19[0x51] = (long)(plVar19 + 0x51);
    FUN_038e18e4(plVar19 + 0x54);
    pcVar15 = (char *)plVar19[0xc];
    if (pcVar15 != "Family") {
      iVar6 = 6;
      if ((int)plVar19[0xd] < 7) {
        iVar6 = (int)plVar19[0xd] + -1;
      }
      memcpy(pcVar15,"Family",(long)iVar6);
      pcVar15[iVar6] = '\0';
    }
    *(undefined4 *)((long)plVar19 + 0x29c) = 0x278;
    *(uint *)(plVar19 + 0x4c) = *(uint *)(plVar19 + 0x4c) & 0xfffffff0;
    FUN_006f9fc0(param_1,plVar19,0xffffffff);
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      plVar19 = malloc(0x2a8);
    }
    else {
      plVar19 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar14 + 8);
        if (lVar11 != 0) {
          plVar19 = (long *)(lVar11 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)0x0;
          goto LAB_01941564;
        }
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x2a8,8);
    }
LAB_01941564:
    FUN_00705c50(plVar19);
    *(undefined4 *)(plVar19 + 0x51) = 0;
    puVar10 = PTR_DAT_04bb35d0;
    pcVar15 = (char *)plVar19[0xc];
    *(undefined4 *)(plVar19 + 0x52) = 0;
    plVar19[0x53] = 0;
    *(undefined2 *)(plVar19 + 0x54) = 0;
    plVar19[0x50] = (long)(plVar19 + 0x4f);
    plVar19[0x4f] = (long)(plVar19 + 0x4f);
    *plVar19 = (long)(puVar10 + 0x10);
    if (pcVar15 != "ModelResLoader") {
      iVar6 = 0xe;
      if ((int)plVar19[0xd] < 0xf) {
        iVar6 = (int)plVar19[0xd] + -1;
      }
      memcpy(pcVar15,"ModelResLoader",(long)iVar6);
      pcVar15[iVar6] = '\0';
    }
    *(undefined4 *)((long)plVar19 + 0x28c) = 8;
    *(uint *)(plVar19 + 0x4c) = *(uint *)(plVar19 + 0x4c) & 0xfffffff0 | 1;
    FUN_006f9fc0(param_1,plVar19,0xffffffff);
    iVar6 = *(int *)(param_1 + 700);
    iVar7 = *(int *)(param_1 + 0x2b8);
    iVar8 = *(int *)(param_2 + 0x24);
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      plVar12 = malloc(0x380);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar14 + 8);
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        plVar12 = (long *)0x0;
        if (param_3 == (long *)0x0) goto LAB_01941688;
      }
      plVar12 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x380,8);
    }
LAB_01941688:
    FUN_00705c50(plVar12);
    puVar10 = PTR_DAT_04bdf1d8;
    pcVar15 = "XLink";
    __dest_00 = (char *)plVar12[0xc];
    *(undefined1 *)(plVar12 + 0x55) = 0;
    plVar12[0x56] = 0;
    plVar12[0x58] = 0;
    plVar12[0x59] = 0;
    plVar12[0x5a] = 0;
    plVar12[0x57] = (long)(puVar10 + 0x10);
    if (__dest_00 != "XLink") {
      iVar1 = 5;
      if ((int)plVar12[0xd] < 6) {
        iVar1 = (int)plVar12[0xd] + -1;
      }
      memcpy(__dest_00,"XLink",(long)iVar1);
      __dest_00[iVar1] = '\0';
      pcVar15 = (char *)plVar12[0xc];
    }
    puVar10 = PTR_DAT_04bb3fa0;
    *(undefined4 *)(plVar12 + 0x5b) = 0xffffffff;
    *(bool *)((long)plVar12 + 0x2dc) = (iVar6 != 4 && iVar7 != 0x125e) && iVar8 == 0;
    *(undefined1 *)(plVar12 + 0x5e) = 0;
    plVar12[0x6e] = 0;
    plVar12[0x5c] = (long)(plVar12 + 0x5e);
    plVar12[0x5d] = 0x8000000000;
    *plVar12 = (long)(puVar10 + 0x10);
    *(undefined4 *)(plVar12 + 0x6f) = 3;
    if (pcVar15 != "ActorXLinkInsect") {
      iVar6 = 0x10;
      if ((int)plVar12[0xd] < 0x11) {
        iVar6 = (int)plVar12[0xd] + -1;
      }
      memcpy(pcVar15,"ActorXLinkInsect",(long)iVar6);
      pcVar15[iVar6] = '\0';
    }
    FUN_006f9fc0(param_1,plVar12,0xffffffff);
    puVar10 = PTR_PTR_04bb2238;
    local_6d = 0;
    local_90 = 0x20;
    local_a0 = PTR_DAT_04bb2a08 + 0x10;
    local_98 = local_8c;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    puVar17 = *(undefined1 **)(puVar10 + 8);
    if (local_8c != puVar17) {
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      lVar14 = 0;
      do {
        if (*(char *)(*(long *)(puVar10 + 8) + lVar14) == '\0') goto LAB_0194182c;
        lVar11 = *(long *)(puVar10 + 8) + lVar14;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_0194182c;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_0194182c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_0194182c:
      iVar6 = (int)lVar14;
      if (local_90 <= (int)lVar14) {
        iVar6 = local_90 + -1;
      }
      memcpy(local_8c,puVar17,(long)iVar6);
      local_8c[iVar6] = 0;
    }
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    sVar9 = *(short *)PTR_DAT_04bb6298;
    if (sVar9 == -1) {
LAB_01941918:
      uVar13 = 0;
    }
    else {
      local_64 = 0x13;
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
      if (0xff < (uint)(int)sVar9) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x13 & 1) != 0) {
        FUN_01a11b50(*(undefined8 *)PTR_DAT_04bb4008,&local_a0,iVar4);
        goto LAB_01941934;
      }
      if (*(int *)(param_2 + 0x24) != 0) goto LAB_01941918;
      local_64 = 1;
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
      if (0xff < (uint)(int)sVar9) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar13 = *puVar3 >> 1 & 1;
    }
    FUN_01a11820(*(undefined8 *)PTR_DAT_04bb4008,&local_a0,iVar4,uVar13);
LAB_01941934:
    lVar14 = *(long *)(param_1 + 0x60);
    __dest = *(undefined1 **)(lVar14 + 0x280);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    puVar17 = local_98;
    if (__dest != local_98) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar11 = 0;
      do {
        if (local_98[lVar11] == '\0') goto LAB_019419ac;
        if (local_98[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_019419ac;
        }
        if (local_98[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_019419ac;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_019419ac:
      iVar4 = (int)lVar11;
      if (*(int *)(lVar14 + 0x288) <= (int)lVar11) {
        iVar4 = *(int *)(lVar14 + 0x288) + -1;
      }
      memcpy(__dest,puVar17,(long)iVar4);
      __dest[iVar4] = 0;
    }
    *(undefined4 *)(lVar14 + 0x10d8) = 0;
    return;
  }
  pvVar16 = *(void **)(param_1 + 0x288);
  plVar19 = (long *)(param_2 + 0x30);
  (**(code **)(*plVar19 + 0x18))(plVar19);
  pvVar18 = *(void **)(param_2 + 0x38);
  if (pvVar16 != pvVar18) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar19);
    lVar14 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar14) == '\0') goto LAB_019411ec;
      lVar11 = *(long *)(param_2 + 0x38) + lVar14;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_019411ec;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_019411ec;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_019411ec:
    iVar6 = (int)lVar14;
    if (*(int *)(param_1 + 0x290) <= (int)lVar14) {
      iVar6 = *(int *)(param_1 + 0x290) + -1;
    }
    memcpy(pvVar16,pvVar18,(long)iVar6);
    *(undefined1 *)((long)pvVar16 + (long)iVar6) = 0;
    plVar12 = (long *)PTR_DAT_04bb2698;
  }
  *(int *)(param_1 + 0x2b8) = iVar4;
  lVar14 = *plVar12;
  if (lVar14 == 0) {
    plVar12 = malloc(0x2e0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar14 + 8);
      if (lVar11 != 0) {
        puVar2 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_01941288;
      }
    }
    plVar12 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e0,8);
  }
LAB_01941288:
  FUN_00705c50(plVar12);
  puVar10 = PTR_DAT_04bb3300;
  plVar12[0x4f] = 0;
  plVar12[0x50] = 0;
  plVar12[0x53] = -0x100000000;
  *plVar12 = (long)(puVar10 + 0x10);
  plVar12[0x52] = (long)(plVar12 + 0x51);
  plVar12[0x51] = (long)(plVar12 + 0x51);
  FUN_038e18e4(plVar12 + 0x54);
  pcVar15 = (char *)plVar12[0xc];
  if (pcVar15 != "Family") {
    iVar4 = 6;
    if ((int)plVar12[0xd] < 7) {
      iVar4 = (int)plVar12[0xd] + -1;
    }
    memcpy(pcVar15,"Family",(long)iVar4);
    pcVar15[iVar4] = '\0';
  }
  *(undefined4 *)((long)plVar12 + 0x29c) = 0x278;
  *(uint *)(plVar12 + 0x4c) = *(uint *)(plVar12 + 0x4c) & 0xfffffff0;
  FUN_006f9fc0(param_1,plVar12,0xffffffff);
  return;
}

