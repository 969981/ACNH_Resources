
void FUN_03ec3fb0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,long *param_6,
                 undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  long lVar13;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar11 = (ulong)param_5;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  plVar3 = (long *)PTR_DAT_04bb2698;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  if (0 < (int)param_2) {
    lVar13 = *plVar3;
    uVar7 = (ulong)param_2;
    sVar12 = (ulong)param_2 << 5;
    if (lVar13 == 0) {
      pvVar4 = malloc(sVar12);
joined_r0x03ec40f4:
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,sVar12);
        param_1[4] = param_2;
        *(void **)(param_1 + 6) = pvVar4;
      }
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) goto LAB_03ec4164;
      if (param_6 == (long *)0x0) {
LAB_03ec4110:
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar13 + 8);
        if (lVar2 != 0) {
          plVar6 = (long *)(lVar2 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        plVar3 = &DAT_05ae7600;
        if (plVar6 == (long *)0x0) goto LAB_03ec4234;
      }
      else {
        plVar6 = param_6;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar7 * 0x28,8);
    }
    else {
      plVar3 = param_6;
      if (param_6 != (long *)0x0) {
LAB_03ec4088:
        pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,sVar12,8);
        goto joined_r0x03ec40f4;
      }
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar13 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) goto LAB_03ec4088;
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 != 0) goto LAB_03ec4110;
LAB_03ec4164:
      puVar5 = malloc(uVar7 * 0x28);
    }
    plVar3 = &DAT_05ae7600;
    if (puVar5 != (undefined8 *)0x0) {
      plVar3 = &DAT_05ae7600;
      uVar9 = uVar7 * 0x28 - 0x28;
      uVar1 = ((uint)(uVar9 / 0x28) & 0x7ffffff) + 1;
      uVar10 = (ulong)uVar1 & 3;
      puVar8 = puVar5;
      if ((uVar1 & 3) != 0) {
        do {
          *(undefined8 *)((long)puVar8 + 0x1c) = 0;
          uVar10 = uVar10 - 1;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = puVar8 + 5;
        } while (uVar10 != 0);
      }
      if (0x77 < uVar9) {
        do {
          *(undefined8 *)((long)puVar8 + 0x1c) = 0;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
          *(undefined8 *)((long)puVar8 + 0x44) = 0;
          puVar8[7] = 0;
          *(undefined1 *)(puVar8 + 8) = 0;
          *(undefined8 *)((long)puVar8 + 0x6c) = 0;
          puVar8[0xc] = 0;
          *(undefined1 *)(puVar8 + 0xd) = 0;
          *(undefined8 *)((long)puVar8 + 0x94) = 0;
          *(undefined1 *)(puVar8 + 0x12) = 0;
          puVar8[0xf] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8 = puVar8 + 0x14;
        } while (puVar8 != puVar5 + uVar7 * 5);
      }
      param_1[8] = param_2;
      *(undefined8 **)(param_1 + 10) = puVar5;
    }
  }
LAB_03ec4234:
  if (0 < (int)param_3) {
    lVar13 = *plVar3;
    sVar12 = (ulong)param_3 * 0x18;
    if (lVar13 == 0) {
      pvVar4 = malloc(sVar12);
    }
    else {
      plVar6 = param_6;
      if (param_6 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar13 + 8);
        if (lVar2 != 0) {
          plVar6 = (long *)(lVar2 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03ec42d0;
      }
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar12,8);
    }
    if (pvVar4 != (void *)0x0) {
      memset(pvVar4,0,((sVar12 - 0x18) / 0x18) * 0x18 + 0x18);
      *param_1 = param_3;
      *(void **)(param_1 + 2) = pvVar4;
    }
  }
LAB_03ec42d0:
  if (0 < (int)param_4) {
    lVar13 = *plVar3;
    if (lVar13 == 0) {
      pvVar4 = malloc((ulong)param_4 << 5);
    }
    else {
      plVar6 = param_6;
      if (param_6 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar13 + 8);
        if (lVar2 != 0) {
          plVar6 = (long *)(lVar2 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03ec4338;
      }
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_4 << 5,8);
    }
    if (pvVar4 != (void *)0x0) {
      param_1[0x14] = param_4;
      *(void **)(param_1 + 0x16) = pvVar4;
    }
  }
LAB_03ec4338:
  if ((int)param_5 < 1) goto LAB_03ec44dc;
  lVar13 = *plVar3;
  sVar12 = uVar11 * 0x20 + (ulong)param_5 * -4;
  if (lVar13 == 0) {
    pvVar4 = malloc(sVar12);
joined_r0x03ec43f0:
    if (pvVar4 != (void *)0x0) {
      param_1[0x1c] = param_5;
      *(void **)(param_1 + 0x1e) = pvVar4;
    }
    lVar13 = *plVar3;
    if (lVar13 == 0) goto LAB_03ec446c;
    if (param_6 != (long *)0x0) {
      plVar6 = param_6;
LAB_03ec4434:
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar11 * 0x18,8);
      goto joined_r0x03ec4448;
    }
LAB_03ec4408:
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar13 + 8);
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03ec4434;
    lVar13 = *plVar3;
    sVar12 = (ulong)param_5 * 0x32;
    if (lVar13 != 0) goto LAB_03ec448c;
LAB_03ec450c:
    pvVar4 = malloc(sVar12);
  }
  else {
    plVar6 = param_6;
    if (param_6 != (long *)0x0) {
LAB_03ec4388:
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar12,8);
      goto joined_r0x03ec43f0;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar13 + 8);
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03ec4388;
    lVar13 = *plVar3;
    if (lVar13 != 0) goto LAB_03ec4408;
LAB_03ec446c:
    pvVar4 = malloc(uVar11 * 0x18);
joined_r0x03ec4448:
    if (pvVar4 != (void *)0x0) {
      param_1[0x18] = param_5;
      *(void **)(param_1 + 0x1a) = pvVar4;
    }
    lVar13 = *plVar3;
    sVar12 = (ulong)param_5 * 0x32;
    if (lVar13 == 0) goto LAB_03ec450c;
    if (param_6 == (long *)0x0) {
LAB_03ec448c:
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar5 = (undefined8 *)(lVar13 + 8);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0xa8);
      }
      param_6 = (long *)*puVar5;
      if (param_6 == (long *)0x0) goto LAB_03ec44dc;
    }
    pvVar4 = (void *)(**(code **)(*param_6 + 0x30))(param_6,sVar12,8);
  }
  if (pvVar4 != (void *)0x0) {
    param_1[0x20] = param_5;
    *(void **)(param_1 + 0x22) = pvVar4;
  }
LAB_03ec44dc:
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x2c] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x24) = param_7;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}

