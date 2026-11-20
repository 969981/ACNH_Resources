
void FUN_03ecb7d0(long param_1,long *param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  size_t __size;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  void *pvVar19;
  long *plVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  long *plVar24;
  float *pfVar25;
  float *pfVar26;
  size_t sVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  long lVar32;
  uint uVar33;
  undefined8 *puVar34;
  int iVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [255];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  int local_64;
  
  uVar38 = *(uint *)param_2[1];
  if (0 < (int)uVar38) {
    __size = (ulong)uVar38 * 0x70;
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc(__size);
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecb8d0;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,__size,8);
    }
    if (pvVar19 != (void *)0x0) {
      sVar27 = 0;
      do {
        sVar1 = sVar27 + 0x70;
        *(undefined4 *)((long)pvVar19 + sVar27 + 0x20) = 0;
        *(undefined8 *)((long)pvVar19 + sVar27 + 0x28) = 0;
        *(undefined4 *)((long)pvVar19 + sVar27 + 0x30) = 0;
        *(undefined8 *)((long)pvVar19 + sVar27 + 0x38) = 0;
        *(undefined4 *)((long)pvVar19 + sVar27 + 0x40) = 0;
        *(undefined8 *)((long)pvVar19 + sVar27 + 0x48) = 0;
        *(undefined4 *)((long)pvVar19 + sVar27 + 0x50) = 0;
        *(undefined8 *)((long)pvVar19 + sVar27 + 0x58) = 0;
        *(undefined4 *)((long)pvVar19 + sVar27 + 0x60) = 0;
        *(undefined8 *)((long)pvVar19 + sVar27 + 0x68) = 0;
        sVar27 = sVar1;
      } while (__size != sVar1);
      *(uint *)(param_1 + 0x18) = uVar38;
      *(void **)(param_1 + 0x20) = pvVar19;
    }
  }
LAB_03ecb8d0:
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(**(long **)(param_2[1] + 8) + 0x10);
  uVar38 = *(uint *)param_2[1];
  if (uVar38 == 0) goto LAB_03ecbc84;
  iVar13 = 0;
  iVar14 = 0;
  iVar35 = 0;
  iVar31 = 0;
  local_64 = 0;
  iVar37 = 0;
  lVar32 = (long)(int)uVar38 << 3;
  puVar34 = *(undefined8 **)((uint *)param_2[1] + 2);
  do {
    uVar38 = uVar38 - 1;
    plVar17 = (long *)*puVar34;
    uVar11 = uVar38;
    if (*(uint *)(param_1 + 0x18) <= uVar38) {
      uVar11 = 0;
    }
    *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar11 * 0x70) = plVar17;
    uVar11 = (**(code **)(*plVar17 + 0x48))(plVar17);
    local_64 = local_64 + (uVar11 & 0xffff);
    uVar11 = (**(code **)(*plVar17 + 0x50))(plVar17);
    iVar13 = iVar13 + (uVar11 & 0xffff);
    uVar11 = (**(code **)(*plVar17 + 0x58))(plVar17);
    iVar14 = iVar14 + (uVar11 & 0xffff);
    uVar11 = (**(code **)(*plVar17 + 0x60))(plVar17);
    iVar35 = iVar35 + (uVar11 & 0xffff);
    uVar11 = (**(code **)(*plVar17 + 0x68))(plVar17);
    iVar31 = iVar31 + (uVar11 & 0xffff);
    iVar12 = (**(code **)(*plVar17 + 0x20))(plVar17);
    iVar37 = iVar12 + iVar37;
    lVar32 = lVar32 + -8;
    puVar34 = puVar34 + 1;
  } while (lVar32 != 0);
  if (local_64 != 0) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((ulong)(uint)(local_64 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecba4c;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)(uint)(local_64 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x38) = pvVar19;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(int *)(param_1 + 0x34) = local_64;
    }
  }
LAB_03ecba4c:
  if (iVar13 != 0) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((ulong)(uint)(iVar13 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecbabc;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)(uint)(iVar13 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x48) = pvVar19;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(int *)(param_1 + 0x44) = iVar13;
    }
  }
LAB_03ecbabc:
  if (iVar14 != 0) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((ulong)(uint)(iVar14 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecbb2c;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)(uint)(iVar14 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x58) = pvVar19;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(int *)(param_1 + 0x54) = iVar14;
    }
  }
LAB_03ecbb2c:
  if (iVar35 != 0) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((ulong)(uint)(iVar35 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecbb9c;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)(uint)(iVar35 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x68) = pvVar19;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 100) = iVar35;
    }
  }
LAB_03ecbb9c:
  if (iVar31 != 0) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((ulong)(uint)(iVar31 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecbc0c;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)(uint)(iVar31 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x78) = pvVar19;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(int *)(param_1 + 0x74) = iVar31;
    }
  }
LAB_03ecbc0c:
  if (0 < iVar37) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar19 = malloc((long)(iVar37 * 8));
    }
    else {
      plVar17 = (long *)*param_2;
      if (plVar17 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar32 + 8);
        if (lVar18 != 0) {
          plVar17 = (long *)(lVar18 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ecbc84;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(long)(iVar37 * 8),8);
    }
    if (pvVar19 != (void *)0x0) {
      *(void **)(param_1 + 0x88) = pvVar19;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(int *)(param_1 + 0x84) = iVar37;
    }
  }
LAB_03ecbc84:
  uVar38 = *(uint *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar6 = PTR_DAT_04bb2020;
  if (0 < (int)uVar38) {
    uVar11 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bb21f8 + 0x10;
    do {
      lVar32 = *(long *)(param_1 + 0x20);
      uVar33 = uVar11;
      if (uVar38 <= uVar11) {
        uVar33 = 0;
      }
      uVar30 = (ulong)uVar33;
      puVar34 = (undefined8 *)(lVar32 + uVar30 * 0x70);
      plVar17 = (long *)*puVar34;
      iVar13 = (**(code **)(*plVar17 + 0x30))(plVar17);
      *(int *)(puVar34 + 2) = iVar13;
      *(undefined4 *)(puVar34 + 1) = *(undefined4 *)(param_1 + 0x28);
      iVar13 = *(int *)(param_1 + 0x28) + iVar13;
      *(int *)(param_1 + 0x28) = iVar13;
      *(int *)((long)puVar34 + 0xc) = iVar13 + -1;
      iVar13 = (**(code **)(*plVar17 + 0x1a8))(plVar17);
      *(int *)((long)puVar34 + 0x1c) = iVar13;
      *(undefined4 *)((long)puVar34 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
      iVar13 = *(int *)(param_1 + 0x2c) + iVar13;
      *(int *)(param_1 + 0x2c) = iVar13;
      *(int *)(puVar34 + 3) = iVar13 + -1;
      uVar10 = (**(code **)(*plVar17 + 0x48))(plVar17);
      uVar38 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar19 = malloc((ulong)uVar38 << 2);
        }
        else {
          plVar20 = (long *)*param_2;
          if (plVar20 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar20 = (long *)(lVar18 + 8);
            if (lVar21 != 0) {
              plVar20 = (long *)(lVar21 + 0xa8);
            }
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_03ecbe04;
          }
          pvVar19 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar38 << 2,8);
        }
        if (pvVar19 != (void *)0x0) {
          lVar18 = lVar32 + uVar30 * 0x70;
          *(void **)(lVar18 + 0x28) = pvVar19;
          *(uint *)(lVar18 + 0x20) = uVar38;
        }
LAB_03ecbe04:
        uVar33 = 0;
        lVar18 = lVar32 + uVar30 * 0x70;
        puVar4 = (uint *)(lVar18 + 0x20);
        plVar20 = (long *)(lVar18 + 0x28);
LAB_03ecbe98:
        local_80 = (undefined1 *)(**(code **)(*plVar17 + 0xc0))(plVar17,uVar33);
        local_88 = puVar6 + 0x10;
        uVar28 = (ulong)*(uint *)(param_1 + 0x30);
        if (0 < (int)*(uint *)(param_1 + 0x30)) {
          uVar36 = 0;
          do {
            if (uVar36 < (uVar28 & 0xffffffff)) {
              puVar34 = *(undefined8 **)(*(long *)(param_1 + 0x38) + uVar36 * 8);
            }
            else {
              puVar34 = (undefined8 *)0x0;
            }
            local_198 = (undefined1 *)*puVar34;
            local_1a0 = puVar6 + 0x10;
            (**(code **)(local_88 + 0x18))(&local_88);
            (**(code **)(local_88 + 0x18))(&local_88);
            puVar7 = local_80;
            (**(code **)(local_1a0 + 0x18))(&local_1a0);
            if (puVar7 == local_198) {
LAB_03ecbfb0:
              uVar15 = *(uint *)((long)puVar34 + 0xc);
              if (*(uint *)(param_1 + 0x18) <= uVar15) {
                uVar15 = 0;
              }
              plVar24 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar15 * 0x70);
              pcVar22 = (char *)(**(code **)(*plVar24 + 0x70))(plVar24,*(undefined4 *)(puVar34 + 1))
              ;
              pcVar23 = (char *)(**(code **)(*plVar17 + 0x70))(plVar17,uVar33);
              if (pcVar22 == pcVar23) goto LAB_03ecbe70;
              if (*pcVar22 != *pcVar23) goto LAB_03ecbe24;
              if (*pcVar22 == '\0') goto LAB_03ecbe70;
              uVar28 = 0;
              goto LAB_03ecc020;
            }
            uVar28 = 0;
            bVar9 = true;
            do {
              if (local_80[uVar28] != local_198[uVar28]) break;
              if (local_80[uVar28] == '\0') {
                if (bVar9) goto LAB_03ecbfb0;
                break;
              }
              if (local_80[uVar28 + 1] != local_198[uVar28 + 1]) break;
              if (local_80[uVar28 + 1] == '\0') goto LAB_03ecbfb0;
              if (local_80[uVar28 + 2] != local_198[uVar28 + 2]) break;
              if (local_80[uVar28 + 2] == '\0') goto LAB_03ecbfb0;
              bVar9 = uVar28 < 0x7fffe;
              uVar28 = uVar28 + 3;
            } while (uVar28 != 0x80001);
            uVar28 = (ulong)*(int *)(param_1 + 0x30);
            uVar36 = uVar36 + 1;
          } while ((long)uVar36 < (long)uVar28);
        }
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          puVar34 = malloc(0x10);
        }
        else {
          plVar24 = (long *)*param_2;
          if (plVar24 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar24 = (long *)(lVar18 + 8);
            if (lVar21 != 0) {
              plVar24 = (long *)(lVar21 + 0xa8);
            }
            plVar24 = (long *)*plVar24;
          }
          puVar34 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x10,8);
        }
        *puVar34 = 0;
        puVar34[1] = 0;
        (**(code **)(local_88 + 0x18))(&local_88);
        *puVar34 = local_80;
        *(uint *)(puVar34 + 1) = uVar33;
        *(uint *)((long)puVar34 + 0xc) = uVar11;
        uVar15 = uVar33;
        if (*puVar4 <= uVar33) {
          uVar15 = 0;
        }
        *(undefined4 *)(*plVar20 + (ulong)uVar15 * 4) = *(undefined4 *)(param_1 + 0x30);
        if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
          *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = puVar34
          ;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        goto LAB_03ecbe88;
      }
LAB_03ecc160:
      uVar10 = (**(code **)(*plVar17 + 0x50))(plVar17);
      uVar38 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar19 = malloc((ulong)uVar38 << 2);
joined_r0x03ecd128:
          if (pvVar19 != (void *)0x0) {
            lVar18 = lVar32 + uVar30 * 0x70;
            *(void **)(lVar18 + 0x38) = pvVar19;
            *(uint *)(lVar18 + 0x30) = uVar38;
          }
        }
        else {
          plVar20 = (long *)*param_2;
          if (plVar20 != (long *)0x0) {
LAB_03ecc1cc:
            pvVar19 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar38 << 2,8);
            goto joined_r0x03ecd128;
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar20 = (long *)(lVar18 + 8);
          if (lVar21 != 0) {
            plVar20 = (long *)(lVar21 + 0xa8);
          }
          plVar20 = (long *)*plVar20;
          if (plVar20 != (long *)0x0) goto LAB_03ecc1cc;
        }
        uVar33 = 0;
        lVar18 = lVar32 + uVar30 * 0x70;
        puVar4 = (uint *)(lVar18 + 0x30);
        plVar20 = (long *)(lVar18 + 0x38);
        do {
          local_80 = (undefined1 *)(**(code **)(*plVar17 + 200))(plVar17,uVar33);
          local_88 = puVar6 + 0x10;
          uVar28 = (ulong)*(uint *)(param_1 + 0x40);
          if (0 < (int)*(uint *)(param_1 + 0x40)) {
            uVar36 = 0;
            do {
              if (uVar36 < (uVar28 & 0xffffffff)) {
                puVar34 = *(undefined8 **)(*(long *)(param_1 + 0x48) + uVar36 * 8);
              }
              else {
                puVar34 = (undefined8 *)0x0;
              }
              local_198 = (undefined1 *)*puVar34;
              local_1a0 = puVar6 + 0x10;
              (**(code **)(local_88 + 0x18))(&local_88);
              (**(code **)(local_88 + 0x18))(&local_88);
              puVar7 = local_80;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              if (puVar7 == local_198) {
LAB_03ecc360:
                uVar15 = *(uint *)((long)puVar34 + 0xc);
                if (*(uint *)(param_1 + 0x18) <= uVar15) {
                  uVar15 = 0;
                }
                plVar24 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar15 * 0x70);
                iVar13 = (**(code **)(*plVar24 + 0x78))(plVar24,*(undefined4 *)(puVar34 + 1));
                iVar14 = (**(code **)(*plVar17 + 0x78))(plVar17,uVar33);
                if (iVar13 != iVar14) {
                  local_8d = 0;
                  local_190 = 0x100;
                  local_18c[0] = 0;
                  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
                  lVar18 = *(long *)(plVar17[2] + 8);
                  local_198 = local_18c;
                  FUN_038d1270(&local_1a0,"%s.as",
                               lVar18 + *(int *)(lVar18 + 0x24) + (long)*(int *)(lVar18 + 8));
                }
                uVar15 = uVar33;
                if (*puVar4 <= uVar33) {
                  uVar15 = 0;
                }
                *(int *)(*plVar20 + (ulong)uVar15 * 4) = (int)uVar36;
                goto LAB_03ecc238;
              }
              uVar28 = 0;
              bVar9 = true;
              do {
                if (local_80[uVar28] != local_198[uVar28]) break;
                if (local_80[uVar28] == '\0') {
                  if (bVar9) goto LAB_03ecc360;
                  break;
                }
                if (local_80[uVar28 + 1] != local_198[uVar28 + 1]) break;
                if (local_80[uVar28 + 1] == '\0') goto LAB_03ecc360;
                if (local_80[uVar28 + 2] != local_198[uVar28 + 2]) break;
                if (local_80[uVar28 + 2] == '\0') goto LAB_03ecc360;
                bVar9 = uVar28 < 0x7fffe;
                uVar28 = uVar28 + 3;
              } while (uVar28 != 0x80001);
              uVar28 = (ulong)*(int *)(param_1 + 0x40);
              uVar36 = uVar36 + 1;
            } while ((long)uVar36 < (long)uVar28);
          }
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            puVar34 = malloc(0x10);
          }
          else {
            plVar24 = (long *)*param_2;
            if (plVar24 == (long *)0x0) {
              lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar24 = (long *)(lVar18 + 8);
              if (lVar21 != 0) {
                plVar24 = (long *)(lVar21 + 0xa8);
              }
              plVar24 = (long *)*plVar24;
            }
            puVar34 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x10,8);
          }
          *puVar34 = 0;
          puVar34[1] = 0;
          (**(code **)(local_88 + 0x18))(&local_88);
          *puVar34 = local_80;
          *(uint *)(puVar34 + 1) = uVar33;
          *(uint *)((long)puVar34 + 0xc) = uVar11;
          uVar15 = uVar33;
          if (*puVar4 <= uVar33) {
            uVar15 = 0;
          }
          *(undefined4 *)(*plVar20 + (ulong)uVar15 * 4) = *(undefined4 *)(param_1 + 0x40);
          if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x44)) {
            *(undefined8 **)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8) =
                 puVar34;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          }
LAB_03ecc238:
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar38);
      }
      uVar10 = (**(code **)(*plVar17 + 0x58))(plVar17);
      uVar38 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar19 = malloc((ulong)uVar38 << 2);
joined_r0x03ecd138:
          if (pvVar19 != (void *)0x0) {
            lVar18 = lVar32 + uVar30 * 0x70;
            *(void **)(lVar18 + 0x48) = pvVar19;
            *(uint *)(lVar18 + 0x40) = uVar38;
          }
        }
        else {
          plVar20 = (long *)*param_2;
          if (plVar20 != (long *)0x0) {
LAB_03ecc53c:
            pvVar19 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar38 << 2,8);
            goto joined_r0x03ecd138;
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar20 = (long *)(lVar18 + 8);
          if (lVar21 != 0) {
            plVar20 = (long *)(lVar21 + 0xa8);
          }
          plVar20 = (long *)*plVar20;
          if (plVar20 != (long *)0x0) goto LAB_03ecc53c;
        }
        uVar33 = 0;
        lVar18 = lVar32 + uVar30 * 0x70;
        puVar4 = (uint *)(lVar18 + 0x40);
        plVar20 = (long *)(lVar18 + 0x48);
        do {
          local_80 = (undefined1 *)(**(code **)(*plVar17 + 0xd0))(plVar17,uVar33);
          local_88 = puVar6 + 0x10;
          uVar28 = (ulong)*(uint *)(param_1 + 0x50);
          if (0 < (int)*(uint *)(param_1 + 0x50)) {
            uVar36 = 0;
            do {
              if (uVar36 < (uVar28 & 0xffffffff)) {
                puVar34 = *(undefined8 **)(*(long *)(param_1 + 0x58) + uVar36 * 8);
              }
              else {
                puVar34 = (undefined8 *)0x0;
              }
              local_198 = (undefined1 *)*puVar34;
              local_1a0 = puVar6 + 0x10;
              (**(code **)(local_88 + 0x18))(&local_88);
              (**(code **)(local_88 + 0x18))(&local_88);
              puVar7 = local_80;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              if (puVar7 == local_198) {
LAB_03ecc590:
                uVar15 = *(uint *)((long)puVar34 + 0xc);
                if (*(uint *)(param_1 + 0x18) <= uVar15) {
                  uVar15 = 0;
                }
                plVar24 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar15 * 0x70);
                fVar39 = (float)(**(code **)(*plVar24 + 0x80))(plVar24,*(undefined4 *)(puVar34 + 1))
                ;
                fVar40 = (float)(**(code **)(*plVar17 + 0x80))(plVar17,uVar33);
                if (fVar39 != fVar40) {
                  local_8d = 0;
                  local_190 = 0x100;
                  local_18c[0] = 0;
                  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
                  lVar18 = *(long *)(plVar17[2] + 8);
                  local_198 = local_18c;
                  FUN_038d1270(&local_1a0,"%s.as",
                               lVar18 + *(int *)(lVar18 + 0x24) + (long)*(int *)(lVar18 + 8));
                }
                uVar15 = uVar33;
                if (*puVar4 <= uVar33) {
                  uVar15 = 0;
                }
                *(int *)(*plVar20 + (ulong)uVar15 * 4) = (int)uVar36;
                goto LAB_03ecc5f4;
              }
              uVar28 = 0;
              bVar9 = true;
              do {
                if (local_80[uVar28] != local_198[uVar28]) break;
                if (local_80[uVar28] == '\0') {
                  if (bVar9) goto LAB_03ecc590;
                  break;
                }
                if (local_80[uVar28 + 1] != local_198[uVar28 + 1]) break;
                if (local_80[uVar28 + 1] == '\0') goto LAB_03ecc590;
                if (local_80[uVar28 + 2] != local_198[uVar28 + 2]) break;
                if (local_80[uVar28 + 2] == '\0') goto LAB_03ecc590;
                bVar9 = uVar28 < 0x7fffe;
                uVar28 = uVar28 + 3;
              } while (uVar28 != 0x80001);
              uVar28 = (ulong)*(int *)(param_1 + 0x50);
              uVar36 = uVar36 + 1;
            } while ((long)uVar36 < (long)uVar28);
          }
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            puVar34 = malloc(0x10);
          }
          else {
            plVar24 = (long *)*param_2;
            if (plVar24 == (long *)0x0) {
              lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar24 = (long *)(lVar18 + 8);
              if (lVar21 != 0) {
                plVar24 = (long *)(lVar21 + 0xa8);
              }
              plVar24 = (long *)*plVar24;
            }
            puVar34 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x10,8);
          }
          *puVar34 = 0;
          puVar34[1] = 0;
          (**(code **)(local_88 + 0x18))(&local_88);
          *puVar34 = local_80;
          *(uint *)(puVar34 + 1) = uVar33;
          *(uint *)((long)puVar34 + 0xc) = uVar11;
          uVar15 = uVar33;
          if (*puVar4 <= uVar33) {
            uVar15 = 0;
          }
          *(undefined4 *)(*plVar20 + (ulong)uVar15 * 4) = *(undefined4 *)(param_1 + 0x50);
          if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x54)) {
            *(undefined8 **)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 8) =
                 puVar34;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
LAB_03ecc5f4:
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar38);
      }
      uVar10 = (**(code **)(*plVar17 + 0x60))(plVar17);
      uVar38 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar19 = malloc((ulong)uVar38 << 2);
joined_r0x03ecd148:
          if (pvVar19 != (void *)0x0) {
            lVar18 = lVar32 + uVar30 * 0x70;
            *(void **)(lVar18 + 0x58) = pvVar19;
            *(uint *)(lVar18 + 0x50) = uVar38;
          }
        }
        else {
          plVar20 = (long *)*param_2;
          if (plVar20 != (long *)0x0) {
LAB_03ecc8b0:
            pvVar19 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar38 << 2,8);
            goto joined_r0x03ecd148;
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar20 = (long *)(lVar18 + 8);
          if (lVar21 != 0) {
            plVar20 = (long *)(lVar21 + 0xa8);
          }
          plVar20 = (long *)*plVar20;
          if (plVar20 != (long *)0x0) goto LAB_03ecc8b0;
        }
        uVar33 = 0;
        lVar18 = lVar32 + uVar30 * 0x70;
        puVar4 = (uint *)(lVar18 + 0x50);
        plVar20 = (long *)(lVar18 + 0x58);
        do {
          local_80 = (undefined1 *)(**(code **)(*plVar17 + 0xd8))(plVar17,uVar33);
          local_88 = puVar6 + 0x10;
          uVar28 = (ulong)*(uint *)(param_1 + 0x60);
          if (0 < (int)*(uint *)(param_1 + 0x60)) {
            uVar36 = 0;
            do {
              if (uVar36 < (uVar28 & 0xffffffff)) {
                puVar34 = *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar36 * 8);
              }
              else {
                puVar34 = (undefined8 *)0x0;
              }
              local_198 = (undefined1 *)*puVar34;
              local_1a0 = puVar6 + 0x10;
              (**(code **)(local_88 + 0x18))(&local_88);
              (**(code **)(local_88 + 0x18))(&local_88);
              puVar7 = local_80;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              if (puVar7 == local_198) {
LAB_03ecca40:
                uVar15 = *(uint *)((long)puVar34 + 0xc);
                if (*(uint *)(param_1 + 0x18) <= uVar15) {
                  uVar15 = 0;
                }
                plVar24 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar15 * 0x70);
                uVar15 = (**(code **)(*plVar24 + 0x88))(plVar24,*(undefined4 *)(puVar34 + 1));
                uVar16 = (**(code **)(*plVar17 + 0x88))(plVar17,uVar33);
                if ((uVar15 & 1) != (uVar16 & 1)) {
                  local_8d = 0;
                  local_190 = 0x100;
                  local_18c[0] = 0;
                  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
                  lVar18 = *(long *)(plVar17[2] + 8);
                  local_198 = local_18c;
                  FUN_038d1270(&local_1a0,"%s.as",
                               lVar18 + *(int *)(lVar18 + 0x24) + (long)*(int *)(lVar18 + 8));
                }
                uVar15 = uVar33;
                if (*puVar4 <= uVar33) {
                  uVar15 = 0;
                }
                *(int *)(*plVar20 + (ulong)uVar15 * 4) = (int)uVar36;
                goto LAB_03ecc918;
              }
              uVar28 = 0;
              bVar9 = true;
              do {
                if (local_80[uVar28] != local_198[uVar28]) break;
                if (local_80[uVar28] == '\0') {
                  if (bVar9) goto LAB_03ecca40;
                  break;
                }
                if (local_80[uVar28 + 1] != local_198[uVar28 + 1]) break;
                if (local_80[uVar28 + 1] == '\0') goto LAB_03ecca40;
                if (local_80[uVar28 + 2] != local_198[uVar28 + 2]) break;
                if (local_80[uVar28 + 2] == '\0') goto LAB_03ecca40;
                bVar9 = uVar28 < 0x7fffe;
                uVar28 = uVar28 + 3;
              } while (uVar28 != 0x80001);
              uVar28 = (ulong)*(int *)(param_1 + 0x60);
              uVar36 = uVar36 + 1;
            } while ((long)uVar36 < (long)uVar28);
          }
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            puVar34 = malloc(0x10);
          }
          else {
            plVar24 = (long *)*param_2;
            if (plVar24 == (long *)0x0) {
              lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar24 = (long *)(lVar18 + 8);
              if (lVar21 != 0) {
                plVar24 = (long *)(lVar21 + 0xa8);
              }
              plVar24 = (long *)*plVar24;
            }
            puVar34 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x10,8);
          }
          *puVar34 = 0;
          puVar34[1] = 0;
          (**(code **)(local_88 + 0x18))(&local_88);
          *puVar34 = local_80;
          *(uint *)(puVar34 + 1) = uVar33;
          *(uint *)((long)puVar34 + 0xc) = uVar11;
          uVar15 = uVar33;
          if (*puVar4 <= uVar33) {
            uVar15 = 0;
          }
          *(undefined4 *)(*plVar20 + (ulong)uVar15 * 4) = *(undefined4 *)(param_1 + 0x60);
          if (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 100)) {
            *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x60) * 8) =
                 puVar34;
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
LAB_03ecc918:
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar38);
      }
      uVar10 = (**(code **)(*plVar17 + 0x68))(plVar17);
      uVar38 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar19 = malloc((ulong)uVar38 << 2);
joined_r0x03ecd158:
          if (pvVar19 != (void *)0x0) {
            lVar18 = lVar32 + uVar30 * 0x70;
            *(void **)(lVar18 + 0x68) = pvVar19;
            *(uint *)(lVar18 + 0x60) = uVar38;
          }
        }
        else {
          plVar20 = (long *)*param_2;
          if (plVar20 != (long *)0x0) {
LAB_03eccc1c:
            pvVar19 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar38 << 2,8);
            goto joined_r0x03ecd158;
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar20 = (long *)(lVar18 + 8);
          if (lVar21 != 0) {
            plVar20 = (long *)(lVar21 + 0xa8);
          }
          plVar20 = (long *)*plVar20;
          if (plVar20 != (long *)0x0) goto LAB_03eccc1c;
        }
        uVar33 = 0;
        lVar32 = lVar32 + uVar30 * 0x70;
        puVar4 = (uint *)(lVar32 + 0x60);
        plVar20 = (long *)(lVar32 + 0x68);
        do {
          local_80 = (undefined1 *)(**(code **)(*plVar17 + 0xe0))(plVar17,uVar33);
          local_88 = puVar6 + 0x10;
          uVar30 = (ulong)*(uint *)(param_1 + 0x70);
          if (0 < (int)*(uint *)(param_1 + 0x70)) {
            uVar28 = 0;
            do {
              if (uVar28 < (uVar30 & 0xffffffff)) {
                puVar34 = *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar28 * 8);
              }
              else {
                puVar34 = (undefined8 *)0x0;
              }
              local_198 = (undefined1 *)*puVar34;
              local_1a0 = puVar6 + 0x10;
              (**(code **)(local_88 + 0x18))(&local_88);
              (**(code **)(local_88 + 0x18))(&local_88);
              puVar7 = local_80;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              if (puVar7 == local_198) {
LAB_03eccdb0:
                uVar15 = *(uint *)((long)puVar34 + 0xc);
                if (*(uint *)(param_1 + 0x18) <= uVar15) {
                  uVar15 = 0;
                }
                plVar24 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar15 * 0x70);
                pfVar25 = (float *)(**(code **)(*plVar24 + 0x90))
                                             (plVar24,*(undefined4 *)(puVar34 + 1));
                pfVar26 = (float *)(**(code **)(*plVar17 + 0x90))(plVar17,uVar33);
                bVar9 = false;
                if ((*pfVar25 == *pfVar26) && (bVar9 = false, !NAN(pfVar25[1]) && !NAN(pfVar26[1])))
                {
                  bVar9 = pfVar25[1] == pfVar26[1];
                }
                bVar8 = false;
                if ((bVar9) && (bVar8 = false, !NAN(pfVar25[2]) && !NAN(pfVar26[2]))) {
                  bVar8 = pfVar25[2] == pfVar26[2];
                }
                if (!bVar8) {
                  local_8d = 0;
                  local_190 = 0x100;
                  local_18c[0] = 0;
                  lVar32 = *(long *)(plVar17[2] + 8);
                  local_1a0 = puVar3;
                  local_198 = local_18c;
                  FUN_038d1270(&local_1a0,"%s.as",
                               lVar32 + *(int *)(lVar32 + 0x24) + (long)*(int *)(lVar32 + 8));
                }
                uVar15 = uVar33;
                if (*puVar4 <= uVar33) {
                  uVar15 = 0;
                }
                *(int *)(*plVar20 + (ulong)uVar15 * 4) = (int)uVar28;
                goto LAB_03eccc88;
              }
              uVar30 = 0;
              bVar9 = true;
              do {
                if (local_80[uVar30] != local_198[uVar30]) break;
                if (local_80[uVar30] == '\0') {
                  if (bVar9) goto LAB_03eccdb0;
                  break;
                }
                if (local_80[uVar30 + 1] != local_198[uVar30 + 1]) break;
                if (local_80[uVar30 + 1] == '\0') goto LAB_03eccdb0;
                if (local_80[uVar30 + 2] != local_198[uVar30 + 2]) break;
                if (local_80[uVar30 + 2] == '\0') goto LAB_03eccdb0;
                bVar9 = uVar30 < 0x7fffe;
                uVar30 = uVar30 + 3;
              } while (uVar30 != 0x80001);
              uVar30 = (ulong)*(int *)(param_1 + 0x70);
              uVar28 = uVar28 + 1;
            } while ((long)uVar28 < (long)uVar30);
          }
          lVar32 = *(long *)PTR_DAT_04bb2698;
          if (lVar32 == 0) {
            puVar34 = malloc(0x10);
          }
          else {
            plVar24 = (long *)*param_2;
            if (plVar24 == (long *)0x0) {
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar24 = (long *)(lVar32 + 8);
              if (lVar18 != 0) {
                plVar24 = (long *)(lVar18 + 0xa8);
              }
              plVar24 = (long *)*plVar24;
            }
            puVar34 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x10,8);
          }
          *puVar34 = 0;
          puVar34[1] = 0;
          (**(code **)(local_88 + 0x18))(&local_88);
          *puVar34 = local_80;
          *(uint *)(puVar34 + 1) = uVar33;
          *(uint *)((long)puVar34 + 0xc) = uVar11;
          uVar15 = uVar33;
          if (*puVar4 <= uVar33) {
            uVar15 = 0;
          }
          *(undefined4 *)(*plVar20 + (ulong)uVar15 * 4) = *(undefined4 *)(param_1 + 0x70);
          if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x74)) {
            *(undefined8 **)(*(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x70) * 8) =
                 puVar34;
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          }
LAB_03eccc88:
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar38);
      }
      iVar13 = (**(code **)(*plVar17 + 0x20))(plVar17);
      if (0 < iVar13) {
        iVar14 = 0;
        do {
          local_198 = (undefined1 *)(**(code **)(*plVar17 + 0x28))(plVar17,iVar14);
          local_1a0 = puVar2;
          if (*(int *)(param_1 + 0x80) != 0) {
            puVar34 = *(undefined8 **)(param_1 + 0x88);
            puVar5 = puVar34 + *(int *)(param_1 + 0x80);
            do {
              local_88 = puVar6 + 0x10;
              local_80 = *(undefined1 **)*puVar34;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              puVar7 = local_198;
              (**(code **)(local_88 + 0x18))(&local_88);
              if (puVar7 == local_80) goto LAB_03eccf54;
              uVar30 = 0;
              bVar9 = true;
              do {
                if (local_198[uVar30] != local_80[uVar30]) break;
                if (local_198[uVar30] == '\0') {
                  if (bVar9) goto LAB_03eccf54;
                  break;
                }
                if (local_198[uVar30 + 1] != local_80[uVar30 + 1]) break;
                if (local_198[uVar30 + 1] == '\0') goto LAB_03eccf54;
                if (local_198[uVar30 + 2] != local_80[uVar30 + 2]) break;
                if (local_198[uVar30 + 2] == '\0') goto LAB_03eccf54;
                bVar9 = uVar30 < 0x7fffe;
                uVar30 = uVar30 + 3;
              } while (uVar30 != 0x80001);
              puVar34 = puVar34 + 1;
            } while (puVar34 != puVar5);
          }
          lVar32 = *(long *)PTR_DAT_04bb2698;
          if (lVar32 == 0) {
            plVar20 = malloc(8);
          }
          else {
            plVar20 = (long *)*param_2;
            if (plVar20 == (long *)0x0) {
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar20 = (long *)(lVar32 + 8);
              if (lVar18 != 0) {
                plVar20 = (long *)(lVar18 + 0xa8);
              }
              plVar20 = (long *)*plVar20;
            }
            plVar20 = (long *)(**(code **)(*plVar20 + 0x30))(plVar20,8,8);
          }
          *plVar20 = 0;
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          *plVar20 = (long)local_198;
          if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x84)) {
            *(long **)(*(long *)(param_1 + 0x88) + (long)*(int *)(param_1 + 0x80) * 8) = plVar20;
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          }
LAB_03eccf54:
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar13);
      }
      uVar11 = uVar11 + 1;
      uVar38 = *(uint *)(param_1 + 0x18);
    } while ((int)uVar11 < (int)uVar38);
  }
  return;
  while( true ) {
    if (pcVar22[uVar29 + 1] == '\0') goto joined_r0x03ecc158;
    if (pcVar22[uVar29 + 2] != pcVar23[uVar29 + 2]) goto LAB_03ecbe24;
    if (pcVar22[uVar29 + 2] == '\0') {
      uVar29 = uVar29 + 1;
      goto joined_r0x03ecc158;
    }
    if ((uVar29 == 0x7fffe) || (pcVar22[uVar29 + 3] != pcVar23[uVar29 + 3])) goto LAB_03ecbe24;
    uVar28 = uVar29 + 3;
    if (pcVar22[uVar29 + 3] == '\0') break;
LAB_03ecc020:
    uVar29 = uVar28;
    if (pcVar22[uVar29 + 1] != pcVar23[uVar29 + 1]) goto LAB_03ecbe24;
  }
  uVar29 = uVar29 + 2;
joined_r0x03ecc158:
  if (0x7ffff < uVar29) {
LAB_03ecbe24:
    local_8d = 0;
    local_190 = 0x100;
    local_18c[0] = 0;
    local_1a0 = PTR_DAT_04bb21f8 + 0x10;
    lVar18 = *(long *)(plVar17[2] + 8);
    local_198 = local_18c;
    FUN_038d1270(&local_1a0,"%s.as",lVar18 + *(int *)(lVar18 + 0x24) + (long)*(int *)(lVar18 + 8));
  }
LAB_03ecbe70:
  uVar15 = uVar33;
  if (*puVar4 <= uVar33) {
    uVar15 = 0;
  }
  *(int *)(*plVar20 + (ulong)uVar15 * 4) = (int)uVar36;
LAB_03ecbe88:
  uVar33 = uVar33 + 1;
  if (uVar33 == uVar38) goto LAB_03ecc160;
  goto LAB_03ecbe98;
}

