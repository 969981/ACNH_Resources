
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0391f840(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  void *pvVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  void *pvVar24;
  long lVar25;
  byte *pbVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  undefined8 *puVar32;
  size_t sVar33;
  undefined *local_480;
  byte *local_478;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_03922d50(param_1 + 0x5a,param_2,param_3);
  uVar3 = *(uint *)(param_1 + 0x85);
  param_1[0x7e] = (long)param_1;
  if (uVar3 != 0) {
    lVar25 = param_1[0x86];
    uVar20 = 0;
    do {
      lVar31 = lVar25 + ((long)((ulong)uVar20 << 0x20) >> 0x18);
      plVar30 = *(long **)(lVar31 + 0xa0);
      if (plVar30 != param_1 + 7) {
        if (plVar30 != (long *)0x0) {
          plVar14 = (long *)((long)*(int *)((long)plVar30 + 0x4c) + lVar31 + 0x30);
          if (*plVar14 != 0) {
            *(long *)(*plVar14 + 8) = plVar14[1];
          }
          if ((long *)plVar14[1] != (long *)0x0) {
            *(long *)plVar14[1] = *plVar14;
          }
          *plVar14 = 0;
          plVar14[1] = 0;
          *(int *)(plVar30 + 9) = (int)plVar30[9] + -1;
        }
        *(long **)(lVar31 + 0xa0) = param_1 + 7;
        plVar30 = (long *)(lVar31 + 0x30 + (long)*(int *)((long)param_1 + 0x84));
        lVar31 = param_1[0xe];
        param_1[0xe] = (long)plVar30;
        *plVar30 = lVar31;
        plVar30[1] = (long)(param_1 + 0xe);
        if (lVar31 != 0) {
          *(long **)(lVar31 + 8) = plVar30;
        }
        *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar3 != uVar20);
  }
  plVar30 = (long *)PTR_DAT_04bb2698;
  iVar13 = (int)param_1[5];
  if (0 < iVar13) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar15 = malloc((long)iVar13 << 3);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar25 + 8);
        if (lVar31 != 0) {
          plVar14 = (long *)(lVar31 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_0391f9c0;
      }
      pvVar15 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,(long)iVar13 << 3,8);
    }
    if (pvVar15 != (void *)0x0) {
      param_1[0x4e] = (long)pvVar15;
      *(undefined4 *)(param_1 + 0x4d) = 0;
      *(int *)((long)param_1 + 0x26c) = iVar13;
    }
  }
LAB_0391f9c0:
  uVar3 = *(uint *)PTR_DAT_04bd11d8;
  if (0 < (int)uVar3) {
    lVar25 = *plVar30;
    sVar33 = (ulong)uVar3 * 0x58 + 8;
    if (lVar25 == 0) {
      puVar16 = malloc(sVar33);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar25 + 8);
        if (lVar31 != 0) {
          plVar14 = (long *)(lVar31 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_0391fb7c;
      }
      puVar16 = (ulong *)(**(code **)(*plVar14 + 0x30))(plVar14,sVar33,8);
    }
    if (puVar16 != (ulong *)0x0) {
      puVar17 = puVar16 + 1;
      *puVar16 = (ulong)uVar3;
      puVar12 = PTR_DAT_04bd1140;
      puVar11 = PTR_PTR_04bb2238;
      puVar1 = PTR_DAT_04bd1070 + 0x10;
      puVar16 = puVar17;
      do {
        *puVar16 = (ulong)puVar1;
        puVar16[1] = 0;
        lVar25 = *(long *)puVar12;
        puVar16[4] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        uVar28 = 0;
        if (lVar25 != 0) {
          uVar28 = FUN_03954f70(lVar25,puVar11);
        }
        lVar25 = *(long *)puVar11;
        puVar16[8] = uVar28;
        (**(code **)(lVar25 + 0x18))(puVar11);
        pbVar26 = *(byte **)(puVar11 + 8);
        uVar20 = (uint)*pbVar26;
        if (*pbVar26 != 0) {
          uVar21 = 0xffffffff;
          do {
            pbVar26 = pbVar26 + 1;
            uVar21 = crc32b(uVar21,uVar20,0x4c11db7);
            uVar20 = (uint)*pbVar26;
          } while (uVar20 != 0);
          uVar20 = ~uVar21;
        }
        *(uint *)(puVar16 + 5) = uVar20;
        *puVar16 = (ulong)&PTR_LAB_04b669f8;
        *(undefined4 *)(puVar16 + 9) = 0;
        lVar25 = *(long *)PTR_DAT_04bd1158;
        puVar16[10] = 0;
        if ((lVar25 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
          (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
          FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon=FOLDER_BLUE",*(undefined8 *)(lVar25 + 0x10));
        }
        puVar16 = puVar16 + 0xb;
      } while (puVar16 != puVar17 + (ulong)uVar3 * 0xb);
      *(uint *)(param_1 + 0x8c) = uVar3;
      param_1[0x8d] = (long)puVar17;
      plVar30 = (long *)PTR_DAT_04bb2698;
    }
  }
LAB_0391fb7c:
  uVar3 = *(uint *)(param_2 + 0x210);
  if (0 < (int)uVar3) {
    lVar25 = *plVar30;
    sVar33 = (ulong)uVar3 * 0xc0;
    if (lVar25 == 0) {
      pvVar15 = malloc(sVar33);
    }
    else {
      plVar30 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar30 = (long *)(lVar25 + 8);
        if (lVar31 != 0) {
          plVar30 = (long *)(lVar31 + 0xa8);
        }
        plVar30 = (long *)*plVar30;
        if (plVar30 == (long *)0x0) goto LAB_0391fc74;
      }
      pvVar15 = (void *)(**(code **)(*plVar30 + 0x30))(plVar30,sVar33,8);
    }
    if (pvVar15 != (void *)0x0) {
      uVar20 = ((uint)((sVar33 - 0xc0) / 0xc0) & 0x1ffffff) + 1;
      uVar28 = (ulong)uVar20 & 7;
      pvVar24 = pvVar15;
      if ((uVar20 & 7) != 0) {
        do {
          *(undefined4 *)((long)pvVar24 + 0xac) = 0;
          pvVar24 = (void *)((long)pvVar24 + 0xc0);
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if (0x53f < sVar33 - 0xc0) {
        do {
          *(undefined4 *)((long)pvVar24 + 0xac) = 0;
          *(undefined4 *)((long)pvVar24 + 0x16c) = 0;
          *(undefined4 *)((long)pvVar24 + 0x22c) = 0;
          *(undefined4 *)((long)pvVar24 + 0x2ec) = 0;
          *(undefined4 *)((long)pvVar24 + 0x3ac) = 0;
          *(undefined4 *)((long)pvVar24 + 0x46c) = 0;
          *(undefined4 *)((long)pvVar24 + 0x52c) = 0;
          *(undefined4 *)((long)pvVar24 + 0x5ec) = 0;
          pvVar24 = (void *)((long)pvVar24 + 0x600);
        } while (pvVar24 != (void *)((long)pvVar15 + sVar33));
      }
      *(uint *)(param_1 + 0x4f) = uVar3;
      param_1[0x50] = (long)pvVar15;
    }
  }
LAB_0391fc74:
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (uVar3 != 0) {
    lVar25 = param_1[0x8d];
    uVar20 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar31 = lVar25 + (long)(int)uVar20 * 0x58;
      *(uint *)(lVar31 + 0x48) = uVar20;
      *(long **)(lVar31 + 0x50) = param_1;
      local_478 = *(byte **)(PTR_DAT_04bd11e0 + (long)(int)uVar20 * 0x28);
      uVar18 = 0;
      local_480 = puVar1;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar18 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
      }
      *(undefined8 *)(lVar31 + 0x40) = uVar18;
      (**(code **)(local_480 + 0x18))(&local_480);
      uVar21 = (uint)*local_478;
      if (*local_478 != 0) {
        uVar27 = 0xffffffff;
        pbVar26 = local_478;
        do {
          pbVar26 = pbVar26 + 1;
          uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
          uVar21 = (uint)*pbVar26;
        } while (uVar21 != 0);
        uVar21 = ~uVar27;
      }
      *(uint *)(lVar31 + 0x28) = uVar21;
      plVar30 = param_1 + 0x15;
      if (param_1[0x16] != 0) {
        plVar30 = (long *)(param_1[0x16] + 0x30);
      }
      *plVar30 = lVar31;
      param_1[0x16] = lVar31;
      *(long **)(lVar31 + 0x38) = param_1 + 0x12;
      lVar19 = (long)(int)uVar20;
      if (*(uint *)(param_1 + 3) <= uVar20) {
        lVar19 = 0;
      }
      uVar21 = (uint)*(ushort *)(param_1[4] + lVar19 * 4 + 2);
      if (uVar21 != 0) {
        uVar27 = 0;
        puVar32 = (undefined8 *)(PTR_DAT_04bd11e0 + (long)(int)uVar20 * 0x28 + 0x10);
        do {
          plVar30 = (long *)(*(code *)*puVar32)(param_3);
          FUN_0391ecec(plVar30,uVar27,*(undefined4 *)(param_2 + 0x210),param_1,param_3);
          lVar19 = (long)(int)uVar20;
          if (*(uint *)(param_1 + 3) <= uVar20) {
            lVar19 = 0;
          }
          uVar22 = uVar27 + *(ushort *)(param_1[4] + lVar19 * 4);
          if (*(uint *)(param_1 + 5) <= uVar22) {
            uVar22 = 0;
          }
          *(long **)(param_1[6] + (ulong)uVar22 * 8) = plVar30;
          FUN_03923830(param_1 + 0x5a,plVar30);
          iVar13 = (**(code **)(*plVar30 + 0xb0))(plVar30);
          FUN_006e9454(&local_480,&DAT_040ec793,
                       *(undefined8 *)(PTR_DAT_04bd11e0 + (long)iVar13 * 0x28),uVar27);
          lVar19 = 0;
          if (*(long *)PTR_DAT_04bd1140 != 0) {
            lVar19 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
          }
          plVar30[5] = lVar19;
          (**(code **)(local_480 + 0x18))(&local_480);
          uVar23 = (uint)*local_478;
          uVar22 = 0;
          if (*local_478 != 0) {
            uVar22 = 0xffffffff;
            pbVar26 = local_478;
            do {
              pbVar26 = pbVar26 + 1;
              uVar22 = crc32b(uVar22,uVar23,0x4c11db7);
              uVar23 = (uint)*pbVar26;
            } while (uVar23 != 0);
            uVar22 = ~uVar22;
          }
          *(uint *)((long)plVar30 + 0x1c) = uVar22;
          uVar27 = uVar27 + 1;
          plVar14 = (long *)(lVar31 + 8);
          if (*(long *)(lVar31 + 0x10) != 0) {
            plVar14 = (long *)(*(long *)(lVar31 + 0x10) + 0x20);
          }
          *plVar14 = (long)plVar30;
          *(long **)(lVar31 + 0x10) = plVar30;
        } while (uVar27 != uVar21);
      }
      uVar20 = uVar20 + 1;
    } while (uVar3 != uVar20);
  }
  uVar10 = _UNK_04102888;
  uVar9 = _DAT_04102880;
  uVar8 = _UNK_041023d8;
  uVar7 = _DAT_041023d0;
  uVar6 = DAT_04102218;
  uVar5 = DAT_04102210;
  uVar4 = _UNK_04102208;
  uVar18 = _DAT_04102200;
  lVar25 = param_1[0x4f];
  if ((int)lVar25 != 0) {
    lVar31 = param_1[0x50];
    iVar13 = 0;
    do {
      puVar32 = (undefined8 *)(lVar31 + (long)iVar13 * 0xc0);
      iVar13 = iVar13 + 1;
      puVar32[0x14] = 0x461c40003c23d70a;
      puVar32[0x15] = 0;
      puVar32[1] = uVar4;
      *puVar32 = uVar18;
      puVar32[3] = uVar10;
      puVar32[2] = uVar9;
      puVar32[0x16] = 0;
      *(undefined4 *)(puVar32 + 0x17) = 0x3f490fdb;
      puVar32[5] = uVar8;
      puVar32[4] = uVar7;
      puVar32[7] = uVar4;
      puVar32[6] = uVar18;
      puVar32[9] = uVar10;
      puVar32[8] = uVar9;
      puVar32[0xb] = uVar8;
      puVar32[10] = uVar7;
      puVar32[0xd] = uVar4;
      puVar32[0xc] = uVar18;
      puVar32[0xf] = uVar10;
      puVar32[0xe] = uVar9;
      puVar32[0x11] = uVar8;
      puVar32[0x10] = uVar7;
      puVar32[0x13] = uVar6;
      puVar32[0x12] = uVar5;
    } while ((int)lVar25 != iVar13);
  }
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  FUN_0394e1a0(param_1 + 7,(int)param_1[5],*(undefined4 *)(param_2 + 0x20c),param_3);
  lVar25 = param_1[5];
  if ((int)lVar25 != 0) {
    lVar31 = param_1[6];
    uVar28 = 0;
    iVar13 = (int)param_1[8];
    do {
      if (iVar13 < *(int *)((long)param_1 + 0x44)) {
        lVar29 = *(long *)(lVar31 + (-(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3));
        lVar19 = 0;
        if (lVar29 != 0) {
          lVar19 = lVar29 + 0x30;
        }
        *(long *)(param_1[9] + (long)iVar13 * 8) = lVar19;
        iVar13 = (int)param_1[8] + 1;
        *(int *)(param_1 + 8) = iVar13;
      }
      uVar2 = uVar28 + 1;
      uVar28 = uVar2 & 0xffffffff;
    } while ((int)lVar25 != (int)uVar2);
  }
  lVar25 = *(long *)PTR_DAT_04bd1158;
  if ((lVar25 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
    FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon = LIGHT",*(undefined8 *)(lVar25 + 0x10));
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
  *(ushort *)((long)param_1 + 0x8c) = *(ushort *)((long)param_1 + 0x8c) | 1;
  return;
}

