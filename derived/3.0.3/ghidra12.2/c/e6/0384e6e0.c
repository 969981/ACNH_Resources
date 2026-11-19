
undefined8 FUN_0384e6e0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  size_t sVar24;
  void *__dest;
  void *__src;
  long *plVar25;
  long *plVar26;
  long *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined4 local_1a0;
  long *local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined4 local_110 [2];
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  long local_d0;
  int *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  plVar26 = (long *)PTR_DAT_04bb2698;
  plVar25 = (long *)param_2[5];
  if (plVar25 == (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar16 = (undefined8 *)(lVar12 + 8);
    if (lVar23 != 0) {
      puVar16 = (undefined8 *)(lVar23 + 0xa8);
    }
    plVar25 = (long *)*puVar16;
    if (param_2[4] == 0) goto LAB_0384e758;
LAB_0384e760:
    lVar23 = *plVar26;
    if (lVar23 != 0) goto LAB_0384e768;
LAB_0384e8d8:
    plVar13 = malloc(0x1d10);
  }
  else {
    if (param_2[4] != 0) goto LAB_0384e760;
LAB_0384e758:
    if (param_2[3] != 0) goto LAB_0384e760;
    lVar23 = *plVar26;
    if (lVar23 == 0) {
      plVar13 = malloc(0x18);
    }
    else {
      plVar13 = plVar25;
      if (plVar25 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar16 = (undefined8 *)(lVar23 + 8);
        if (lVar12 != 0) {
          puVar16 = (undefined8 *)(lVar12 + 0xa8);
        }
        plVar13 = (long *)*puVar16;
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x18,8);
    }
    puVar8 = PTR_DAT_04bd47b0;
    *(undefined4 *)(plVar13 + 1) = 0;
    plVar13[2] = 0;
    *plVar13 = (long)(puVar8 + 0x10);
    *(long **)(param_1 + 0x70) = plVar13;
    param_2[3] = (long)plVar13;
    lVar12 = *(long *)(param_1 + 0x70);
    lVar23 = *plVar26;
    puStack_1f0 = (undefined1 *)0x0;
    local_1f8 = plVar25;
    if (lVar23 == 0) {
      plVar13 = malloc(0x60);
    }
    else {
      plVar13 = plVar25;
      if (plVar25 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar16 = (undefined8 *)(lVar23 + 8);
        if (lVar14 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 0xa8);
        }
        plVar13 = (long *)*puVar16;
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x60,8);
    }
    puVar8 = PTR_DAT_04bd47b8;
    plVar13[2] = 0;
    plVar13[3] = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 0;
    plVar13[7] = 0;
    plVar13[8] = 0;
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    *plVar13 = (long)(puVar8 + 0x10);
    plVar13[1] = 0;
    *(long **)(lVar12 + 0x10) = plVar13;
    FUN_03ec8c00(plVar13,&local_1f8);
    *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 1;
    lVar23 = *plVar26;
    if (lVar23 == 0) goto LAB_0384e8d8;
LAB_0384e768:
    plVar13 = plVar25;
    if (plVar25 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar23 + 8);
      if (lVar12 != 0) {
        plVar13 = (long *)(lVar12 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
        goto LAB_0384e8e4;
      }
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1d10,8);
  }
LAB_0384e8e4:
  plVar13[2] = 0;
  puVar8 = PTR_DAT_04bd4788;
  *(undefined4 *)(plVar13 + 3) = 0;
  plVar13[0xd] = 0;
  *(undefined1 *)(plVar13 + 0xe) = 0;
  *(undefined4 *)(plVar13 + 0xc) = 0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  *plVar13 = (long)(puVar8 + 0x10);
  plVar13[1] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xf] = 0;
  plVar13[0x10] = 0;
  FUN_03ec1c40(plVar13 + 0x11);
  plVar13[0x39e] = 0;
  *(undefined1 *)((long)plVar13 + 0x1d09) = 0;
  plVar13[0x39f] = 0;
  plVar13[0x3a0] = 0;
  __dest = *(void **)(param_1 + 0x10);
  *(long **)(param_1 + 0x78) = plVar13;
  local_90 = 0;
  local_70 = 0;
  local_110[0] = 0;
  local_f0 = 0;
  local_e8 = 0x800000020;
  local_e0 = 0x100000010;
  local_c0 = 0;
  local_b8 = 0x2000000010;
  local_8c = 1;
  local_88 = 4;
  plVar13 = param_2 + 1;
  local_d0 = 0;
  local_c8 = (int *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (**(code **)(*plVar13 + 0x18))(plVar13);
  __src = (void *)param_2[2];
  if (__dest != __src) {
    (**(code **)(param_2[1] + 0x18))(plVar13);
    lVar23 = 0;
    do {
      if (*(char *)(param_2[2] + lVar23) == '\0') goto LAB_0384ea10;
      lVar12 = param_2[2] + lVar23;
      if (*(char *)(lVar12 + 1) == '\0') {
        lVar23 = lVar23 + 1;
        goto LAB_0384ea10;
      }
      if (*(char *)(lVar12 + 2) == '\0') {
        lVar23 = lVar23 + 2;
        goto LAB_0384ea10;
      }
      lVar23 = lVar23 + 3;
    } while (lVar23 != 0x80001);
    lVar23 = 0;
LAB_0384ea10:
    iVar5 = (int)lVar23;
    if (*(int *)(param_1 + 0x18) <= (int)lVar23) {
      iVar5 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x10);
  lVar23 = *plVar26;
  local_100 = 0;
  local_108 = plVar25;
  if (lVar23 == 0) {
    local_d8 = malloc(0x10);
  }
  else {
    plVar13 = plVar25;
    if (plVar25 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar16 = (undefined8 *)(lVar23 + 8);
      if (lVar12 != 0) {
        puVar16 = (undefined8 *)(lVar12 + 0xa8);
      }
      plVar13 = (long *)*puVar16;
    }
    local_d8 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x10,8);
  }
  lVar23 = *param_2;
  *local_d8 = &PTR_LAB_04b5e5f8;
  local_d8[1] = lVar23;
  lVar23 = param_2[3];
  if (lVar23 == 0) {
    piVar18 = (int *)param_2[4];
    if (piVar18 != (int *)0x0) {
      if (*piVar18 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(piVar18 + 2);
      }
      *(undefined8 *)(param_1 + 0x60) = uVar19;
      lVar12 = param_2[4];
      local_c8 = piVar18;
      goto LAB_0384eb04;
    }
  }
  else {
    lVar12 = 0;
    *(long *)(param_1 + 0x60) = lVar23;
    local_d0 = lVar23;
LAB_0384eb04:
    *(long *)(param_1 + 0x68) = lVar12;
  }
  lVar23 = param_2[7];
  local_c0 = param_2[8];
  iVar4 = (int)param_2[9];
  iVar5 = *(int *)((long)param_2 + 0x4c);
  iVar3 = (int)param_2[10];
  iVar6 = *(int *)((long)param_2 + 0x54);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  local_e8 = CONCAT44(iVar3,iVar5);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar6);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar5 = (int)param_2[0xb];
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  local_b8 = CONCAT44(iVar5,iVar4);
  if (lVar23 != 0) {
    local_90 = *(uint *)(lVar23 + 0x48);
    if (local_90 != 0) {
      if (*(int *)(lVar23 + 0x48) == 0) {
        local_b0 = 0;
      }
      else {
        local_b0 = *(undefined8 *)(lVar23 + 8);
      }
      if (local_90 != 1) {
        if (*(uint *)(lVar23 + 0x48) < 2) {
          local_a8 = 0;
        }
        else {
          local_a8 = *(undefined8 *)(lVar23 + 0x10);
        }
        if (2 < local_90) {
          if (*(uint *)(lVar23 + 0x48) < 3) {
            local_a0 = 0;
          }
          else {
            local_a0 = *(undefined8 *)(lVar23 + 0x18);
          }
          if (local_90 != 3) {
            if (*(uint *)(lVar23 + 0x48) < 4) {
              local_98 = 0;
            }
            else {
              local_98 = *(undefined8 *)(lVar23 + 0x20);
            }
            if (4 < local_90) {
              puVar16 = (undefined8 *)(lVar23 + 0x28);
              uVar22 = 4;
              do {
                if ((uint)uVar22 < *(uint *)(lVar23 + 0x48)) {
                  puVar21 = puVar16;
                  if (3 < (uint)uVar22) {
                    puVar21 = (undefined8 *)(lVar23 + 8);
                  }
                  local_b0 = *puVar21;
                }
                else {
                  local_b0 = 0;
                }
                uVar22 = uVar22 + 1;
                puVar16 = puVar16 + 1;
              } while (local_90 != uVar22);
            }
          }
        }
      }
    }
  }
  FUN_03ec24c0(*(undefined8 *)(param_1 + 0x78),local_110);
  puVar8 = PTR_DAT_04bb2bc0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x78) + 0x18);
    if (0 < (int)uVar7) {
      lVar23 = *plVar26;
      sVar24 = (ulong)uVar7 * 0xe8 + 8;
      if (lVar23 == 0) {
        puVar15 = malloc(sVar24);
      }
      else {
        plVar13 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar23 + 8);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_0384edb8;
        }
        puVar15 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar24,8);
      }
      if (puVar15 != (ulong *)0x0) {
        *puVar15 = (ulong)uVar7;
        lVar23 = 0;
        do {
          puVar16 = (undefined8 *)((long)puVar15 + lVar23 + 0x1c);
          *(undefined4 *)((long)puVar15 + lVar23 + 0x18) = 0x40;
          *(undefined1 *)((long)puVar15 + lVar23 + 0x5b) = 0;
          *(undefined8 **)((long)puVar15 + lVar23 + 0x10) = puVar16;
          if (puVar16 != &DAT_0407ebb1) {
            *(undefined1 *)puVar16 = 0;
          }
          *(undefined **)((long)puVar15 + lVar23 + 8) = puVar8 + 0x10;
          uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
          puVar16 = (undefined8 *)((long)puVar15 + lVar23 + 0x7c);
          *(undefined4 *)((long)puVar15 + lVar23 + 0x60) = uVar11;
          *(undefined8 **)((long)puVar15 + lVar23 + 0x70) = puVar16;
          *(undefined4 *)((long)puVar15 + lVar23 + 0x78) = 0x40;
          *(undefined1 *)((long)puVar15 + lVar23 + 0xbb) = 0;
          if (puVar16 != &DAT_0407ebb1) {
            *(undefined1 *)puVar16 = 0;
          }
          *(undefined **)((long)puVar15 + lVar23 + 0x68) = puVar8 + 0x10;
          uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
          lVar12 = lVar23 + 0xe8;
          *(undefined8 *)((long)puVar15 + lVar23 + 200) = 0;
          *(undefined4 *)((long)puVar15 + lVar23 + 0xc0) = uVar11;
          *(undefined4 *)((long)puVar15 + lVar23 + 0xd0) = 0;
          *(undefined8 **)((long)puVar15 + lVar23 + 0xe8) = &DAT_0407ebb1;
          *(undefined8 **)((long)puVar15 + lVar23 + 0xd8) = &DAT_0407ebb1;
          *(undefined8 **)((long)puVar15 + lVar23 + 0xe0) = &DAT_0407ebb1;
          lVar23 = lVar12;
        } while ((ulong)uVar7 * 0xe8 != lVar12);
        *(uint *)(param_1 + 0x80) = uVar7;
        *(ulong **)(param_1 + 0x88) = puVar15 + 1;
        plVar26 = (long *)PTR_DAT_04bb2698;
      }
    }
  }
LAB_0384edb8:
  local_1a5 = 0;
  puStack_1f0 = local_1e4;
  local_1e8 = 0x40;
  local_1e4[0] = 0;
  local_1f8 = (long *)(puVar8 + 0x10);
  local_1a0 = FUN_006bd550(&DAT_0407ebb1,0);
  puStack_190 = local_184;
  local_188 = 0x40;
  local_145 = 0;
  local_184[0] = 0;
  local_198 = (long *)(puVar8 + 0x10);
  local_140 = FUN_006bd550(&DAT_0407ebb1,0);
  local_138 = 0;
  local_130 = 0;
  local_118 = &DAT_0407ebb1;
  local_128 = &DAT_0407ebb1;
  puStack_120 = &DAT_0407ebb1;
  FUN_0384f010(param_1 + 0x80,&local_1f8);
  lVar23 = *param_2;
  *(long *)(param_1 + 0xa0) = lVar23;
  lVar23 = *(long *)(lVar23 + 0x50);
  if (lVar23 == 0) {
    bVar9 = false;
    *(undefined1 *)(param_1 + 0xac) = 0;
    bVar10 = false;
  }
  else {
    bVar9 = *(int *)(lVar23 + 0x80) != 0;
    *(bool *)(param_1 + 0xac) = bVar9;
    if ((((*(short *)(lVar23 + 0xa0) == 0) && (*(short *)(lVar23 + 0xa2) == 0)) &&
        (*(short *)(lVar23 + 0xa4) == 0)) &&
       ((*(short *)(lVar23 + 0xa6) == 0 && (*(short *)(lVar23 + 0xa8) == 0)))) {
      bVar10 = *(short *)(lVar23 + 0xaa) != 0;
    }
    else {
      bVar10 = true;
    }
  }
  *(bool *)(param_1 + 0xad) = bVar10;
  *(char *)(param_1 + 0xae) = bVar9 | bVar10;
  if (*(long *)(param_1 + 0x78) == 0) {
    return 1;
  }
  uVar7 = *(uint *)(*(long *)(param_1 + 0x78) + 0x18);
  if ((int)uVar7 < 1) {
    return 1;
  }
  lVar23 = *plVar26;
  sVar24 = (ulong)uVar7 * 0x28;
  if (lVar23 == 0) {
    puVar16 = malloc(sVar24);
  }
  else {
    if (plVar25 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar16 = (undefined8 *)(lVar23 + 8);
      if (lVar12 != 0) {
        puVar16 = (undefined8 *)(lVar12 + 0xa8);
      }
      plVar25 = (long *)*puVar16;
      if (plVar25 == (long *)0x0) goto LAB_0384ef84;
    }
    puVar16 = (undefined8 *)(**(code **)(*plVar25 + 0x30))(plVar25,sVar24,8);
  }
  if (puVar16 != (undefined8 *)0x0) {
    uVar17 = ((uint)((sVar24 - 0x28) / 0x28) & 0x7ffffff) + 1;
    uVar22 = (ulong)uVar17 & 3;
    puVar21 = puVar16;
    if ((uVar17 & 3) != 0) {
      puVar20 = puVar16;
      do {
        puVar21 = puVar20 + 5;
        *puVar20 = &PTR_LAB_04b5e738;
        puVar20[1] = &PTR_LAB_04b5e750;
        uVar22 = uVar22 - 1;
        puVar20 = puVar21;
      } while (uVar22 != 0);
    }
    if (0x77 < sVar24 - 0x28) {
      do {
        *puVar21 = &PTR_LAB_04b5e738;
        puVar21[1] = &PTR_LAB_04b5e750;
        puVar21[5] = &PTR_LAB_04b5e738;
        puVar21[6] = &PTR_LAB_04b5e750;
        puVar21[10] = &PTR_LAB_04b5e738;
        puVar21[0xb] = &PTR_LAB_04b5e750;
        puVar21[0xf] = &PTR_LAB_04b5e738;
        puVar21[0x10] = &PTR_LAB_04b5e750;
        puVar21 = puVar21 + 0x14;
      } while (puVar21 != puVar16 + (ulong)uVar7 * 5);
    }
    *(uint *)(param_1 + 0x90) = uVar7;
    *(undefined8 **)(param_1 + 0x98) = puVar16;
  }
LAB_0384ef84:
  uVar17 = 0;
  do {
    uVar1 = uVar17;
    if (*(uint *)(param_1 + 0x90) <= uVar17) {
      uVar1 = 0;
    }
    uVar2 = uVar17;
    if (*(uint *)(*(long *)(param_1 + 0x78) + 0x18) <= uVar17) {
      uVar2 = 0;
    }
    uVar17 = uVar17 + 1;
    *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x20) + (ulong)uVar2 * 0x10) + 0x128)
         = *(long *)(param_1 + 0x98) + (ulong)uVar1 * 0x28;
  } while (uVar7 != uVar17);
  return 1;
}

