
void FUN_02dcadb0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  
  lVar11 = DAT_05ae7600;
  puVar2 = (uint *)(param_1 + 0x1c308);
  if (DAT_05ae7600 == 0) {
    puVar10 = malloc(0x1c8);
joined_r0x02dcaeec:
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar10 + 0x6b) = 0;
      *(undefined1 *)((long)puVar10 + 0x2c) = 0;
      puVar3 = PTR_DAT_04bc4ee8;
      *puVar10 = 4;
      *(undefined4 *)(puVar10 + 2) = 0xffffffff;
      *(undefined4 *)(puVar10 + 5) = 0x40;
      puVar3 = puVar3 + 0x10;
      plVar9 = puVar10 + 1;
      *plVar9 = (long)puVar3;
      puVar4 = PTR_DAT_04bb2bc0;
      puVar10[0xf] = puVar3;
      puVar10[0x1d] = puVar3;
      *(undefined1 *)((long)puVar10 + 0x9c) = 0;
      puVar10[0x2b] = puVar3;
      puVar4 = puVar4 + 0x10;
      *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar10 + 0xdb) = 0;
      *(undefined4 *)(puVar10 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar10 + 0x14b) = 0;
      *(undefined1 *)((long)puVar10 + 0x10c) = 0;
      *(undefined4 *)(puVar10 + 0x2c) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x2f) = 0x40;
      *(undefined1 *)((long)puVar10 + 0x1bb) = 0;
      *(undefined1 *)((long)puVar10 + 0x17c) = 0;
      puVar10[3] = puVar4;
      puVar10[4] = (undefined1 *)((long)puVar10 + 0x2c);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      *(undefined1 *)(puVar10 + 0x1c) = 1;
      *(undefined1 *)(puVar10 + 0x2a) = 1;
      *(undefined1 *)(puVar10 + 0x38) = 1;
      puVar10[0x11] = puVar4;
      puVar10[0x12] = (undefined1 *)((long)puVar10 + 0x9c);
      puVar10[0x1f] = puVar4;
      puVar10[0x20] = (long)puVar10 + 0x10c;
      puVar10[0x2d] = puVar4;
      puVar10[0x2e] = (long)puVar10 + 0x17c;
      *puVar2 = 4;
      *(long **)(param_1 + 0x1c310) = plVar9;
      goto LAB_02dcaef4;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar9 = (long *)(lVar11 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1c8,8);
      goto joined_r0x02dcaeec;
    }
  }
  plVar9 = *(long **)(param_1 + 0x1c310);
LAB_02dcaef4:
  pvVar14 = (void *)plVar9[3];
  *(undefined4 *)(plVar9 + 1) = DAT_0568cae0;
  (**(code **)(DAT_0568cae8 + 0x18))(&DAT_0568cae8);
  pvVar15 = DAT_0568caf0;
  if (pvVar14 != DAT_0568caf0) {
    (**(code **)(DAT_0568cae8 + 0x18))(&DAT_0568cae8);
    lVar11 = 0;
    do {
      if (*(char *)((long)DAT_0568caf0 + lVar11) == '\0') goto LAB_02dcaf8c;
      if (*(char *)((long)DAT_0568caf0 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02dcaf8c;
      }
      if (*(char *)((long)DAT_0568caf0 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02dcaf8c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02dcaf8c:
    iVar6 = (int)lVar11;
    if ((int)plVar9[4] <= (int)lVar11) {
      iVar6 = (int)plVar9[4] + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar6);
    *(undefined1 *)((long)pvVar14 + (long)iVar6) = 0;
  }
  *(undefined1 *)(plVar9 + 0xd) = DAT_0568cb40;
  lVar8 = *(long *)(param_1 + 0x1c310);
  uVar16 = (ulong)(1 < *puVar2);
  lVar11 = lVar8 + uVar16 * 0x70;
  *(undefined4 *)(lVar11 + 8) = DAT_0568cb50;
  pvVar14 = *(void **)(lVar11 + 0x18);
  (**(code **)(DAT_0568cb58 + 0x18))(&DAT_0568cb58);
  pvVar15 = DAT_0568cb60;
  if (pvVar14 != DAT_0568cb60) {
    (**(code **)(DAT_0568cb58 + 0x18))(&DAT_0568cb58);
    lVar11 = 0;
    do {
      if (*(char *)((long)DAT_0568cb60 + lVar11) == '\0') goto LAB_02dcb060;
      if (*(char *)((long)DAT_0568cb60 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02dcb060;
      }
      if (*(char *)((long)DAT_0568cb60 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02dcb060;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02dcb060:
    iVar7 = *(int *)(lVar8 + uVar16 * 0x70 + 0x20);
    iVar6 = (int)lVar11;
    if (iVar7 <= (int)lVar11) {
      iVar6 = iVar7 + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar6);
    *(undefined1 *)((long)pvVar14 + (long)iVar6) = 0;
  }
  *(undefined1 *)(lVar8 + uVar16 * 0x70 + 0x68) = DAT_0568cbb0;
  lVar8 = *(long *)(param_1 + 0x1c310);
  uVar16 = (ulong)(2 < *puVar2);
  lVar11 = lVar8 + uVar16 * 0xe0;
  pvVar14 = *(void **)(lVar11 + 0x18);
  *(undefined4 *)(lVar11 + 8) = DAT_0568cbc0;
  (**(code **)(DAT_0568cbc8 + 0x18))(&DAT_0568cbc8);
  pvVar15 = DAT_0568cbd0;
  if (pvVar14 != DAT_0568cbd0) {
    (**(code **)(DAT_0568cbc8 + 0x18))(&DAT_0568cbc8);
    lVar11 = 0;
    do {
      if (*(char *)((long)DAT_0568cbd0 + lVar11) == '\0') goto LAB_02dcb14c;
      if (*(char *)((long)DAT_0568cbd0 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02dcb14c;
      }
      if (*(char *)((long)DAT_0568cbd0 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02dcb14c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02dcb14c:
    iVar7 = *(int *)(lVar8 + uVar16 * 0xe0 + 0x20);
    iVar6 = (int)lVar11;
    if (iVar7 <= (int)lVar11) {
      iVar6 = iVar7 + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar6);
    *(undefined1 *)((long)pvVar14 + (long)iVar6) = 0;
  }
  *(undefined1 *)(lVar8 + uVar16 * 0xe0 + 0x68) = DAT_0568cc20;
  iVar6 = 0;
  if (*(int *)(DAT_05ab5ea8 + 0xd8) < 5) {
    iVar6 = *(int *)(DAT_05ab5ea8 + 0xd8);
  }
  *(int *)(param_1 + 0x1c4bc) = iVar6;
  uVar1 = iVar6 + 3;
  lVar11 = *(long *)(param_1 + 0x1c310);
  if (7 < uVar1) {
    uVar1 = 0;
  }
  lVar12 = (long)(int)uVar1;
  lVar8 = 3;
  if (*puVar2 < 4) {
    lVar8 = 0;
  }
  lVar13 = lVar11 + lVar8 * 0x70;
  pvVar15 = *(void **)(lVar13 + 0x18);
  *(undefined4 *)(lVar13 + 8) = (&DAT_0568cae0)[lVar12 * 0x1c];
  plVar9 = &DAT_0568cae8 + lVar12 * 0xe;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar14 = (&DAT_0568caf0)[lVar12 * 0xe];
  if (pvVar15 != pvVar14) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar13 = (long)(&DAT_0568caf0)[lVar12 * 0xe];
    lVar12 = 0;
    do {
      if (*(char *)(lVar13 + lVar12) == '\0') goto LAB_02dcb25c;
      lVar5 = lVar13 + lVar12;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02dcb25c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02dcb25c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02dcb25c:
    iVar7 = *(int *)(lVar11 + lVar8 * 0x70 + 0x20);
    iVar6 = (int)lVar12;
    if (iVar7 <= (int)lVar12) {
      iVar6 = iVar7 + -1;
    }
    memcpy(pvVar15,pvVar14,(long)iVar6);
    *(undefined1 *)((long)pvVar15 + (long)iVar6) = 0;
  }
  *(undefined1 *)(lVar11 + lVar8 * 0x70 + 0x68) = (&DAT_0568cb40)[(long)(int)uVar1 * 0x70];
  return;
}

