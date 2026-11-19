
void FUN_03932c40(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t __size;
  float *pfVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  bool bVar12;
  short sVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong *puVar34;
  long *plVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined8 local_98;
  byte *local_90;
  long lStack_88;
  
  iVar22 = (int)param_2;
  FUN_0393d8a0(param_1,param_2,iVar22 < 2,param_3);
  uVar25 = *(uint *)(param_1 + 0xc);
  if ((int)uVar25 < 1) {
LAB_03932e44:
    uVar25 = *(uint *)(param_1 + 0x5b8);
    puVar34 = *(ulong **)(param_1 + 0x5c0);
  }
  else {
    uVar33 = (ulong)uVar25 * 0x6a0 | 8;
    lVar31 = *(long *)PTR_DAT_04bb2698;
    if (lVar31 == 0) {
      puVar17 = malloc(uVar33);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar31 + 8);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03932e44;
      }
      puVar17 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,uVar33,8);
    }
    if (puVar17 == (ulong *)0x0) goto LAB_03932e44;
    puVar34 = puVar17 + 1;
    *puVar17 = (ulong)uVar25;
    puVar1 = PTR_DAT_04bd1178 + 0x10;
    puVar2 = PTR_DAT_04bd1198 + 0x10;
    puVar17 = puVar34;
    do {
      FUN_0390cee0(puVar17);
      FUN_0390cee0(puVar17 + 0x1c);
      puVar17[0x40] = 0;
      *(undefined4 *)(puVar17 + 0x50) = 0xffffffff;
      puVar17[0x41] = 0;
      puVar17[0x42] = 0;
      puVar17[0x43] = 0;
      puVar17[0x44] = 0;
      puVar17[0x46] = 0;
      puVar17[0x47] = 0;
      puVar17[0x48] = 0;
      puVar17[0x49] = 0;
      puVar17[0x4a] = 0;
      puVar17[0x4b] = 0;
      puVar17[0x4c] = 0;
      puVar17[0x4d] = 0;
      puVar17[0x4e] = 0;
      puVar17[0x4f] = 0;
      puVar17[0x57] = 0;
      puVar17[0x56] = 0;
      puVar17[0x55] = 0;
      puVar17[0x54] = 0;
      puVar17[0x53] = 0;
      puVar17[0x52] = 0;
      puVar17[0x51] = 0;
      puVar17[0x58] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar17 + 0x59) = 0x10000;
      puVar17[0x3a] = 0;
      puVar17[0x3b] = (ulong)&DAT_3f8000003f800000;
      puVar17[0x38] = (ulong)puVar1;
      puVar17[0x39] = (ulong)&DAT_3f8000003f800000;
      puVar17[0x3c] = 0;
      puVar17[0x3d] = 0;
      puVar17[0x3e] = 0;
      puVar17[0x3f] = 0;
      *(undefined4 *)(puVar17 + 0x5c) = 0xff;
      *(undefined4 *)((long)puVar17 + 0x2e4) = 0;
      puVar17[0x45] = (ulong)puVar2;
      puVar17[0x5d] = 0x80000000000;
      puVar17[0x60] = 0;
      puVar17[0x5f] = 0;
      puVar17[0x5e] = 0;
      FUN_0390cee0(puVar17 + 0x62);
      FUN_0390cee0(puVar17 + 0x7f);
      FUN_0390cee0(puVar17 + 0x9c);
      FUN_0390cee0(puVar17 + 0xb8);
      puVar17 = puVar17 + 0xd4;
    } while (puVar17 != puVar34 + (ulong)uVar25 * 0xd4);
    *(uint *)(param_1 + 0x5b8) = uVar25;
    *(ulong **)(param_1 + 0x5c0) = puVar34;
  }
  if (uVar25 != 0) {
    uVar24 = 0;
    do {
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0xd4);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0xc4) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0xc6) = 0;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x1b4);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x1a4) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x1a6) = 0;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x3e4);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x3d4) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x3d6) = 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x4cc);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x4bc) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x4be) = 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x5b4);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x5a4) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x5a6) = 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar3 = (uint *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x694);
      *(undefined2 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x684) = 0x101;
      *(undefined1 *)((long)puVar34 + (long)(int)uVar24 * 0x6a0 + 0x686) = 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar26 = uVar24 + 1;
      puVar34[(long)(int)uVar24 * 0xd4 + 0x61] = 0;
      puVar34[(long)(int)uVar24 * 0xd4 + 0x7e] = 0;
      puVar34[(long)(int)uVar24 * 0xd4 + 0x9b] = 0;
      uVar24 = uVar26;
    } while (uVar25 != uVar26);
  }
  if (1 < iVar22) {
    uVar25 = *(int *)(param_1 + 0x10) - 1;
    uVar33 = (ulong)uVar25;
    if (uVar25 != 0 && 0 < *(int *)(param_1 + 0x10)) {
      __size = uVar33 * 0x588 + 8;
      lVar31 = *(long *)PTR_DAT_04bb2698;
      if (lVar31 == 0) {
        puVar17 = malloc(__size);
      }
      else {
        plVar16 = param_3;
        if (param_3 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar31 + 8);
          if (lVar15 != 0) {
            plVar16 = (long *)(lVar15 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_0393300c;
        }
        puVar17 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,8);
      }
      if (puVar17 != (ulong *)0x0) {
        lVar31 = uVar33 * 0x588;
        *puVar17 = uVar33;
        puVar34 = puVar17 + 1;
        do {
          FUN_03930958(puVar34);
          puVar34 = puVar34 + 0xb1;
          lVar31 = lVar31 + -0x588;
        } while (lVar31 != 0);
        *(uint *)(param_1 + 0x5d8) = uVar25;
        *(ulong **)(param_1 + 0x5e0) = puVar17 + 1;
      }
    }
  }
LAB_0393300c:
  uVar25 = *(uint *)(param_1 + 0x10);
  if ((int)uVar25 < 1) goto LAB_03933138;
  lVar31 = *(long *)PTR_DAT_04bb2698;
  if (lVar31 == 0) {
    pvVar18 = malloc((ulong)uVar25 << 3);
joined_r0x0393409c:
    if (pvVar18 != (void *)0x0) {
      *(uint *)(param_1 + 0x5c8) = uVar25;
      *(void **)(param_1 + 0x5d0) = pvVar18;
    }
  }
  else {
    plVar16 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03933068:
      pvVar18 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,(ulong)uVar25 << 3,8);
      goto joined_r0x0393409c;
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar16 = (long *)(lVar31 + 8);
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 0xa8);
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) goto LAB_03933068;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    **(long **)(param_1 + 0x5d0) = param_1 + 0x30;
    FUN_03930c74(**(undefined8 **)(param_1 + 0x5d0),*(undefined8 *)(param_1 + 0x28));
    if (1 < *(int *)(param_1 + 0x10)) {
      uVar25 = 1;
      do {
        uVar24 = uVar25 - 1;
        if (*(uint *)(param_1 + 0x5d8) <= uVar24) {
          uVar24 = 0;
        }
        uVar26 = uVar25;
        if (*(uint *)(param_1 + 0x5c8) <= uVar25) {
          uVar26 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x5d0) + (ulong)uVar26 * 8) =
             *(long *)(param_1 + 0x5e0) + (long)(int)uVar24 * 0x588;
        uVar24 = uVar25;
        if (*(uint *)(param_1 + 0x20) <= uVar25) {
          uVar24 = 0;
        }
        uVar26 = uVar25;
        if (*(uint *)(param_1 + 0x5c8) <= uVar25) {
          uVar26 = 0;
        }
        FUN_03930c74(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + (ulong)uVar26 * 8),
                     *(long *)(param_1 + 0x28) + (ulong)uVar24 * 0x30);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < *(int *)(param_1 + 0x10));
    }
  }
LAB_03933138:
  lVar15 = *(long *)(param_1 + 0x28);
  uVar43 = crc32b(0xffffffff,0x65,0x4c11db7);
  *(undefined8 *)(param_1 + 0x12c8) = 0;
  uVar43 = crc32b(uVar43,0x6e,0x4c11db7);
  uVar43 = crc32b(uVar43,0x61,0x4c11db7);
  uVar43 = crc32b(uVar43,0x62,0x4c11db7);
  uVar43 = crc32b(uVar43,0x6c,0x4c11db7);
  uVar25 = crc32b(uVar43,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x12c0) = ~uVar25;
  lVar31 = 0;
  if (lVar15 != 0) {
    plVar16 = (long *)(lVar15 + 8);
    if (*(long *)(lVar15 + 0x10) != 0) {
      plVar16 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
    }
    *plVar16 = param_1 + 0x12b8;
    *(long *)(lVar15 + 0x10) = param_1 + 0x12b8;
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    lVar31 = *(long *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined1 *)(param_1 + 0x12d0) = 1;
  uVar43 = crc32b(0xffffffff,100,0x4c11db7);
  uVar43 = crc32b(uVar43,0x6f,0x4c11db7);
  uVar43 = crc32b(uVar43,0x66,0x4c11db7);
  uVar43 = crc32b(uVar43,0x74,0x4c11db7);
  uVar43 = crc32b(uVar43,0x79,0x4c11db7);
  uVar43 = crc32b(uVar43,0x70,0x4c11db7);
  uVar25 = crc32b(uVar43,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x7c0) = ~uVar25;
  if (lVar31 == 0) {
    uVar23 = 0;
  }
  else {
    plVar16 = (long *)(lVar31 + 8);
    if (*(long *)(lVar31 + 0x10) != 0) {
      plVar16 = (long *)(*(long *)(lVar31 + 0x10) + 0x10);
    }
    *plVar16 = param_1 + 0x7b8;
    *(long *)(lVar31 + 0x10) = param_1 + 0x7b8;
    *(int *)(lVar31 + 0x18) = *(int *)(lVar31 + 0x18) + 1;
    uVar23 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  FUN_03939c24(param_1 + 0x1458,iVar22,uVar23,param_3);
  lVar31 = *(long *)(param_1 + 0x28);
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = &DAT_040e6ad3;
  uVar23 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar23 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_98);
  }
  *(undefined8 *)(lVar31 + 0x28) = uVar23;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar25 = (uint)*local_90;
  if (*local_90 != 0) {
    uVar24 = 0xffffffff;
    pbVar30 = local_90;
    do {
      pbVar30 = pbVar30 + 1;
      uVar24 = crc32b(uVar24,uVar25,0x4c11db7);
      uVar25 = (uint)*pbVar30;
    } while (uVar25 != 0);
    uVar25 = ~uVar24;
  }
  *(uint *)(lVar31 + 0x1c) = uVar25;
  plVar16 = (long *)(param_1 + 0x5f0);
  if (*(long *)(param_1 + 0x5f8) != 0) {
    plVar16 = (long *)(*(long *)(param_1 + 0x5f8) + 0x20);
  }
  *plVar16 = lVar31;
  *(long *)(param_1 + 0x5f8) = lVar31;
  FUN_039340a4(param_1 + 0x30);
  fVar42 = *(float *)(param_1 + 0x350);
  fVar37 = sinf(fVar42);
  fVar42 = cosf(fVar42);
  *(undefined4 *)(param_1 + 0x59c) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  fVar38 = fVar42 * *(float *)(param_1 + 0x330);
  fVar41 = fVar37 * *(float *)(param_1 + 0x330);
  *(float *)(param_1 + 0x590) = fVar38;
  *(float *)(param_1 + 0x5a0) = fVar41;
  fVar39 = (fVar42 * 0.0 - fVar37) * *(float *)(param_1 + 0x334);
  fVar40 = (fVar42 + fVar37 * 0.0) * *(float *)(param_1 + 0x334);
  *(float *)(param_1 + 0x594) = fVar39;
  *(float *)(param_1 + 0x5a4) = fVar40;
  *(float *)(param_1 + 0x598) =
       fVar39 * *(float *)(param_1 + 0x314) + *(float *)(param_1 + 0x310) * fVar38 +
       (fVar37 * 0.0 + fVar42 * 0.0) * 0.0 * 0.0 + 0.0;
  *(float *)(param_1 + 0x5a8) =
       fVar40 * *(float *)(param_1 + 0x314) + *(float *)(param_1 + 0x310) * fVar41 +
       (fVar42 * -0.0 + fVar37 * 0.0) * 0.0 * 0.0 + 0.0;
  FUN_0393da40(param_1,0);
  lVar15 = 0;
  lVar31 = param_1 + 0xb10;
  uVar23 = extraout_x1;
  bVar9 = true;
  do {
    bVar12 = bVar9;
    uVar25 = (&DAT_04101690)[lVar15];
    plVar16 = param_3;
    if (param_3 == (long *)0x0) {
      lVar32 = *(long *)PTR_DAT_04bb2698;
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar23,0);
      plVar16 = (long *)(lVar32 + 8);
      if (lVar19 != 0) {
        plVar16 = (long *)(lVar19 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
    }
    lVar19 = lVar31 + lVar15 * 0x3d0;
    *(undefined8 *)(lVar19 + 0x30) = 0;
    *(undefined8 *)(lVar19 + 0x20) = 0;
    *(undefined8 *)(lVar19 + 0x10) = 0;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    *(undefined2 *)(lVar19 + 0x2a) = 0;
    *(byte *)(lVar19 + 0x28) = *(byte *)(lVar19 + 0x28) & 0xfe;
    plVar35 = (long *)(lVar19 + 8);
    *plVar35 = 0;
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar19,plVar16,(long)(int)uVar25 << 6,8,0);
    *(undefined2 *)(lVar19 + 0x2a) = 0;
    if (bVar12) {
      fVar37 = (float)(int)uVar25;
      lVar32 = 0;
      uVar33 = 0;
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        fVar38 = ((float)(int)uVar33 * 6.2831855) / fVar37;
        fVar42 = cosf(fVar38);
        fVar38 = sinf(fVar38);
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar28 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar28 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        pfVar4 = (float *)(lVar20 + lVar28 + lVar32);
        *pfVar4 = fVar42;
        pfVar4[1] = fVar38;
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar28 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar28 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        lVar28 = lVar28 + lVar32;
        uVar33 = uVar33 + 1;
        lVar32 = lVar32 + 0x10;
        *(undefined8 *)(lVar20 + lVar28 + 8) = 0x3f800000;
      } while (uVar25 != uVar33);
      uVar24 = 0;
      lVar32 = (ulong)uVar25 << 4;
      uVar27 = uVar25 + 2;
      uVar26 = uVar25;
      do {
        uVar29 = uVar27;
        uVar26 = uVar26 + 1;
        fVar38 = ((float)(int)uVar24 * 6.2831855) / fVar37;
        fVar42 = cosf(fVar38);
        fVar38 = sinf(fVar38);
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar28 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar28 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        pfVar4 = (float *)(lVar20 + lVar28 + lVar32);
        *pfVar4 = fVar42;
        pfVar4[1] = fVar38;
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar28 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar28 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        uVar24 = uVar24 + 1;
        *(undefined1 **)(lVar20 + lVar28 + lVar32 + 8) = &DAT_3f8000003f800000;
        lVar32 = lVar32 + 0x10;
        uVar27 = uVar29 + 1;
      } while (uVar25 != uVar24);
      uVar24 = 0;
      uVar33 = -(ulong)(uVar26 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar26 << 4;
      do {
        uVar26 = uVar29;
        fVar38 = ((float)(int)uVar24 * 6.2831855) / fVar37;
        fVar42 = cosf(fVar38);
        fVar38 = sinf(fVar38);
        lVar28 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar32 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar32 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        pfVar4 = (float *)(lVar28 + lVar32 + uVar33);
        *pfVar4 = fVar42;
        pfVar4[1] = fVar38;
        lVar28 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar32 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar32 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        uVar24 = uVar24 + 1;
        *(undefined8 *)(lVar28 + lVar32 + uVar33 + 8) = 0x4000000000000000;
        uVar33 = uVar33 + 0x10;
        uVar29 = uVar26 + 1;
      } while (uVar25 != uVar24);
      uVar33 = -(ulong)(uVar26 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar26 << 4;
      uVar24 = 0;
      do {
        fVar38 = ((float)(int)uVar24 * 6.2831855) / fVar37;
        fVar42 = cosf(fVar38);
        fVar38 = sinf(fVar38);
        lVar28 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar32 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar32 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        pfVar4 = (float *)(lVar28 + lVar32 + uVar33);
        *pfVar4 = fVar42;
        pfVar4[1] = fVar38;
        lVar28 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar32 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar32 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        uVar24 = uVar24 + 1;
        *(undefined8 *)(lVar28 + lVar32 + uVar33 + 8) = 0x4040000000000000;
        uVar33 = uVar33 + 0x10;
      } while (uVar25 != uVar24);
    }
    else {
      lVar32 = 0;
      lVar28 = -0x100;
      do {
        lVar21 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar20 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar20 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        *(undefined8 *)(lVar21 + lVar20 + lVar28 + 0x100) = 0x3f800000bf800000;
        uVar43 = (&DAT_04102350)[lVar32];
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar21 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar21 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        fVar37 = (float)(int)lVar32;
        lVar20 = lVar20 + lVar21 + lVar28;
        *(undefined4 *)(lVar20 + 0x108) = uVar43;
        *(float *)(lVar20 + 0x10c) = fVar37;
        lVar21 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar20 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar20 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        *(undefined8 *)(lVar21 + lVar20 + lVar28 + 0x110) = 0xbf800000bf800000;
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar21 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar21 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        lVar20 = lVar20 + lVar21 + lVar28;
        *(undefined4 *)(lVar20 + 0x118) = uVar43;
        *(float *)(lVar20 + 0x11c) = fVar37;
        lVar21 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar20 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar20 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        *(undefined8 *)(lVar21 + lVar20 + lVar28 + 0x120) = 0xbf8000003f800000;
        lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar21 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar21 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        lVar20 = lVar20 + lVar21 + lVar28;
        *(undefined4 *)(lVar20 + 0x128) = uVar43;
        *(float *)(lVar20 + 300) = fVar37;
        lVar21 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar20 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar20 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        *(undefined1 **)(lVar21 + lVar20 + lVar28 + 0x130) = &DAT_3f8000003f800000;
        lVar21 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar19 + 0x18));
        lVar20 = 0;
        if (*(long *)(lVar19 + 0x20) != 0) {
          lVar20 = *plVar35 - *(long *)(*(long *)(lVar19 + 0x20) + 0x10);
        }
        lVar20 = lVar20 + lVar28;
        lVar32 = lVar32 + 1;
        lVar28 = lVar28 + 0x40;
        lVar21 = lVar21 + lVar20;
        *(undefined4 *)(lVar21 + 0x138) = uVar43;
        *(float *)(lVar21 + 0x13c) = fVar37;
      } while (lVar28 != 0);
    }
    local_90 = *(byte **)(lVar19 + 0x18);
    iVar22 = 0;
    if (*(long *)(lVar19 + 0x20) != 0) {
      iVar22 = *(int *)plVar35 - *(int *)(*(long *)(lVar19 + 0x20) + 0x10);
    }
    uVar43 = 0;
    if (local_90 != (byte *)0x0) {
      uVar43 = *(undefined4 *)(local_90 + 0x104);
    }
    local_98 = (undefined *)CONCAT44(uVar43,iVar22);
    lVar32 = lVar31 + lVar15 * 0x3d0 + 0x70;
    lStack_88 = lVar19;
    FUN_0390ebc0(lVar32,&local_98,0x10,*(undefined4 *)(lVar19 + 0x10));
    lVar19 = lVar31 + lVar15 * 0x3d0;
    *(undefined8 *)(lVar19 + 0xa8) = 0x16;
    lVar15 = lVar19 + 400;
    *(undefined2 *)(lVar19 + 0xb0) = 1;
    *(undefined2 *)(lVar19 + 0xbc) = 1;
    *(undefined8 *)(lVar19 + 0xb4) = 0x800000016;
    FUN_0390e390(lVar15,1,param_3);
    FUN_0390e4c0(lVar15,0,lVar32,0);
    FUN_0390e4c0(lVar15,1,lVar32,1);
    FUN_0390e640(lVar15);
    lVar15 = 1;
    uVar23 = extraout_x1_00;
    bVar9 = false;
  } while (bVar12);
  lVar15 = 0;
  bVar9 = true;
  do {
    bVar12 = bVar9;
    iVar22 = (&DAT_04101690)[lVar15];
    plVar16 = param_3;
    if (param_3 == (long *)0x0) {
      lVar32 = *(long *)PTR_DAT_04bb2698;
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar23,0);
      plVar16 = (long *)(lVar32 + 8);
      if (lVar19 != 0) {
        plVar16 = (long *)(lVar19 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
    }
    lVar32 = lVar31 + lVar15 * 0x3d0;
    *(undefined8 *)(lVar32 + 0x68) = 0;
    *(undefined8 *)(lVar32 + 0x58) = 0;
    *(undefined8 *)(lVar32 + 0x48) = 0;
    *(undefined8 *)(lVar32 + 0x50) = 0;
    *(undefined2 *)(lVar32 + 0x62) = 0;
    *(byte *)(lVar32 + 0x60) = *(byte *)(lVar32 + 0x60) & 0xfe;
    plVar35 = (long *)(lVar32 + 0x40);
    *plVar35 = 0;
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar32 + 0x38,plVar16,
                 -(ulong)((iVar22 * 9 & 0x7fffffffU) >> 0x1e) & 0xfffffffe00000000 |
                 (ulong)(uint)(iVar22 * 0x12) << 1,4,0);
    lVar19 = 0;
    *(undefined2 *)(lVar32 + 0x62) = 0;
    iVar5 = iVar22;
    if (iVar22 < 2) {
      iVar5 = 1;
    }
    iVar36 = 0;
    uVar25 = 6;
    uVar24 = 0xc;
    do {
      uVar26 = uVar24;
      uVar27 = uVar25;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      sVar7 = (short)iVar36;
      *(short *)(lVar20 + lVar28 + lVar19) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      iVar36 = iVar36 + 1;
      sVar6 = 0;
      if (iVar22 != 0) {
        sVar6 = (short)(iVar36 / iVar22);
      }
      sVar14 = (short)iVar22;
      sVar13 = (short)iVar36 - sVar6 * sVar14;
      sVar6 = sVar13 + sVar14;
      *(short *)(lVar20 + lVar28 + lVar19 + 2) = sVar6;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + 4) = sVar13;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + 6) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + 8) = sVar14 + sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + 10) = sVar6;
      lVar19 = lVar19 + 0xc;
      uVar25 = uVar27 + 6;
      uVar24 = uVar26 + 6;
    } while (iVar36 != iVar5);
    iVar36 = 0;
    lVar19 = (-(ulong)(uVar27 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar27 << 1) + 10;
    do {
      uVar25 = uVar26;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      sVar6 = (short)iVar36;
      sVar7 = sVar14 + sVar6;
      *(short *)(lVar20 + lVar28 + lVar19 + -10) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      iVar36 = iVar36 + 1;
      sVar13 = 0;
      if (iVar22 != 0) {
        sVar13 = (short)(iVar36 / iVar22);
      }
      sVar10 = (short)iVar36 - sVar13 * sVar14;
      sVar11 = (short)(iVar22 << 1);
      sVar13 = sVar10 + sVar11;
      *(short *)(lVar20 + lVar28 + lVar19 + -8) = sVar13;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -6) = sVar10 + sVar14;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -4) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -2) = sVar11 + sVar6;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19) = sVar13;
      lVar19 = lVar19 + 0xc;
      uVar26 = uVar25 + 6;
    } while (iVar5 != iVar36);
    iVar36 = 0;
    lVar19 = (-(ulong)(uVar25 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar25 << 1) + 10;
    do {
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      sVar6 = (short)iVar36;
      sVar7 = sVar11 + sVar6;
      *(short *)(lVar20 + lVar28 + lVar19 + -10) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      iVar36 = iVar36 + 1;
      sVar13 = 0;
      if (iVar22 != 0) {
        sVar13 = (short)(iVar36 / iVar22);
      }
      sVar10 = (short)iVar36 - sVar13 * sVar14;
      sVar13 = sVar10 + sVar14 * 3;
      *(short *)(lVar20 + lVar28 + lVar19 + -8) = sVar13;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -6) = sVar10 + sVar11;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -4) = sVar7;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19 + -2) = sVar14 * 3 + sVar6;
      lVar20 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar32 + 0x50));
      lVar28 = 0;
      if (*(long *)(lVar32 + 0x58) != 0) {
        lVar28 = *plVar35 - *(long *)(*(long *)(lVar32 + 0x58) + 0x10);
      }
      *(short *)(lVar20 + lVar28 + lVar19) = sVar13;
      lVar19 = lVar19 + 0xc;
    } while (iVar5 != iVar36);
    local_90 = *(byte **)(lVar32 + 0x50);
    iVar22 = 0;
    if (*(long *)(lVar32 + 0x58) != 0) {
      iVar22 = *(int *)plVar35 - *(int *)(*(long *)(lVar32 + 0x58) + 0x10);
    }
    if (local_90 == (byte *)0x0) {
      uVar43 = 0;
    }
    else {
      uVar43 = *(undefined4 *)(local_90 + 0x104);
    }
    local_98 = (undefined *)CONCAT44(uVar43,iVar22);
    lStack_88 = lVar32 + 0x38;
    FUN_03901480(lVar31 + lVar15 * 0x3d0 + 0x370,&local_98,1,*(ulong *)(lVar32 + 0x48) >> 1);
    lVar19 = lVar15 * 0x3d0;
    lVar15 = 1;
    *(undefined4 *)(lVar31 + lVar19 + 0x37c) = 4;
    uVar23 = extraout_x1_01;
    bVar9 = false;
  } while (bVar12);
  *(long *)(param_1 + 0x19d0) = param_1 + 0x8d8;
  return;
}

