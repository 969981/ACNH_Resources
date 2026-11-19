
void FUN_03966cf0(long param_1,uint *param_2,undefined8 param_3,ulong param_4,uint param_5,
                 long *param_6)

{
  size_t __size;
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  
  if (param_4 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x90) = param_3;
  puVar3 = PTR_DAT_04bb2698;
  if ((int)param_5 < 1) goto LAB_03966fb4;
  uVar15 = (ulong)param_5;
  __size = (ulong)param_5 * 0x88 + 8;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    puVar6 = malloc(__size);
joined_r0x03966da8:
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6 + 1;
      *puVar6 = uVar15;
      uVar10 = uVar15 * 0x88 - 0x88;
      uVar2 = ((uint)(uVar10 / 0x88) & 0x1ffffff) + 1;
      uVar11 = (ulong)uVar2 & 3;
      puVar6 = puVar7;
      if ((uVar2 & 3) != 0) {
        do {
          puVar6[1] = 0;
          puVar6[2] = 0;
          uVar11 = uVar11 - 1;
          *puVar6 = 0;
          puVar6[0xe] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6 = puVar6 + 0x11;
        } while (uVar11 != 0);
      }
      if (0x197 < uVar10) {
        do {
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6[0xe] = 0;
          puVar6[0x13] = 0;
          puVar6[0x15] = 0;
          puVar6[0x22] = 0;
          puVar6[0x26] = 0;
          puVar6[0x33] = 0;
          puVar6[0x41] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0x11] = 0;
          puVar6[0x12] = 0;
          puVar6[0x1e] = 0;
          puVar6[0x1f] = 0;
          puVar6[0x1c] = 0;
          puVar6[0x1d] = 0;
          puVar6[0x1a] = 0;
          puVar6[0x1b] = 0;
          puVar6[0x18] = 0;
          puVar6[0x19] = 0;
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
          puVar6[0x23] = 0;
          puVar6[0x24] = 0;
          puVar6[0x2f] = 0;
          puVar6[0x30] = 0;
          puVar6[0x2d] = 0;
          puVar6[0x2e] = 0;
          puVar6[0x2b] = 0;
          puVar6[0x2c] = 0;
          puVar6[0x29] = 0;
          puVar6[0x2a] = 0;
          puVar6[0x27] = 0;
          puVar6[0x28] = 0;
          puVar6[0x34] = 0;
          puVar6[0x35] = 0;
          puVar6[0x3f] = 0;
          puVar6[0x40] = 0;
          puVar6[0x3d] = 0;
          puVar6[0x3e] = 0;
          puVar6[0x3b] = 0;
          puVar6[0x3c] = 0;
          puVar6[0x39] = 0;
          puVar6[0x3a] = 0;
          puVar6[0x37] = 0;
          puVar6[0x38] = 0;
          puVar6 = puVar6 + 0x44;
        } while (puVar6 != puVar7 + uVar15 * 0x11);
      }
      *(uint *)(param_1 + 0x30) = param_5;
      *(ulong **)(param_1 + 0x38) = puVar7;
    }
    lVar16 = *(long *)puVar3;
    if (lVar16 == 0) goto LAB_03966f28;
    if (param_6 == (long *)0x0) {
LAB_03966edc:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar14 = (undefined8 *)(lVar16 + 8);
      if (lVar4 != 0) {
        puVar14 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_6 = (long *)*puVar14;
      if (param_6 == (long *)0x0) goto LAB_03966fb4;
    }
    pvVar8 = (void *)(**(code **)(*param_6 + 0x30))(param_6,uVar15 * 0x30,8);
  }
  else {
    plVar5 = param_6;
    if (param_6 != (long *)0x0) {
LAB_03966d84:
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
      goto joined_r0x03966da8;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar16 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03966d84;
    lVar16 = *(long *)puVar3;
    if (lVar16 != 0) goto LAB_03966edc;
LAB_03966f28:
    pvVar8 = malloc(uVar15 * 0x30);
  }
  if (pvVar8 != (void *)0x0) {
    uVar10 = uVar15 * 0x30 - 0x30;
    uVar2 = ((uint)(uVar10 / 0x30) & 0x7ffffff) + 1;
    uVar11 = (ulong)uVar2 & 7;
    pvVar9 = pvVar8;
    if ((uVar2 & 7) != 0) {
      do {
        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
        pvVar9 = (void *)((long)pvVar9 + 0x30);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (0x14f < uVar10) {
      do {
        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
        pvVar9 = (void *)((long)pvVar9 + 0x180);
      } while (pvVar9 != (void *)((long)pvVar8 + uVar15 * 0x30));
    }
    *(uint *)(param_1 + 0xa0) = param_5;
    *(void **)(param_1 + 0xa8) = pvVar8;
  }
LAB_03966fb4:
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    lVar16 = *(long *)(param_1 + 0x38);
    uVar13 = 0;
    do {
      lVar4 = lVar16 + (long)(int)uVar13 * 0x88;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x78) = 0;
      *(undefined4 *)(lVar4 + 0x80) = 0;
      *(undefined2 *)(lVar4 + 0x84) = 0;
      plVar5 = (long *)(*(int *)(param_1 + 0x84) + lVar4);
      lVar4 = *(long *)(param_1 + 0x70);
      *(long **)(param_1 + 0x70) = plVar5;
      *plVar5 = lVar4;
      plVar5[1] = param_1 + 0x70;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      lVar4 = (long)(int)uVar13;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      if (*(uint *)(param_1 + 0xa0) <= uVar13) {
        lVar4 = 0;
      }
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0xa8) + lVar4 * 0x30);
      *(undefined4 *)(puVar14 + 3) = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined4 *)(puVar14 + 2) = 0;
      plVar5 = (long *)((long)*(int *)(param_1 + 0xdc) + (long)puVar14);
      lVar4 = *(long *)(param_1 + 200);
      *(long **)(param_1 + 200) = plVar5;
      *plVar5 = lVar4;
      plVar5[1] = param_1 + 200;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  if (*(int *)(param_1 + 0x80) < 1) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x70);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  }
  puVar1 = (uint *)0x0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (uint *)((long)plVar5 - (long)*(int *)(param_1 + 0x84));
  }
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  *(ulong *)(puVar1 + 6) = param_4 & 0xffffffff;
  plVar12 = (long *)(param_1 + 0x58);
  lVar16 = *plVar12;
  plVar5 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)puVar1);
  *plVar12 = (long)plVar5;
  *plVar5 = lVar16;
  plVar5[1] = (long)plVar12;
  if (lVar16 != 0) {
    *(long **)(lVar16 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  *(uint *)(param_1 + 8) = *puVar1;
  *(uint *)(param_1 + 0xc) = puVar1[1];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar1 + 4);
  *(ulong *)(param_1 + 0x20) = *(long *)(puVar1 + 6) + (ulong)*puVar1;
  return;
}

