
undefined8 FUN_02837970(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  void *__s2;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int *__s2_00;
  undefined *puVar19;
  undefined *puVar20;
  undefined *local_280;
  char *pcStack_278;
  undefined4 local_270;
  char local_26c [8];
  char local_264 [4];
  undefined1 local_260;
  undefined1 local_1ed;
  undefined *local_1e8;
  char *pcStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  int local_1cc;
  undefined *local_1c8;
  char *local_1c0;
  int local_1b8;
  char local_1b4 [127];
  undefined1 local_135;
  undefined *local_130;
  char *local_128;
  undefined4 local_120;
  char local_11c [127];
  undefined1 local_9d;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  int local_74;
  int local_70;
  int local_6c [3];
  
  puVar5 = PTR_DAT_04bb46a8;
  if (param_2 == (undefined4 *)0x0) {
    lVar18 = *(long *)PTR_DAT_04bb46a8;
    if (lVar18 == 0) {
      return 0;
    }
  }
  else {
    *param_2 = 0;
    lVar18 = *(long *)puVar5;
    if (lVar18 == 0) goto LAB_02837ab4;
  }
  puVar20 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    __s2 = (void *)(**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x20)
                   )();
    puVar19 = PTR_DAT_04bb2d88;
    if (((__s2 != (void *)0x0) && (*(long *)puVar20 != 0)) &&
       (__s2_00 = *(int **)(*(long *)puVar20 + 0x50), __s2_00 != (int *)0x0)) {
      local_9d = 0;
      local_128 = local_11c;
      local_120 = 0x80;
      local_1c0 = local_1b4;
      local_1b8 = 0x80;
      local_135 = 0;
      local_1b4[0] = '\0';
      local_1c8 = PTR_DAT_04bb2d88 + 0x10;
      local_11c[0] = '\0';
      local_130 = local_1c8;
      FUN_02701270(&local_130,0);
      *local_1c0 = '\0';
      if (*local_1c0 != '\0') {
        (**(code **)(local_1c8 + 0x18))(&local_1c8);
        lVar17 = 0;
        do {
          if (local_1c0[lVar17] == '\0') goto LAB_02837ad0;
          if (local_1c0[lVar17 + 1] == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_02837ad0;
          }
          if (local_1c0[lVar17 + 2] == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_02837ad0;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_02837ad0:
        if ((int)lVar17 < local_1b8 + -1) {
          (local_1c0 + (int)lVar17)[0] = '/';
          (local_1c0 + (int)lVar17)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1c8,0);
      pcVar7 = local_128;
      pcVar6 = local_1c0;
      local_280 = PTR_DAT_04bb2020 + 0x10;
      plVar9 = (long *)*param_1;
      pcStack_278 = local_128;
      pcStack_1e0 = local_1c0;
      local_1e8 = local_280;
      if (((plVar9 == (long *)0x0) || (*local_128 == '\0')) || (*local_1c0 == '\0')) {
        iVar8 = 7;
        puVar20 = PTR_DAT_04bb2020;
      }
      else {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          puVar10 = malloc(0x9b0e90);
        }
        else {
          puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x9b0e90,0x10);
        }
        puVar12 = puVar10 + 0x22;
        *(undefined8 *)((long)puVar10 + 6) = 0;
        *puVar10 = 0;
        *(undefined2 *)((long)puVar10 + 0xe) = 0xffff;
        puVar10[8] = 0;
        *(undefined8 *)((long)puVar10 + 0x46) = 0;
        *(undefined2 *)((long)puVar10 + 0x4e) = 0xffff;
        FUN_02781640(puVar12);
        puVar2 = puVar10 + 0xb67aa;
        FUN_02785ed4(puVar2);
        puVar10[0x1e] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x1c] = 0;
        puVar10[0x1d] = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x18] = 0;
        puVar10[0x19] = 0;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        puVar10[0x12] = 0;
        puVar10[0x13] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = 0;
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        *(undefined8 *)((long)puVar10 + 0x46) = 0;
        *(undefined2 *)((long)puVar10 + 0x4e) = 0xffff;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined2 *)((long)puVar10 + 0xe) = 0xffff;
        memset(puVar12,0,0x5b3c40);
        FUN_02781640(puVar12);
        memset(puVar2,0,0x3fd140);
        FUN_02785ed4(puVar2);
        puVar20 = PTR_DAT_04bb2698;
        lVar17 = *(long *)PTR_DAT_04bb2698;
        if (lVar17 == 0) {
          puVar12 = malloc(0x300);
        }
        else {
          plVar9 = (long *)*param_1;
          if (plVar9 == (long *)0x0) {
            lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar9 = (long *)(lVar17 + 8);
            if (lVar11 != 0) {
              plVar9 = (long *)(lVar11 + 0xa8);
            }
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              puVar12 = (undefined8 *)0x0;
              goto LAB_02837c98;
            }
          }
          puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x300,4);
        }
LAB_02837c98:
        *(undefined8 *)((long)puVar12 + 6) = 0;
        *puVar12 = 0;
        *(undefined2 *)((long)puVar12 + 0xe) = 0xffff;
        puVar12[8] = 0;
        *(undefined8 *)((long)puVar12 + 0x46) = 0;
        *(undefined2 *)((long)puVar12 + 0x4e) = 0xffff;
        memset(puVar12 + 0x20,0,0x200);
        uVar16 = 0;
        do {
          uVar3 = uVar16 << 2;
          uVar4 = uVar16 >> 0x1f;
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar1;
          *(undefined4 *)((long)(puVar12 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
        } while (uVar1 != 0x80);
        iVar8 = FUN_026eb860(puVar10,puVar12,0x9b0e90,&local_280,&local_1e8,0);
        if ((iVar8 == 1) && (iVar8 = memcmp(puVar10,__s2,0x9b0e90), iVar8 == 0)) {
          iVar8 = memcmp(puVar12,__s2_00,0x300);
          FUN_027c10a4((long)puVar10 + 0x97d3f4);
          FUN_027c10a4(puVar10 + 0x12fa72);
          FUN_028321ec(puVar10 + 0x12ddf0);
          FUN_0282cba8(puVar10 + 0x125ef1);
          FUN_0282cba8(puVar10 + 0x1175a9);
          FUN_0282cba8(puVar10 + 0x108c61);
          FUN_0282cba8(puVar10 + 0xfa319);
          FUN_0282cba8(puVar10 + 0xeb9d1);
          FUN_0282cba8(puVar10 + 0xdd089);
          FUN_0282cba8(puVar10 + 0xce741);
          FUN_0282cba8(puVar10 + 0xbfdf9);
          lVar17 = *(long *)puVar20;
          if (lVar17 == 0) {
            free(puVar10);
LAB_02837eec:
            lVar17 = *(long *)puVar20;
            if (lVar17 != 0) goto LAB_02837ef4;
            free(puVar12);
          }
          else {
            if (puVar10 != (undefined8 *)0x0) {
              plVar9 = (long *)FUN_038cb610(lVar17,puVar10);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x38))(plVar9,puVar10);
              }
              goto LAB_02837eec;
            }
LAB_02837ef4:
            plVar9 = (long *)FUN_038cb610(lVar17,puVar12);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar12);
            }
          }
          if (iVar8 != 0) goto LAB_02837f28;
          iVar8 = 1;
          puVar19 = PTR_DAT_04bb2d88;
          puVar20 = PTR_DAT_04bb2020;
        }
        else {
          FUN_027c10a4((long)puVar10 + 0x97d3f4);
          FUN_027c10a4(puVar10 + 0x12fa72);
          FUN_028321ec(puVar10 + 0x12ddf0);
          FUN_0282cba8(puVar10 + 0x125ef1);
          FUN_0282cba8(puVar10 + 0x1175a9);
          FUN_0282cba8(puVar10 + 0x108c61);
          FUN_0282cba8(puVar10 + 0xfa319);
          FUN_0282cba8(puVar10 + 0xeb9d1);
          FUN_0282cba8(puVar10 + 0xdd089);
          FUN_0282cba8(puVar10 + 0xce741);
          FUN_0282cba8(puVar10 + 0xbfdf9);
          lVar17 = *(long *)puVar20;
          if (lVar17 == 0) {
            free(puVar10);
LAB_02837de0:
            lVar17 = *(long *)puVar20;
            if (lVar17 == 0) {
              free(puVar12);
              goto LAB_02837f28;
            }
          }
          else if (puVar10 != (undefined8 *)0x0) {
            plVar9 = (long *)FUN_038cb610(lVar17,puVar10);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar10);
            }
            goto LAB_02837de0;
          }
          plVar9 = (long *)FUN_038cb610(lVar17,puVar12);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,puVar12);
          }
LAB_02837f28:
          lVar17 = *(long *)puVar20;
          if (lVar17 == 0) {
            puVar10 = malloc(0x9b0e90);
          }
          else {
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              param_1 = (long *)(lVar17 + 8);
              if (lVar11 != 0) {
                param_1 = (long *)(lVar11 + 0xa8);
              }
              param_1 = (long *)*param_1;
              if (param_1 == (long *)0x0) {
                puVar10 = (undefined8 *)0x0;
                goto LAB_02837f90;
              }
            }
            puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x9b0e90,0x10);
          }
LAB_02837f90:
          puVar12 = puVar10 + 0x22;
          *(undefined8 *)((long)puVar10 + 6) = 0;
          *puVar10 = 0;
          *(undefined2 *)((long)puVar10 + 0xe) = 0xffff;
          puVar10[8] = 0;
          *(undefined8 *)((long)puVar10 + 0x46) = 0;
          *(undefined2 *)((long)puVar10 + 0x4e) = 0xffff;
          FUN_02781640(puVar12);
          puVar2 = puVar10 + 0xb67aa;
          FUN_02785ed4(puVar2);
          puVar10[0x1e] = 0;
          puVar10[0x1f] = 0;
          puVar10[0x1c] = 0;
          puVar10[0x1d] = 0;
          puVar10[0x1a] = 0;
          puVar10[0x1b] = 0;
          puVar10[0x18] = 0;
          puVar10[0x19] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          *(undefined8 *)((long)puVar10 + 0x46) = 0;
          *(undefined2 *)((long)puVar10 + 0x4e) = 0xffff;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined2 *)((long)puVar10 + 0xe) = 0xffff;
          memset(puVar12,0,0x5b3c40);
          FUN_02781640(puVar12);
          memset(puVar2,0,0x3fd140);
          FUN_02785ed4(puVar2);
          pvVar13 = memcpy(puVar10,__s2,0x9b0e90);
          uVar16 = FUN_02840270(pvVar13,puVar10);
          puVar19 = PTR_DAT_04bb2d88;
          puVar20 = PTR_DAT_04bb2020;
          if ((uVar16 & 1) == 0) {
            iVar8 = 7;
          }
          else {
            if (*(short *)PTR_DAT_04bb21a8 == 999) {
              if (*(short *)((long)__s2_00 + 0xe) == 999) goto LAB_0283837c;
            }
            else if (*(short *)((long)__s2_00 + 0xe) != 999) {
LAB_0283837c:
              iVar8 = 7;
              if ((((__s2_00[1] == 0xa0028) && (*__s2_00 == 0xa0002)) && (__s2_00[2] == 2)) &&
                 ((short)__s2_00[3] == 2)) {
                uVar14 = FUN_026eb5c0(puVar10,__s2_00,0x9b0e90,&local_280,&local_1e8);
                iVar8 = (int)uVar14;
                local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar8);
                if (iVar8 == 1) {
                  uVar16 = FUN_02840270(uVar14,puVar10);
                  iVar8 = (int)local_88;
                  if ((uVar16 & 1) == 0) {
                    iVar8 = 7;
                  }
                }
              }
              goto LAB_028380c4;
            }
            iVar8 = 7;
          }
LAB_028380c4:
          FUN_027c10a4((long)puVar10 + 0x97d3f4);
          FUN_027c10a4(puVar10 + 0x12fa72);
          FUN_028321ec(puVar10 + 0x12ddf0);
          FUN_0282cba8(puVar10 + 0x125ef1);
          FUN_0282cba8(puVar10 + 0x1175a9);
          FUN_0282cba8(puVar10 + 0x108c61);
          FUN_0282cba8(puVar10 + 0xfa319);
          FUN_0282cba8(puVar10 + 0xeb9d1);
          FUN_0282cba8(puVar10 + 0xdd089);
          FUN_0282cba8(puVar10 + 0xce741);
          FUN_0282cba8(puVar10 + 0xbfdf9);
          if (*(long *)PTR_DAT_04bb2698 == 0) {
            free(puVar10);
          }
          else {
            plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar10);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar10);
            }
          }
        }
      }
      local_74 = iVar8;
      if (iVar8 == 1) {
        lVar17 = *(long *)puVar5;
        local_88 = puVar20 + 0x10;
        pcStack_80 = pcVar6;
        if (lVar17 != 0) {
          local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
          local_6c[0] = FUN_026d0950(lVar17,&local_98,&local_88);
          if (local_6c[0] == 1) {
            if ((int)local_98 != 0x300) {
              local_6c[0] = FUN_026d0728(lVar17,&local_88,0x300);
              if (local_6c[0] != 1) goto LAB_02838264;
            }
            lVar17 = *(long *)puVar5;
            local_98 = puVar20 + 0x10;
            pcStack_90 = pcVar7;
            if (lVar17 != 0) {
              local_6c[0] = 0;
              local_70 = FUN_026d0950(lVar17,local_6c,&local_98);
              if ((local_70 == 1) &&
                 ((local_6c[0] == 0x9b0e90 ||
                  (local_70 = FUN_026d0728(lVar17,&local_98), local_70 == 1)))) {
                iVar8 = 1;
                goto LAB_02838268;
              }
            }
          }
        }
LAB_02838264:
        iVar8 = 7;
      }
LAB_02838268:
      if (iVar8 == 1) {
        local_1d8 = 0;
        local_1d4 = 2;
        local_1e8 = (undefined *)0x0;
        pcStack_1e0 = (char *)0x0;
        local_1cc = iVar8;
        FUN_02785bd0(&local_1e8,(long)__s2 + 0x1e3938);
        local_270 = 0x80;
        local_1ed = 0;
        local_280 = puVar19 + 0x10;
        pcStack_278 = local_26c;
        local_260 = 0;
        local_26c[0] = s_landname_dat_040eaafa[0];
        local_26c[1] = s_landname_dat_040eaafa[1];
        local_26c[2] = s_landname_dat_040eaafa[2];
        local_26c[3] = s_landname_dat_040eaafa[3];
        local_26c[4] = s_landname_dat_040eaafa[4];
        local_26c[5] = s_landname_dat_040eaafa[5];
        local_26c[6] = s_landname_dat_040eaafa[6];
        local_26c[7] = s_landname_dat_040eaafa[7];
        local_264[0] = s_landname_dat_040eaafa[8];
        local_264[1] = s_landname_dat_040eaafa[9];
        local_264[2] = s_landname_dat_040eaafa[10];
        local_264[3] = s_landname_dat_040eaafa[0xb];
        iVar8 = FUN_026ce9d0(lVar18,&local_1e8,0x16,&local_280,0);
        if (iVar8 == 1) {
          if (param_2 == (undefined4 *)0x0) {
            return 1;
          }
          *param_2 = 1;
          return 1;
        }
      }
      else {
        if (iVar8 == 5) {
          if (param_2 == (undefined4 *)0x0) {
            return 0;
          }
          uVar15 = 4;
          goto LAB_02838338;
        }
        if (iVar8 == 2) {
          if (param_2 == (undefined4 *)0x0) {
            return 0;
          }
          uVar15 = 5;
          goto LAB_02838338;
        }
      }
      if (param_2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar15 = 7;
LAB_02838338:
      *param_2 = uVar15;
      return 0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_02837ab4:
  *param_2 = 7;
  return 0;
}

