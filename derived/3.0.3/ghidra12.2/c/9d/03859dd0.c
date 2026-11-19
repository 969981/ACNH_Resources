
void FUN_03859dd0(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  if (param_2 == 0) {
    uVar16 = 1;
LAB_03859e28:
    lVar12 = *(long *)PTR_DAT_04bb2698;
    uVar17 = uVar16;
    if (lVar12 != 0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar16 << 3,8);
        goto joined_r0x03859e8c;
      }
LAB_03859e90:
      bVar1 = true;
      goto LAB_03859e94;
    }
    pvVar7 = malloc(uVar16 << 3);
joined_r0x03859e8c:
    if (pvVar7 == (void *)0x0) goto LAB_03859e90;
    *(int *)(param_1 + 0x7e) = (int)uVar16;
    bVar1 = true;
    param_1[0x7f] = (long)pvVar7;
LAB_03859ea0:
    uVar9 = uVar16 & 3;
    if (uVar16 - 1 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        lVar12 = uVar11 * 8;
        uVar11 = uVar11 + 4;
        *(undefined8 *)(param_1[0x7f] + lVar12) = 0;
        *(undefined8 *)(param_1[0x7f] + lVar12 + 8) = 0;
        *(undefined8 *)(param_1[0x7f] + lVar12 + 0x10) = 0;
        *(undefined8 *)(param_1[0x7f] + lVar12 + 0x18) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar11);
    }
    if (uVar9 != 0) {
      lVar12 = uVar11 << 3;
      do {
        uVar9 = uVar9 - 1;
        *(undefined8 *)(param_1[0x7f] + lVar12) = 0;
        lVar12 = lVar12 + 8;
      } while (uVar9 != 0);
    }
  }
  else {
    uVar16 = (ulong)*(uint *)(param_2 + 0x14);
    if (0 < (int)*(uint *)(param_2 + 0x14)) goto LAB_03859e28;
    bVar1 = false;
    uVar17 = uVar16;
LAB_03859e94:
    uVar16 = (ulong)*(uint *)(param_1 + 0x7e);
    if (0 < (int)*(uint *)(param_1 + 0x7e)) goto LAB_03859ea0;
  }
  uVar15 = (uint)uVar17;
  if (bVar1) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar17 << 3);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_03859f68;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar17 << 3,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_03859f68;
    *(uint *)(param_1 + 0x80) = uVar15;
    param_1[0x81] = (long)pvVar7;
    uVar2 = uVar15;
  }
  else {
LAB_03859f68:
    uVar2 = *(uint *)(param_1 + 0x80);
  }
  if (0 < (int)uVar2) {
    uVar16 = (ulong)uVar2 & 3;
    if (uVar2 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        lVar12 = uVar9 * 8;
        uVar9 = uVar9 + 4;
        *(undefined8 *)(param_1[0x81] + lVar12) = 0;
        *(undefined8 *)(param_1[0x81] + lVar12 + 8) = 0;
        *(undefined8 *)(param_1[0x81] + lVar12 + 0x10) = 0;
        *(undefined8 *)(param_1[0x81] + lVar12 + 0x18) = 0;
      } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
    }
    if ((uVar2 & 3) != 0) {
      lVar12 = uVar9 << 3;
      do {
        uVar16 = uVar16 - 1;
        *(undefined8 *)(param_1[0x81] + lVar12) = 0;
        lVar12 = lVar12 + 8;
      } while (uVar16 != 0);
    }
  }
  if (bVar1) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar17);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0385a064;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar17,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_0385a064;
    *(uint *)(param_1 + 0xa2) = uVar15;
    param_1[0xa3] = (long)pvVar7;
    uVar16 = uVar17;
    uVar2 = uVar15;
  }
  else {
LAB_0385a064:
    uVar16 = (ulong)*(uint *)(param_1 + 0xa2);
    uVar2 = *(uint *)(param_1 + 0xa2);
  }
  if (0 < (int)uVar2) {
    uVar9 = uVar16 & 3;
    if ((uint)uVar16 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        *(undefined1 *)(param_1[0xa3] + uVar11) = 0;
        *(undefined1 *)(param_1[0xa3] + uVar11 + 1) = 0;
        *(undefined1 *)(param_1[0xa3] + uVar11 + 2) = 0;
        lVar12 = param_1[0xa3] + uVar11;
        uVar11 = uVar11 + 4;
        *(undefined1 *)(lVar12 + 3) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar11);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)(param_1[0xa3] + uVar11) = 0;
      uVar11 = uVar11 + 1;
    }
  }
  if (bVar1) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar17);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0385a14c;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar17,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_0385a14c;
    *(uint *)(param_1 + 0xa4) = uVar15;
    param_1[0xa5] = (long)pvVar7;
  }
  else {
LAB_0385a14c:
    uVar15 = *(uint *)(param_1 + 0xa4);
    uVar17 = (ulong)uVar15;
  }
  if (0 < (int)uVar15) {
    uVar16 = uVar17 & 3;
    if ((uint)uVar17 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(param_1[0xa5] + uVar9) = 0;
        *(undefined1 *)(param_1[0xa5] + uVar9 + 1) = 0;
        *(undefined1 *)(param_1[0xa5] + uVar9 + 2) = 0;
        lVar12 = param_1[0xa5] + uVar9;
        uVar9 = uVar9 + 4;
        *(undefined1 *)(lVar12 + 3) = 0;
      } while ((uVar17 & 0xfffffffc) != uVar9);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)(param_1[0xa5] + uVar9) = 0;
      uVar9 = uVar9 + 1;
    }
  }
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    puVar8 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x20,8);
  }
  *puVar8 = &PTR_LAB_04b5f1a0;
  param_1[0x82] = (long)puVar8;
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    puVar8 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x20,8);
  }
  puVar8[2] = &LAB_0385b544;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b5f1c8;
  puVar8[1] = param_1;
  lVar12 = *(long *)puVar3;
  param_1[0x83] = (long)puVar8;
  if (lVar12 == 0) {
    puVar8 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x20,8);
  }
  puVar8[2] = &LAB_0385b588;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b5f218;
  puVar8[1] = param_1;
  param_1[0x84] = (long)puVar8;
  if (param_2 == 0) goto LAB_0385a83c;
  if (0 < *(int *)(param_2 + 8)) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      puVar8 = malloc(0x20);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar8 = (undefined8 *)(lVar12 + 8);
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)(lVar5 + 0xa8);
      }
      puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x20,8);
    }
    puVar8[2] = &LAB_0385aa40;
    puVar8[3] = 0;
    *puVar8 = &PTR_LAB_04b5ef48;
    puVar8[1] = param_1;
    lVar12 = *(long *)puVar3;
    param_1[0x85] = (long)puVar8;
    iVar10 = *(int *)(param_2 + 0x18);
    if (iVar10 < 3) {
      iVar10 = 2;
    }
    uVar16 = (ulong)(uint)(iVar10 * 0x23);
    if (lVar12 == 0) {
      puVar8 = malloc(uVar16 << 5);
joined_r0x0385a3f4:
      if (puVar8 != (undefined8 *)0x0) {
        uVar17 = uVar16 & 7;
        puVar14 = puVar8;
        if ((iVar10 * 0x23 & 7U) != 0) {
          puVar13 = puVar8;
          do {
            uVar17 = uVar17 - 1;
            puVar14 = puVar13 + 4;
            *puVar13 = &PTR_LAB_04b5ef98;
            puVar13 = puVar14;
          } while (uVar17 != 0);
        }
        if (6 < (uVar16 - 1 & 0x7ffffffffffffff)) {
          do {
            *puVar14 = &PTR_LAB_04b5ef98;
            puVar14[4] = &PTR_LAB_04b5ef98;
            puVar14[8] = &PTR_LAB_04b5ef98;
            puVar14[0xc] = &PTR_LAB_04b5ef98;
            puVar14[0x10] = &PTR_LAB_04b5ef98;
            puVar14[0x14] = &PTR_LAB_04b5ef98;
            puVar14[0x18] = &PTR_LAB_04b5ef98;
            puVar14[0x1c] = &PTR_LAB_04b5ef98;
            puVar14 = puVar14 + 0x20;
          } while (puVar14 != puVar8 + uVar16 * 4);
        }
        *(int *)(param_1 + 0x86) = iVar10;
        *(undefined4 *)((long)param_1 + 0x434) = 0x23;
        param_1[0x87] = (long)puVar8;
      }
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar16 << 5,8);
        goto joined_r0x0385a3f4;
      }
    }
    if (0 < *(int *)(param_2 + 8)) {
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        puVar8 = malloc(0x20);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        puVar8 = (undefined8 *)(lVar12 + 8);
        if (lVar5 != 0) {
          puVar8 = (undefined8 *)(lVar5 + 0xa8);
        }
        puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x20,8);
      }
      puVar8[2] = &LAB_0385b1c0;
      puVar8[3] = 0;
      *puVar8 = &PTR_LAB_04b5f060;
      puVar8[1] = param_1;
      lVar12 = *(long *)puVar3;
      param_1[0x88] = (long)puVar8;
      if (lVar12 == 0) {
        puVar8 = malloc(0x20);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0385a544;
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
      }
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_LAB_04b5f0b0;
        param_1[0x8a] = (long)puVar8;
        *(undefined4 *)(param_1 + 0x89) = 1;
      }
    }
  }
LAB_0385a544:
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (0 < *(int *)(param_2 + 0xc)) {
      iVar10 = *(int *)(param_2 + 0x1c);
      lVar12 = *(long *)puVar3;
      if (iVar10 < 3) {
        iVar10 = 2;
      }
      uVar16 = (ulong)(uint)(iVar10 * 5);
      if (lVar12 == 0) {
        puVar8 = malloc(uVar16 << 5);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0385a74c;
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar16 << 5,8);
      }
      if (puVar8 != (undefined8 *)0x0) {
        uVar17 = uVar16 & 7;
        puVar14 = puVar8;
        if ((iVar10 * 5 & 7U) != 0) {
          puVar13 = puVar8;
          do {
            uVar17 = uVar17 - 1;
            puVar14 = puVar13 + 4;
            *puVar13 = &PTR_LAB_04b5efc0;
            puVar13 = puVar14;
          } while (uVar17 != 0);
        }
        if (6 < (uVar16 - 1 & 0x7ffffffffffffff)) {
          do {
            *puVar14 = &PTR_LAB_04b5efc0;
            puVar14[4] = &PTR_LAB_04b5efc0;
            puVar14[8] = &PTR_LAB_04b5efc0;
            puVar14[0xc] = &PTR_LAB_04b5efc0;
            puVar14[0x10] = &PTR_LAB_04b5efc0;
            puVar14[0x14] = &PTR_LAB_04b5efc0;
            puVar14[0x18] = &PTR_LAB_04b5efc0;
            puVar14[0x1c] = &PTR_LAB_04b5efc0;
            puVar14 = puVar14 + 0x20;
          } while (puVar14 != puVar8 + uVar16 * 4);
        }
        *(int *)(param_1 + 0x8b) = iVar10;
        param_1[0x8c] = (long)puVar8;
        *(undefined4 *)((long)param_1 + 0x45c) = 5;
      }
    }
  }
  else if (0 < *(int *)(param_2 + 0xc)) {
    iVar10 = *(int *)(param_2 + 0x1c);
    lVar12 = *(long *)puVar3;
    if (iVar10 < 3) {
      iVar10 = 2;
    }
    uVar16 = (ulong)(uint)(iVar10 * 5);
    if (lVar12 == 0) {
      puVar8 = malloc(uVar16 << 5);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0385a74c;
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar16 << 5,8);
    }
    if (puVar8 != (undefined8 *)0x0) {
      uVar17 = uVar16 & 7;
      puVar14 = puVar8;
      if ((iVar10 * 5 & 7U) != 0) {
        puVar13 = puVar8;
        do {
          uVar17 = uVar17 - 1;
          puVar14 = puVar13 + 4;
          *puVar13 = &PTR_LAB_04b5f038;
          puVar13 = puVar14;
        } while (uVar17 != 0);
      }
      if (6 < (uVar16 - 1 & 0x7ffffffffffffff)) {
        do {
          *puVar14 = &PTR_LAB_04b5f038;
          puVar14[4] = &PTR_LAB_04b5f038;
          puVar14[8] = &PTR_LAB_04b5f038;
          puVar14[0xc] = &PTR_LAB_04b5f038;
          puVar14[0x10] = &PTR_LAB_04b5f038;
          puVar14[0x14] = &PTR_LAB_04b5f038;
          puVar14[0x18] = &PTR_LAB_04b5f038;
          puVar14[0x1c] = &PTR_LAB_04b5f038;
          puVar14 = puVar14 + 0x20;
        } while (puVar14 != puVar8 + uVar16 * 4);
      }
      *(int *)(param_1 + 0x8d) = iVar10;
      param_1[0x8e] = (long)puVar8;
      *(undefined4 *)((long)param_1 + 0x46c) = 5;
    }
  }
LAB_0385a74c:
  if (0 < *(int *)(param_2 + 0x10)) {
    uVar15 = *(uint *)(param_2 + 0x20);
    lVar12 = *(long *)puVar3;
    if ((int)uVar15 < 2) {
      uVar15 = 1;
    }
    uVar16 = (ulong)(uVar15 << 2);
    if (lVar12 == 0) {
      puVar8 = malloc(uVar16 << 5);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0385a83c;
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar16 << 5,8);
    }
    if (puVar8 != (undefined8 *)0x0) {
      puVar14 = puVar8;
      if ((uVar15 & 1) != 0) {
        uVar17 = uVar16 & 4;
        puVar13 = puVar8;
        do {
          uVar17 = uVar17 - 1;
          puVar14 = puVar13 + 4;
          *puVar13 = &PTR_LAB_04b5f128;
          puVar13 = puVar14;
        } while (uVar17 != 0);
      }
      if (6 < (uVar16 - 1 & 0x7ffffffffffffff)) {
        do {
          *puVar14 = &PTR_LAB_04b5f128;
          puVar14[4] = &PTR_LAB_04b5f128;
          puVar14[8] = &PTR_LAB_04b5f128;
          puVar14[0xc] = &PTR_LAB_04b5f128;
          puVar14[0x10] = &PTR_LAB_04b5f128;
          puVar14[0x14] = &PTR_LAB_04b5f128;
          puVar14[0x18] = &PTR_LAB_04b5f128;
          puVar14[0x1c] = &PTR_LAB_04b5f128;
          puVar14 = puVar14 + 0x20;
        } while (puVar14 != puVar8 + uVar16 * 4);
      }
      *(uint *)(param_1 + 0x8f) = uVar15;
      param_1[0x90] = (long)puVar8;
      *(undefined4 *)((long)param_1 + 0x47c) = 4;
    }
  }
LAB_0385a83c:
                    /* WARNING: Could not recover jumptable at 0x0385a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))(param_1,param_2);
  return;
}

