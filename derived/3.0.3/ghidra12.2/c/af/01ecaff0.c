
void FUN_01ecaff0(long param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 *param_6,undefined2 *param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined *local_1ca8;
  char *local_1ca0;
  undefined8 *******local_1c98;
  undefined8 *******pppppppuStack_1c90;
  undefined8 *******local_1c88 [29];
  undefined8 *******local_1ba0 [29];
  undefined8 *******local_1ab8 [29];
  undefined8 *******local_19d0 [29];
  undefined8 *******local_18e8 [29];
  undefined8 *******local_1800 [29];
  undefined8 *******local_1718 [29];
  undefined8 *******local_1630 [29];
  undefined8 *******local_1548 [29];
  undefined8 *******local_1460 [29];
  undefined8 *******local_1378 [29];
  undefined8 *******local_1290 [29];
  undefined8 *******local_11a8 [29];
  undefined8 *******local_10c0 [29];
  undefined8 *******local_fd8 [29];
  undefined8 *******local_ef0 [29];
  undefined8 *******local_e08 [29];
  undefined8 *******local_d20 [29];
  undefined8 *******local_c38 [29];
  undefined8 *******local_b50 [29];
  undefined8 *******local_a68 [29];
  undefined8 *******local_980 [29];
  undefined8 *******local_898 [29];
  undefined8 ******local_7b0 [29];
  undefined8 *****local_6c8 [29];
  undefined8 ****local_5e0 [29];
  undefined8 ***local_4f8 [29];
  undefined8 **local_410 [29];
  undefined8 *local_328 [29];
  undefined8 local_240 [29];
  undefined1 auStack_158 [248];
  
  puVar19 = (undefined8 *)(param_1 + 0x8208);
  lVar15 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xaf38) = param_2;
  if ((*(uint *)(lVar15 + 0x508) < 10) &&
     (lVar16 = (ulong)*(uint *)(lVar15 + 0x508) * 0xba0, (&DAT_053fee41)[lVar16] != '\0')) {
    *(undefined **)(*(long *)(lVar15 + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
    if ((param_3 & 1) == 0) {
      local_1ca8 = PTR_DAT_04bb2020 + 0x10;
      local_1ca0 = "TalkWatchPoint";
      FUN_02199310(&DAT_053fe348 + lVar16,&local_1ca8,0);
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 3;
      if (*(int *)(param_1 + 0xaf44) < 1) {
        lVar15 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar15 + 0x288);
        *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
        uVar3 = *(uint *)(lVar15 + 0x294);
        uVar2 = uVar10 ^ uVar3;
        *(uint *)(lVar15 + 0x290) = uVar3;
        *(uint *)(lVar15 + 0x294) = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
        *(uint *)(param_1 + 0xaf44) = (uVar2 >> 0x1e) * 0x1e + 0x3c;
      }
      if (*(int *)(param_1 + 0xaf48) < 1) {
        lVar15 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar15 + 0x288);
        *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
        uVar2 = *(uint *)(lVar15 + 0x294);
        *(uint *)(lVar15 + 0x290) = uVar2;
        uVar10 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2;
        *(uint *)(lVar15 + 0x294) = uVar10;
        *(int *)(param_1 + 0xaf48) = (int)((ulong)uVar10 * 10 >> 0x20) * 0x1e + 600;
      }
    }
    else {
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffc;
      if (*(int *)(param_1 + 0xaf44) < 1) {
        lVar15 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar15 + 0x288);
        *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
        uVar2 = *(uint *)(lVar15 + 0x294);
        *(uint *)(lVar15 + 0x290) = uVar2;
        uVar10 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2;
        *(uint *)(lVar15 + 0x294) = uVar10;
        *(int *)(param_1 + 0xaf44) = (int)((ulong)uVar10 * 0x14 >> 0x20) * 0x1e + 0x4b0;
      }
    }
  }
  else {
    *(undefined **)(*(long *)(lVar15 + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  uVar12 = FUN_02085a50(lVar15,1,0);
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)(lVar15 + 0x801) = 1;
    lVar16 = lVar15 + 0x10 + (ulong)*(uint *)(lVar15 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar15 + 0x294)) {
      lVar16 = lVar15 + 0x10;
    }
    *(undefined8 *)(lVar16 + 0xc) = 0;
    *(undefined4 *)(lVar16 + 0x14) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x41f00000;
  *(byte *)(param_1 + 0xaf98) = param_3 & 1;
  *(undefined4 *)(param_1 + 0xaf54) = param_4;
  *(undefined4 *)(param_1 + 0xaf58) = param_5;
  *(undefined4 *)(param_1 + 0xaf6c) = *param_6;
  *(undefined4 *)(param_1 + 0xaf70) = param_6[1];
  *(undefined4 *)(param_1 + 0xaf74) = param_6[2];
  *(undefined2 *)(param_1 + 0xaf3c) = *param_7;
  *(undefined1 *)(param_1 + 0xaf3e) = *(undefined1 *)(param_7 + 1);
  *(undefined1 *)(param_1 + 0xaf3f) = *(undefined1 *)((long)param_7 + 3);
  puVar7 = PTR_DAT_04bb6298;
  *(undefined4 *)(param_1 + 0xaf40) = *(undefined4 *)(param_7 + 2);
  puVar6 = PTR_DAT_04bb2720;
  sVar5 = *(short *)puVar7;
  if (sVar5 == -1) {
LAB_01ecb2c0:
    lVar15 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar9 = FUN_006bd550(*puVar13,0);
        iVar11 = 0;
        if (iVar9 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar6 != 0) {
            lVar15 = *(long *)(*(long *)puVar6 + 0x330);
            iVar11 = 0;
            if (lVar15 != 0) {
              iVar11 = *(int *)(lVar15 + 0x244);
            }
          }
        }
      }
    }
    puVar7 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x14) == iVar11) {
      if ((param_3 & 1) != 0) {
        pcVar17 = (char *)*puVar19;
        local_1ca8 = PTR_DAT_04bb2020 + 0x10;
        local_1ca0 = "React_Shopping";
        if (pcVar17 != "NNPC_Reaction_Shopping") {
          iVar11 = 0x16;
          if (*(int *)(param_1 + 0x8210) < 0x17) {
            iVar11 = *(int *)(param_1 + 0x8210) + -1;
          }
          memcpy(pcVar17,"NNPC_Reaction_Shopping",(long)iVar11);
          pcVar17[iVar11] = '\0';
        }
        pcVar18 = *(char **)(param_1 + 0x8260);
        (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
        pcVar17 = local_1ca0;
        if (pcVar18 != local_1ca0) {
          (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
          lVar15 = 0;
          do {
            if (local_1ca0[lVar15] == '\0') goto LAB_01ecb8f4;
            if (local_1ca0[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_01ecb8f4;
            }
            if (local_1ca0[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_01ecb8f4;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_01ecb8f4:
          iVar11 = (int)lVar15;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar15) {
            iVar11 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(pcVar18,pcVar17,(long)iVar11);
          pcVar18[iVar11] = '\0';
        }
        lVar15 = *(long *)PTR_DAT_04bb46b0;
        if (lVar15 != 0) {
          puVar19 = *(undefined8 **)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
            lVar15 = (**(code **)(*(long *)*puVar19 + 0x38))();
            if (lVar15 != 0) {
              lVar15 = lVar15 + 0x70;
              goto LAB_01ecb970;
            }
          }
          else if (((puVar19 != (undefined8 *)0x0) && ((long *)puVar19[0x26] != (long *)0x0)) &&
                  (lVar15 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar15 != 0)) {
LAB_01ecb970:
            if ((*(long **)(lVar15 + 0x1a3d88) == (long *)0x0) ||
               (puVar19 = (undefined8 *)**(long **)(lVar15 + 0x1a3d88), puVar19 == (undefined8 *)0x0
               )) {
              uVar10 = 1;
            }
            else {
              uVar10 = (**(code **)*puVar19)();
              uVar10 = uVar10 ^ 1;
            }
            FUN_028b411c(&local_1ca8,*(long *)(lVar15 + 0x1a3d70) + *(long *)(lVar15 + 0x1a3d68),
                         param_1 + 0xaf5c,*(undefined4 *)(param_1 + 0xaf38));
            if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0x1a3d88) != 0)) &&
               (puVar19 = *(undefined8 **)(*(long *)(lVar15 + 0x1a3d88) + 8),
               puVar19 != (undefined8 *)0x0)) {
              (**(code **)*puVar19)();
            }
          }
        }
        FUN_01ecc8b0(param_1);
        goto LAB_01ecbdf0;
      }
      pcVar17 = (char *)*puVar19;
      local_1ca8 = PTR_DAT_04bb2020 + 0x10;
      local_1ca0 = "";
      if (pcVar17 != "NNPC_Spot_Store") {
        iVar11 = 0xf;
        if (*(int *)(param_1 + 0x8210) < 0x10) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar17,"NNPC_Spot_Store",(long)iVar11);
        pcVar17[iVar11] = '\0';
      }
      puVar19 = *(undefined8 **)(param_1 + 0x8260);
      (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
      pcVar17 = local_1ca0;
      if ((char *)puVar19 == local_1ca0) {
        return;
      }
      (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
      lVar15 = 0;
      do {
        if (*(char *)((long)local_1ca0 + lVar15) == '\0') goto LAB_01ecb8bc;
        if (*(char *)((long)local_1ca0 + lVar15 + 1) == '\0') goto LAB_01ecb8b0;
        if (*(char *)((long)local_1ca0 + lVar15 + 2) == '\0') goto LAB_01ecb8b8;
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
    }
    else {
      lVar15 = *(long *)puVar6;
      iVar11 = 0;
      if (lVar15 != 0) {
        if (*(long *)(lVar15 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar9 = FUN_006bd550(*puVar13,0);
          iVar11 = 0;
          if (iVar9 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar6 != 0) {
              lVar15 = *(long *)(*(long *)puVar6 + 0x330);
              iVar11 = 0;
              if (lVar15 != 0) {
                iVar11 = *(int *)(lVar15 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar7 + 0x34) != iVar11) {
        return;
      }
      if ((param_3 & 1) != 0) {
        pcVar17 = (char *)*puVar19;
        local_1ca8 = PTR_DAT_04bb2020 + 0x10;
        local_1ca0 = "React_Shopping";
        if (pcVar17 != "NNPC_Reaction_Shopping") {
          iVar11 = 0x16;
          if (*(int *)(param_1 + 0x8210) < 0x17) {
            iVar11 = *(int *)(param_1 + 0x8210) + -1;
          }
          memcpy(pcVar17,"NNPC_Reaction_Shopping",(long)iVar11);
          pcVar17[iVar11] = '\0';
        }
        pcVar18 = *(char **)(param_1 + 0x8260);
        (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
        pcVar17 = local_1ca0;
        if (pcVar18 != local_1ca0) {
          (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
          lVar15 = 0;
          do {
            if (local_1ca0[lVar15] == '\0') goto LAB_01ecb9fc;
            if (local_1ca0[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_01ecb9fc;
            }
            if (local_1ca0[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_01ecb9fc;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_01ecb9fc:
          iVar11 = (int)lVar15;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar15) {
            iVar11 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(pcVar18,pcVar17,(long)iVar11);
          pcVar18[iVar11] = '\0';
        }
        lVar15 = *(long *)PTR_DAT_04bb46b0;
        if (lVar15 != 0) {
          puVar19 = *(undefined8 **)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
            lVar15 = (**(code **)(*(long *)*puVar19 + 0x38))();
            if (lVar15 != 0) {
              lVar15 = lVar15 + 0x70;
              goto LAB_01ecba78;
            }
          }
          else if (((puVar19 != (undefined8 *)0x0) && ((long *)puVar19[0x26] != (long *)0x0)) &&
                  (lVar15 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar15 != 0)) {
LAB_01ecba78:
            if ((*(long **)(lVar15 + 0x1a0da0) == (long *)0x0) ||
               (puVar19 = (undefined8 *)**(long **)(lVar15 + 0x1a0da0), puVar19 == (undefined8 *)0x0
               )) {
              uVar10 = 1;
            }
            else {
              uVar10 = (**(code **)*puVar19)();
              uVar10 = uVar10 ^ 1;
            }
            lVar16 = *(long *)(lVar15 + 0x1a0d88) + *(long *)(lVar15 + 0x1a0d80);
            if (*(int *)(param_1 + 0xaf38) < 10) {
              FUN_0289b680(&local_1ca8,lVar16,param_1 + 0xaf5c);
            }
            else {
              FUN_0289beb0(lVar16,param_1 + 0xaf5c,*(int *)(param_1 + 0xaf38) + -10);
            }
            if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0x1a0da0) != 0)) &&
               (puVar19 = *(undefined8 **)(*(long *)(lVar15 + 0x1a0da0) + 8),
               puVar19 != (undefined8 *)0x0)) {
              (**(code **)*puVar19)();
            }
          }
        }
        FUN_01eccda8(param_1);
LAB_01ecbdf0:
        FUN_01ecca70(param_1);
        return;
      }
      pcVar17 = (char *)*puVar19;
      local_1ca8 = PTR_DAT_04bb2020 + 0x10;
      local_1ca0 = "";
      if (pcVar17 != "NNPC_Spot_Tailor") {
        iVar11 = 0x10;
        if (*(int *)(param_1 + 0x8210) < 0x11) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar17,"NNPC_Spot_Tailor",(long)iVar11);
        pcVar17[iVar11] = '\0';
      }
      puVar19 = *(undefined8 **)(param_1 + 0x8260);
      (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
      pcVar17 = local_1ca0;
      if ((char *)puVar19 == local_1ca0) {
        return;
      }
      (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
      lVar15 = 0;
      do {
        if (*(char *)((long)local_1ca0 + lVar15) == '\0') goto LAB_01ecb8bc;
        if (*(char *)((long)local_1ca0 + lVar15 + 1) == '\0') goto LAB_01ecb8b0;
        if (*(char *)((long)local_1ca0 + lVar15 + 2) == '\0') goto LAB_01ecb8b8;
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
    }
  }
  else {
    local_1ca8 = (undefined *)CONCAT44(local_1ca8._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_01ecb2c0;
    if ((param_3 & 1) != 0) {
      pcVar17 = (char *)*puVar19;
      local_1ca8 = PTR_DAT_04bb2020 + 0x10;
      local_1ca0 = "React_Watcing";
      if (pcVar17 != "NNPC_Reaction_Watching") {
        iVar11 = 0x16;
        if (*(int *)(param_1 + 0x8210) < 0x17) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar17,"NNPC_Reaction_Watching",(long)iVar11);
        pcVar17[iVar11] = '\0';
      }
      pcVar18 = *(char **)(param_1 + 0x8260);
      (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
      pcVar17 = local_1ca0;
      if (pcVar18 != local_1ca0) {
        (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
        lVar15 = 0;
        do {
          if (local_1ca0[lVar15] == '\0') goto LAB_01ecbad8;
          if (local_1ca0[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01ecbad8;
          }
          if (local_1ca0[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01ecbad8;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01ecbad8:
        iVar11 = (int)lVar15;
        if (*(int *)(param_1 + 0x8268) <= (int)lVar15) {
          iVar11 = *(int *)(param_1 + 0x8268) + -1;
        }
        memcpy(pcVar18,pcVar17,(long)iVar11);
        pcVar18[iVar11] = '\0';
      }
      bVar8 = FUN_01ecbe20(param_1);
      *(byte *)(param_1 + 0xaf69) = bVar8 & 1;
      lVar15 = *(long *)PTR_DAT_04bb4828;
      if (lVar15 == 0) {
        return;
      }
      local_1ca8 = (undefined *)0x0;
      local_1ca0 = (undefined1 *)0x0;
      local_1c88[0] = local_1ba0;
      local_1ba0[0] = local_1ab8;
      local_1c98 = local_1c88;
      local_1ab8[0] = local_19d0;
      local_19d0[0] = local_18e8;
      local_18e8[0] = local_1800;
      local_1800[0] = local_1718;
      local_1718[0] = local_1630;
      local_240[0] = 0;
      local_1630[0] = local_1548;
      local_1548[0] = local_1460;
      local_1460[0] = local_1378;
      local_1378[0] = local_1290;
      local_1290[0] = local_11a8;
      local_11a8[0] = local_10c0;
      local_10c0[0] = local_fd8;
      local_fd8[0] = local_ef0;
      local_ef0[0] = local_e08;
      local_e08[0] = local_d20;
      local_d20[0] = local_c38;
      local_c38[0] = local_b50;
      local_b50[0] = local_a68;
      local_a68[0] = local_980;
      local_980[0] = local_898;
      local_898[0] = local_7b0;
      local_7b0[0] = local_6c8;
      local_6c8[0] = local_5e0;
      local_5e0[0] = local_4f8;
      local_4f8[0] = local_410;
      local_410[0] = local_328;
      local_328[0] = local_240;
      if (auStack_158 != (undefined1 *)0x0) {
        local_1ca8 = (undefined *)0x1e00000000;
        local_1ca0 = auStack_158;
      }
      lVar16 = *(long *)PTR_DAT_04bb2720;
      pppppppuStack_1c90 = local_1c98;
      if (lVar16 == 0) {
        puVar19 = &DAT_055c04a0;
      }
      else {
        puVar19 = &DAT_055c04a0;
        if (*(long *)(lVar16 + 0x330) != 0) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
          iVar11 = FUN_006bd550(*puVar19,0);
          puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar11 != 0x758f7eaf) {
            puVar19 = &DAT_055c04a0;
          }
        }
      }
      uVar4 = *(undefined4 *)(puVar19 + 7);
      lVar16 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      if (lVar16 == 0) {
        pbVar20 = PTR_DAT_04bb9cf0;
      }
      else if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
              (puVar19 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar19 == (undefined8 *)0x0)) {
        pbVar20 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
      }
      else {
        uVar12 = (**(code **)*puVar19)();
        pbVar20 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        if ((uVar12 & 1) != 0) {
          if (*(long *)(lVar16 + 0x28) != 0) {
            puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
            if (puVar19 != (undefined8 *)0x0) {
              (**(code **)*puVar19)();
            }
          }
        }
      }
      uVar12 = (ulong)*pbVar20;
      if ((uVar12 < 0x23) && (pbVar20[1] <= (byte)PTR_DAT_04bc27f0[uVar12])) {
        uVar14 = 0;
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) & 1 << (ulong)(pbVar20[1] & 0x1f)) != 0) {
          uVar14 = uVar12;
        }
      }
      else {
        uVar14 = 0;
      }
      FUN_01c23f70(lVar15,&local_1ca8,uVar4,uVar14,1,1);
      if (*(uint *)(param_1 + 0xaf38) < (uint)local_1ca8) {
        FUN_01ecc5d8(param_1,&local_1ca8);
        return;
      }
      return;
    }
    pcVar17 = (char *)*puVar19;
    local_1ca8 = PTR_DAT_04bb2020 + 0x10;
    local_1ca0 = "";
    if (pcVar17 != "NNPC_Spot_Museum") {
      iVar11 = 0x10;
      if (*(int *)(param_1 + 0x8210) < 0x11) {
        iVar11 = *(int *)(param_1 + 0x8210) + -1;
      }
      memcpy(pcVar17,"NNPC_Spot_Museum",(long)iVar11);
      pcVar17[iVar11] = '\0';
    }
    puVar19 = *(undefined8 **)(param_1 + 0x8260);
    (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
    pcVar17 = local_1ca0;
    if ((char *)puVar19 == local_1ca0) {
      return;
    }
    (**(code **)(local_1ca8 + 0x18))(&local_1ca8);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_1ca0 + lVar15) == '\0') goto LAB_01ecb8bc;
      if (*(char *)((long)local_1ca0 + lVar15 + 1) == '\0') goto LAB_01ecb8b0;
      if (*(char *)((long)local_1ca0 + lVar15 + 2) == '\0') goto LAB_01ecb8b8;
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
  }
  lVar15 = 0;
LAB_01ecb8bc:
  iVar11 = (int)lVar15;
  if (*(int *)(param_1 + 0x8268) <= (int)lVar15) {
    iVar11 = *(int *)(param_1 + 0x8268) + -1;
  }
  memcpy(puVar19,pcVar17,(long)iVar11);
  *(undefined1 *)((long)puVar19 + (long)iVar11) = 0;
  return;
LAB_01ecb8b0:
  lVar15 = lVar15 + 1;
  goto LAB_01ecb8bc;
LAB_01ecb8b8:
  lVar15 = lVar15 + 2;
  goto LAB_01ecb8bc;
}

