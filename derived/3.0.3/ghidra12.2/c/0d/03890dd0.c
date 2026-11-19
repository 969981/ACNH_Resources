
void FUN_03890dd0(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 0xfe;
  *param_1 = &DAT_04b61420;
  uVar11 = (uint)param_2;
  uVar2 = uVar11 & 0xff;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  uVar19 = uVar2 << 1;
  uVar17 = (ulong)uVar19;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar5 = PTR_DAT_04bb2698;
  param_1[10] = 0;
  if ((param_2 & 0xff) != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc((ulong)(uVar2 << 4));
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03890ea4;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)(uVar2 << 4),8);
    }
    if (pvVar8 != (void *)0x0) {
      param_1[3] = pvVar8;
      *(undefined4 *)(param_1 + 2) = 0;
      *(uint *)((long)param_1 + 0x14) = uVar19;
    }
  }
LAB_03890ea4:
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar21 = 0;
    do {
      lVar20 = *(long *)puVar5;
      if (lVar20 == 0) {
        pvVar8 = malloc(0x28);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar10 = (undefined8 *)(lVar20 + 8);
        if (lVar6 != 0) {
          puVar10 = (undefined8 *)(lVar6 + 0xa8);
        }
        pvVar8 = (void *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x28,8);
      }
      FUN_01c86164(pvVar8,0,0x430);
      iVar12 = *(int *)((long)param_1 + 0x14);
      if (*(int *)(param_1 + 2) < iVar12) {
        *(void **)(param_1[3] + (long)*(int *)(param_1 + 2) * 8) = pvVar8;
        iVar12 = *(int *)((long)param_1 + 0x14);
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar12);
  }
  if ((param_2 & 0xff) == 0) {
LAB_03890fd4:
    uVar16 = (ulong)*(uint *)(param_1 + 7);
    if (0 < (int)*(uint *)(param_1 + 7)) goto LAB_03890fe0;
  }
  else {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc(uVar17);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03890fd4;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar17,8);
    }
    if (pvVar8 == (void *)0x0) goto LAB_03890fd4;
    *(uint *)(param_1 + 7) = uVar19;
    param_1[8] = pvVar8;
    uVar16 = uVar17;
LAB_03890fe0:
    uVar13 = uVar16 & 3;
    if (uVar16 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        *(undefined1 *)(param_1[8] + uVar15) = 0;
        *(undefined1 *)(param_1[8] + uVar15 + 1) = 0;
        *(undefined1 *)(param_1[8] + uVar15 + 2) = 0;
        lVar20 = param_1[8] + uVar15;
        uVar15 = uVar15 + 4;
        *(undefined1 *)(lVar20 + 3) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar15);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)(param_1[8] + uVar15) = 0;
      uVar15 = uVar15 + 1;
    }
  }
  if ((param_2 & 0xff) != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc(uVar17 << 3);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_038910f0;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar17 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      lVar20 = 0;
      do {
        uVar9 = nn::os::GetSystemTick();
        *(undefined8 *)((long)pvVar8 + lVar20) = uVar9;
        lVar20 = lVar20 + 8;
      } while ((param_2 & 0xff) * 0x10 != lVar20);
      *(uint *)(param_1 + 9) = uVar19;
      param_1[10] = pvVar8;
    }
  }
LAB_038910f0:
  *(undefined4 *)(param_1 + 0x91) = 0;
  *param_1 = &PTR_FUN_04b612b0;
  lVar20 = *(long *)puVar5;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar19 = (uVar11 & 0xff) * 2 - 1;
  param_1[0x92] = 0;
  sVar18 = ((ulong)uVar19 & 0xffff) << 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  *(short *)(param_1 + 0xa7) = (short)uVar19;
  *(undefined2 *)((long)param_1 + 0x53a) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(char *)(param_1 + 0xb4) = (char)param_3;
  if (lVar20 == 0) {
    pvVar8 = malloc(sVar18);
joined_r0x038911f4:
    if (pvVar8 != (void *)0x0) {
      param_1[0x92] = pvVar8;
      *(uint *)(param_1 + 0x91) = uVar19 & 0xffff;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar20 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
      goto joined_r0x038911f4;
    }
  }
  uVar4 = *(ushort *)(param_1 + 0xa7);
  if (uVar4 == 0) {
LAB_038912c4:
    uVar17 = (ulong)*(uint *)(param_1 + 0x95);
    if (0 < (int)*(uint *)(param_1 + 0x95)) {
LAB_038912d0:
      uVar19 = 0;
      do {
        uVar3 = uVar19;
        if ((uint)uVar17 <= uVar19) {
          uVar3 = 0;
        }
        FUN_03891720(param_1[0x96] + (ulong)uVar3 * 0x70,*(undefined2 *)(param_1 + 0xa7),param_3);
        uVar17 = (ulong)*(uint *)(param_1 + 0x95);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)*(uint *)(param_1 + 0x95));
    }
  }
  else {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc((ulong)uVar4 << 3);
joined_r0x038913e4:
      if (pvVar8 != (void *)0x0) {
        *(uint *)(param_1 + 0x93) = (uint)uVar4;
        param_1[0x94] = pvVar8;
      }
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar4 << 3,8);
        goto joined_r0x038913e4;
      }
    }
    uVar4 = *(ushort *)(param_1 + 0xa7);
    uVar17 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_038912c4;
    lVar20 = *(long *)puVar5;
    sVar18 = uVar17 * 0x80 + (ulong)(uint)uVar4 * -0x10;
    if (lVar20 == 0) {
      puVar10 = malloc(sVar18);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_038912c4;
      puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
    }
    if (puVar10 == (undefined8 *)0x0) goto LAB_038912c4;
    uVar16 = uVar17 * 0x70 - 0x70;
    puVar14 = puVar10;
    if ((uVar16 / 0x70 & 1) == 0) {
      puVar14 = puVar10 + 0xe;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(undefined4 *)(puVar10 + 6) = 0;
      puVar10[7] = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      puVar10[9] = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      puVar10[0xc] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
    }
    if (0x6f < uVar16) {
      do {
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined4 *)(puVar14 + 6) = 0;
        puVar14[7] = 0;
        *(undefined4 *)(puVar14 + 8) = 0;
        puVar14[9] = 0;
        *(undefined4 *)(puVar14 + 0xb) = 0;
        puVar14[0xc] = 0;
        *(undefined4 *)(puVar14 + 0x14) = 0;
        puVar14[0x15] = 0;
        *(undefined4 *)(puVar14 + 0x16) = 0;
        puVar14[0x17] = 0;
        *(undefined4 *)(puVar14 + 0x19) = 0;
        puVar14[0x1a] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14 = puVar14 + 0x1c;
      } while (puVar14 != puVar10 + uVar17 * 0xe);
    }
    *(uint *)(param_1 + 0x95) = (uint)uVar4;
    param_1[0x96] = puVar10;
    if (uVar4 != 0) goto LAB_038912d0;
  }
  FUN_03891720(param_1 + 0x99,*(undefined2 *)(param_1 + 0xa7),param_3);
  if ((param_2 & 0xff) != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc(param_2 & 0xff);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0389137c;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,param_2 & 0xff,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(uint *)(param_1 + 0x97) = uVar2;
      param_1[0x98] = pvVar8;
    }
  }
LAB_0389137c:
  uVar4 = *(ushort *)(param_1 + 0xa7);
  uVar17 = (ulong)uVar4;
  if (uVar4 != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar8 = malloc(uVar17 * 0x28);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar20 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03891548;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar17 * 0x28,8);
    }
    if (pvVar8 != (void *)0x0) {
      uVar16 = uVar17 - 1;
      param_1[0xaa] = pvVar8;
      if (1 < uVar4) {
        if ((int)uVar16 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          plVar7 = (long *)((long)pvVar8 + 0x20);
          do {
            uVar13 = uVar13 + 2;
            plVar7[-4] = (long)plVar7;
            *plVar7 = (long)(plVar7 + 4);
            plVar7 = plVar7 + 8;
          } while ((uVar16 & 0xfffffffe) != uVar13);
        }
        if ((uVar16 & 1) != 0) {
          plVar7 = (long *)((long)pvVar8 + uVar13 * 0x20);
          *plVar7 = (long)(plVar7 + 4);
        }
      }
      *(undefined8 *)((long)pvVar8 + uVar16 * 0x20) = 0;
      pvVar1 = (void *)((long)pvVar8 + uVar17 * 0x20);
      param_1[0xab] = pvVar8;
      if (pvVar1 != (void *)0x0) {
        param_1[0xa9] = pvVar1;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(uint *)((long)param_1 + 0x544) = (uint)uVar4;
      }
    }
  }
LAB_03891548:
  if ((param_2 & 0xff) == 0) {
    return;
  }
  lVar20 = *(long *)puVar5;
  uVar17 = param_2 & 0xff;
  sVar18 = (uVar17 + (param_2 & 0xff) * 2) * 8;
  if (lVar20 == 0) {
    pvVar8 = malloc(sVar18);
joined_r0x038915d8:
    if (pvVar8 != (void *)0x0) {
      uVar19 = uVar2 - 1;
      param_1[0xaf] = pvVar8;
      if (1 < (uVar11 & 0xff)) {
        if (uVar19 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          plVar7 = (long *)((long)pvVar8 + 0x10);
          do {
            uVar16 = uVar16 + 2;
            plVar7[-2] = (long)plVar7;
            *plVar7 = (long)(plVar7 + 2);
            plVar7 = plVar7 + 4;
          } while (((ulong)uVar19 & 0xfffffffe) != uVar16);
        }
        if ((uVar19 & 1) != 0) {
          plVar7 = (long *)((long)pvVar8 + uVar16 * 0x10);
          *plVar7 = (long)(plVar7 + 2);
        }
      }
      sVar18 = uVar17 * 0x10;
      *(undefined8 *)((long)pvVar8 + (long)(int)(uVar19 * 2) * 8) = 0;
      param_1[0xb0] = pvVar8;
      if ((void *)(sVar18 + (long)pvVar8) != (void *)0x0) {
        param_1[0xae] = (void *)(sVar18 + (long)pvVar8);
        *(undefined4 *)(param_1 + 0xad) = 0;
        *(uint *)((long)param_1 + 0x56c) = uVar2;
      }
      goto LAB_0389163c;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar20 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
      goto joined_r0x038915d8;
    }
  }
  sVar18 = uVar17 << 4;
LAB_0389163c:
  lVar20 = *(long *)puVar5;
  if (lVar20 == 0) {
    puVar10 = malloc(sVar18);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar20 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
  }
  if (puVar10 != (undefined8 *)0x0) {
    param_2 = param_2 & 3;
    puVar14 = puVar10;
    if (param_2 != 0) {
      do {
        *puVar14 = 0;
        param_2 = param_2 - 1;
        *(undefined2 *)(puVar14 + 1) = 0;
        puVar14 = puVar14 + 2;
      } while (param_2 != 0);
    }
    if (2 < (uVar17 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar14 = 0;
        *(undefined2 *)(puVar14 + 1) = 0;
        puVar14[2] = 0;
        *(undefined2 *)(puVar14 + 3) = 0;
        puVar14[4] = 0;
        *(undefined2 *)(puVar14 + 5) = 0;
        puVar14[6] = 0;
        *(undefined2 *)(puVar14 + 7) = 0;
        puVar14 = puVar14 + 8;
      } while (puVar14 != puVar10 + uVar17 * 2);
    }
    *(uint *)(param_1 + 0xb2) = uVar2;
    param_1[0xb3] = puVar10;
  }
  return;
}

