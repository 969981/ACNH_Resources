
/* WARNING: Type propagation algorithm not settling */

void FUN_026f9460(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *__s;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  void *pvVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined **local_c0;
  long lStack_b8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long lStack_70;
  
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
  *(long **)(param_1 + 8) = param_2;
  plVar19 = (long *)PTR_DAT_04bb2698;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    puVar14 = malloc(0x300);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        param_2 = (long *)(lVar13 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_026f94fc;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x300,8);
  }
LAB_026f94fc:
  *(undefined8 *)((long)puVar14 + 6) = 0;
  *puVar14 = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
  puVar14[8] = 0;
  *(undefined8 *)((long)puVar14 + 0x46) = 0;
  *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
  memset(puVar14 + 0x20,0,0x200);
  uVar24 = 0;
  do {
    uVar27 = uVar24 << 2;
    uVar11 = uVar24 >> 0x1f;
    uVar1 = (int)uVar24 + 1;
    uVar24 = (ulong)uVar1;
    *(undefined4 *)((long)(puVar14 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
  } while (uVar1 != 0x80);
  *(undefined8 **)(param_1 + 0x50) = puVar14;
  lVar28 = *plVar19;
  if (lVar28 == 0) {
    puVar14 = malloc(0x1800);
    if (puVar14 != (undefined8 *)0x0) goto LAB_026f965c;
LAB_026f95a0:
    lVar28 = *plVar19;
    if (lVar28 != 0) goto LAB_026f95a8;
LAB_026f98f8:
    puVar14 = malloc(0x1800);
    if (puVar14 == (undefined8 *)0x0) goto LAB_026f95f8;
LAB_026f9908:
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    memset(puVar14 + 0x20,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x60] = 0;
    *(undefined8 *)((long)puVar14 + 0x306) = 0;
    *(undefined2 *)((long)puVar14 + 0x30e) = 0xffff;
    puVar14[0x68] = 0;
    *(undefined8 *)((long)puVar14 + 0x346) = 0;
    *(undefined2 *)((long)puVar14 + 0x34e) = 0xffff;
    memset(puVar14 + 0x80,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x80) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0xc0] = 0;
    *(undefined8 *)((long)puVar14 + 0x606) = 0;
    *(undefined2 *)((long)puVar14 + 0x60e) = 0xffff;
    puVar14[200] = 0;
    *(undefined8 *)((long)puVar14 + 0x646) = 0;
    *(undefined2 *)((long)puVar14 + 0x64e) = 0xffff;
    memset(puVar14 + 0xe0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0xe0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x120] = 0;
    *(undefined8 *)((long)puVar14 + 0x906) = 0;
    *(undefined2 *)((long)puVar14 + 0x90e) = 0xffff;
    puVar14[0x128] = 0;
    *(undefined8 *)((long)puVar14 + 0x946) = 0;
    *(undefined2 *)((long)puVar14 + 0x94e) = 0xffff;
    memset(puVar14 + 0x140,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x140) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x180] = 0;
    *(undefined8 *)((long)puVar14 + 0xc06) = 0;
    *(undefined2 *)((long)puVar14 + 0xc0e) = 0xffff;
    puVar14[0x188] = 0;
    *(undefined8 *)((long)puVar14 + 0xc46) = 0;
    *(undefined2 *)((long)puVar14 + 0xc4e) = 0xffff;
    memset(puVar14 + 0x1a0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x1a0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x1e0] = 0;
    *(undefined8 *)((long)puVar14 + 0xf06) = 0;
    *(undefined2 *)((long)puVar14 + 0xf0e) = 0xffff;
    puVar14[0x1e8] = 0;
    *(undefined8 *)((long)puVar14 + 0xf46) = 0;
    *(undefined2 *)((long)puVar14 + 0xf4e) = 0xffff;
    memset(puVar14 + 0x200,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x200) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x240] = 0;
    puVar14[0x248] = 0;
    *(undefined8 *)((long)puVar14 + 0x1206) = 0;
    *(undefined8 *)((long)puVar14 + 0x1246) = 0;
    *(undefined2 *)((long)puVar14 + 0x120e) = 0xffff;
    *(undefined2 *)((long)puVar14 + 0x124e) = 0xffff;
    memset(puVar14 + 0x260,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x260) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x2a0] = 0;
    puVar14[0x2a8] = 0;
    *(undefined8 *)((long)puVar14 + 0x1506) = 0;
    *(undefined8 *)((long)puVar14 + 0x1546) = 0;
    *(undefined2 *)((long)puVar14 + 0x150e) = 0xffff;
    *(undefined2 *)((long)puVar14 + 0x154e) = 0xffff;
    memset(puVar14 + 0x2c0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x2c0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    *(undefined4 *)(param_1 + 0x68) = 8;
    lVar28 = *plVar19;
    if (lVar28 == 0) goto LAB_026f9ba8;
LAB_026f9600:
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_026f9bb4;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x300,8);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_026f95a0;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1800,8);
    if (puVar14 == (undefined8 *)0x0) goto LAB_026f95a0;
LAB_026f965c:
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    memset(puVar14 + 0x20,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x60] = 0;
    *(undefined8 *)((long)puVar14 + 0x306) = 0;
    *(undefined2 *)((long)puVar14 + 0x30e) = 0xffff;
    puVar14[0x68] = 0;
    *(undefined8 *)((long)puVar14 + 0x346) = 0;
    *(undefined2 *)((long)puVar14 + 0x34e) = 0xffff;
    memset(puVar14 + 0x80,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x80) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0xc0] = 0;
    *(undefined8 *)((long)puVar14 + 0x606) = 0;
    *(undefined2 *)((long)puVar14 + 0x60e) = 0xffff;
    puVar14[200] = 0;
    *(undefined8 *)((long)puVar14 + 0x646) = 0;
    *(undefined2 *)((long)puVar14 + 0x64e) = 0xffff;
    memset(puVar14 + 0xe0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0xe0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x120] = 0;
    *(undefined8 *)((long)puVar14 + 0x906) = 0;
    *(undefined2 *)((long)puVar14 + 0x90e) = 0xffff;
    puVar14[0x128] = 0;
    *(undefined8 *)((long)puVar14 + 0x946) = 0;
    *(undefined2 *)((long)puVar14 + 0x94e) = 0xffff;
    memset(puVar14 + 0x140,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x140) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x180] = 0;
    *(undefined8 *)((long)puVar14 + 0xc06) = 0;
    *(undefined2 *)((long)puVar14 + 0xc0e) = 0xffff;
    puVar14[0x188] = 0;
    *(undefined8 *)((long)puVar14 + 0xc46) = 0;
    *(undefined2 *)((long)puVar14 + 0xc4e) = 0xffff;
    memset(puVar14 + 0x1a0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x1a0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x1e0] = 0;
    *(undefined8 *)((long)puVar14 + 0xf06) = 0;
    *(undefined2 *)((long)puVar14 + 0xf0e) = 0xffff;
    puVar14[0x1e8] = 0;
    *(undefined8 *)((long)puVar14 + 0xf46) = 0;
    *(undefined2 *)((long)puVar14 + 0xf4e) = 0xffff;
    memset(puVar14 + 0x200,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x200) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x240] = 0;
    puVar14[0x248] = 0;
    *(undefined8 *)((long)puVar14 + 0x1206) = 0;
    *(undefined8 *)((long)puVar14 + 0x1246) = 0;
    *(undefined2 *)((long)puVar14 + 0x120e) = 0xffff;
    *(undefined2 *)((long)puVar14 + 0x124e) = 0xffff;
    memset(puVar14 + 0x260,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x260) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    puVar14[0x2a0] = 0;
    puVar14[0x2a8] = 0;
    *(undefined8 *)((long)puVar14 + 0x1506) = 0;
    *(undefined8 *)((long)puVar14 + 0x1546) = 0;
    *(undefined2 *)((long)puVar14 + 0x150e) = 0xffff;
    *(undefined2 *)((long)puVar14 + 0x154e) = 0xffff;
    memset(puVar14 + 0x2c0,0,0x200);
    uVar24 = 0;
    do {
      uVar27 = uVar24 << 2;
      uVar11 = uVar24 >> 0x1f;
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar14 + 0x2c0) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
    } while (uVar1 != 0x80);
    *(undefined8 **)(param_1 + 0x60) = puVar14;
    *(undefined4 *)(param_1 + 0x58) = 8;
    lVar28 = *plVar19;
    if (lVar28 == 0) goto LAB_026f98f8;
LAB_026f95a8:
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) goto LAB_026f95dc;
    }
    else {
LAB_026f95dc:
      puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1800,8);
      if (puVar14 != (undefined8 *)0x0) goto LAB_026f9908;
    }
LAB_026f95f8:
    lVar28 = *plVar19;
    if (lVar28 != 0) goto LAB_026f9600;
LAB_026f9ba8:
    puVar14 = malloc(0x300);
  }
LAB_026f9bb4:
  *(undefined8 *)((long)puVar14 + 6) = 0;
  *puVar14 = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
  puVar14[8] = 0;
  *(undefined8 *)((long)puVar14 + 0x46) = 0;
  *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
  memset(puVar14 + 0x20,0,0x200);
  uVar24 = 0;
  do {
    uVar27 = uVar24 << 2;
    uVar11 = uVar24 >> 0x1f;
    uVar1 = (int)uVar24 + 1;
    uVar24 = (ulong)uVar1;
    *(undefined4 *)((long)(puVar14 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
  } while (uVar1 != 0x80);
  *(undefined8 **)(param_1 + 0x78) = puVar14;
  lVar28 = *plVar19;
  if (lVar28 == 0) {
    puVar14 = malloc(0x300);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_026f9c68;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x300,8);
  }
LAB_026f9c68:
  *(undefined8 *)((long)puVar14 + 6) = 0;
  *puVar14 = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
  puVar14[8] = 0;
  *(undefined8 *)((long)puVar14 + 0x46) = 0;
  *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
  memset(puVar14 + 0x20,0,0x200);
  uVar24 = 0;
  do {
    uVar27 = uVar24 << 2;
    uVar11 = uVar24 >> 0x1f;
    uVar1 = (int)uVar24 + 1;
    uVar24 = (ulong)uVar1;
    *(undefined4 *)((long)(puVar14 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar27)) = 0;
  } while (uVar1 != 0x80);
  *(undefined8 **)(param_1 + 0x80) = puVar14;
  lVar28 = *plVar19;
  if (lVar28 == 0) {
    pvVar16 = malloc(0x3ce60);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x3ce60,0x10);
  }
  FUN_028119e0();
  *(undefined8 *)(param_1 + 0x18) = pvVar16;
  lVar28 = *plVar19;
  if (lVar28 == 0) {
    puVar14 = malloc(0x2d368);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x2d368,8);
  }
  FUN_027056a0(puVar14,0,0);
  *puVar14 = &PTR_LAB_04a8f210;
  *(undefined8 **)(param_1 + 0x20) = puVar14;
  FUN_02640070(puVar14,0,(undefined8 *)(param_1 + 0x18),0,1);
  FUN_02640130(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  FUN_0272eb7c(param_1 + 0x308,*(undefined8 *)(param_1 + 8));
  FUN_0272ea70(param_1 + 0x308,2);
  lVar28 = *plVar19;
  if (lVar28 == 0) {
    pvVar16 = calloc(1,0x1a8);
    *(void **)(param_1 + 0x10) = pvVar16;
LAB_026f9eb4:
    plVar15 = malloc(0x40);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) goto LAB_026f9e24;
      pvVar16 = (void *)0x0;
    }
    else {
LAB_026f9e24:
      pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1a8,8);
    }
    lVar28 = *plVar19;
    memset(pvVar16,0,0x1a8);
    *(void **)(param_1 + 0x10) = pvVar16;
    if (lVar28 == 0) goto LAB_026f9eb4;
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar28 + 8);
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) goto LAB_026f9e8c;
      plVar15 = (long *)0x0;
    }
    else {
LAB_026f9e8c:
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x40,8);
    }
  }
  *plVar15 = (long)&PTR_LAB_04a89728;
  plVar15[2] = 0;
  plVar15[3] = 0;
  lVar28 = param_1 + 0x3d0;
  lVar13 = param_1 + 0x3f0;
  plVar22 = plVar15 + 1;
  *plVar22 = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar17 = *(long **)(param_1 + 8);
  lVar2 = param_1 + 0x410;
  lVar3 = param_1 + 0x430;
  if (plVar17 != (long *)0x0) {
    lVar25 = *plVar19;
    *plVar22 = (long)plVar17;
    if (lVar25 == 0) {
      puVar14 = malloc(0x9b0e90);
    }
    else {
      puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x9b0e90,0x10);
    }
    puVar29 = puVar14 + 0x22;
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    FUN_02781640(puVar29);
    puVar20 = puVar14 + 0xb67aa;
    FUN_02785ed4(puVar20);
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    puVar14[0x18] = 0;
    puVar14[0x19] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x14] = 0;
    puVar14[0x15] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    memset(puVar29,0,0x5b3c40);
    FUN_02781640(puVar29);
    memset(puVar20,0,0x3fd140);
    FUN_02785ed4(puVar20);
    lVar25 = *plVar19;
    plVar15[2] = (long)puVar14;
    if (lVar25 == 0) {
      puVar14 = malloc(0x9b0e90);
    }
    else {
      plVar17 = (long *)*plVar22;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          puVar14 = (undefined8 *)0x0;
          goto LAB_026fa05c;
        }
      }
      puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x9b0e90,0x10);
    }
LAB_026fa05c:
    puVar29 = puVar14 + 0x22;
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    FUN_02781640(puVar29);
    puVar20 = puVar14 + 0xb67aa;
    FUN_02785ed4(puVar20);
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    puVar14[0x18] = 0;
    puVar14[0x19] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x14] = 0;
    puVar14[0x15] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    memset(puVar29,0,0x5b3c40);
    FUN_02781640(puVar29);
    memset(puVar20,0,0x3fd140);
    FUN_02785ed4(puVar20);
    lVar25 = *plVar19;
    plVar15[3] = (long)puVar14;
    if (lVar25 == 0) {
      puVar14 = malloc(0x2913c0);
    }
    else {
      plVar19 = (long *)*plVar22;
      if (plVar19 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
      }
      puVar14 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,FUN_002913c0,8);
    }
    *(undefined1 *)(puVar14 + 6) = 0;
    puVar14[0xc] = 0;
    *puVar14 = &PTR_LAB_04a897b8;
    puVar14[1] = 0;
    *(undefined1 *)(puVar14 + 0xd) = 0;
    puVar14[7] = &DAT_04a897e8;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar29 = puVar14 + 0x4ed96;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[2] = 0;
    puVar14[3] = puVar14 + 7;
    FUN_0270c0d4(puVar14 + 0xe,puVar14,0x110);
    puVar14[0x4ed9b] = 0;
    puVar14[0xe] = &PTR_LAB_04a8c230;
    lVar25 = puVar14[2];
    lVar18 = puVar14[3];
    puVar14[0x4ed9a] = 0;
    *(undefined1 *)(puVar14 + 0x4ed9c) = 0;
    puVar14[3] = puVar29;
    puVar14[0x4ed97] = 0;
    puVar14[0x4ed98] = lVar25 + 0x5b3d50;
    if (lVar18 != 0) {
      puVar14[0x4ed9a] = lVar18;
    }
    *puVar29 = &PTR_LAB_04a89848;
    puVar20 = puVar14 + 0x508af;
    puVar14[0x4eda8] = 0;
    puVar14[0x4eda9] = 0;
    puVar30 = puVar14 + 0x5079e;
    *(undefined1 *)(puVar14 + 0x4edaa) = 0;
    puVar31 = puVar14 + 0x5068d;
    *(undefined1 *)(puVar14 + 0x4edbf) = 0;
    puVar14[0x4ed9d] = &DAT_04a8ed90;
    puVar33 = puVar14 + 0x5057c;
    puVar4 = puVar14 + 0x5046b;
    puVar14[0x4eda8] = puVar14 + 0x4ed9d;
    puVar5 = puVar14 + 0x5035a;
    *(undefined1 *)(puVar14 + 0x4edc6) = 0;
    puVar6 = puVar14 + 0x50249;
    *(undefined1 *)(puVar14 + 0x4eddb) = 0;
    puVar7 = puVar14 + 0x50138;
    puVar14[0x4ed9e] = 0;
    puVar14[0x4ed9f] = lVar25 + 0x958f50;
    puVar14[0x4eda4] = &DAT_04a89878;
    puVar8 = puVar14 + 0x50027;
    puVar14[0x4edda] = 0;
    puVar14[0x4edac] = 0;
    puVar14[0x4edad] = lVar25 + 0x9594a0;
    puVar14[0x4edd9] = 0;
    *(undefined1 *)(puVar14 + 0x4ede2) = 0;
    puVar14[0x4ede1] = 0;
    puVar14[0x4ede0] = 0;
    puVar14[0x4eda2] = 0;
    *(undefined1 *)(puVar14 + 0x4eda3) = 0;
    puVar14[0x4eda7] = 0;
    *(undefined1 *)(puVar14 + 0x4edb1) = 0;
    puVar14[0x4edb0] = 0;
    *(undefined1 *)(puVar14 + 0x4edb8) = 0;
    puVar14[0x4edb5] = 0;
    puVar14[0x4edbc] = 0;
    puVar14[0x4edc3] = 0;
    *(undefined1 *)(puVar14 + 0x4edcd) = 0;
    puVar14[0x4edcc] = 0;
    *(undefined1 *)(puVar14 + 0x4edd4) = 0;
    puVar14[0x4edd1] = 0;
    puVar14[0x4edd8] = 0;
    puVar14[0x4eddf] = 0;
    *(undefined1 *)(puVar14 + 0x4ede9) = 0;
    puVar14[0x4ede8] = 0;
    *(undefined1 *)(puVar14 + 0x4edf0) = 0;
    puVar14[0x4edef] = 0;
    puVar14[0x4edee] = 0;
    puVar14[0x4eded] = 0;
    *(undefined1 *)(puVar14 + 0x4edf7) = 0;
    puVar14[0x4edf6] = 0;
    *(undefined1 *)(puVar14 + 0x4edfe) = 0;
    puVar14[0x4edfd] = 0;
    puVar14[0x4edfc] = 0;
    puVar14[0x4edfb] = 0;
    puVar14[0x4edb3] = 0;
    puVar14[0x4edb4] = lVar25 + 0x9594a0;
    puVar14[0x4edb2] = &DAT_04a898d8;
    puVar14[0x4edba] = 0;
    puVar14[0x4edbb] = lVar25 + 0x96ef80;
    puVar14[0x4edbd] = 0;
    puVar14[0x4edbe] = 0;
    puVar14[0x4edbd] = puVar14 + 0x4edb2;
    puVar14[0x4edab] = &PTR_LAB_04a898a8;
    puVar14[0x4edb9] = &DAT_04a89908;
    puVar14[0x4eda5] = 0;
    puVar14[0x4eda6] = lVar25 + 0x958f60;
    puVar14[0x4edae] = puVar14 + 0x4edb9;
    puVar14[0x4edaf] = puVar14 + 0x4eda4;
    puVar14[0x4edc0] = &DAT_04a89938;
    puVar14[0x4edc4] = 0;
    puVar14[0x4edc5] = 0;
    puVar14[0x4edc4] = puVar14 + 0x4edab;
    puVar14[0x4edc8] = 0;
    puVar14[0x4edc9] = lVar25 + 0x978790;
    puVar14[0x4edcf] = 0;
    puVar14[0x4edd0] = lVar25 + 0x978790;
    puVar14[0x4edc1] = 0;
    puVar14[0x4edc2] = lVar25 + 0x978780;
    puVar14[0x4edce] = &DAT_04a8fba0;
    puVar14[0x4edd9] = puVar14 + 0x4edce;
    puVar14[0x4edd6] = 0;
    puVar14[0x4edd7] = lVar25 + 0x978798;
    puVar14[0x4edca] = puVar14 + 0x4edd5;
    puVar14[0x4edcb] = puVar14 + 0x4edc0;
    puVar14[0x4edd5] = &DAT_04a89998;
    puVar14[0x4edc7] = &PTR_LAB_04a89968;
    puVar14[0x4ede0] = puVar14 + 0x4edc7;
    puVar14[0x4eddd] = 0;
    puVar14[0x4edde] = lVar25 + 0x978c10;
    puVar14[0x4eddc] = &DAT_04a899c8;
    puVar14[0x4ede4] = 0;
    puVar14[0x4ede5] = lVar25 + 0x978f90;
    puVar14[0x4edeb] = 0;
    puVar14[0x4edec] = lVar25 + 0x978f90;
    puVar14[0x4edf2] = 0;
    puVar14[0x4edf3] = lVar25 + 0x978d10;
    puVar14[0x4edea] = &DAT_04a89a28;
    puVar14[0x4ede3] = &PTR_LAB_04a899f8;
    puVar14[0x4ed99] = puVar14 + 0x4edf1;
    puVar14[0x4edf5] = puVar14 + 0x4ede3;
    puVar14[0x4edf9] = 0;
    puVar14[0x4edfa] = lVar25 + 0x978d10;
    puVar14[0x4edf8] = &DAT_04a89a88;
    puVar14[0x4edf4] = puVar14 + 0x4edf8;
    puVar14[0x4edf1] = &PTR_LAB_04a89a58;
    puVar14[0x4eda0] = 0;
    puVar14[0x4eda1] = 0;
    puVar14[0x4edb6] = 0;
    puVar14[0x4edb7] = 0;
    puVar14[0x4edd2] = 0;
    puVar14[0x4edd3] = 0;
    puVar14[0x4ede6] = puVar14 + 0x4edea;
    puVar14[0x4ede7] = puVar14 + 0x4eddc;
    FUN_02721ef0(puVar14 + 0x4edff,puVar29,lVar25 + 0x97d390);
    *(undefined1 *)(puVar14 + 0x4f90a) = 0;
    puVar14[0x4edff] = &PTR_LAB_04a89ac0;
    lVar25 = puVar14[0x4ed98];
    puVar14[0x4f907] = 0;
    puVar14[0x4f908] = 0;
    puVar14[0x4f909] = 0;
    puVar14[0x4f905] = 0;
    puVar14[0x4f906] = FUN_003c9708 + lVar25;
    if (puVar14[0x4ed99] != 0) {
      puVar14[0x4f908] = puVar14[0x4ed99];
    }
    puVar14[0x4f904] = &DAT_04a89b80;
    puVar14[0x4f90c] = 0;
    puVar14[0x4f90d] = lVar25 + 0x3c970c;
    *(undefined1 *)(puVar14 + 0x4f911) = 0;
    puVar14[0x4f90b] = &DAT_04a8caa0;
    puVar14[0x4ed99] = puVar14 + 0x4f90b;
    puVar14[0x4f90f] = 0;
    puVar14[0x4f910] = 0;
    puVar14[0x4f90e] = 0;
    puVar14[0x4f90f] = puVar14 + 0x4f904;
    FUN_027223b0(puVar14 + 0x4f912,puVar29,lVar25 + 0x3c9858);
    lVar25 = puVar14[0x4ed98];
    puVar14[0x4f912] = &PTR_LAB_04a89bb0;
    puVar14[0x4fea0] = 0;
    puVar14[0x4fea1] = lVar25 + 0x3c9920;
    puVar14[0x4fea4] = 0;
    puVar14[0x4fea2] = 0;
    puVar14[0x4fea3] = 0;
    *(undefined1 *)(puVar14 + 0x4fea5) = 0;
    if (puVar14[0x4ed99] != 0) {
      puVar14[0x4fea3] = puVar14[0x4ed99];
    }
    puVar14[0x4fea7] = 0;
    puVar14[0x4fea8] = lVar25 + 0x3c9928;
    *(undefined1 *)(puVar14 + 0x4feac) = 0;
    puVar14[0x4feaa] = 0;
    puVar14[0x4feab] = 0;
    puVar14[0x4fea9] = 0;
    puVar14[0x4feae] = 0;
    puVar14[0x4feaf] = lVar25 + 0x3c992c;
    *(undefined1 *)(puVar14 + 0x4feb3) = 0;
    puVar14[0x4feb0] = 0;
    puVar14[0x4fea6] = &DAT_04a8f030;
    puVar14[0x4fead] = &DAT_04a8f030;
    puVar14[0x4feaa] = puVar14 + 0x4fe9f;
    puVar14[0x4feb4] = &DAT_04a8ff30;
    puVar14[0x4fe9f] = &DAT_04a8c890;
    puVar14[0x4fed7] = &DAT_04a8c890;
    puVar14[0x4feb1] = 0;
    puVar14[0x4feb2] = 0;
    puVar14[0x4feb1] = puVar14 + 0x4fea6;
    puVar14[0x4feb5] = 0;
    puVar14[0x4feb6] = lVar25 + 0x3c9930;
    *(undefined1 *)(puVar14 + 0x4feba) = 0;
    puVar14[0x4feb7] = 0;
    puVar14[0x4feb8] = 0;
    puVar14[0x4feb9] = 0;
    puVar14[0x4feb8] = puVar14 + 0x4fead;
    puVar14[0x4fec3] = 0;
    puVar14[0x4fec4] = lVar25 + 0x3c9bf0;
    *(undefined1 *)(puVar14 + 0x4fec8) = 0;
    puVar14[0x4fec5] = 0;
    puVar14[0x4febc] = 0;
    puVar14[0x4febd] = FUN_003c9970 + lVar25;
    *(undefined1 *)(puVar14 + 0x4fec1) = 0;
    puVar14[0x4febe] = 0;
    puVar14[0x4fec6] = 0;
    puVar14[0x4fec7] = 0;
    puVar14[0x4fec2] = &DAT_04a89c70;
    puVar14[0x4febf] = 0;
    puVar14[0x4fec0] = 0;
    puVar14[0x4febf] = puVar14 + 0x4feb4;
    puVar14[0x4febb] = &DAT_04a89c40;
    puVar14[0x4fec6] = puVar14 + 0x4febb;
    __s = puVar14 + 0x4ff16;
    puVar14[0x4feca] = 0;
    puVar14[0x4fecb] = lVar25 + 0x3c9c00;
    *(undefined1 *)(puVar14 + 0x4fecf) = 0;
    puVar14[0x4fece] = 0;
    *(undefined1 *)(puVar14 + 0x4fed6) = 0;
    puVar14[0x4fed3] = 0;
    *(undefined1 *)(puVar14 + 0x4fedd) = 0;
    puVar14[0x4feda] = 0;
    puVar14[0x4fed1] = 0;
    puVar14[0x4fed2] = lVar25 + 0x3c9c2a;
    puVar14[0x4fed0] = &DAT_04a8c890;
    puVar14[0x4fed4] = 0;
    puVar14[0x4fed5] = 0;
    puVar14[0x4fedb] = 0;
    puVar14[0x4fedc] = 0;
    puVar14[0x4fec9] = &PTR_LAB_04a89ca0;
    puVar14[0x4fedb] = puVar14 + 0x4fed0;
    puVar14[0x4fedf] = 0;
    puVar14[0x4fee0] = lVar25 + 0x3ca1c0;
    *(undefined1 *)(puVar14 + 0x4fee4) = 0;
    puVar14[0x4fed8] = 0;
    puVar14[0x4fed9] = lVar25 + 0x3c9c32;
    puVar14[0x4fecc] = puVar14 + 0x4fed7;
    puVar14[0x4fecd] = puVar14 + 0x4fec2;
    puVar14[0x4fee2] = 0;
    puVar14[0x4fee3] = 0;
    puVar14[0x4fee2] = puVar14 + 0x4fec9;
    puVar9 = PTR_DAT_04bc3170 + 0x10;
    puVar14[0x4fee1] = 0;
    puVar14[0x4fee5] = puVar9;
    puVar14[0x4feec] = puVar9;
    puVar14[0x4fede] = puVar9;
    puVar14[0x4ff08] = puVar9;
    *(undefined1 *)(puVar14 + 0x4ff15) = 0;
    plVar19 = puVar14 + 0x4ff12;
    *plVar19 = 0;
    puVar14[0x4fee6] = 0;
    puVar14[0x4fee7] = lVar25 + 0x3ca1c8;
    *(undefined1 *)(puVar14 + 0x4feeb) = 0;
    puVar14[0x4fee8] = 0;
    puVar14[0x4fee9] = 0;
    puVar14[0x4feea] = 0;
    puVar14[0x4fee9] = puVar14 + 0x4fede;
    puVar14[0x4feed] = 0;
    puVar14[0x4feee] = lVar25 + 0x3ca1d0;
    *(undefined1 *)(puVar14 + 0x4fef2) = 0;
    puVar14[0x4feef] = 0;
    puVar14[0x4fef0] = 0;
    puVar14[0x4fef1] = 0;
    puVar14[0x4fef0] = puVar14 + 0x4fee5;
    puVar14[0x4fef4] = 0;
    puVar14[0x4fef5] = lVar25 + 0x3ca1d8;
    *(undefined1 *)(puVar14 + 0x4fef9) = 0;
    puVar14[0x4fef6] = 0;
    puVar14[0x4fef7] = 0;
    puVar14[0x4fef8] = 0;
    puVar14[0x4fef7] = puVar14 + 0x4feec;
    puVar14[0x4fef3] = puVar9;
    puVar14[0x4fefb] = 0;
    puVar14[0x4fefc] = lVar25 + 0x3ca1e0;
    *(undefined1 *)(puVar14 + 0x4ff00) = 0;
    puVar14[0x4fefd] = 0;
    puVar14[0x4fefe] = 0;
    puVar14[0x4feff] = 0;
    puVar14[0x4fefe] = puVar14 + 0x4fef3;
    puVar14[0x4fefa] = puVar9;
    puVar14[0x4ff02] = 0;
    puVar14[0x4ff03] = lVar25 + 0x3ca1e8;
    *(undefined1 *)(puVar14 + 0x4ff07) = 0;
    puVar14[0x4ff04] = 0;
    puVar14[0x4ff05] = 0;
    puVar14[0x4ff06] = 0;
    puVar14[0x4ff05] = puVar14 + 0x4fefa;
    puVar14[0x4ff09] = 0;
    puVar14[0x4ff0a] = lVar25 + 0x3ca1f0;
    *(undefined1 *)(puVar14 + 0x4ff0e) = 0;
    puVar14[0x4ff01] = puVar9;
    puVar14[0x4ff0b] = 0;
    puVar14[0x4ed99] = puVar14 + 0x4ff0f;
    puVar14[0x4ff0c] = 0;
    puVar14[0x4ff0d] = 0;
    puVar14[0x4ff0c] = puVar14 + 0x4ff01;
    lVar18 = lVar25 + 0x3ca1f8;
    puVar14[0x4ff11] = lVar18;
    puVar14[0x4ff13] = 0;
    puVar14[0x4ff14] = 0;
    puVar14[0x4ff13] = puVar14 + 0x4ff08;
    puVar14[0x4ff0f] = PTR_DAT_04bc35d8 + 0x10;
    puVar14[0x4ff10] = 0;
    memset(__s,0,0x5550);
    FUN_02722908(__s);
    puVar14[0x4ff16] = &PTR_LAB_04a89d00;
    FUN_02722908(puVar8);
    *puVar8 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar7);
    *puVar7 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar6);
    *puVar6 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar5);
    *puVar5 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar4);
    *puVar4 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar33);
    *puVar33 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar31);
    *puVar31 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar30);
    *puVar30 = &PTR_LAB_04a89d00;
    FUN_02722908(puVar20);
    *puVar20 = &PTR_LAB_04a89d00;
    puVar14[0x4ff0f] = &PTR_LAB_04a89cd0;
    lVar26 = *plVar19;
    *plVar19 = (long)__s;
    if (lVar26 != 0) {
      puVar14[0x4ff1a] = lVar26;
    }
    puVar14[0x4ff18] = puVar14[0x4ff18] + lVar18;
    FUN_026400e0(__s,lVar18);
    lVar18 = puVar14[0x4ff12];
    puVar14[0x4ff12] = puVar8;
    if (lVar18 != 0) {
      puVar14[0x5002b] = lVar18;
    }
    puVar14[0x50029] = puVar14[0x50029] + lVar25 + 0x3cb2fc;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar7;
    if (lVar18 != 0) {
      puVar14[0x5013c] = lVar18;
    }
    puVar14[0x5013a] = FUN_003cc400 + puVar14[0x5013a] + lVar25;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar6;
    if (lVar18 != 0) {
      puVar14[0x5024d] = lVar18;
    }
    puVar14[0x5024b] = puVar14[0x5024b] + lVar25 + 0x3cd504;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar5;
    if (lVar18 != 0) {
      puVar14[0x5035e] = lVar18;
    }
    puVar14[0x5035c] = puVar14[0x5035c] + lVar25 + 0x3ce608;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar4;
    if (lVar18 != 0) {
      puVar14[0x5046f] = lVar18;
    }
    puVar14[0x5046d] = puVar14[0x5046d] + lVar25 + 0x3cf70c;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar33;
    if (lVar18 != 0) {
      puVar14[0x50580] = lVar18;
    }
    puVar14[0x5057e] = puVar14[0x5057e] + lVar25 + 0x3d0810;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar31;
    if (lVar18 != 0) {
      puVar14[0x50691] = lVar18;
    }
    puVar31 = puVar14 + 0x509c0;
    puVar14[0x5068f] = puVar14[0x5068f] + lVar25 + 0x3d1914;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar30;
    if (lVar18 != 0) {
      puVar14[0x507a2] = lVar18;
    }
    puVar14[0x507a0] = FUN_003d2a18 + puVar14[0x507a0] + lVar25;
    FUN_026400e0();
    lVar18 = *plVar19;
    *plVar19 = (long)puVar20;
    if (lVar18 != 0) {
      puVar14[0x508b3] = lVar18;
    }
    puVar30 = puVar14 + 0x50b72;
    puVar14[0x508b1] = puVar14[0x508b1] + lVar25 + 0x3d3b1c;
    FUN_026400e0(puVar20);
    lVar18 = puVar14[0x4ed98];
    lVar26 = puVar14[0x4ed99];
    puVar14[0x509c4] = 0;
    puVar14[0x509c5] = 0;
    *(undefined1 *)(puVar14 + 0x509c6) = 0;
    puVar14[0x4ed99] = puVar31;
    lVar25 = lVar18 + 0x3d4c20;
    puVar14[0x509c1] = 0;
    puVar14[0x509c2] = lVar25;
    if (lVar26 != 0) {
      puVar14[0x509c4] = lVar26;
    }
    puVar14[0x509cc] = 0;
    puVar14[0x509c8] = 0;
    puVar14[0x509c9] = lVar25;
    *puVar31 = &PTR_LAB_04a89df0;
    puVar14[0x509ca] = 0;
    puVar14[0x509cb] = 0;
    puVar9 = PTR_DAT_04bc35d8 + 0x10;
    *(undefined1 *)(puVar14 + 0x509cd) = 0;
    puVar14[0x509c7] = puVar9;
    puVar20 = puVar14 + 0x509ce;
    puVar14[0x509c3] = puVar14 + 0x509c7;
    memset(puVar20,0,0xd20);
    lVar26 = 0;
    do {
      puVar33 = (undefined8 *)((long)puVar14 + (long)(&LAB_00284f18 + lVar26));
      lVar26 = lVar26 + 0x150;
      *(undefined1 *)(puVar33 + -0xf) = 0;
      puVar33[-0x10] = 0;
      puVar33[-0xe] = &DAT_04a902f0;
      puVar33[-4] = 0;
      puVar33[-3] = 0;
      puVar33[-7] = &DAT_04a89e80;
      puVar33[-9] = 0;
      *(undefined1 *)(puVar33 + -8) = 0;
      *(undefined1 *)(puVar33 + -1) = 0;
      *(undefined1 *)(puVar33 + 6) = 0;
      *(undefined1 *)(puVar33 + 0xd) = 0;
      *(undefined1 *)(puVar33 + 0x14) = 0;
      puVar33[-3] = puVar33 + -0xe;
      puVar33[-2] = 0;
      puVar33[7] = &DAT_04a89ef0;
      puVar33[4] = 0;
      puVar33[5] = 0;
      puVar33[4] = puVar33 + -7;
      puVar33[-0x13] = 0;
      puVar33[-0x12] = 0;
      puVar33[-0xd] = 0;
      puVar33[-0xc] = 0;
      puVar33[-0xb] = 0;
      puVar33[-10] = 0;
      puVar33[-6] = 0;
      puVar33[-5] = 4;
      puVar33[2] = 0x40;
      puVar33[3] = 0;
      *puVar33 = &DAT_04a89eb8;
      puVar33[1] = 0;
      puVar33[8] = 0;
      puVar33[9] = 0x440;
      puVar33[10] = 0;
      puVar33[0xb] = 0;
      puVar33[0xb] = puVar33;
      puVar33[0xc] = 0;
      puVar33[0x12] = 0;
      puVar33[0x13] = 0;
      puVar33[0x12] = puVar33 + 7;
      puVar33[0x10] = 0x454;
      puVar33[0x11] = 0;
      puVar33[-0x12] = puVar33 + 0xe;
      puVar33[-0x11] = 0;
      puVar33[0xe] = &DAT_04a89f28;
      puVar33[0xf] = 0;
      puVar33[-0x15] = &PTR_LAB_04a89e50;
      puVar33[-0x14] = 0;
    } while (lVar26 != 0xd20);
    puVar14[0x509ca] = puVar20;
    puVar14[0x509c7] = &PTR_LAB_04a89e20;
    puVar14[0x509d0] = puVar14[0x509d0] + lVar25;
    FUN_026400e0(puVar20,lVar25);
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x509f8;
    if (lVar25 != 0) {
      puVar14[0x509fc] = lVar25;
    }
    puVar14[0x509fa] = puVar14[0x509fa] + lVar18 + 0x3d8c78;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50a22;
    if (lVar25 != 0) {
      puVar14[0x50a26] = lVar25;
    }
    puVar14[0x50a24] = puVar14[0x50a24] + lVar18 + 0x3dccd0;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50a4c;
    if (lVar25 != 0) {
      puVar14[0x50a50] = lVar25;
    }
    puVar14[0x50a4e] = puVar14[0x50a4e] + lVar18 + 0x3e0d28;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50a76;
    if (lVar25 != 0) {
      puVar14[0x50a7a] = lVar25;
    }
    puVar14[0x50a78] = puVar14[0x50a78] + lVar18 + 0x3e4d80;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50aa0;
    if (lVar25 != 0) {
      puVar14[0x50aa4] = lVar25;
    }
    puVar14[0x50aa2] = puVar14[0x50aa2] + lVar18 + 0x3e8dd8;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50aca;
    if (lVar25 != 0) {
      puVar14[0x50ace] = lVar25;
    }
    puVar14[0x50acc] = puVar14[0x50acc] + lVar18 + 0x3ece30;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50af4;
    if (lVar25 != 0) {
      puVar14[0x50af8] = lVar25;
    }
    puVar14[0x50af6] = &LAB_003f0e88 + puVar14[0x50af6] + lVar18;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50b1e;
    if (lVar25 != 0) {
      puVar14[0x50b22] = lVar25;
    }
    puVar14[0x50b20] = puVar14[0x50b20] + lVar18 + 0x3f4ee0;
    FUN_026400e0();
    lVar25 = puVar14[0x509ca];
    puVar14[0x509ca] = puVar14 + 0x50b48;
    if (lVar25 != 0) {
      puVar14[0x50b4c] = lVar25;
    }
    puVar14[0x50b4a] = puVar14[0x50b4a] + lVar18 + 0x3f8f38;
    FUN_026400e0();
    puVar14[0x50b77] = 0;
    *puVar31 = &PTR_LAB_04a89dc0;
    lVar18 = puVar14[0x4ed99];
    *(undefined1 *)(puVar14 + 0x50b78) = 0;
    puVar14[0x50b76] = 0;
    puVar14[0x4ed99] = puVar30;
    lVar25 = puVar14[0x4ed98] + 0x3fcf90;
    puVar14[0x50b73] = 0;
    puVar14[0x50b74] = lVar25;
    if (lVar18 != 0) {
      puVar14[0x50b76] = lVar18;
    }
    *(undefined1 *)(puVar14 + 0x50b7f) = 0;
    *puVar30 = &PTR_LAB_04a89f90;
    puVar14[0x50b75] = puVar14 + 0x50b79;
    puVar14[0x50b7a] = 0;
    puVar14[0x50b7b] = lVar25;
    plVar17 = puVar14 + 0x50b7c;
    *plVar17 = 0;
    puVar14[0x50b7d] = 0;
    puVar14[0x50b7e] = 0;
    memset(puVar14 + 0x50b80,0,0xb7c0);
    plVar19 = (long *)PTR_DAT_04bb2698;
    lVar18 = 0x1a4;
    lVar26 = 0;
    do {
      *(undefined ***)((long)puVar14 + (long)(&LAB_00285c70 + lVar26)) = &PTR_LAB_04a89ff0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c10 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c18 + lVar26)) = 0;
      lVar18 = lVar18 + -2;
      *(undefined1 *)((long)puVar14 + (long)(&LAB_00285c30 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c38 + lVar26)) = &DAT_04a8fe70;
      *(undefined8 **)((long)puVar14 + (long)(&LAB_00285c18 + lVar26)) =
           (undefined8 *)((long)puVar14 + (long)(&LAB_00285c38 + lVar26));
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c60 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285ca8 + lVar26)) = &DAT_04a8fe70;
      *(undefined1 *)((long)puVar14 + (long)(&LAB_00285c68 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c98 + lVar26)) = 0;
      *(undefined1 *)((long)puVar14 + (long)(&LAB_00285ca0 + lVar26)) = 0;
      *(undefined1 *)((long)puVar14 + (long)(&LAB_00285cd8 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285cb0 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c20 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c28 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c40 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c48 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c50 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c58 + lVar26)) = 0;
      *(undefined ***)((long)puVar14 + (long)(&LAB_00285c00 + lVar26)) = &PTR_LAB_04a89ff0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c08 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c78 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c80 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c88 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285c90 + lVar26)) = 0;
      *(undefined8 **)((long)puVar14 + (long)(&LAB_00285c88 + lVar26)) =
           (undefined8 *)((long)puVar14 + (long)(&LAB_00285ca8 + lVar26));
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285cc8 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285cd0 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285cb8 + lVar26)) = 0;
      *(undefined8 *)((long)puVar14 + (long)(&LAB_00285cc0 + lVar26)) = 0;
      lVar26 = lVar26 + 0xe0;
    } while (lVar18 != 0);
    iVar32 = 0;
    puVar14[0x50b79] = &PTR_LAB_04a89fc0;
    do {
      lVar18 = *plVar17;
      puVar20 = puVar14 + 0x50b80 + (long)iVar32 * 0xe;
      *plVar17 = (long)puVar20;
      if (lVar18 != 0) {
        puVar20[4] = lVar18;
      }
      puVar20[2] = lVar25 + puVar20[2];
      FUN_026400e0(puVar20,lVar25);
      iVar32 = iVar32 + 1;
      lVar25 = lVar25 + 1;
    } while (iVar32 != 0x1a4);
    *puVar30 = &PTR_LAB_04a89f60;
    *puVar29 = &PTR_LAB_04a89818;
    *puVar14 = &PTR_LAB_04a89788;
    plVar15[4] = (long)puVar14;
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      pvVar16 = malloc(0x28);
      plVar15[5] = (long)pvVar16;
joined_r0x026fb058:
      if (pvVar16 != (void *)0x0) {
        lVar25 = *plVar19;
        if (lVar25 == 0) {
          plVar17 = malloc(0x28);
        }
        else {
          plVar17 = (long *)*plVar22;
          if (plVar17 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar17 = (long *)(lVar25 + 8);
            if (lVar18 != 0) {
              plVar17 = (long *)(lVar18 + 0xa8);
            }
            plVar17 = (long *)*plVar17;
          }
          plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
        }
        puVar9 = PTR_DAT_04bc3820;
        plVar17[1] = 0x200000000;
        plVar17[2] = (long)(plVar17 + 3);
        *plVar17 = (long)(puVar9 + 0x10);
        plVar15[6] = (long)plVar17;
        lVar25 = *plVar19;
        if (lVar25 == 0) {
          puVar14 = malloc(0x1050);
        }
        else {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar25 + 8);
            if (lVar18 != 0) {
              plVar22 = (long *)(lVar18 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            puVar14 = (undefined8 *)0x0;
            if (plVar22 == (long *)0x0) goto LAB_026fb130;
          }
          puVar14 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x1050,8);
        }
LAB_026fb130:
        *(undefined1 *)(puVar14 + 3) = 0;
        *puVar14 = &PTR_LAB_04a8a020;
        puVar14[4] = puVar14 + 4;
        puVar14[5] = puVar14 + 4;
        *(undefined4 *)(puVar14 + 6) = 0;
        puVar14[7] = puVar14 + 10;
        puVar14[1] = 0;
        puVar14[2] = 0;
        for (lVar25 = 0; *(long *)((long)puVar14 + lVar25 + 0x50) = (long)puVar14 + lVar25 + 0x70,
            lVar25 != 0xfc0; lVar25 = lVar25 + 0x40) {
          *(long *)((long)puVar14 + lVar25 + 0x70) = (long)puVar14 + lVar25 + 0x90;
        }
        puVar14[0x206] = 0;
        puVar14[8] = puVar14 + 10;
        *(undefined4 *)(puVar14 + 9) = 0x80;
        lVar25 = plVar15[3];
        plVar15[7] = (long)puVar14;
        puVar14[1] = plVar15[2];
        puVar14[2] = lVar25;
        if (plVar15[7] != 0) {
          lVar25 = plVar15[6];
          if (*(int *)(lVar25 + 8) < *(int *)(lVar25 + 0xc)) {
            *(long *)(*(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 8) * 8) = plVar15[7];
            *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
          }
        }
        *(long *)plVar15[5] = lVar28;
        *(long *)(plVar15[5] + 8) = lVar13;
        *(long *)(plVar15[5] + 0x10) = lVar2;
        *(long *)(plVar15[5] + 0x18) = lVar3;
        *(long *)(plVar15[5] + 0x20) = plVar15[6];
        FUN_02640070(plVar15[4],0,plVar15[2],0,1);
        FUN_02640130(plVar15[4],plVar15[5]);
        goto LAB_026fb268;
      }
    }
    else {
      plVar17 = (long *)*plVar22;
      if (plVar17 != (long *)0x0) {
LAB_026fb028:
        pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
        plVar15[5] = (long)pvVar16;
        goto joined_r0x026fb058;
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar25 + 8);
      if (lVar18 != 0) {
        plVar17 = (long *)(lVar18 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 != (long *)0x0) goto LAB_026fb028;
      plVar15[5] = 0;
    }
    FUN_0270bd68(plVar15);
  }
LAB_026fb268:
  **(undefined8 **)(param_1 + 0x10) = plVar15;
  uVar21 = (**(code **)(*plVar15 + 0x40))(plVar15);
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar21;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar25 = *plVar19;
  if (lVar25 == 0) {
    puVar14 = malloc(0x38);
  }
  else {
    plVar19 = *(long **)(param_1 + 8);
    if (plVar19 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar25 + 8);
      if (lVar18 != 0) {
        plVar19 = (long *)(lVar18 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,0x38,8);
  }
  puVar14[5] = 0;
  puVar14[6] = 0;
  *puVar14 = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_98 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x10))();
  local_98 = local_98 + 0x1e3958;
  local_90 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x20))();
  local_90 = local_90 + 0x1e3958;
  local_88 = lVar28;
  local_80 = lVar13;
  local_78 = lVar2;
  lStack_70 = lVar3;
  FUN_026fd390(puVar14,&local_a0);
  *(undefined8 **)(*(long *)(param_1 + 0x10) + 8) = puVar14;
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = puVar14[6];
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar25 = 0;
  puVar9 = PTR_DAT_04bc3820 + 0x10;
  do {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      plVar19 = malloc(0x38);
    }
    else {
      plVar19 = *(long **)(param_1 + 8);
      if (plVar19 == (long *)0x0) {
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar18 + 8);
        if (lVar26 != 0) {
          plVar19 = (long *)(lVar26 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)0x0;
          goto LAB_026fb44c;
        }
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x38,8);
    }
LAB_026fb44c:
    plVar19[5] = 0;
    plVar19[6] = 0;
    *plVar19 = 0;
    plVar19[3] = 0;
    plVar19[4] = 0;
    plVar19[1] = 0;
    plVar19[2] = 0;
    plVar15 = *(long **)(param_1 + 8);
    lVar18 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x10))();
    lVar26 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x20))();
    if (plVar15 != (long *)0x0) {
      *plVar19 = (long)plVar15;
      lVar23 = lVar25 * 0x13230 + 0x10c050;
      plVar19[2] = lVar26 + lVar23;
      plVar19[1] = lVar18 + lVar23;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar14 = malloc(0x10798);
      }
      else {
        puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x10798,8);
      }
      FUN_0270d700(puVar14,0,0);
      *puVar14 = &PTR_LAB_04a8c380;
      plVar19[3] = (long)puVar14;
      lVar18 = *(long *)PTR_DAT_04bb2698;
      if (lVar18 == 0) {
        pvVar16 = malloc(0x28);
        plVar19[4] = (long)pvVar16;
joined_r0x026fb58c:
        if (pvVar16 != (void *)0x0) {
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            plVar15 = malloc(0x28);
          }
          else {
            plVar15 = (long *)*plVar19;
            if (plVar15 == (long *)0x0) {
              lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar15 = (long *)(lVar18 + 8);
              if (lVar26 != 0) {
                plVar15 = (long *)(lVar26 + 0xa8);
              }
              plVar15 = (long *)*plVar15;
            }
            plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x28,8);
          }
          *plVar15 = (long)puVar9;
          plVar15[1] = 0x200000000;
          plVar15[2] = (long)(plVar15 + 3);
          lVar18 = *(long *)PTR_DAT_04bb2698;
          plVar19[5] = (long)plVar15;
          if (lVar18 == 0) {
            puVar14 = malloc(0x1050);
          }
          else {
            plVar15 = (long *)*plVar19;
            if (plVar15 == (long *)0x0) {
              lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar15 = (long *)(lVar18 + 8);
              if (lVar26 != 0) {
                plVar15 = (long *)(lVar26 + 0xa8);
              }
              plVar15 = (long *)*plVar15;
              puVar14 = (undefined8 *)0x0;
              if (plVar15 == (long *)0x0) goto LAB_026fb668;
            }
            puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1050,8);
          }
LAB_026fb668:
          *(undefined1 *)(puVar14 + 3) = 0;
          *puVar14 = &PTR_LAB_04a8a210;
          puVar14[4] = puVar14 + 4;
          puVar14[5] = puVar14 + 4;
          *(undefined4 *)(puVar14 + 6) = 0;
          puVar14[7] = puVar14 + 10;
          puVar14[1] = 0;
          puVar14[2] = 0;
          lVar18 = 0;
          while( true ) {
            plVar15 = (long *)((long)puVar14 + lVar18 + 0x70);
            *plVar15 = (long)puVar14 + lVar18 + 0x90;
            *(long **)((long)puVar14 + lVar18 + 0x50) = plVar15;
            *(long *)((long)puVar14 + lVar18 + 0x90) = (long)puVar14 + lVar18 + 0xb0;
            if (lVar18 == 0xf80) break;
            *(long *)((long)puVar14 + lVar18 + 0xb0) = (long)puVar14 + lVar18 + 0xd0;
            lVar18 = lVar18 + 0x80;
          }
          puVar14[0x206] = 0;
          puVar14[8] = puVar14 + 10;
          *(undefined4 *)(puVar14 + 9) = 0x80;
          lVar18 = plVar19[2];
          plVar19[6] = (long)puVar14;
          puVar14[1] = plVar19[1];
          puVar14[2] = lVar18;
          if (plVar19[6] != 0) {
            lVar18 = plVar19[5];
            if (*(int *)(lVar18 + 8) < *(int *)(lVar18 + 0xc)) {
              *(long *)(*(long *)(lVar18 + 0x10) + (long)*(int *)(lVar18 + 8) * 8) = plVar19[6];
              *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
            }
          }
          *(long *)plVar19[4] = lVar28;
          *(long *)(plVar19[4] + 8) = lVar13;
          *(long *)(plVar19[4] + 0x10) = lVar2;
          *(long *)(plVar19[4] + 0x18) = lVar3;
          *(long *)(plVar19[4] + 0x20) = plVar19[5];
          FUN_02640070(plVar19[3],0,plVar19[1],0,1);
          FUN_02640130(plVar19[3],plVar19[4]);
          goto LAB_026fb818;
        }
      }
      else {
        plVar15 = (long *)*plVar19;
        if (plVar15 != (long *)0x0) {
LAB_026fb55c:
          pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x28,8);
          plVar19[4] = (long)pvVar16;
          goto joined_r0x026fb58c;
        }
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar18 + 8);
        if (lVar26 != 0) {
          plVar15 = (long *)(lVar26 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_026fb55c;
        plVar19[4] = 0;
      }
      plVar19[1] = 0;
      plVar19[2] = 0;
      if ((long *)plVar19[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar19[3] + 8))();
        pvVar16 = (void *)plVar19[4];
        plVar19[3] = 0;
        if (pvVar16 != (void *)0x0) {
          if (*(long *)PTR_DAT_04bb2698 == 0) {
            free(pvVar16);
          }
          else {
            plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar16);
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x38))(plVar15,pvVar16);
            }
          }
          plVar19[4] = 0;
        }
      }
      if ((long *)plVar19[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar19[5] + 0x18))();
        plVar19[5] = 0;
      }
      if ((long *)plVar19[6] != (long *)0x0) {
        (**(code **)(*(long *)plVar19[6] + 0x18))();
        plVar19[6] = 0;
      }
      *plVar19 = 0;
    }
LAB_026fb818:
    *(long **)(*(long *)(param_1 + 0x10) + lVar25 * 8 + 0x10) = plVar19;
    if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
      *(long *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = plVar19[6];
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
    plVar19 = (long *)PTR_DAT_04bb2698;
    lVar25 = lVar25 + 1;
  } while (lVar25 != 10);
  puVar9 = PTR_DAT_04bc37b0 + 0x10;
  uVar24 = 0;
  do {
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      plVar15 = malloc(0x58);
    }
    else {
      plVar15 = *(long **)(param_1 + 8);
      if (plVar15 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar15 = (long *)(lVar18 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)0x0;
          goto LAB_026fb90c;
        }
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x58,8);
    }
LAB_026fb90c:
    *plVar15 = (long)puVar9;
    plVar15[1] = 0;
    plVar15[10] = 0;
    plVar15[2] = 0;
    plVar15[3] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[9] = 0;
    local_a0 = *(undefined8 *)(param_1 + 8);
    local_98 = lVar28;
    local_90 = lVar13;
    local_88 = lVar2;
    local_80 = lVar3;
    FUN_0272cbe0(plVar15,&local_a0);
    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
    puVar29 = puVar14 + uVar24;
    if (7 < uVar24) {
      puVar29 = puVar14;
    }
    *puVar29 = plVar15;
    plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x60);
    plVar22 = plVar15 + uVar24;
    if (7 < uVar24) {
      plVar22 = plVar15;
    }
    lVar25 = *plVar22;
    local_c0 = &PTR_FUN_04a8a260;
    if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
      *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
           *(undefined8 *)(lVar25 + 0x38);
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
    lStack_b8 = param_1;
    (*(code *)PTR_FUN_04a8a260)(&local_c0,*(undefined8 *)(lVar25 + 0x50));
    uVar27 = 0xffffffff;
    if (uVar24 != 7) {
      uVar27 = uVar24 + 1;
    }
    if (7 < uVar24) {
      uVar27 = uVar24;
    }
    uVar24 = uVar27;
  } while (uVar27 != 0xffffffff);
  puVar9 = PTR_DAT_04bc3820 + 0x10;
  uVar24 = 0;
  do {
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      plVar15 = malloc(0x40);
    }
    else {
      plVar15 = *(long **)(param_1 + 8);
      if (plVar15 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar15 = (long *)(lVar18 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)0x0;
          goto LAB_026fba70;
        }
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x40,8);
    }
LAB_026fba70:
    plVar22 = plVar15 + 1;
    *plVar22 = 0;
    *plVar15 = (long)&PTR_LAB_04a8a288;
    plVar15[2] = 0;
    plVar15[3] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar17 = *(long **)(param_1 + 8);
    if (plVar17 != (long *)0x0) {
      lVar25 = *plVar19;
      *plVar22 = (long)plVar17;
      if (lVar25 == 0) {
        puVar14 = malloc(0x47430);
      }
      else {
        puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x47430,0x10);
      }
      *(undefined8 *)((long)puVar14 + 6) = 0;
      *puVar14 = 0;
      *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
      puVar14[8] = 0;
      *(undefined8 *)((long)puVar14 + 0x46) = 0;
      *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar14 + 0x20) = 0;
      memset(puVar14 + 0x22,0,0x46e60);
      lVar25 = 300;
      lVar18 = 0;
      do {
        *(undefined2 *)((long)puVar14 + lVar18 + 0x110) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x16c) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1c8) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x1cc) = 0xfffe00000000;
        *(undefined4 *)((long)puVar14 + lVar18 + 0x1d4) = 0;
        FUN_0277d4ac((long)puVar14 + lVar18 + 0x1d0);
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1d8) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1dc) = 0;
        memset((void *)((long)puVar14 + lVar18 + 0x1de),0,0x2a2);
        lVar25 = lVar25 + -1;
        *(undefined2 *)((long)puVar14 + lVar18 + 0x480) = 0xfffe;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x484) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x48c) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x494) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x49c) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4a4) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4ac) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4b4) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4bc) = 0;
        lVar18 = lVar18 + 0x3c8;
      } while (lVar25 != 0);
      memset(puVar14 + 0x8dee,0,0x4b0);
      iVar32 = 0;
      uVar27 = 0;
      do {
        uVar11 = uVar27 << 2;
        uVar12 = uVar27 >> 0x1f;
        uVar1 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar1;
        *(int *)((long)(puVar14 + 0x8dee) + (-uVar12 & 0xfffffffc00000000 | uVar11)) = iVar32;
        iVar32 = iVar32 + 1;
      } while (uVar1 != 300);
      *(undefined4 *)(puVar14 + 0x8e84) = 0;
      puVar10 = PTR_DAT_04bb2698;
      plVar15[2] = (long)puVar14;
      lVar25 = *(long *)puVar10;
      if (lVar25 == 0) {
        puVar14 = malloc(0x47430);
      }
      else {
        plVar19 = (long *)*plVar22;
        if (plVar19 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar19 = (long *)(lVar25 + 8);
          if (lVar18 != 0) {
            plVar19 = (long *)(lVar18 + 0xa8);
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) {
            puVar14 = (undefined8 *)0x0;
            goto LAB_026fbc30;
          }
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,0x47430,0x10);
      }
LAB_026fbc30:
      *(undefined8 *)((long)puVar14 + 6) = 0;
      *puVar14 = 0;
      *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
      puVar14[8] = 0;
      *(undefined8 *)((long)puVar14 + 0x46) = 0;
      *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar14 + 0x20) = 0;
      memset(puVar14 + 0x22,0,0x46e60);
      lVar25 = 300;
      lVar18 = 0;
      do {
        *(undefined2 *)((long)puVar14 + lVar18 + 0x110) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x16c) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1c8) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x1cc) = 0xfffe00000000;
        *(undefined4 *)((long)puVar14 + lVar18 + 0x1d4) = 0;
        FUN_0277d4ac((long)puVar14 + lVar18 + 0x1d0);
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1d8) = 0;
        *(undefined1 *)((long)puVar14 + lVar18 + 0x1dc) = 0;
        memset((void *)((long)puVar14 + lVar18 + 0x1de),0,0x2a2);
        lVar25 = lVar25 + -1;
        *(undefined2 *)((long)puVar14 + lVar18 + 0x480) = 0xfffe;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x484) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x48c) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x494) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x49c) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4a4) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4ac) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4b4) = 0;
        *(undefined8 *)((long)puVar14 + lVar18 + 0x4bc) = 0;
        lVar18 = lVar18 + 0x3c8;
      } while (lVar25 != 0);
      memset(puVar14 + 0x8dee,0,0x4b0);
      iVar32 = 0;
      uVar27 = 0;
      do {
        uVar11 = uVar27 << 2;
        uVar12 = uVar27 >> 0x1f;
        uVar1 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar1;
        *(int *)((long)(puVar14 + 0x8dee) + (-uVar12 & 0xfffffffc00000000 | uVar11)) = iVar32;
        iVar32 = iVar32 + 1;
      } while (uVar1 != 300);
      *(undefined4 *)(puVar14 + 0x8e84) = 0;
      plVar19 = (long *)PTR_DAT_04bb2698;
      plVar15[3] = (long)puVar14;
      lVar25 = *plVar19;
      if (lVar25 == 0) {
        puVar14 = malloc(0xa8);
      }
      else {
        plVar17 = (long *)*plVar22;
        if (plVar17 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar25 + 8);
          if (lVar18 != 0) {
            plVar17 = (long *)(lVar18 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0xa8,8);
      }
      puVar14[7] = &DAT_04a897e8;
      puVar14[0x11] = 0;
      puVar14[0x12] = 0;
      puVar14[0x12] = puVar14 + 7;
      puVar14[0x13] = 0;
      *puVar14 = &PTR_LAB_04a8a2e8;
      puVar14[1] = 0;
      lVar25 = *plVar19;
      *(undefined1 *)(puVar14 + 6) = 0;
      puVar14[5] = 0;
      puVar14[0xc] = 0;
      *(undefined1 *)(puVar14 + 0xd) = 0;
      *(undefined1 *)(puVar14 + 0x14) = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0x100;
      puVar14[0xe] = &DAT_04a8ed90;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[3] = puVar14 + 0xe;
      puVar14[4] = 0;
      plVar15[4] = (long)puVar14;
      if (lVar25 == 0) {
        pvVar16 = malloc(0x28);
        plVar15[5] = (long)pvVar16;
joined_r0x026fbe5c:
        if (pvVar16 != (void *)0x0) {
          lVar25 = *plVar19;
          if (lVar25 == 0) {
            plVar17 = malloc(0x28);
          }
          else {
            plVar17 = (long *)*plVar22;
            if (plVar17 == (long *)0x0) {
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar17 = (long *)(lVar25 + 8);
              if (lVar18 != 0) {
                plVar17 = (long *)(lVar18 + 0xa8);
              }
              plVar17 = (long *)*plVar17;
            }
            plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
          }
          *plVar17 = (long)puVar9;
          lVar25 = *plVar19;
          plVar17[1] = 0x200000000;
          plVar17[2] = (long)(plVar17 + 3);
          plVar15[6] = (long)plVar17;
          if (lVar25 == 0) {
            puVar14 = malloc(0x1050);
          }
          else {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) {
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar22 = (long *)(lVar25 + 8);
              if (lVar18 != 0) {
                plVar22 = (long *)(lVar18 + 0xa8);
              }
              plVar22 = (long *)*plVar22;
              puVar14 = (undefined8 *)0x0;
              if (plVar22 == (long *)0x0) goto LAB_026fbf2c;
            }
            puVar14 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x1050,8);
          }
LAB_026fbf2c:
          *(undefined1 *)(puVar14 + 3) = 0;
          *puVar14 = &PTR_LAB_04a8a318;
          puVar14[4] = puVar14 + 4;
          puVar14[5] = puVar14 + 4;
          *(undefined4 *)(puVar14 + 6) = 0;
          puVar14[7] = puVar14 + 10;
          puVar14[1] = 0;
          puVar14[2] = 0;
          lVar25 = 0;
          while( true ) {
            plVar22 = (long *)((long)puVar14 + lVar25 + 0x70);
            *plVar22 = (long)puVar14 + lVar25 + 0x90;
            *(long **)((long)puVar14 + lVar25 + 0x50) = plVar22;
            *(long *)((long)puVar14 + lVar25 + 0x90) = (long)puVar14 + lVar25 + 0xb0;
            if (lVar25 == 0xf80) break;
            *(long *)((long)puVar14 + lVar25 + 0xb0) = (long)puVar14 + lVar25 + 0xd0;
            lVar25 = lVar25 + 0x80;
          }
          puVar14[0x206] = 0;
          puVar14[8] = puVar14 + 10;
          *(undefined4 *)(puVar14 + 9) = 0x80;
          lVar25 = plVar15[3];
          plVar15[7] = (long)puVar14;
          puVar14[1] = plVar15[2];
          puVar14[2] = lVar25;
          if (plVar15[7] != 0) {
            lVar25 = plVar15[6];
            if (*(int *)(lVar25 + 8) < *(int *)(lVar25 + 0xc)) {
              *(long *)(*(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 8) * 8) = plVar15[7];
              *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
            }
          }
          *(long *)plVar15[5] = lVar28;
          *(long *)(plVar15[5] + 8) = lVar13;
          *(long *)(plVar15[5] + 0x10) = lVar2;
          *(long *)(plVar15[5] + 0x18) = lVar3;
          *(long *)(plVar15[5] + 0x20) = plVar15[6];
          FUN_02640070(plVar15[4],0,plVar15[2],0,1);
          FUN_02640130(plVar15[4],plVar15[5]);
          goto LAB_026fc058;
        }
      }
      else {
        plVar17 = (long *)*plVar22;
        if (plVar17 != (long *)0x0) {
LAB_026fbe28:
          pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
          plVar15[5] = (long)pvVar16;
          goto joined_r0x026fbe5c;
        }
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 != (long *)0x0) goto LAB_026fbe28;
        plVar15[5] = 0;
      }
      FUN_027247c0(plVar15);
    }
LAB_026fc058:
    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0);
    puVar29 = puVar14 + uVar24;
    if (7 < uVar24) {
      puVar29 = puVar14;
    }
    *puVar29 = plVar15;
    uVar21 = (**(code **)(*plVar15 + 0x40))(plVar15);
    if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
      *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar21;
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
    uVar27 = 0xffffffff;
    if (uVar24 != 7) {
      uVar27 = uVar24 + 1;
    }
    if (7 < uVar24) {
      uVar27 = uVar24;
    }
    uVar24 = uVar27;
  } while (uVar27 != 0xffffffff);
  lVar25 = *plVar19;
  if (lVar25 == 0) {
    plVar15 = malloc(0x40);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar25 + 8);
      if (lVar18 != 0) {
        plVar15 = (long *)(lVar18 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_026fc108;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x40,8);
  }
LAB_026fc108:
  plVar22 = plVar15 + 1;
  *plVar22 = 0;
  *plVar15 = (long)&PTR_LAB_04a8a368;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar17 = *(long **)(param_1 + 8);
  if (plVar17 != (long *)0x0) {
    lVar25 = *plVar19;
    *plVar22 = (long)plVar17;
    if (lVar25 == 0) {
      puVar14 = malloc(0x2f650);
    }
    else {
      puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x2f650,0x10);
    }
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    *(undefined4 *)(puVar14 + 0x20) = 0;
    FUN_027ecb34(puVar14 + 0x22);
    plVar15[2] = (long)puVar14;
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      puVar14 = malloc(0x2f650);
    }
    else {
      plVar17 = (long *)*plVar22;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          puVar14 = (undefined8 *)0x0;
          goto LAB_026fc1f4;
        }
      }
      puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x2f650,0x10);
    }
LAB_026fc1f4:
    *(undefined8 *)((long)puVar14 + 6) = 0;
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
    puVar14[8] = 0;
    *(undefined8 *)((long)puVar14 + 0x46) = 0;
    *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
    *(undefined4 *)(puVar14 + 0x20) = 0;
    FUN_027ecb34(puVar14 + 0x22);
    plVar15[3] = (long)puVar14;
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      puVar14 = malloc(0x10610);
    }
    else {
      plVar19 = (long *)*plVar22;
      if (plVar19 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar25 + 8);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
      }
      puVar14 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,0x10610,8);
    }
    *(undefined1 *)(puVar14 + 6) = 0;
    *puVar14 = &PTR_LAB_04a8a3f8;
    puVar14[1] = 0;
    puVar14[7] = &DAT_04a897e8;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0x100;
    puVar14[0xe] = &DAT_04a8ed90;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x12] = puVar14 + 7;
    puVar14[0x13] = 0;
    puVar29 = puVar14 + 0x15;
    *puVar29 = &PTR_LAB_04a8a458;
    puVar14[5] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[0xc] = 0;
    *(undefined1 *)(puVar14 + 0xd) = 0;
    *(undefined1 *)(puVar14 + 0x14) = 0;
    *(undefined1 *)(puVar14 + 0x1b) = 0;
    puVar14[0x18] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[3] = puVar29;
    puVar14[4] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0x110;
    puVar14[0x19] = puVar14 + 0xe;
    puVar14[0x1a] = 0;
    FUN_02712184(puVar14 + 0x1c,puVar29);
    FUN_027128a0(puVar14 + 0x1b89,puVar29,puVar14[0x17] + 0x288d8);
    puVar14[0x201f] = 0;
    puVar14[0x1b89] = &PTR_LAB_04a8d090;
    lVar25 = puVar14[0x17];
    lVar18 = puVar14[0x18];
    *(undefined1 *)(puVar14 + 0x2020) = 0;
    puVar14[0x201e] = 0;
    puVar14[0x18] = puVar14 + 0x201a;
    lVar26 = lVar25 + 0x2f4fc;
    puVar14[0x201b] = 0;
    puVar14[0x201c] = lVar26;
    if (lVar18 != 0) {
      puVar14[0x201e] = lVar18;
    }
    puVar29 = puVar14 + 0x20a6;
    memset(puVar14 + 0x2022,0,0x298);
    puVar14[0x2033] = 0;
    puVar14[0x2034] = 0;
    *(undefined1 *)(puVar14 + 0x2035) = 0;
    puVar14[0x2032] = 0;
    puVar9 = PTR_DAT_04bb4c40;
    puVar14[0x2028] = &DAT_04a8ee20;
    puVar9 = puVar9 + 0x10;
    puVar14[0x2033] = puVar14 + 0x2028;
    puVar14[0x202f] = puVar9;
    puVar14[0x203a] = 0;
    puVar14[0x203b] = 0;
    *(undefined1 *)(puVar14 + 0x203c) = 0;
    puVar14[0x203a] = puVar14 + 0x202f;
    puVar14[0x2036] = puVar9;
    puVar14[0x2031] = 1;
    puVar14[0x2038] = 2;
    puVar14[0x2039] = 0;
    puVar14[0x203f] = 4;
    puVar14[0x2042] = 0;
    *(undefined1 *)(puVar14 + 0x2043) = 0;
    puVar14[0x203d] = &DAT_04a8e0c0;
    puVar14[0x2046] = 3;
    *(undefined1 *)(puVar14 + 0x204a) = 0;
    puVar14[0x2047] = 0;
    puVar14[0x2040] = 0;
    puVar14[0x2041] = 0;
    puVar14[0x2041] = puVar14 + 0x2036;
    puVar14[0x2048] = 0;
    puVar14[0x2049] = 0;
    puVar14[0x2048] = puVar14 + 0x203d;
    puVar10 = PTR_DAT_04bc30c8 + 0x10;
    puVar14[0x205b] = 1;
    puVar14[0x2060] = puVar9;
    *(undefined1 *)(puVar14 + 0x2051) = 0;
    puVar14[0x2059] = puVar9;
    puVar14[0x204c] = 0;
    *(undefined1 *)(puVar14 + 0x2058) = 0;
    puVar14[0x2052] = &DAT_04a8ee20;
    puVar14[0x2053] = 0;
    puVar14[0x2067] = &DAT_04a8e0c0;
    puVar20 = puVar14 + 0x2021;
    *puVar20 = &PTR_LAB_04a8a4b8;
    *(undefined1 *)(puVar14 + 0x205f) = 0;
    puVar14[0x205e] = 0;
    puVar14[0x205d] = 0;
    puVar14[0x205c] = 0;
    *(undefined1 *)(puVar14 + 0x2066) = 0;
    puVar14[0x2065] = 0;
    puVar14[0x2064] = 0;
    puVar14[0x2063] = 0;
    puVar14[0x2064] = puVar14 + 0x2059;
    *(undefined1 *)(puVar14 + 0x206d) = 0;
    puVar14[0x206c] = 0;
    puVar14[0x206b] = 0;
    puVar14[0x206a] = 0;
    puVar14[0x2070] = 3;
    *(undefined1 *)(puVar14 + 0x2074) = 0;
    puVar14[0x2073] = 0;
    puVar14[0x2072] = 0;
    puVar14[0x2071] = 0;
    puVar14[0x2072] = puVar14 + 0x2067;
    puVar14[0x206e] = puVar10;
    puVar14[0x2044] = puVar10;
    puVar14[0x205d] = puVar14 + 0x2052;
    puVar14[0x2062] = 2;
    puVar14[0x2069] = 4;
    puVar14[0x206b] = puVar14 + 0x2060;
    puVar14[0x201a] = &PTR_LAB_04a8a488;
    puVar14[0x201d] = puVar20;
    puVar14[0x204f] = 0;
    puVar14[0x2050] = 0;
    puVar14[0x204d] = 0;
    puVar14[0x204e] = 0;
    puVar14[0x204e] = puVar14 + 0x206e;
    puVar14[0x2056] = 0;
    puVar14[0x2057] = 0;
    puVar14[0x2054] = 0;
    puVar14[0x2055] = 0;
    puVar30 = puVar14 + 0x204b;
    *puVar30 = &PTR_LAB_04a8a4b8;
    puVar14[0x2023] = lVar26;
    puVar14[0x2024] = puVar14 + 0x2044;
    FUN_026400e0(puVar20,lVar26);
    lVar18 = puVar14[0x201d];
    puVar14[0x201d] = puVar30;
    if (lVar18 != 0) {
      puVar14[0x204f] = lVar18;
    }
    puVar14[0x204d] = puVar14[0x204d] + lVar25 + 0x2f50c;
    FUN_026400e0(puVar30);
    lVar25 = puVar14[0x17];
    lVar18 = puVar14[0x18];
    puVar14[0x2079] = 0;
    puVar14[0x207a] = 0;
    *(undefined1 *)(puVar14 + 0x207b) = 0;
    puVar14[0x18] = puVar14 + 0x2075;
    puVar14[0x2076] = 0;
    puVar14[0x2077] = lVar25 + 0x2f51c;
    if (lVar18 != 0) {
      puVar14[0x2079] = lVar18;
    }
    puVar9 = PTR_DAT_04bc30e8;
    lVar18 = lVar25 + 0x2f534;
    puVar14[0x207f] = 0;
    puVar14[0x2080] = 0;
    puVar14[0x2081] = 0;
    *(undefined1 *)(puVar14 + 0x2082) = 0;
    puVar14[0x2087] = 0;
    puVar14[0x2088] = 0;
    puVar9 = puVar9 + 0x10;
    *(undefined1 *)(puVar14 + 0x2089) = 0;
    puVar14[0x2086] = 0;
    puVar14[0x207c] = puVar9;
    puVar14[0x2083] = puVar9;
    puVar14[0x2075] = &PTR_LAB_04a8a518;
    puVar14[0x2087] = puVar14 + 0x207c;
    *(undefined1 *)(puVar14 + 0x2090) = 0;
    puVar14[0x208d] = 0;
    *(undefined1 *)(puVar14 + 0x2097) = 0;
    puVar14[0x2096] = 0;
    puVar14[0x207d] = 0;
    puVar14[0x207e] = lVar25 + 0x2f51c;
    puVar14[0x208b] = 0;
    puVar14[0x208c] = lVar25 + 0x2f52c;
    puVar14[0x208a] = puVar9;
    puVar14[0x2078] = puVar14 + 0x2091;
    puVar14[0x2095] = puVar14 + 0x208a;
    puVar14[0x2084] = 0;
    puVar14[0x2085] = lVar25 + 0x2f524;
    puVar14[0x208e] = 0;
    puVar14[0x208f] = 0;
    puVar14[0x208e] = puVar14 + 0x2083;
    puVar14[0x2092] = 0;
    puVar14[0x2093] = lVar18;
    memset(puVar14 + 0x2099,0,0x148);
    *puVar29 = &DAT_04a8fe70;
    puVar14[0x20a4] = 0;
    puVar33 = puVar14 + 0x209f;
    *puVar33 = &DAT_04a8fe70;
    puVar31 = puVar14 + 0x20ad;
    *puVar31 = &DAT_04a8fe70;
    *(undefined1 *)(puVar14 + 0x20a5) = 0;
    puVar14[0x20ab] = 0;
    puVar20 = puVar14 + 0x2098;
    *puVar20 = &DAT_04a8fe70;
    puVar30 = puVar14 + 0x20b4;
    *puVar30 = &DAT_04a8fe70;
    puVar14[0x20bb] = &DAT_04a8fe70;
    *(undefined1 *)(puVar14 + 0x20ac) = 0;
    puVar14[0x20a0] = 0;
    puVar14[0x20a1] = 0;
    puVar14[0x20b2] = 0;
    *(undefined1 *)(puVar14 + 0x20b3) = 0;
    *(undefined1 *)(puVar14 + 0x20ba) = 0;
    puVar14[0x20b9] = 0;
    puVar14[0x20b8] = 0;
    puVar14[0x20b7] = 0;
    puVar14[0x20b6] = 0;
    puVar14[0x20b5] = 0;
    *(undefined1 *)(puVar14 + 0x20c1) = 0;
    puVar14[0x20c0] = 0;
    puVar14[0x20bf] = 0;
    puVar14[0x20be] = 0;
    puVar14[0x20bd] = 0;
    puVar14[0x20bc] = 0;
    puVar14[0x2091] = &PTR_LAB_04a8a548;
    puVar14[0x2094] = puVar20;
    puVar14[0x209a] = lVar18;
    puVar14[0x20a2] = 0;
    puVar14[0x20a3] = 0;
    puVar14[0x20a7] = 0;
    puVar14[0x20a8] = 0;
    puVar14[0x20a9] = 0;
    puVar14[0x20aa] = 0;
    puVar14[0x20ae] = 0;
    puVar14[0x20af] = 0;
    puVar14[0x20b0] = 0;
    puVar14[0x20b1] = 0;
    FUN_026400e0(puVar20,lVar18);
    lVar18 = puVar14[0x2094];
    puVar14[0x2094] = puVar33;
    if (lVar18 != 0) {
      puVar14[0x20a3] = lVar18;
    }
    puVar14[0x20a1] = puVar14[0x20a1] + lVar25 + 0x2f535;
    FUN_026400e0(puVar33);
    lVar18 = puVar14[0x2094];
    puVar14[0x2094] = puVar29;
    plVar19 = (long *)PTR_DAT_04bb2698;
    if (lVar18 != 0) {
      puVar14[0x20aa] = lVar18;
    }
    puVar14[0x20a8] = puVar14[0x20a8] + lVar25 + 0x2f536;
    FUN_026400e0(puVar29);
    lVar18 = puVar14[0x2094];
    puVar14[0x2094] = puVar31;
    if (lVar18 != 0) {
      puVar14[0x20b1] = lVar18;
    }
    puVar14[0x20af] = puVar14[0x20af] + lVar25 + 0x2f537;
    FUN_026400e0(puVar31);
    lVar18 = puVar14[0x2094];
    puVar14[0x2094] = puVar30;
    if (lVar18 != 0) {
      puVar14[0x20b8] = lVar18;
    }
    puVar14[0x20b6] = puVar14[0x20b6] + lVar25 + 0x2f538;
    FUN_026400e0(puVar30);
    lVar18 = puVar14[0x2094];
    puVar14[0x2094] = puVar14 + 0x20bb;
    if (lVar18 != 0) {
      puVar14[0x20bf] = lVar18;
    }
    puVar14[0x20bd] = puVar14[0x20bd] + lVar25 + 0x2f539;
    FUN_026400e0();
    puVar14[0x2075] = &PTR_LAB_04a8a4e8;
    puVar14[0x15] = &PTR_LAB_04a8a428;
    *puVar14 = &PTR_LAB_04a8a3c8;
    plVar15[4] = (long)puVar14;
    lVar25 = *plVar19;
    if (lVar25 == 0) {
      pvVar16 = malloc(0x28);
      plVar15[5] = (long)pvVar16;
joined_r0x026fc868:
      if (pvVar16 != (void *)0x0) {
        lVar25 = *plVar19;
        if (lVar25 == 0) {
          plVar17 = malloc(0x28);
        }
        else {
          plVar17 = (long *)*plVar22;
          if (plVar17 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar17 = (long *)(lVar25 + 8);
            if (lVar18 != 0) {
              plVar17 = (long *)(lVar18 + 0xa8);
            }
            plVar17 = (long *)*plVar17;
          }
          plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
        }
        puVar9 = PTR_DAT_04bc3820;
        plVar17[1] = 0x200000000;
        plVar17[2] = (long)(plVar17 + 3);
        *plVar17 = (long)(puVar9 + 0x10);
        plVar15[6] = (long)plVar17;
        lVar25 = *plVar19;
        if (lVar25 == 0) {
          puVar14 = malloc(0x1050);
        }
        else {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar25 + 8);
            if (lVar18 != 0) {
              plVar22 = (long *)(lVar18 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            puVar14 = (undefined8 *)0x0;
            if (plVar22 == (long *)0x0) goto LAB_026fc940;
          }
          puVar14 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x1050,8);
        }
LAB_026fc940:
        *(undefined1 *)(puVar14 + 3) = 0;
        *puVar14 = &PTR_LAB_04a8a578;
        puVar14[4] = puVar14 + 4;
        puVar14[5] = puVar14 + 4;
        *(undefined4 *)(puVar14 + 6) = 0;
        puVar14[7] = puVar14 + 10;
        puVar14[1] = 0;
        puVar14[2] = 0;
        for (lVar25 = 0; *(long *)((long)puVar14 + lVar25 + 0x50) = (long)puVar14 + lVar25 + 0x70,
            lVar25 != 0xfc0; lVar25 = lVar25 + 0x40) {
          *(long *)((long)puVar14 + lVar25 + 0x70) = (long)puVar14 + lVar25 + 0x90;
        }
        puVar14[0x206] = 0;
        puVar14[8] = puVar14 + 10;
        *(undefined4 *)(puVar14 + 9) = 0x80;
        lVar25 = plVar15[3];
        plVar15[7] = (long)puVar14;
        puVar14[1] = plVar15[2];
        puVar14[2] = lVar25;
        if (plVar15[7] != 0) {
          lVar25 = plVar15[6];
          if (*(int *)(lVar25 + 8) < *(int *)(lVar25 + 0xc)) {
            *(long *)(*(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 8) * 8) = plVar15[7];
            *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
          }
        }
        *(long *)plVar15[5] = lVar28;
        *(long *)(plVar15[5] + 8) = lVar13;
        *(long *)(plVar15[5] + 0x10) = lVar2;
        *(long *)(plVar15[5] + 0x18) = lVar3;
        *(long *)(plVar15[5] + 0x20) = plVar15[6];
        FUN_02640070(plVar15[4],0,plVar15[2],0,1);
        FUN_02640130(plVar15[4],plVar15[5]);
        goto LAB_026fca58;
      }
    }
    else {
      plVar17 = (long *)*plVar22;
      if (plVar17 != (long *)0x0) {
LAB_026fc838:
        pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
        plVar15[5] = (long)pvVar16;
        goto joined_r0x026fc868;
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar25 + 8);
      if (lVar18 != 0) {
        plVar17 = (long *)(lVar18 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 != (long *)0x0) goto LAB_026fc838;
      plVar15[5] = 0;
    }
    FUN_02724c8c(plVar15);
  }
LAB_026fca58:
  lVar25 = 0x5b3d50;
  *(long **)(*(long *)(param_1 + 0x10) + 0xe0) = plVar15;
  uVar21 = (**(code **)(*plVar15 + 0x40))(plVar15);
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar21;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar18 = *plVar19;
  if (lVar18 == 0) {
    plVar15 = malloc(0x40);
  }
  else {
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == (long *)0x0) {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar18 + 8);
      if (lVar26 != 0) {
        plVar15 = (long *)(lVar26 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_026fcaf4;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x40,8);
  }
LAB_026fcaf4:
  plVar22 = plVar15 + 1;
  *plVar22 = 0;
  *plVar15 = (long)&PTR_LAB_04a8a5c8;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar17 = *(long **)(param_1 + 8);
  if (plVar17 == (long *)0x0) goto LAB_026fd12c;
  lVar18 = *plVar19;
  *plVar22 = (long)plVar17;
  if (lVar18 == 0) {
    puVar14 = malloc(0x69560);
    lVar18 = 0;
  }
  else {
    puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x69560,0x10);
    lVar18 = *plVar19;
  }
  *(undefined8 *)((long)puVar14 + 6) = 0;
  *puVar14 = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
  puVar14[8] = 0;
  *(undefined8 *)((long)puVar14 + 0x46) = 0;
  *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
  *(undefined4 *)(puVar14 + 0x20) = 0;
  memset(puVar14 + 0x22,0,0x69061);
  plVar15[2] = (long)puVar14;
  if (lVar18 == 0) {
    puVar14 = malloc(0x69560);
  }
  else {
    plVar17 = (long *)*plVar22;
    if (plVar17 == (long *)0x0) {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar18 + 8);
      if (lVar26 != 0) {
        plVar17 = (long *)(lVar26 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_026fcbf4;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x69560,0x10);
  }
LAB_026fcbf4:
  *(undefined8 *)((long)puVar14 + 6) = 0;
  *puVar14 = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0xffff;
  puVar14[8] = 0;
  *(undefined8 *)((long)puVar14 + 0x46) = 0;
  *(undefined2 *)((long)puVar14 + 0x4e) = 0xffff;
  *(undefined4 *)(puVar14 + 0x20) = 0;
  memset(puVar14 + 0x22,0,0x69061);
  plVar15[3] = (long)puVar14;
  lVar18 = *plVar19;
  if (lVar18 == 0) {
    puVar14 = malloc(0x188);
  }
  else {
    plVar17 = (long *)*plVar22;
    if (plVar17 == (long *)0x0) {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar18 + 8);
      if (lVar26 != 0) {
        plVar17 = (long *)(lVar26 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_026fcc8c;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x188,8);
  }
LAB_026fcc8c:
  puVar14[0x2a] = 0;
  *puVar14 = &PTR_LAB_04a8a658;
  puVar14[1] = 0;
  puVar14[7] = &DAT_04a897e8;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0x12] = puVar14 + 7;
  puVar14[0x13] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  *(undefined1 *)(puVar14 + 6) = 0;
  puVar14[0xe] = &DAT_04a8ed90;
  puVar14[5] = 0;
  puVar14[0xc] = 0;
  *(undefined1 *)(puVar14 + 0xd) = 0;
  *(undefined1 *)(puVar14 + 0x14) = 0;
  puVar14[0x17] = 0x110;
  *(undefined1 *)(puVar14 + 0x1b) = 0;
  puVar14[0x20] = 0;
  puVar14[3] = puVar14 + 0x15;
  puVar14[4] = 0;
  puVar29 = puVar14 + 0x1c;
  *puVar29 = &DAT_04a8f060;
  puVar14[0x18] = puVar29;
  puVar14[0x2b] = 0;
  puVar14[0x2c] = 0;
  puVar14[0x23] = 0;
  puVar14[0x24] = 0;
  puVar14[0x23] = &DAT_04a8f060;
  puVar14[0x2a] = &DAT_04a8f060;
  puVar14[0x2b] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xf] = 0;
  puVar14[0x10] = 0x100;
  puVar14[0x19] = puVar14 + 0xe;
  puVar14[0x1a] = 0;
  puVar14[0x2f] = 0;
  puVar14[0x30] = 0;
  *(undefined1 *)(puVar14 + 0x30) = 0;
  puVar14[0x2d] = 0;
  puVar14[0x2e] = 0;
  puVar14[0x21] = 0;
  puVar14[0x22] = 0;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x24] = 0;
  puVar14[0x25] = 0;
  puVar14[0x25] = 0;
  puVar14[0x26] = 0;
  puVar14[0x26] = 0;
  puVar14[0x27] = 0;
  puVar14[0x27] = 0;
  puVar14[0x28] = 0;
  puVar14[0x28] = 0;
  puVar14[0x29] = 0;
  *(undefined1 *)(puVar14 + 0x29) = 0;
  puVar14[0x2c] = 0;
  puVar14[0x2d] = 0;
  puVar14[0x2e] = 0;
  puVar14[0x2f] = 0;
  puVar14[0x15] = &PTR_LAB_04a8a688;
  puVar14[0x16] = 0;
  puVar14[0x1e] = 0x110;
  puVar14[0x1f] = 0;
  FUN_026400e0(puVar29);
  lVar18 = puVar14[0x18];
  puVar14[0x18] = puVar14 + 0x23;
  if (lVar18 != 0) {
    puVar14[0x27] = lVar18;
  }
  puVar14[0x25] = puVar14[0x25] + 0x23130;
  FUN_026400e0(puVar14 + 0x23);
  lVar18 = puVar14[0x18];
  puVar14[0x18] = puVar14 + 0x2a;
  if (lVar18 != 0) {
    puVar14[0x2e] = lVar18;
  }
  puVar14[0x2c] = puVar14[0x2c] + 0x46150;
  FUN_026400e0(puVar14 + 0x2a);
  *puVar14 = &PTR_LAB_04a8a628;
  plVar15[4] = (long)puVar14;
  lVar18 = *plVar19;
  if (lVar18 == 0) {
    pvVar16 = malloc(0x28);
    plVar15[5] = (long)pvVar16;
joined_r0x026fce7c:
    if (pvVar16 != (void *)0x0) {
      lVar18 = *plVar19;
      if (lVar18 == 0) {
        plVar17 = malloc(0x28);
      }
      else {
        plVar17 = (long *)*plVar22;
        if (plVar17 == (long *)0x0) {
          lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar18 + 8);
          if (lVar26 != 0) {
            plVar17 = (long *)(lVar26 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
        }
        plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
      }
      puVar9 = PTR_DAT_04bc3820;
      plVar17[1] = 0x200000000;
      plVar17[2] = (long)(plVar17 + 3);
      *plVar17 = (long)(puVar9 + 0x10);
      plVar15[6] = (long)plVar17;
      lVar18 = *plVar19;
      if (lVar18 == 0) {
        puVar14 = malloc(0x1050);
      }
      else {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) {
          lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar18 + 8);
          if (lVar26 != 0) {
            plVar22 = (long *)(lVar26 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          puVar14 = (undefined8 *)0x0;
          if (plVar22 == (long *)0x0) goto LAB_026fcf54;
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x1050,8);
      }
LAB_026fcf54:
      *(undefined1 *)(puVar14 + 3) = 0;
      *puVar14 = &PTR_LAB_04a8a6b8;
      puVar14[4] = puVar14 + 4;
      puVar14[5] = puVar14 + 4;
      *(undefined4 *)(puVar14 + 6) = 0;
      puVar14[7] = puVar14 + 10;
      puVar14[1] = 0;
      puVar14[2] = 0;
      for (lVar18 = 0; *(long *)((long)puVar14 + lVar18 + 0x50) = (long)puVar14 + lVar18 + 0x70,
          lVar18 != 0xfc0; lVar18 = lVar18 + 0x40) {
        *(long *)((long)puVar14 + lVar18 + 0x70) = (long)puVar14 + lVar18 + 0x90;
      }
      puVar14[0x206] = 0;
      puVar14[8] = puVar14 + 10;
      *(undefined4 *)(puVar14 + 9) = 0x80;
      lVar18 = plVar15[3];
      plVar15[7] = (long)puVar14;
      puVar14[1] = plVar15[2];
      puVar14[2] = lVar18;
      if (plVar15[7] != 0) {
        lVar18 = plVar15[6];
        if (*(int *)(lVar18 + 8) < *(int *)(lVar18 + 0xc)) {
          *(long *)(*(long *)(lVar18 + 0x10) + (long)*(int *)(lVar18 + 8) * 8) = plVar15[7];
          *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
        }
      }
      *(long *)plVar15[5] = lVar28;
      *(long *)(plVar15[5] + 8) = lVar13;
      *(long *)(plVar15[5] + 0x10) = lVar2;
      *(long *)(plVar15[5] + 0x18) = lVar3;
      *(long *)(plVar15[5] + 0x20) = plVar15[6];
      FUN_02640070(plVar15[4],0,plVar15[2],0,1);
      FUN_02640130(plVar15[4],plVar15[5]);
      goto LAB_026fd12c;
    }
    pvVar16 = (void *)plVar15[2];
  }
  else {
    plVar17 = (long *)*plVar22;
    if (plVar17 != (long *)0x0) {
LAB_026fce24:
      pvVar16 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,0x28,8);
      plVar15[5] = (long)pvVar16;
      goto joined_r0x026fce7c;
    }
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar17 = (long *)(lVar18 + 8);
    if (lVar26 != 0) {
      plVar17 = (long *)(lVar26 + 0xa8);
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 != (long *)0x0) goto LAB_026fce24;
    plVar15[5] = 0;
    pvVar16 = (void *)plVar15[2];
  }
  if (pvVar16 != (void *)0x0) {
    if (*plVar19 == 0) {
      free(pvVar16);
    }
    else {
      plVar17 = (long *)FUN_038cb610(*plVar19,pvVar16);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,pvVar16);
      }
    }
  }
  pvVar16 = (void *)plVar15[3];
  if (pvVar16 != (void *)0x0) {
    if (*plVar19 == 0) {
      free(pvVar16);
    }
    else {
      plVar17 = (long *)FUN_038cb610(*plVar19,pvVar16);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,pvVar16);
      }
    }
  }
  if ((long *)plVar15[4] != (long *)0x0) {
    (**(code **)(*(long *)plVar15[4] + 8))();
  }
  pvVar16 = (void *)plVar15[5];
  if (pvVar16 != (void *)0x0) {
    if (*plVar19 == 0) {
      free(pvVar16);
    }
    else {
      plVar17 = (long *)FUN_038cb610(*plVar19,pvVar16);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,pvVar16);
      }
    }
  }
  if ((long *)plVar15[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar15[6] + 0x18))();
  }
  if ((long *)plVar15[7] != (long *)0x0) {
    (**(code **)(*(long *)plVar15[7] + 0x18))();
  }
  *plVar22 = 0;
LAB_026fd12c:
  *(long **)(*(long *)(param_1 + 0x10) + 0xe8) = plVar15;
  uVar21 = (**(code **)(*plVar15 + 0x40))(plVar15);
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar21;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar18 = 0xf0;
  puVar9 = PTR_DAT_04bc3670 + 0x10;
  do {
    lVar26 = *plVar19;
    if (lVar26 == 0) {
      plVar15 = malloc(0x58);
    }
    else {
      plVar15 = *(long **)(param_1 + 8);
      if (plVar15 == (long *)0x0) {
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar26 + 8);
        if (lVar23 != 0) {
          plVar15 = (long *)(lVar23 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)0x0;
          goto LAB_026fd210;
        }
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x58,8);
    }
LAB_026fd210:
    *plVar15 = (long)puVar9;
    plVar15[1] = 0;
    plVar15[10] = 0;
    plVar15[2] = 0;
    plVar15[3] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[9] = 0;
    local_a0 = *(undefined8 *)(param_1 + 8);
    local_98 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x10))();
    local_98 = local_98 + lVar25;
    local_90 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x20))();
    local_90 = local_90 + lVar25;
    local_88 = lVar28;
    local_80 = lVar13;
    local_78 = lVar2;
    lStack_70 = lVar3;
    FUN_026e7190(plVar15,&local_a0);
    *(long **)(*(long *)(param_1 + 0x10) + lVar18) = plVar15;
    lVar26 = *(long *)(*(long *)(param_1 + 0x10) + lVar18);
    local_c0 = &PTR_FUN_04a8a708;
    if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
      *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
           *(undefined8 *)(lVar26 + 0x38);
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
    lStack_b8 = param_1;
    (*(code *)PTR_FUN_04a8a708)(&local_c0,*(undefined8 *)(lVar26 + 0x50));
    lVar18 = lVar18 + 8;
    lVar25 = lVar25 + 0x74a40;
    if (lVar18 == 0x130) {
      uVar24 = FUN_02703140(param_1);
      if ((uVar24 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x508) = 2;
        FUN_02703290(param_1);
        uVar1 = *(uint *)(param_1 + 0x508);
        if ((uVar1 & 1) != 0) {
          *(byte *)(param_1 + 0x50c) = *(byte *)(param_1 + 0x50c) | 4;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x50d) = *(byte *)(param_1 + 0x50d) | 4;
        }
        if ((uVar1 >> 2 & 1) != 0) {
          *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) | 4;
        }
        if ((uVar1 >> 3 & 1) != 0) {
          *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) | 4;
        }
        if ((uVar1 >> 4 & 1) != 0) {
          *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) | 4;
        }
        *(undefined4 *)(param_1 + 0x508) = 0;
      }
      FUN_026f7430(param_1);
      return;
    }
  } while( true );
}

