
void FUN_03f238a0(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  size_t sVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if ((*(long *)PTR_DAT_04bc3ee8 == 0) ||
     (lVar16 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20), lVar16 == 0)) {
    lVar16 = 0;
    uVar18 = 1;
LAB_03f23920:
    lVar9 = *(long *)PTR_DAT_04bb2698;
    sVar1 = uVar18 * 0x68 + 8;
    if (lVar9 != 0) {
      plVar10 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03f23968:
        puVar11 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar1,8);
        puVar7 = PTR_DAT_04bdf048;
        goto joined_r0x03f23a04;
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar9 + 8);
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03f23968;
LAB_03f23a08:
      bVar6 = true;
      goto LAB_03f23a0c;
    }
    puVar11 = malloc(sVar1);
    puVar7 = PTR_DAT_04bdf048;
joined_r0x03f23a04:
    PTR_DAT_04bdf048 = puVar7;
    if (puVar11 == (ulong *)0x0) goto LAB_03f23a08;
    puVar12 = puVar11 + 1;
    *puVar11 = uVar18;
    puVar11 = puVar12;
    do {
      *puVar11 = (ulong)(puVar7 + 0x10);
      *(undefined1 *)(puVar11 + 1) = 0;
      *(undefined4 *)(puVar11 + 6) = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined4 *)(puVar11 + 8) = 0x7f7fffff;
      *(undefined4 *)(puVar11 + 0xb) = 0;
      puVar11[0xc] = 0;
      *(undefined8 *)((long)puVar11 + 0x44) = 0;
      *(undefined8 *)((long)puVar11 + 0x4c) = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11 = puVar11 + 0xd;
    } while (puVar11 != puVar12 + uVar18 * 0xd);
    bVar6 = true;
    uVar17 = (uint)uVar18;
    *(uint *)(param_1 + 0x10) = uVar17;
    *(ulong **)(param_1 + 0x18) = puVar12;
    uVar19 = uVar18;
  }
  else {
    uVar18 = (ulong)*(uint *)(lVar16 + 0x14);
    if (0 < (int)*(uint *)(lVar16 + 0x14)) goto LAB_03f23920;
    bVar6 = false;
LAB_03f23a0c:
    uVar17 = *(uint *)(param_1 + 0x10);
    uVar19 = (ulong)uVar17;
  }
  if (0 < (int)uVar17) {
    uVar15 = 0;
    do {
      uVar4 = uVar15;
      if ((uVar19 & 0xffffffff) <= uVar15) {
        uVar4 = 0;
      }
      FUN_03f24ec0(*(long *)(param_1 + 0x18) + uVar4 * 0x68,param_3,param_4);
      uVar14 = 0;
      uVar19 = uVar15;
      if (*(uint *)(param_1 + 0x10) <= uVar15) {
        uVar19 = 0;
      }
      if (((long)uVar15 < (long)(int)*(uint *)(lVar16 + 0x10)) &&
         (uVar15 < *(uint *)(lVar16 + 0x10))) {
        uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x18) + uVar15 * 8);
      }
      uVar15 = uVar15 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar19 * 0x68 + 0x10) = uVar14;
      uVar19 = (ulong)(int)*(uint *)(param_1 + 0x10);
    } while ((long)uVar15 < (long)uVar19);
  }
  puVar7 = PTR_DAT_04bb2698;
  uVar17 = (uint)uVar18;
  if (bVar6) {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    sVar1 = uVar18 * 0xa8 + 8;
    if (lVar16 == 0) {
      puVar11 = malloc(sVar1);
joined_r0x03f23b10:
      if (puVar11 != (ulong *)0x0) {
        puVar12 = puVar11 + 10;
        *puVar11 = uVar18;
        lVar16 = uVar18 * 0xa8;
        puVar2 = PTR_DAT_04bd20d0 + 0x10;
        do {
          puVar12[-9] = 0;
          puVar12[-8] = 0;
          lVar16 = lVar16 + -0xa8;
          puVar12[7] = 0;
          puVar12[-7] = 0;
          puVar12[-6] = (ulong)puVar2;
          puVar12[-5] = 0;
          puVar12[-4] = 0;
          puVar12[-3] = (ulong)puVar2;
          puVar12[-2] = 0;
          puVar12[-1] = 0;
          *puVar12 = (ulong)puVar2;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = (ulong)puVar2;
          puVar12[4] = 0;
          puVar12[5] = 0;
          puVar12[6] = (ulong)puVar2;
          puVar12[8] = 0;
          puVar12[9] = (ulong)puVar2;
          puVar12[10] = 0;
          puVar12[0xb] = 0;
          puVar12 = puVar12 + 0x15;
        } while (lVar16 != 0);
        *(uint *)(param_1 + 0x20) = uVar17;
        *(ulong **)(param_1 + 0x28) = puVar11 + 1;
      }
      goto LAB_03f23b74;
    }
    plVar10 = param_4;
    if (param_4 != (long *)0x0) {
LAB_03f23aec:
      puVar11 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,sVar1,8);
      goto joined_r0x03f23b10;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar16 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_03f23aec;
    lVar16 = *(long *)puVar7;
    if (lVar16 != 0) goto LAB_03f23b84;
LAB_03f23bcc:
    pvVar13 = malloc(0x18);
  }
  else {
LAB_03f23b74:
    lVar16 = *(long *)puVar7;
    if (lVar16 == 0) goto LAB_03f23bcc;
    plVar10 = param_4;
    if (param_4 == (long *)0x0) {
LAB_03f23b84:
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar16 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar13 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x18,8);
  }
  FUN_038f1770(pvVar13,param_4,param_2,8);
  *(void **)(param_1 + 200) = pvVar13;
  if (bVar6) {
    lVar16 = *(long *)puVar7;
    if (lVar16 == 0) {
      pvVar13 = malloc(uVar18 << 2);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar5 = (undefined8 *)(lVar16 + 8);
        if (lVar9 != 0) {
          puVar5 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_4 = (long *)*puVar5;
        if (param_4 == (long *)0x0) goto LAB_03f23c68;
      }
      pvVar13 = (void *)(**(code **)(*param_4 + 0x30))(param_4,uVar18 << 2,8);
    }
    if (pvVar13 != (void *)0x0) {
      *(uint *)(param_1 + 0xd0) = uVar17;
      *(void **)(param_1 + 0xd8) = pvVar13;
      goto joined_r0x03f23c70;
    }
  }
LAB_03f23c68:
  uVar17 = *(uint *)(param_1 + 0xd0);
  uVar18 = (ulong)uVar17;
joined_r0x03f23c70:
  if (0 < (int)uVar17) {
    uVar17 = 0;
    do {
      uVar3 = uVar17;
      if ((uint)uVar18 <= uVar17) {
        uVar3 = 0;
      }
      uVar17 = uVar17 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0xd8) + (ulong)uVar3 * 4) = 0;
      uVar18 = (ulong)*(uint *)(param_1 + 0xd0);
    } while ((int)uVar17 < (int)*(uint *)(param_1 + 0xd0));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}

