
void FUN_038902f0(int *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = PTR_DAT_04bb2698;
  param_1[3] = 0;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  *(int **)(param_1 + 0xe) = param_1 + 0x10;
  puVar7 = PTR_DAT_04bb3350;
  if (lVar14 == 0) {
    puVar9 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x10,8);
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  **(undefined8 **)(param_1 + 0xe) = puVar9;
  iVar13 = param_1[0xc];
  iVar4 = param_1[0xd];
  lVar14 = *(long *)puVar6;
  iVar12 = (int)((long)iVar13 + 1);
  param_1[0xc] = iVar12;
  if (lVar14 == 0) {
    puVar9 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x10,8);
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  if (iVar12 < iVar4) {
    *(undefined8 **)(*(long *)(param_1 + 0xe) + ((long)iVar13 + 1) * 8) = puVar9;
    param_1[0xc] = param_1[0xc] + 1;
  }
  param_1[0x14] = 0;
  FUN_038906c0(param_1,param_3);
  iVar13 = param_1[4];
  if (0 < iVar13) {
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
      pvVar11 = malloc((long)iVar13 << 3);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_03890488;
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)iVar13 << 3,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(param_1 + 2) = pvVar11;
      *param_1 = 0;
      param_1[1] = iVar13;
    }
  }
LAB_03890488:
  iVar13 = param_1[4];
  if (0 < iVar13) {
    lVar14 = *(long *)puVar6;
    puVar15 = *(undefined4 **)(*(long *)(param_1 + 0xe) + (long)param_1[0x14] * 8);
    if (lVar14 == 0) {
      pvVar11 = malloc((long)iVar13 << 3);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_03890504;
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)iVar13 << 3,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(puVar15 + 2) = pvVar11;
      *puVar15 = 0;
      puVar15[1] = iVar13;
    }
  }
LAB_03890504:
  iVar13 = param_1[4];
  uVar1 = param_1[0x14] + 1U & 1;
  uVar2 = -uVar1;
  if (-2 < param_1[0x14]) {
    uVar2 = uVar1;
  }
  if (iVar13 < 1) goto LAB_03890590;
  lVar14 = *(long *)puVar6;
  puVar15 = *(undefined4 **)(*(long *)(param_1 + 0xe) + (ulong)uVar2 * 8);
  if (lVar14 == 0) {
    pvVar11 = malloc((long)iVar13 << 3);
joined_r0x03890580:
    if (pvVar11 != (void *)0x0) {
      *(void **)(puVar15 + 2) = pvVar11;
      *puVar15 = 0;
      puVar15[1] = iVar13;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)iVar13 << 3,8);
      goto joined_r0x03890580;
    }
  }
  iVar13 = param_1[4];
LAB_03890590:
  if (iVar13 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 6);
    do {
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) {
        puVar15 = malloc(0x18);
      }
      else {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
        plVar10 = (long *)(lVar14 + 8);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          puVar15 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x18,8);
        }
      }
      uVar5 = *(undefined4 *)*puVar9;
      *(undefined1 *)((long)puVar15 + 0x12) = 0;
      *puVar15 = uVar5;
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) {
        pvVar11 = malloc(0x28);
      }
      else {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
        puVar3 = (undefined8 *)(lVar14 + 8);
        if (lVar8 != 0) {
          puVar3 = (undefined8 *)(lVar8 + 0xa8);
        }
        pvVar11 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x28,8);
      }
      FUN_03890080(pvVar11,0,param_2);
      *(void **)(puVar15 + 2) = pvVar11;
      if (*param_1 < param_1[1]) {
        *(undefined4 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar15;
        *param_1 = *param_1 + 1;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)(*(long *)(param_1 + 6) + (long)param_1[4] * 8));
  }
  return;
}

