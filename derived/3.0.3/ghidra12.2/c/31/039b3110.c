
void FUN_039b3110(long param_1,long param_2,long param_3,long param_4,uint param_5,
                 undefined8 param_6,long *param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  long lVar14;
  short *psVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  char **ppcVar20;
  char *pcVar21;
  char *local_1058;
  char *local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  
  puVar3 = PTR_DAT_04bd1010;
  if (param_3 == 0) {
    puVar18 = *(undefined8 **)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x18);
    if ((param_5 >> 1 & 1) == 0) {
      if (iVar6 != 0) {
        lVar10 = (long)iVar6 << 3;
        do {
          (**(code **)(*(long *)*puVar18 + 8))();
          lVar10 = lVar10 + -8;
          puVar18 = puVar18 + 1;
        } while (lVar10 != 0);
      }
    }
    else if (iVar6 != 0) {
      lVar10 = (long)iVar6 << 3;
      do {
        uVar12 = *puVar18;
        lVar14 = *(long *)PTR_DAT_04bbdcb8;
        nn::os::LockMutex((MutexType *)(lVar14 + 0x1e0));
        uVar7 = *(int *)(lVar14 + 0x210) - 1;
        if (*(int *)(lVar14 + 0x210) < 1) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *(uint *)(lVar14 + 0x210) = uVar7;
          puVar11 = *(undefined4 **)(*(long *)(lVar14 + 0x218) + (ulong)uVar7 * 8);
        }
        uVar4 = *(undefined4 *)(*(long *)puVar3 + 0xc);
        *(undefined8 *)(puVar11 + 2) = uVar12;
        *puVar11 = 1;
        puVar11[1] = uVar4;
        if (*(int *)(lVar14 + 0x220) < *(int *)(lVar14 + 0x224)) {
          *(undefined4 **)(*(long *)(lVar14 + 0x228) + (long)*(int *)(lVar14 + 0x220) * 8) = puVar11
          ;
          *(int *)(lVar14 + 0x220) = *(int *)(lVar14 + 0x220) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1e0));
        puVar18 = puVar18 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    puVar3 = PTR_DAT_04bb4e50;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar12 = *(undefined8 *)(*(long *)puVar3 + 0x58);
    if (param_4 == 0) {
      lVar10 = 0;
      while( true ) {
        *(undefined8 *)((long)&local_1058 + lVar10) = 0;
        *(undefined1 *)((long)&local_1050 + lVar10) = 0;
        if (lVar10 == 0xfe0) break;
        *(undefined8 *)((long)&local_1048 + lVar10) = 0;
        *(undefined1 *)((long)&local_1040 + lVar10) = 0;
        lVar10 = lVar10 + 0x20;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      if ((lVar10 == 0) ||
         (uVar7 = FUN_039fe460(*(undefined8 *)(param_2 + 8),&local_1058,0xff,lVar10,
                               *(uint *)(param_1 + 0x78) >> 8 & 2), uVar7 == 0)) {
        if (*(long *)PTR_DAT_04bd15b8 == 0) goto LAB_039b3160;
        lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04bd15b8 + 8) + 0x5cb50);
        local_1058 = (char *)0x0;
        if (lVar10 != 0) {
          local_1058 = *(char **)(*(long *)(lVar10 + 0x28) + 0x10);
        }
        uVar7 = (uint)(local_1058 != (char *)0x0);
      }
      if (0 < (int)uVar7) {
        uVar8 = (ulong)uVar7;
        ppcVar20 = &local_1050;
        puVar3 = PTR_DAT_04bd1970 + 0x10;
        puVar2 = PTR_DAT_04bb2cc8 + 0x10;
        do {
          pcVar21 = ppcVar20[-1];
          cVar5 = *(char *)ppcVar20;
          lVar10 = *(long *)PTR_DAT_04bb2698;
          if (lVar10 == 0) {
            plVar19 = malloc(0x228);
          }
          else {
            plVar19 = param_7;
            if (param_7 == (long *)0x0) {
              lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar19 = (long *)(lVar10 + 8);
              if (lVar14 != 0) {
                plVar19 = (long *)(lVar14 + 0xa8);
              }
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) {
                plVar19 = (long *)0x0;
                goto LAB_039b3b8c;
              }
            }
            plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x228,8);
          }
LAB_039b3b8c:
          *(undefined4 *)(plVar19 + 2) = 0;
          *plVar19 = (long)puVar3;
          plVar19[1] = 0;
          plVar19[0xe] = 0;
          *(undefined8 *)((long)plVar19 + 0x76) = 0;
          *(undefined1 *)(plVar19 + 0xb) = 0;
          *(undefined4 *)(plVar19 + 0x18) = 0;
          plVar19[0x1f] = 0;
          *(undefined2 *)((long)plVar19 + 0xf2) = 0;
          plVar19[0x1d] = 0;
          *(undefined1 *)(plVar19 + 0x1e) = 0;
          plVar19[0xc] = 0;
          plVar19[0xd] = 0;
          plVar19[3] = 0;
          plVar19[4] = 0;
          plVar19[5] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[9] = 0;
          plVar19[10] = 0;
          plVar19[0x10] = 0;
          plVar19[0x11] = 0;
          plVar19[0x12] = 0;
          plVar19[0x13] = 0;
          plVar19[0x14] = 0;
          plVar19[0x15] = 0;
          plVar19[0x16] = 0;
          plVar19[0x17] = 0;
          plVar19[0x1b] = 0;
          plVar19[0x1c] = 0;
          plVar19[0x19] = (long)puVar2;
          plVar19[0x1a] = 0;
          FUN_003490b4(plVar19 + 0x20);
          *(undefined2 *)(plVar19 + 0x44) = 0;
          FUN_03ad1710(plVar19,pcVar21,cVar5 != '\0',param_7,uVar12);
          if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
            *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar19;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          }
          ppcVar20 = ppcVar20 + 2;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        plVar19 = malloc(0x228);
      }
      else {
        plVar19 = param_7;
        if (param_7 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar19 = (long *)(lVar10 + 8);
          if (lVar14 != 0) {
            plVar19 = (long *)(lVar14 + 0xa8);
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) {
            plVar19 = (long *)0x0;
            goto LAB_039b3ca4;
          }
        }
        plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x228,8);
      }
LAB_039b3ca4:
      *(undefined4 *)(plVar19 + 2) = 0;
      puVar3 = PTR_DAT_04bd1970;
      plVar19[0xc] = 0;
      plVar19[0xd] = 0;
      plVar19[0xe] = 0;
      *(undefined8 *)((long)plVar19 + 0x76) = 0;
      plVar19[3] = 0;
      plVar19[4] = 0;
      *(undefined1 *)(plVar19 + 0xb) = 0;
      *(undefined4 *)(plVar19 + 0x18) = 0;
      plVar19[0x1f] = 0;
      *(undefined2 *)((long)plVar19 + 0xf2) = 0;
      plVar19[5] = 0;
      plVar19[6] = 0;
      *plVar19 = (long)(puVar3 + 0x10);
      plVar19[1] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0x10] = 0;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0;
      plVar19[0x1b] = 0;
      plVar19[0x1c] = 0;
      puVar3 = PTR_DAT_04bb2cc8 + 0x10;
      plVar19[0x1d] = 0;
      *(undefined1 *)(plVar19 + 0x1e) = 0;
      plVar19[0x19] = (long)puVar3;
      plVar19[0x1a] = 0;
      FUN_003490b4(plVar19 + 0x20);
      *(undefined2 *)(plVar19 + 0x44) = 0;
      FUN_03ad1710(plVar19,param_4,0,param_7,uVar12);
      if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
        *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar19;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(param_3 + 0x120) +
                      (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x98) * 0x80);
    *(long *)(param_1 + 0x10) = lVar10;
    *(long *)(lVar10 + 0x80) = param_1;
  }
LAB_039b3160:
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0xff;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar10 = 0;
    lVar14 = (long)*(int *)(param_1 + 0x18) << 3;
    do {
      if (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + lVar10 * 8) + 8) + 0xf0) != -1)
      {
        FUN_003b47a0(*(undefined8 *)(param_1 + 0x10));
        local_1058 = *(char **)(param_1 + 0x10);
        local_1028 = 0;
        uStack_1020 = 0xffffffffffffffff;
        local_1008 = 0;
        uStack_1000 = 0xffffffffffffffff;
        local_fe8 = 0;
        uStack_fe0 = 0xffffffffffffffff;
        local_fc8 = 0;
        uStack_fc0 = 0xffffffffffffffff;
        local_1038 = 0;
        uStack_1030 = 8;
        local_1018 = 0;
        uStack_1010 = 8;
        local_ff8 = 0;
        uStack_ff0 = 8;
        local_fd8 = 0;
        uStack_fd0 = 8;
        local_fb8 = 0;
        uStack_fb0 = 8;
        local_1050 = (char *)CONCAT44(local_1050._4_4_,1);
        local_fa8 = 0;
        uStack_fa0 = 0xffffffffffffffff;
        local_1048 = 0;
        local_1040 = 0;
        FUN_003b0a38(&local_1058);
        *(char *)(param_1 + 0x195) = (char)lVar10;
        *(int *)(param_1 + 0x18c) = (int)local_1048;
        break;
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  FUN_039f7760(param_1 + 0x68,param_1,param_6);
  puVar3 = PTR_DAT_04bb2020;
  plVar19 = *(long **)(*(long *)PTR_DAT_04bbdcb8 + 0x40);
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  if (lVar10 != 0) {
    pcVar21 = PTR_DAT_04bb2020 + 0x10;
    local_1050 = "enable_color_buffer";
    local_1058 = pcVar21;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 4;
    }
    local_1050 = "gsys_enable_color_buffer";
    local_1058 = pcVar21;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 4;
    }
    local_1050 = "gsys_enable_area_env";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 1;
    }
    local_1050 = "gsys_enable_light_probe";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x40;
    }
    local_1050 = "enable_area_env_direct";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 2;
    }
    local_1050 = "gsys_enable_sssss";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 8;
    }
    local_1050 = "gsys_force_zprepass";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x10;
    }
    local_1050 = "gsys_dynamic_force_zprepass";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x20;
    }
    local_1050 = "gsys_deferred_shading_pass";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x200;
    }
    local_1050 = "gsys_deferred_shading_material";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x400;
    }
    local_1050 = "gsys_gbuffer_xlu";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x800;
    }
    local_1050 = "gsys_gbuffer_xlu_opa";
    local_1058 = puVar3 + 0x10;
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x1000;
    }
    local_1058 = puVar3 + 0x10;
    local_1050 = "gsys_gbuffer_after_fx";
    uVar8 = FUN_039b3d60(param_1,&local_1058,lVar10);
    uVar7 = *(uint *)(param_1 + 0x188);
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar7 | 0x2000;
      *(uint *)(param_1 + 0x188) = uVar7;
    }
    if (((uVar7 ^ 0xffffffff) & 3) == 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar10 + 0x58);
      if (lVar14 == 0) {
LAB_039b35d8:
        lVar14 = -1;
      }
      else {
        uVar8 = (ulong)*(ushort *)(lVar14 + 0xc);
        puVar17 = (uint *)((int *)(lVar14 + 8) + uVar8 * 4);
        uVar7 = *puVar17;
        if (*(int *)(lVar14 + 8) < (int)uVar7) {
          do {
            if (uVar7 < 0xd8) {
              uVar16 = (ulong)((byte)"gsys_area_env_index_diffuse"[0x1a - (ulong)(uVar7 >> 3)] >>
                              ((ulong)uVar7 & 7)) & 1;
            }
            else {
              uVar16 = 0;
            }
            uVar8 = (ulong)*(ushort *)(lVar14 + 8 + uVar8 * 0x10 + uVar16 * 2 + 4);
            puVar17 = (uint *)(lVar14 + 8 + uVar8 * 0x10);
            bVar1 = (int)uVar7 < (int)*puVar17;
            uVar7 = *puVar17;
          } while (bVar1);
        }
        psVar15 = *(short **)(puVar17 + 2);
        if ((*psVar15 != 0x1b) ||
           (((*(long *)(psVar15 + 1) != 0x6572615f73797367 ||
             *(long *)(psVar15 + 5) != 0x6e695f766e655f61) ||
            *(long *)(psVar15 + 9) != 0x666669645f786564) ||
            *(long *)((long)psVar15 + 0x15) != 0x657375666669645f)) goto LAB_039b35d8;
        lVar14 = ((long)puVar17 + (-0x18 - lVar14)) * 0x10000000 >> 0x20;
      }
      uVar9 = (undefined1)
              (int)*(float *)(*(long *)(lVar10 + 0x60) +
                             (ulong)*(ushort *)(*(long *)(lVar10 + 0x50) + lVar14 * 0x20 + 0x12));
    }
    else {
      uVar9 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x194) = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar10 = (long)*(int *)(param_1 + 0x18) << 3;
    puVar18 = *(undefined8 **)(param_1 + 0x20);
    do {
      FUN_03ad21a0(*puVar18,*(undefined8 *)(param_2 + 0x10),param_1,plVar19);
      lVar10 = lVar10 + -8;
      puVar18 = puVar18 + 1;
    } while (lVar10 != 0);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar10 + 0x58);
  if (lVar14 == 0) {
LAB_039b3708:
    uVar13 = 0xffff;
  }
  else {
    uVar8 = (ulong)*(ushort *)(lVar14 + 0xc);
    puVar17 = (uint *)((int *)(lVar14 + 8) + uVar8 * 4);
    uVar7 = *puVar17;
    if (*(int *)(lVar14 + 8) < (int)uVar7) {
      do {
        if (uVar7 < 0x98) {
          uVar16 = (ulong)((byte)"gsys_area_env_data0"[0x12 - (ulong)(uVar7 >> 3)] >>
                          ((ulong)uVar7 & 7)) & 1;
        }
        else {
          uVar16 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar14 + 8 + uVar8 * 0x10 + uVar16 * 2 + 4);
        puVar17 = (uint *)(lVar14 + 8 + uVar8 * 0x10);
        bVar1 = (int)uVar7 < (int)*puVar17;
        uVar7 = *puVar17;
      } while (bVar1);
    }
    psVar15 = *(short **)(puVar17 + 2);
    if ((*psVar15 != 0x13) ||
       ((*(long *)(psVar15 + 1) != 0x6572615f73797367 ||
        *(long *)(psVar15 + 5) != 0x61645f766e655f61) ||
        *(long *)((long)psVar15 + 0xd) != 0x30617461645f766e)) goto LAB_039b3708;
    uVar13 = (undefined2)((ulong)((long)puVar17 + (-0x18 - lVar14)) >> 4);
  }
  *(undefined2 *)(param_1 + 8) = uVar13;
  lVar14 = *(long *)(lVar10 + 0x58);
  if (lVar14 == 0) {
LAB_039b37e8:
    uVar13 = 0xffff;
  }
  else {
    uVar8 = (ulong)*(ushort *)(lVar14 + 0xc);
    puVar17 = (uint *)((int *)(lVar14 + 8) + uVar8 * 4);
    uVar7 = *puVar17;
    if (*(int *)(lVar14 + 8) < (int)uVar7) {
      do {
        if (uVar7 < 0x98) {
          uVar16 = (ulong)((byte)"gsys_area_env_data1"[0x12 - (ulong)(uVar7 >> 3)] >>
                          ((ulong)uVar7 & 7)) & 1;
        }
        else {
          uVar16 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar14 + 8 + uVar8 * 0x10 + uVar16 * 2 + 4);
        puVar17 = (uint *)(lVar14 + 8 + uVar8 * 0x10);
        bVar1 = (int)uVar7 < (int)*puVar17;
        uVar7 = *puVar17;
      } while (bVar1);
    }
    psVar15 = *(short **)(puVar17 + 2);
    if ((*psVar15 != 0x13) ||
       ((*(long *)(psVar15 + 1) != 0x6572615f73797367 ||
        *(long *)(psVar15 + 5) != 0x61645f766e655f61) ||
        *(long *)((long)psVar15 + 0xd) != 0x31617461645f766e)) goto LAB_039b37e8;
    uVar13 = (undefined2)((ulong)((long)puVar17 + (-0x18 - lVar14)) >> 4);
  }
  *(undefined2 *)(param_1 + 10) = uVar13;
  lVar10 = *(long *)(lVar10 + 0x58);
  if (lVar10 != 0) {
    uVar8 = (ulong)*(ushort *)(lVar10 + 0xc);
    puVar17 = (uint *)((int *)(lVar10 + 8) + uVar8 * 4);
    uVar7 = *puVar17;
    if (*(int *)(lVar10 + 8) < (int)uVar7) {
      do {
        if (uVar7 < 0xb8) {
          uVar16 = (ulong)((byte)"gsys_xlu_zprepass_alpha"[0x16 - (ulong)(uVar7 >> 3)] >>
                          ((ulong)uVar7 & 7)) & 1;
        }
        else {
          uVar16 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar10 + 8 + uVar8 * 0x10 + uVar16 * 2 + 4);
        puVar17 = (uint *)(lVar10 + 8 + uVar8 * 0x10);
        bVar1 = (int)uVar7 < (int)*puVar17;
        uVar7 = *puVar17;
      } while (bVar1);
    }
    psVar15 = *(short **)(puVar17 + 2);
    if ((*psVar15 == 0x17) &&
       ((*(long *)(psVar15 + 1) == 0x756c785f73797367 &&
        *(long *)(psVar15 + 5) == 0x7361706572707a5f) &&
        *(long *)((long)psVar15 + 0x11) == 0x6168706c615f7373)) {
      *(short *)(param_1 + 0xc) = (short)((ulong)((long)puVar17 + (-0x18 - lVar10)) >> 4);
      goto joined_r0x039b38d0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
joined_r0x039b38d0:
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))(plVar19,param_2,param_1);
  }
  return;
}

