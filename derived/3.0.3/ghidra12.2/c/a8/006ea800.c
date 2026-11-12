
void FUN_006ea800(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  void *pvVar18;
  long lVar19;
  undefined *puVar20;
  undefined *local_70;
  char *pcStack_68;
  
  pvVar16 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar18 = (void *)param_2[1];
  if (pvVar16 != pvVar18) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_006ea8ac;
      lVar15 = param_2[1] + lVar14;
      if (*(char *)(lVar15 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_006ea8ac;
      }
      if (*(char *)(lVar15 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_006ea8ac;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_006ea8ac:
    iVar2 = (int)lVar14;
    if (*(int *)(param_1 + 0x18) <= (int)lVar14) {
      iVar2 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar16,pvVar18,(long)iVar2);
    *(undefined1 *)((long)pvVar16 + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0x40) = (int)param_2[7];
  pvVar16 = *(void **)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x3c);
  *(int *)(param_1 + 0x48) = (int)param_2[8];
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)((long)param_2 + 0x44);
  lVar14 = param_2[10];
  lVar15 = param_2[0xc];
  *(long *)(param_1 + 0x60) = param_2[0xb];
  *(long *)(param_1 + 0x68) = lVar15;
  *(long *)(param_1 + 0x58) = lVar14;
  plVar9 = param_2 + 0xd;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar18 = (void *)param_2[0xe];
  if (pvVar16 != pvVar18) {
    (**(code **)(param_2[0xd] + 0x18))(plVar9);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[0xe] + lVar14) == '\0') goto LAB_006ea97c;
      lVar15 = param_2[0xe] + lVar14;
      if (*(char *)(lVar15 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_006ea97c;
      }
      if (*(char *)(lVar15 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_006ea97c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_006ea97c:
    iVar2 = (int)lVar14;
    if (*(int *)(param_1 + 0x80) <= (int)lVar14) {
      iVar2 = *(int *)(param_1 + 0x80) + -1;
    }
    memcpy(pvVar16,pvVar18,(long)iVar2);
    *(undefined1 *)((long)pvVar16 + (long)iVar2) = 0;
  }
  lVar14 = param_1 + 8;
  *(long *)(param_1 + 0xa8) = param_2[0x14];
  puVar6 = PTR_DAT_04bb2698;
  lVar15 = param_2[0x15];
  lVar8 = param_2[0x16];
  lVar19 = param_2[0x18];
  *(long *)(param_1 + 0xc0) = param_2[0x17];
  *(long *)(param_1 + 200) = lVar19;
  *(long *)(param_1 + 0xb0) = lVar15;
  *(long *)(param_1 + 0xb8) = lVar8;
  lVar15 = param_2[0x19];
  lVar8 = param_2[0x1a];
  lVar19 = param_2[0x1c];
  *(long *)(param_1 + 0xe0) = param_2[0x1b];
  *(long *)(param_1 + 0xe8) = lVar19;
  *(long *)(param_1 + 0xd0) = lVar15;
  *(long *)(param_1 + 0xd8) = lVar8;
  lVar15 = param_2[0x1d];
  lVar8 = param_2[0x1e];
  lVar19 = param_2[0x20];
  lVar17 = *(long *)puVar6;
  *(long *)(param_1 + 0x100) = param_2[0x1f];
  *(long *)(param_1 + 0x108) = lVar19;
  *(long *)(param_1 + 0xf0) = lVar15;
  *(long *)(param_1 + 0xf8) = lVar8;
  puVar5 = PTR_DAT_04bb3350;
  if (lVar17 == 0) {
    pvVar16 = malloc(0xd8);
  }
  else {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar17 + 8);
    if (lVar15 != 0) {
      puVar11 = (undefined8 *)(lVar15 + 0xa8);
    }
    pvVar16 = (void *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0xd8,8);
  }
  FUN_006d5120(pvVar16,lVar14);
  *(void **)(param_1 + 0x110) = pvVar16;
  lVar15 = *(long *)puVar6;
  if (lVar15 == 0) {
    plVar9 = malloc(0xc30);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar11 = (undefined8 *)(lVar15 + 8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0xc30,8);
  }
  *(undefined1 *)(plVar9 + 0x185) = 0;
  puVar20 = PTR_DAT_04bb29c0;
  *(undefined1 *)((long)plVar9 + 0xc1f) = 0;
  plVar9[0x184] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = 0;
  lVar15 = *(long *)puVar6;
  *(long **)(param_1 + 0x118) = plVar9;
  if (lVar15 == 0) {
    plVar9 = malloc(0xb0);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar10 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    plVar9 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xb0,8);
    }
  }
  puVar20 = PTR_DAT_04bb2968;
  plVar9[0x14] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  *(undefined1 *)(plVar9 + 0x15) = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = 0;
  lVar15 = *(long *)puVar6;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  *(long **)(param_1 + 0x120) = plVar9;
  if (lVar15 == 0) {
    puVar11 = malloc(8);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,8,8);
    }
  }
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "EnsZlibWork";
  uVar12 = FUN_038c6d48(*(undefined8 *)(param_1 + 0xb0),&local_70,*(undefined8 *)(param_1 + 0xa8),
                        0x20,1,0);
  *puVar11 = uVar12;
  lVar15 = *(long *)(param_1 + 0x118);
  lVar8 = *(long *)(param_1 + 0x120);
  lVar19 = *(long *)puVar6;
  *(undefined8 **)(param_1 + 0x128) = puVar11;
  if (lVar19 == 0) {
    plVar9 = malloc(0x370);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x370,8);
  }
  plVar9[4] = 0;
  puVar7 = PTR_DAT_04bb2a38;
  puVar20 = PTR_DAT_04bb2950;
  plVar9[2] = 0;
  plVar9[3] = 0;
  puVar1 = PTR_DAT_04bb2a20;
  *(undefined4 *)(plVar9 + 9) = 0xffffffff;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  uVar4 = *puVar20;
  plVar9[8] = 0xc3501;
  *(undefined1 *)((long)plVar9 + 0x4c) = uVar4;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[1] = (long)(puVar7 + 0x10);
  memset(plVar9 + 10,0,800);
  *(long **)(param_1 + 0x138) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x868);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x868,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  *(undefined4 *)(plVar9 + 8) = 0xc3502;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar1 = PTR_DAT_04bb2a38;
  puVar20 = PTR_DAT_04bb2a28;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  memset(plVar9 + 10,0,0x818);
  *(long **)(param_1 + 0x140) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0xd0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xd0,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3564;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2960;
  *(undefined8 *)((long)plVar9 + 0x4f) = 0;
  *(undefined8 *)((long)plVar9 + 0x57) = 0;
  *(undefined8 *)((long)plVar9 + 0x5f) = 0;
  *(undefined8 *)((long)plVar9 + 0x67) = 0;
  *(undefined8 *)((long)plVar9 + 0x6f) = 0;
  *(undefined4 *)((long)plVar9 + 0x76) = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x148) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0xd8);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xd8,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3565;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar20 = PTR_DAT_04bb2930;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined4 *)(plVar9 + 0x10) = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x17] = 0;
  plVar9[0x18] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x150) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x50);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x50,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3566;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  *plVar9 = (long)(PTR_DAT_04bb2978 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x158) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x70e8);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x70e8,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3567;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2970;
  plVar9[0xe1a] = 0;
  plVar9[0xe1b] = 0;
  plVar9[0xe1c] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x160) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x370);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x370,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  *(undefined4 *)(plVar9 + 8) = 0xc3568;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar1 = PTR_DAT_04bb2a38;
  puVar20 = PTR_DAT_04bb2980;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  memset(plVar9 + 10,0,800);
  *(long **)(param_1 + 0x168) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x50);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x50,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc35c8;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  *plVar9 = (long)(PTR_DAT_04bb2b08 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x170) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc362c;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2998;
  plVar9[10] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x198) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc362d;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar20 = PTR_DAT_04bb29a0;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x1a0) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x80);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x80,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc362f;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb29b0;
  *(undefined4 *)(plVar9 + 10) = 0;
  *(undefined4 *)((long)plVar9 + 0x74) = 0;
  *(undefined1 *)(plVar9 + 0xf) = 0;
  plVar9[0xd] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xe) = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x1a8) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x68);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x68,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3630;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb29a8 + 0x10;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *(undefined8 *)((long)plVar9 + 0x5d) = 0;
  *plVar9 = (long)puVar20;
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x1b0) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3633;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2990;
  plVar9[10] = 0;
  *(undefined4 *)(plVar9 + 0xb) = 0;
  *(undefined1 *)((long)plVar9 + 0x5c) = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x1b8) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0xb0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xb0,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3690;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2ac8;
  *(undefined4 *)(plVar9 + 10) = 0;
  plVar9[0xb] = 0;
  *(undefined4 *)(plVar9 + 0xc) = 0;
  plVar9[0xd] = 0;
  *(undefined4 *)(plVar9 + 0xe) = 0;
  plVar9[0xf] = 0;
  *(undefined4 *)(plVar9 + 0x10) = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(undefined1 *)(plVar9 + 0x15) = 1;
  *(long **)(param_1 + 0x178) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar20 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3691;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar1 = PTR_DAT_04bb2ac0;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  plVar9[10] = 0;
  *(undefined4 *)(plVar9 + 0xb) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x180) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x90);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x90,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3692;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  puVar20 = PTR_DAT_04bb2950;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined *)((long)plVar9 + 0x4c) = *puVar20;
  puVar20 = PTR_DAT_04bb2ab8;
  plVar9[0x10] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  *plVar9 = (long)(puVar20 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(undefined1 *)(plVar9 + 0x11) = 1;
  *(long **)(param_1 + 0x188) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x3a0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x3a0,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar20 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc3693;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar1 = PTR_DAT_04bb2aa8;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined4 *)(plVar9 + 0x6e) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[1] = (long)(puVar20 + 0x10);
  *(undefined1 *)((long)plVar9 + 0x38c) = 0;
  plVar9[0x70] = (long)plVar9 + 0x38c;
  *(undefined4 *)(plVar9 + 0x71) = 0x10;
  puVar20 = PTR_DAT_04bb2ab0;
  *(undefined1 *)((long)plVar9 + 0x39b) = 0;
  plVar9[0x6f] = (long)(puVar20 + 0x10);
  memset(plVar9 + 10,0,800);
  *(long **)(param_1 + 400) = plVar9;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  plVar9[7] = (long)puVar11;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x8600);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar9 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x8600,8);
    }
  }
  puVar20 = PTR_DAT_04bb2a38;
  puVar5 = PTR_DAT_04bb2950;
  *(undefined4 *)(plVar9 + 8) = 0xc36f4;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  uVar4 = *puVar5;
  plVar9[6] = 0;
  plVar9[7] = 0;
  *(undefined1 *)((long)plVar9 + 0x4c) = uVar4;
  puVar5 = PTR_DAT_04bb2bc8;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined4 *)(plVar9 + 0xe) = 0x4b1;
  *(undefined1 *)((long)plVar9 + 0x524) = 0;
  *(undefined1 *)((long)plVar9 + 0x74) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  plVar9[1] = (long)(puVar20 + 0x10);
  plVar9[10] = 0;
  plVar9[0xb] = 0x700000000;
  puVar20 = PTR_DAT_04bb2b70;
  *(undefined1 *)((long)plVar9 + 0x55b) = 0;
  plVar9[0xc] = (long)(puVar20 + 0x10);
  plVar9[0xd] = (long)plVar9 + 0x74;
  *(undefined1 *)((long)plVar9 + 0x53c) = 0;
  plVar9[0xa6] = (long)plVar9 + 0x53c;
  *(undefined4 *)(plVar9 + 0xa7) = 0x20;
  puVar5 = PTR_DAT_04bb2028;
  *(undefined4 *)(plVar9 + 0xae) = 0x20;
  *(undefined1 *)((long)plVar9 + 0x574) = 0;
  *(undefined1 *)((long)plVar9 + 0x593) = 0;
  plVar9[0xb3] = 0;
  plVar9[0xb7] = (long)(plVar9 + 0xba);
  plVar9[0xad] = (long)plVar9 + 0x574;
  plVar9[0xb4] = 0;
  plVar9[0xb5] = 0;
  plVar9[0xb8] = 0x8000;
  plVar9[0xa5] = (long)(puVar5 + 0x10);
  plVar9[0xac] = (long)(puVar5 + 0x10);
  memset(plVar9 + 0xb9,0,0x8008);
  plVar9[0x10ba] = 0;
  plVar9[0x10bb] = 0;
  puVar5 = PTR_DAT_04bb2bb8;
  plVar9[0x10bc] = 0;
  plVar9[0x10bd] = 0;
  plVar9[0x10be] = 0;
  plVar9[0x10bf] = 0;
  plVar9[0xb6] = (long)(puVar5 + 0x10);
  lVar19 = nn::oe::GetDesiredLanguage();
  plVar9[0xb3] = lVar19;
  *(long **)(param_1 + 0x1c0) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0x8a20);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x8a20,8);
    }
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  puVar1 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar9 + 8) = 0xc36f5;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar9 + 0x4c) = *PTR_DAT_04bb2950;
  puVar7 = PTR_DAT_04bb2b68;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined4 *)(plVar9 + 0xd) = 0x4b1;
  *(undefined1 *)((long)plVar9 + 0x51c) = 0;
  *(undefined1 *)((long)plVar9 + 0x553) = 0;
  *plVar9 = (long)(puVar7 + 0x10);
  plVar9[1] = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)plVar9 + 0x6c) = 0;
  plVar9[0xc] = (long)plVar9 + 0x6c;
  plVar9[10] = 0x700000006;
  plVar9[0xb] = (long)(puVar20 + 0x10);
  *(undefined1 *)((long)plVar9 + 0x534) = 0;
  plVar9[0xa5] = (long)plVar9 + 0x534;
  *(undefined4 *)(plVar9 + 0xa6) = 0x20;
  puVar20 = PTR_DAT_04bb2028;
  *(undefined4 *)(plVar9 + 0xad) = 0x20;
  *(undefined1 *)((long)plVar9 + 0x56c) = 0;
  *(undefined1 *)((long)plVar9 + 0x58b) = 0;
  plVar9[0xb3] = 0;
  plVar9[0xb4] = 0;
  plVar9[0xb6] = (long)(plVar9 + 0xb9);
  plVar9[0xac] = (long)plVar9 + 0x56c;
  plVar9[0xb7] = 0x400;
  plVar9[0xa4] = (long)(puVar20 + 0x10);
  plVar9[0xab] = (long)(puVar20 + 0x10);
  memset(plVar9 + 0xb8,0,0x408);
  plVar9[0x139] = 0;
  puVar20 = PTR_DAT_04bb2b58;
  plVar9[0x13b] = (long)(plVar9 + 0x13e);
  plVar9[0xb5] = (long)(puVar20 + 0x10);
  plVar9[0x13c] = 0x8000;
  memset(plVar9 + 0x13d,0,0x8008);
  plVar9[0x13a] = (long)(puVar5 + 0x10);
  plVar9[0x113e] = 0;
  plVar9[0x113f] = 0;
  plVar9[0x1140] = 0;
  plVar9[0x1141] = 0;
  plVar9[0x1142] = 0;
  plVar9[0x1143] = 0;
  lVar19 = nn::oe::GetDesiredLanguage();
  plVar9[0xb2] = lVar19;
  *(long **)(param_1 + 0x1c8) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  plVar9 = (long *)PTR_DAT_04bb3350;
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x60);
    plVar9 = (long *)PTR_DAT_04bb3350;
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  puVar20 = PTR_DAT_04bb2a38;
  *(undefined4 *)(plVar10 + 8) = 0xc3758;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  puVar5 = PTR_DAT_04bb2950;
  *(undefined *)((long)plVar10 + 0x4c) = *PTR_DAT_04bb2950;
  puVar1 = PTR_DAT_04bb2aa0;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  *(undefined4 *)(plVar10 + 0xb) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1d0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x70);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x70,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3759;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a98;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1d8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc375a;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a90;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1e0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x98);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x98,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc37bc;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2af0;
  *(undefined8 *)((long)plVar10 + 0x4f) = 0;
  *(undefined8 *)((long)plVar10 + 0x57) = 0;
  *(undefined8 *)((long)plVar10 + 0x5f) = 0;
  *(undefined8 *)((long)plVar10 + 0x67) = 0;
  *(undefined8 *)((long)plVar10 + 0x6f) = 0;
  *(undefined8 *)((long)plVar10 + 0x77) = 0;
  *(undefined8 *)((long)plVar10 + 0x7f) = 0;
  *(undefined8 *)((long)plVar10 + 0x87) = 0;
  plVar10[0x12] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1e8) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x98);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x98,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc37bd;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2ae8;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[0x12] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1f0) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x68);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x68,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc37bf;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2b00;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x1f8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0xd8);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar10 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar10 = (long *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xd8,8);
    }
  }
  FUN_006dd664(plVar10);
  *(long **)(param_1 + 0x200) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0xd8);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar10 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar10 = (long *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xd8,8);
    }
  }
  FUN_006dd034(plVar10);
  *(long **)(param_1 + 0x208) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x70);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x70,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc381f;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2ad8;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x210) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc37c1;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2af8;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x218) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc37c2;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2ad0;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x220) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x80);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x80,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3820;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2b28;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x228) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x80);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x80,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3821;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2b18;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x230) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3824;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined4 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  *plVar10 = (long)(PTR_DAT_04bb2b10 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x238) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3825;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2b20;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x240) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x50);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x50,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3884;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c58;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(undefined1 *)((long)plVar10 + 0x4f) = 1;
  *(long **)(param_1 + 0x248) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x68);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x68,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc3885;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2c60;
  *(undefined4 *)(plVar10 + 10) = 0;
  plVar10[0xb] = 0;
  *(undefined1 *)(plVar10 + 0xc) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x250) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38e8;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a48;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 600) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x4060);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x4060,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38e9;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a68;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(undefined4 *)(plVar10 + 0xb) = 1;
  *(long **)(param_1 + 0x260) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x41f0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x41f0,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38ea;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a88;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(undefined4 *)(plVar10 + 0x83d) = 1;
  *(long **)(param_1 + 0x268) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0xd0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar10 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar10 = (long *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xd0,8);
    }
  }
  FUN_006d9454(plVar10);
  *(long **)(param_1 + 0x270) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38ec;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a50;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x278) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x90);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x90,8);
  }
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined4 *)(plVar10 + 8) = 0xc38ed;
  *(undefined1 *)((long)plVar10 + 0x6c) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a78;
  plVar10[0xc] = (long)plVar10 + 0x6c;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[2] = 0;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined4 *)(plVar10 + 0xd) = 0x20;
  *(undefined1 *)((long)plVar10 + 0x8b) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  plVar10[10] = 0;
  plVar10[0xb] = (long)puVar1;
  *(long **)(param_1 + 0x280) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38ee;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a40;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x288) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38ef;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a70;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x290) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x68);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x68,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc38f0;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2a80;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x298) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc394c;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2c48;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2a0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x100);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x100,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc394d;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2c40;
  *(undefined4 *)(plVar10 + 0x1a) = 0;
  *(undefined1 *)((long)plVar10 + 0xfb) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(undefined4 *)(plVar10 + 0x1d) = 0x10;
  *(undefined1 *)((long)plVar10 + 0xec) = 0;
  puVar1 = PTR_DAT_04bb2ab0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0x1b] = (long)(puVar1 + 0x10);
  plVar10[0x1c] = (long)plVar10 + 0xec;
  *(long **)(param_1 + 0x2a8) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b0;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2bd8;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2b0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b1;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c38;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2b8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x78);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x78,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b2;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c00;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2c0) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x390);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x390,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b3;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2be0;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined4 *)(plVar10 + 10) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  memset(plVar10 + 0xb,0,0x338);
  *(long **)(param_1 + 0x2c8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x58,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b4;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x4c) = uVar4;
  puVar1 = PTR_DAT_04bb2be8;
  plVar10[10] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2d0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b5;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c30;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2d8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0xd8);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xd8,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b6;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c08;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  *(undefined4 *)(plVar10 + 0x1a) = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2e0) = plVar10;
  plVar10[7] = (long)puVar11;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x90);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar10 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar10 = (long *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x90,8);
    }
  }
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b7;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  puVar1 = PTR_DAT_04bb2bf0 + 0x10;
  plVar10[10] = 0;
  *(undefined4 *)(plVar10 + 0xb) = 0;
  *(undefined1 *)(plVar10 + 0xe) = 0;
  *(undefined4 *)(plVar10 + 0xf) = 0;
  *(undefined4 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  *plVar10 = (long)puVar1;
  plVar10[1] = (long)(puVar20 + 0x10);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    pvVar16 = malloc(0x200);
    puVar20 = PTR_DAT_04bb2a38;
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar20 = PTR_DAT_04bb2a38;
    plVar13 = (long *)(lVar19 + 8);
    if (lVar17 != 0) {
      plVar13 = (long *)(lVar17 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_006ed54c;
    pvVar16 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x200,8);
  }
  if (pvVar16 != (void *)0x0) {
    plVar10[0x11] = (long)pvVar16;
    *(undefined4 *)(plVar10 + 0x10) = 0x200;
  }
LAB_006ed54c:
  *(long **)(param_1 + 0x2e8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x98);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x98,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b8;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2c28;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  *(undefined1 *)((long)plVar10 + 0x8b) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(undefined1 *)((long)plVar10 + 0x6c) = 0;
  plVar10[0xc] = (long)plVar10 + 0x6c;
  *(undefined4 *)(plVar10 + 0xd) = 0x20;
  puVar1 = PTR_DAT_04bb2028;
  plVar10[0x12] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x2f0) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39b9;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2bf8;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  *(undefined4 *)(plVar10 + 0xb) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x2f8) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar10 = malloc(0x60);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
  }
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 8) = 0xc39ba;
  *(undefined8 *)((long)plVar10 + 0x44) = 0xffffffff00000000;
  *(undefined *)((long)plVar10 + 0x4c) = *puVar5;
  puVar1 = PTR_DAT_04bb2bd0;
  *(undefined2 *)((long)plVar10 + 0x4d) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)(puVar20 + 0x10);
  *(long **)(param_1 + 0x300) = plVar10;
  plVar10[5] = lVar15;
  plVar10[6] = lVar8;
  plVar10[7] = (long)puVar11;
  (**(code **)(*plVar10 + 0x20))(plVar10,lVar14);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    plVar9 = malloc(0xe0);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar19 + 8);
    if (lVar17 != 0) {
      puVar3 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xe0,8);
  }
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  *(undefined4 *)(plVar9 + 8) = 0xc39bb;
  *(undefined8 *)((long)plVar9 + 0x44) = 0xffffffff00000000;
  uVar4 = *puVar5;
  *(undefined2 *)((long)plVar9 + 0x4d) = 0;
  *(undefined1 *)((long)plVar9 + 0x4c) = uVar4;
  puVar6 = PTR_DAT_04bb2c10;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = (long)(puVar20 + 0x10);
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  *(long **)(param_1 + 0x308) = plVar9;
  plVar9[7] = (long)puVar11;
  plVar9[5] = lVar15;
  plVar9[6] = lVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,lVar14);
  *(undefined1 *)(param_1 + 0x130) = 1;
  return;
}

