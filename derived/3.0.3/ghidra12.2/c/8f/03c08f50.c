
void FUN_03c08f50(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  void *pvVar11;
  long *plVar12;
  long lVar13;
  size_t __size;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  
  plVar15 = (long *)PTR_DAT_04bb3350;
  plVar12 = (long *)PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar13 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  puVar6[2] = &LAB_03c09480;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b7c9c0;
  puVar6[1] = param_1;
  *param_1 = puVar6;
  if (*(long **)PTR_DAT_04bb26c8 == (long *)0x0) {
    uVar16 = 1000;
    __size = 0x36b008;
    uVar4 = 1000;
    lVar13 = *plVar12;
    uVar3 = 1000;
    if (lVar13 != 0) goto LAB_03c0902c;
LAB_03c09084:
    uVar4 = uVar3;
    puVar8 = malloc(0x28);
  }
  else {
    uVar4 = (**(code **)(**(long **)PTR_DAT_04bb26c8 + 0x40))();
    if ((int)uVar4 < 1) {
      lVar13 = *plVar12;
      if (lVar13 == 0) {
        puVar9 = malloc(0x28);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
        plVar7 = (long *)(lVar13 + 8);
        if (lVar5 != 0) {
          plVar7 = (long *)(lVar5 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        puVar9 = (undefined4 *)0x0;
        if (plVar7 != (long *)0x0) {
          puVar9 = (undefined4 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
        }
      }
      *puVar9 = 0;
      lVar13 = *plVar12;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      param_1[1] = puVar9;
      puVar9[4] = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      if (lVar13 == 0) {
        puVar8 = malloc(0x28);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
        plVar12 = (long *)(lVar13 + 8);
        if (lVar5 != 0) {
          plVar12 = (long *)(lVar5 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          puVar8 = (uint *)0x0;
        }
        else {
          puVar8 = (uint *)(**(code **)(*plVar12 + 0x30))(plVar12,0x28,8);
        }
      }
      *puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      param_1[2] = puVar8;
      goto LAB_03c09430;
    }
    uVar16 = (ulong)uVar4;
    __size = (ulong)uVar4 * 0x1000 + uVar16 * -0x200 | 8;
    lVar13 = *plVar12;
    uVar3 = uVar4;
    if (lVar13 == 0) goto LAB_03c09084;
LAB_03c0902c:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = (uint *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
    }
  }
  *puVar8 = 0;
  iVar1 = uVar4 << 3;
  lVar13 = *plVar12;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  param_1[1] = puVar8;
  if (lVar13 == 0) {
    puVar10 = malloc(__size);
    if (puVar10 != (ulong *)0x0) goto LAB_03c09150;
LAB_03c091a4:
    lVar13 = *plVar12;
    if (lVar13 == 0) {
      pvVar11 = malloc((long)iVar1);
joined_r0x03c09200:
      if (pvVar11 != (void *)0x0) {
        bVar2 = true;
        *(void **)(puVar8 + 6) = pvVar11;
        puVar8[4] = 0;
        puVar8[5] = uVar4;
        goto LAB_03c09218;
      }
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar7 = (long *)(lVar13 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        pvVar11 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar1,8);
        goto joined_r0x03c09200;
      }
    }
    bVar2 = true;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if ((plVar7 == (long *)0x0) ||
       (puVar10 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8), puVar10 == (ulong *)0x0))
    goto LAB_03c091a4;
LAB_03c09150:
    puVar14 = puVar10 + 1;
    *puVar10 = uVar16;
    puVar10 = puVar14;
    do {
      FUN_00309f4c(puVar10);
      *(undefined4 *)((long)puVar10 + 0xdfc) = 0;
      memset(puVar10 + 0x17d,0,0x212);
      puVar10 = puVar10 + 0x1c0;
    } while (puVar10 != puVar14 + uVar16 * 0x1c0);
    *puVar8 = uVar4;
    *(ulong **)(puVar8 + 2) = puVar14;
    plVar15 = (long *)PTR_DAT_04bb3350;
    if (0 < (int)uVar4) goto LAB_03c091a4;
    bVar2 = false;
  }
LAB_03c09218:
  lVar13 = *plVar12;
  puVar8[4] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  if (lVar13 == 0) {
    puVar8 = malloc(0x28);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = (uint *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
    }
  }
  *puVar8 = 0;
  lVar13 = *plVar12;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  param_1[2] = puVar8;
  if (lVar13 == 0) {
    puVar10 = malloc(__size);
joined_r0x03c092e0:
    if (puVar10 != (ulong *)0x0) {
      puVar14 = puVar10 + 1;
      *puVar10 = uVar16;
      puVar10 = puVar14;
      do {
        FUN_00309f4c(puVar10);
        *(undefined4 *)((long)puVar10 + 0xdfc) = 0;
        memset(puVar10 + 0x17d,0,0x212);
        puVar10 = puVar10 + 0x1c0;
      } while (puVar10 != puVar14 + uVar16 * 0x1c0);
      *puVar8 = uVar4;
      *(ulong **)(puVar8 + 2) = puVar14;
      plVar12 = (long *)PTR_DAT_04bb2698;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      puVar10 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
      goto joined_r0x03c092e0;
    }
  }
  if (bVar2) {
    lVar13 = *plVar12;
    if (lVar13 == 0) {
      pvVar11 = malloc((long)iVar1);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar15 + 0x68));
      plVar12 = (long *)(lVar13 + 8);
      if (lVar5 != 0) {
        plVar12 = (long *)(lVar5 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_03c09430;
      pvVar11 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(long)iVar1,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(puVar8 + 6) = pvVar11;
      puVar8[4] = 0;
      puVar8[5] = uVar4;
    }
  }
LAB_03c09430:
  puVar8[4] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  lVar13 = param_1[1];
  *(undefined4 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  lVar13 = param_1[2];
  *(undefined4 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 1;
  return;
}

