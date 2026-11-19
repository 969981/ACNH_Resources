
void FUN_039b5fc0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  byte *local_b8;
  int local_b0;
  byte local_ac [63];
  undefined1 local_6d;
  
  local_108 = 0x40;
  local_c5 = 0;
  local_b0 = 0x40;
  puStack_110 = local_104;
  local_6d = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_ac[0] = 0;
  local_b8 = local_ac;
  local_c0 = local_118;
  (**(code **)(PTR_PTR_04c4bb48 + 0x18))(&PTR_PTR_04c4bb48);
  puVar1 = PTR_DAT_04c4bb50;
  (**(code **)(PTR_PTR_04c4bb78 + 0x18))(&PTR_PTR_04c4bb78);
  FUN_038d1270(&local_c0,"%s.%s",puVar1,PTR_s_gapkginfo_04c4bb80);
  FUN_039b6c20(&local_118,&local_c0);
  uVar6 = (**(code **)(*param_2 + 0x30))(param_2,&local_118,0);
  plVar8 = (long *)(param_1 + 8);
  FUN_03964240(&local_120,uVar6);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(local_120 + 0xc);
  if (*(int *)(param_1 + 0xa8) != *(int *)(local_120 + 0x10)) {
    (**(code **)(*plVar8 + 0x60))(plVar8,local_120);
  }
  FUN_03955fe0(0,plVar8,0,local_120 + (ulong)*(uint *)(local_120 + 0x14) + 0x30,0);
  uVar4 = *(uint *)(param_1 + 0x290);
  uVar17 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    uVar15 = uVar17 * 0x110 | 8;
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar9 = malloc(uVar15);
joined_r0x039b618c:
      if (puVar9 != (ulong *)0x0) {
        puVar10 = puVar9 + 1;
        *puVar9 = uVar17;
        puVar5 = PTR_PTR_04bb2238;
        puVar1 = PTR_DAT_04bb2f70 + 0x10;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        puVar9 = puVar10;
        do {
          *puVar9 = (ulong)&PTR_LAB_04b6a6c0;
          puVar9[1] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          local_b0 = 0x40;
          local_6d = 0;
          local_c0 = puVar1;
          local_b8 = local_ac;
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          pbVar13 = *(byte **)(puVar5 + 8);
          if (local_ac != pbVar13) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            lVar14 = 0;
            do {
              if (*(char *)(*(long *)(puVar5 + 8) + lVar14) == '\0') goto LAB_039b62dc;
              lVar7 = *(long *)(puVar5 + 8) + lVar14;
              if (*(char *)(lVar7 + 1) == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_039b62dc;
              }
              if (*(char *)(lVar7 + 2) == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_039b62dc;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_039b62dc:
            iVar3 = (int)lVar14;
            if (local_b0 <= (int)lVar14) {
              iVar3 = local_b0 + -1;
            }
            memcpy(local_ac,pbVar13,(long)iVar3);
            local_ac[iVar3] = 0;
          }
          local_c0 = puVar2;
          FUN_039127a0(puVar9 + 6,&local_c0,&PTR_PTR_04c4bbc8,&PTR_PTR_04c4bbc8,puVar9);
          local_6d = 0;
          local_b0 = 0x40;
          local_c0 = PTR_DAT_04bb2f70 + 0x10;
          local_b8 = local_ac;
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          pbVar13 = *(byte **)(puVar5 + 8);
          if (local_ac != pbVar13) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            lVar14 = 0;
            do {
              if (*(char *)(*(long *)(puVar5 + 8) + lVar14) == '\0') goto LAB_039b61e4;
              lVar7 = *(long *)(puVar5 + 8) + lVar14;
              if (*(char *)(lVar7 + 1) == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_039b61e4;
              }
              if (*(char *)(lVar7 + 2) == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_039b61e4;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_039b61e4:
            iVar3 = (int)lVar14;
            if (local_b0 <= (int)lVar14) {
              iVar3 = local_b0 + -1;
            }
            memcpy(local_ac,pbVar13,(long)iVar3);
            local_ac[iVar3] = 0;
          }
          local_c0 = PTR_DAT_04bb2bc0 + 0x10;
          FUN_039127a0(puVar9 + 0x14,&local_c0,&PTR_PTR_04c4bbd8,&PTR_PTR_04c4bbd8,puVar9);
          puVar9 = puVar9 + 0x22;
        } while (puVar9 != puVar10 + uVar17 * 0x22);
        *(uint *)(param_1 + 0x4a8) = uVar4;
        *(ulong **)(param_1 + 0x4b0) = puVar10;
      }
    }
    else {
      plVar8 = param_3;
      if (param_3 != (long *)0x0) {
LAB_039b6168:
        puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar15,8);
        goto joined_r0x039b618c;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_039b6168;
    }
    uVar16 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x4b0);
      uVar11 = uVar16;
      if (*(uint *)(param_1 + 0x4a8) <= uVar16) {
        uVar11 = 0;
      }
      (**(code **)(PTR_PTR_04c4bba8 + 0x18))(&PTR_PTR_04c4bba8);
      FUN_0071b954(&local_c0,"%s_%02d",PTR_s_shader_04c4bbb0,uVar16);
      uVar6 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar6 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_c0);
      }
      lVar14 = lVar14 + (ulong)uVar11 * 0x110;
      *(undefined8 *)(lVar14 + 0x28) = uVar6;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      uVar12 = (uint)*local_b8;
      uVar11 = 0;
      if (*local_b8 != 0) {
        uVar11 = 0xffffffff;
        pbVar13 = local_b8;
        do {
          pbVar13 = pbVar13 + 1;
          uVar11 = crc32b(uVar11,uVar12,0x4c11db7);
          uVar12 = (uint)*pbVar13;
        } while (uVar12 != 0);
        uVar11 = ~uVar11;
      }
      *(uint *)(lVar14 + 0x1c) = uVar11;
      uVar16 = uVar16 + 1;
      plVar8 = (long *)(param_1 + 0x2e0);
      if (*(long *)(param_1 + 0x2e8) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 0x2e8) + 0x20);
      }
      *plVar8 = lVar14;
      *(long *)(param_1 + 0x2e8) = lVar14;
    } while (uVar16 != uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x2b0);
  uVar17 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    uVar15 = uVar17 * 0xa0 | 8;
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar9 = malloc(uVar15);
joined_r0x039b6530:
      if (puVar9 != (ulong *)0x0) {
        puVar10 = puVar9 + 1;
        *puVar9 = uVar17;
        puVar5 = PTR_PTR_04bb2238;
        puVar1 = PTR_DAT_04bb2f70 + 0x10;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        puVar9 = puVar10;
        do {
          *puVar9 = (ulong)&PTR_LAB_04b6a718;
          puVar9[1] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          local_b0 = 0x40;
          local_6d = 0;
          local_c0 = puVar1;
          local_b8 = local_ac;
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          pbVar13 = *(byte **)(puVar5 + 8);
          if (local_ac != pbVar13) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            lVar14 = 0;
            do {
              if (*(char *)(*(long *)(puVar5 + 8) + lVar14) == '\0') goto LAB_039b6588;
              lVar7 = *(long *)(puVar5 + 8) + lVar14;
              if (*(char *)(lVar7 + 1) == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_039b6588;
              }
              if (*(char *)(lVar7 + 2) == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_039b6588;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_039b6588:
            iVar3 = (int)lVar14;
            if (local_b0 <= (int)lVar14) {
              iVar3 = local_b0 + -1;
            }
            memcpy(local_ac,pbVar13,(long)iVar3);
            local_ac[iVar3] = 0;
          }
          local_c0 = puVar2;
          FUN_039127a0(puVar9 + 6,&local_c0,&PTR_PTR_04c4bc08,&PTR_PTR_04c4bc08,puVar9);
          puVar9 = puVar9 + 0x14;
        } while (puVar9 != puVar10 + uVar17 * 0x14);
        *(uint *)(param_1 + 0x4b8) = uVar4;
        *(ulong **)(param_1 + 0x4c0) = puVar10;
      }
    }
    else {
      plVar8 = param_3;
      if (param_3 != (long *)0x0) {
LAB_039b650c:
        puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar15,8);
        goto joined_r0x039b6530;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_039b650c;
    }
    uVar16 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x4c0);
      uVar11 = uVar16;
      if (*(uint *)(param_1 + 0x4b8) <= uVar16) {
        uVar11 = 0;
      }
      (**(code **)(PTR_PTR_04c4bbe8 + 0x18))(&PTR_PTR_04c4bbe8);
      FUN_0071b954(&local_c0,"%s_%02d",PTR_s_bfres_04c4bbf0,uVar16);
      uVar6 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar6 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_c0);
      }
      lVar14 = lVar14 + (ulong)uVar11 * 0xa0;
      *(undefined8 *)(lVar14 + 0x28) = uVar6;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      uVar12 = (uint)*local_b8;
      uVar11 = 0;
      if (*local_b8 != 0) {
        uVar11 = 0xffffffff;
        pbVar13 = local_b8;
        do {
          pbVar13 = pbVar13 + 1;
          uVar11 = crc32b(uVar11,uVar12,0x4c11db7);
          uVar12 = (uint)*pbVar13;
        } while (uVar12 != 0);
        uVar11 = ~uVar11;
      }
      *(uint *)(lVar14 + 0x1c) = uVar11;
      uVar16 = uVar16 + 1;
      plVar8 = (long *)(param_1 + 0x2e0);
      if (*(long *)(param_1 + 0x2e8) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 0x2e8) + 0x20);
      }
      *plVar8 = lVar14;
      *(long *)(param_1 + 0x2e8) = lVar14;
    } while (uVar16 != uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x2d0);
  if ((int)uVar4 < 1) goto LAB_039b6ae4;
  uVar17 = (ulong)uVar4 * 0x110 | 8;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar9 = malloc(uVar17);
joined_r0x039b67d8:
    if (puVar9 != (ulong *)0x0) {
      puVar10 = puVar9 + 1;
      *puVar9 = (ulong)uVar4;
      puVar5 = PTR_PTR_04bb2238;
      puVar1 = PTR_DAT_04bb2f70 + 0x10;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      puVar9 = puVar10;
      do {
        *puVar9 = (ulong)&PTR_LAB_04b6a770;
        puVar9[1] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        local_b0 = 0x40;
        local_6d = 0;
        local_c0 = puVar1;
        local_b8 = local_ac;
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
        pbVar13 = *(byte **)(puVar5 + 8);
        if (local_ac != pbVar13) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          lVar14 = 0;
          do {
            if (*(char *)(*(long *)(puVar5 + 8) + lVar14) == '\0') goto LAB_039b6920;
            lVar7 = *(long *)(puVar5 + 8) + lVar14;
            if (*(char *)(lVar7 + 1) == '\0') {
              lVar14 = lVar14 + 1;
              goto LAB_039b6920;
            }
            if (*(char *)(lVar7 + 2) == '\0') {
              lVar14 = lVar14 + 2;
              goto LAB_039b6920;
            }
            lVar14 = lVar14 + 3;
          } while (lVar14 != 0x80001);
          lVar14 = 0;
LAB_039b6920:
          iVar3 = (int)lVar14;
          if (local_b0 <= (int)lVar14) {
            iVar3 = local_b0 + -1;
          }
          memcpy(local_ac,pbVar13,(long)iVar3);
          local_ac[iVar3] = 0;
        }
        local_c0 = puVar2;
        FUN_039127a0(puVar9 + 6,&local_c0,&PTR_PTR_04c4bc38,&PTR_PTR_04c4bc38,puVar9);
        local_6d = 0;
        local_b0 = 0x40;
        local_c0 = PTR_DAT_04bb2f70 + 0x10;
        local_b8 = local_ac;
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
        pbVar13 = *(byte **)(puVar5 + 8);
        if (local_ac != pbVar13) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          lVar14 = 0;
          do {
            if (*(char *)(*(long *)(puVar5 + 8) + lVar14) == '\0') goto LAB_039b682c;
            lVar7 = *(long *)(puVar5 + 8) + lVar14;
            if (*(char *)(lVar7 + 1) == '\0') {
              lVar14 = lVar14 + 1;
              goto LAB_039b682c;
            }
            if (*(char *)(lVar7 + 2) == '\0') {
              lVar14 = lVar14 + 2;
              goto LAB_039b682c;
            }
            lVar14 = lVar14 + 3;
          } while (lVar14 != 0x80001);
          lVar14 = 0;
LAB_039b682c:
          iVar3 = (int)lVar14;
          if (local_b0 <= (int)lVar14) {
            iVar3 = local_b0 + -1;
          }
          memcpy(local_ac,pbVar13,(long)iVar3);
          local_ac[iVar3] = 0;
        }
        local_c0 = PTR_DAT_04bb2bc0 + 0x10;
        FUN_039127a0(puVar9 + 0x14,&local_c0,&PTR_PTR_04c4bc48,&PTR_PTR_04c4bc48,puVar9);
        puVar9 = puVar9 + 0x22;
      } while (puVar9 != puVar10 + (ulong)uVar4 * 0x22);
      *(uint *)(param_1 + 0x4c8) = uVar4;
      *(ulong **)(param_1 + 0x4d0) = puVar10;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_039b67b4:
      puVar9 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar17,8);
      goto joined_r0x039b67d8;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      param_3 = (long *)(lVar7 + 0xa8);
    }
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) goto LAB_039b67b4;
  }
  uVar16 = 0;
  do {
    lVar14 = *(long *)(param_1 + 0x4d0);
    uVar11 = uVar16;
    if (*(uint *)(param_1 + 0x4c8) <= uVar16) {
      uVar11 = 0;
    }
    (**(code **)(PTR_PTR_04c4bc18 + 0x18))(&PTR_PTR_04c4bc18);
    FUN_0071b954(&local_c0,"%s_%02d",PTR_s_agl_sharc_04c4bc20,uVar16);
    uVar6 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar6 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_c0);
    }
    lVar14 = lVar14 + (ulong)uVar11 * 0x110;
    *(undefined8 *)(lVar14 + 0x28) = uVar6;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    uVar12 = (uint)*local_b8;
    uVar11 = 0;
    if (*local_b8 != 0) {
      uVar11 = 0xffffffff;
      pbVar13 = local_b8;
      do {
        pbVar13 = pbVar13 + 1;
        uVar11 = crc32b(uVar11,uVar12,0x4c11db7);
        uVar12 = (uint)*pbVar13;
      } while (uVar12 != 0);
      uVar11 = ~uVar11;
    }
    *(uint *)(lVar14 + 0x1c) = uVar11;
    uVar16 = uVar16 + 1;
    plVar8 = (long *)(param_1 + 0x2e0);
    if (*(long *)(param_1 + 0x2e8) != 0) {
      plVar8 = (long *)(*(long *)(param_1 + 0x2e8) + 0x20);
    }
    *plVar8 = lVar14;
    *(long *)(param_1 + 0x2e8) = lVar14;
  } while (uVar16 != uVar4);
LAB_039b6ae4:
  local_c5 = 0;
  local_108 = 0x40;
  local_104[0] = 0;
  local_b0 = 0x40;
  puStack_110 = local_104;
  local_6d = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_ac[0] = 0;
  local_b8 = local_ac;
  local_c0 = local_118;
  (**(code **)(PTR_PTR_04c4bb48 + 0x18))(&PTR_PTR_04c4bb48);
  puVar1 = PTR_DAT_04c4bb50;
  (**(code **)(PTR_PTR_04c4bb88 + 0x18))(&PTR_PTR_04c4bb88);
  FUN_038d1270(&local_c0,"%s.%s",puVar1,PTR_s_gapkglist_04c4bb90);
  FUN_039b6c20(&local_118,&local_c0);
  uVar6 = (**(code **)(*param_2 + 0x30))(param_2,&local_118,0);
  plVar8 = (long *)(param_1 + 0x2d8);
  FUN_03964240(&local_128,uVar6);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(local_128 + 0xc);
  if (*(int *)(param_1 + 0x378) != *(int *)(local_128 + 0x10)) {
    (**(code **)(*plVar8 + 0x60))(plVar8,local_128);
  }
  FUN_03955fe0(0,plVar8,0,local_128 + (ulong)*(uint *)(local_128 + 0x14) + 0x30,0);
  return;
}

