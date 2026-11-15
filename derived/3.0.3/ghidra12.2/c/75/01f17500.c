
void FUN_01f17500(long param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 *param_6,undefined2 *param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 *puVar20;
  undefined *local_1cd0;
  char *local_1cc8;
  undefined8 *******local_1cc0;
  undefined8 *******pppppppuStack_1cb8;
  undefined8 *******local_1cb0 [29];
  undefined8 *******local_1bc8 [29];
  undefined8 *******local_1ae0 [29];
  undefined8 *******local_19f8 [29];
  undefined8 *******local_1910 [29];
  undefined8 *******local_1828 [29];
  undefined8 *******local_1740 [29];
  undefined8 *******local_1658 [29];
  undefined8 *******local_1570 [29];
  undefined8 *******local_1488 [29];
  undefined8 *******local_13a0 [29];
  undefined8 *******local_12b8 [29];
  undefined8 *******local_11d0 [29];
  undefined8 *******local_10e8 [29];
  undefined8 *******local_1000 [29];
  undefined8 *******local_f18 [29];
  undefined8 *******local_e30 [29];
  undefined8 *******local_d48 [29];
  undefined8 *******local_c60 [29];
  undefined8 *******local_b78 [29];
  undefined8 *******local_a90 [29];
  undefined8 *******local_9a8 [29];
  undefined8 *******local_8c0 [29];
  undefined8 ******local_7d8 [29];
  undefined8 *****local_6f0 [29];
  undefined8 ****local_608 [29];
  undefined8 ***local_520 [29];
  undefined8 **local_438 [29];
  undefined8 *local_350 [29];
  undefined8 local_268 [29];
  undefined1 auStack_180 [240];
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  uint3 local_6c [3];
  
  puVar20 = (undefined8 *)(param_1 + 0x8208);
  *(undefined4 *)(param_1 + 0xaf38) = param_2;
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x50c);
  *(undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
  lVar12 = FUN_021c9770(uVar2,1);
  if (lVar12 != 0) {
    if ((param_3 & 1) == 0) {
      local_1cd0 = (undefined *)((ulong)local_1cd0 & 0xffffffff00000000);
      *(uint *)(lVar12 + 0x2ac) = *(uint *)(lVar12 + 0x2ac) & 0xfffffffe;
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 3;
      if (*(int *)(param_1 + 0xaf44) < 1) {
        lVar12 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar12 + 0x288);
        *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
        uVar4 = *(uint *)(lVar12 + 0x294);
        uVar3 = uVar10 ^ uVar4;
        *(uint *)(lVar12 + 0x290) = uVar4;
        *(uint *)(lVar12 + 0x294) = uVar10 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
        *(uint *)(param_1 + 0xaf44) = (uVar3 >> 0x1e) * 0x1e + 0x3c;
      }
      if (*(int *)(param_1 + 0xaf48) < 1) {
        lVar12 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar12 + 0x288);
        *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
        uVar3 = *(uint *)(lVar12 + 0x294);
        *(uint *)(lVar12 + 0x290) = uVar3;
        uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
        *(uint *)(lVar12 + 0x294) = uVar10;
        *(int *)(param_1 + 0xaf48) = (int)((ulong)uVar10 * 10 >> 0x20) * 0x1e + 600;
      }
    }
    else {
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffc;
      if (*(int *)(param_1 + 0xaf44) < 1) {
        lVar12 = *(long *)(param_1 + 8);
        uVar10 = *(uint *)(lVar12 + 0x288);
        *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
        uVar10 = uVar10 ^ uVar10 << 0xb;
        *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
        uVar3 = *(uint *)(lVar12 + 0x294);
        *(uint *)(lVar12 + 0x290) = uVar3;
        uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
        *(uint *)(lVar12 + 0x294) = uVar10;
        *(int *)(param_1 + 0xaf44) = (int)((ulong)uVar10 * 0x14 >> 0x20) * 0x1e + 0x4b0;
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x18);
  uVar13 = FUN_02085a50(lVar12,1,0);
  if ((uVar13 & 1) != 0) {
    *(undefined1 *)(lVar12 + 0x801) = 1;
    lVar17 = lVar12 + 0x10 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar12 + 0x294)) {
      lVar17 = lVar12 + 0x10;
    }
    *(undefined8 *)(lVar17 + 0xc) = 0;
    *(undefined4 *)(lVar17 + 0x14) = 0;
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
LAB_01f17890:
    lVar12 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar9 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar9 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar6 != 0) {
            lVar12 = *(long *)(*(long *)puVar6 + 0x330);
            iVar11 = 0;
            if (lVar12 != 0) {
              iVar11 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    puVar7 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x14) == iVar11) {
      if ((param_3 & 1) != 0) {
        pcVar18 = (char *)*puVar20;
        local_1cd0 = PTR_DAT_04bb2020 + 0x10;
        local_1cc8 = "React_Shopping";
        if (pcVar18 != "NNPC_HotelGuest") {
          iVar11 = 0xf;
          if (*(int *)(param_1 + 0x8210) < 0x10) {
            iVar11 = *(int *)(param_1 + 0x8210) + -1;
          }
          memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
          pcVar18[iVar11] = '\0';
        }
        pcVar19 = *(char **)(param_1 + 0x8260);
        (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
        pcVar18 = local_1cc8;
        if (pcVar19 != local_1cc8) {
          (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
          lVar12 = 0;
          do {
            if (local_1cc8[lVar12] == '\0') goto LAB_01f17de4;
            if (local_1cc8[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_01f17de4;
            }
            if (local_1cc8[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_01f17de4;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_01f17de4:
          iVar11 = (int)lVar12;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar12) {
            iVar11 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(pcVar19,pcVar18,(long)iVar11);
          pcVar19[iVar11] = '\0';
        }
        lVar12 = *(long *)PTR_DAT_04bb46b0;
        if (lVar12 != 0) {
          puVar20 = *(undefined8 **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
            lVar12 = (**(code **)(*(long *)*puVar20 + 0x38))();
            if (lVar12 != 0) {
              lVar12 = lVar12 + 0x70;
              goto LAB_01f17e60;
            }
          }
          else if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
                  (lVar12 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar12 != 0)) {
LAB_01f17e60:
            if ((*(long **)(lVar12 + 0x1a3d88) == (long *)0x0) ||
               (puVar20 = (undefined8 *)**(long **)(lVar12 + 0x1a3d88), puVar20 == (undefined8 *)0x0
               )) {
              uVar10 = 1;
            }
            else {
              uVar10 = (**(code **)*puVar20)();
              uVar10 = uVar10 ^ 1;
            }
            FUN_028b411c(&local_1cd0,*(long *)(lVar12 + 0x1a3d70) + *(long *)(lVar12 + 0x1a3d68),
                         param_1 + 0xaf5c,*(undefined4 *)(param_1 + 0xaf38));
            if ((((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x1a3d88) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar12 + 0x1a3d88) + 8),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
          }
        }
        FUN_01f18b84(param_1);
        goto LAB_01f18328;
      }
      pcVar18 = (char *)*puVar20;
      local_1cd0 = PTR_DAT_04bb2020 + 0x10;
      local_1cc8 = "";
      if (pcVar18 != "NNPC_HotelGuest") {
        iVar11 = 0xf;
        if (*(int *)(param_1 + 0x8210) < 0x10) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
        pcVar18[iVar11] = '\0';
      }
      puVar20 = *(undefined8 **)(param_1 + 0x8260);
      (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
      pcVar18 = local_1cc8;
      if ((char *)puVar20 == local_1cc8) {
        return;
      }
      (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
      lVar12 = 0;
      do {
        if (*(char *)((long)local_1cc8 + lVar12) == '\0') goto LAB_01f17dac;
        if (*(char *)((long)local_1cc8 + lVar12 + 1) == '\0') goto LAB_01f17da0;
        if (*(char *)((long)local_1cc8 + lVar12 + 2) == '\0') goto LAB_01f17da8;
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
    }
    else {
      lVar12 = *(long *)puVar6;
      iVar11 = 0;
      if (lVar12 != 0) {
        if (*(long *)(lVar12 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar9 = FUN_006bd550(*puVar14,0);
          iVar11 = 0;
          if (iVar9 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar6 != 0) {
              lVar12 = *(long *)(*(long *)puVar6 + 0x330);
              iVar11 = 0;
              if (lVar12 != 0) {
                iVar11 = *(int *)(lVar12 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar7 + 0x34) != iVar11) {
        return;
      }
      if ((param_3 & 1) != 0) {
        pcVar18 = (char *)*puVar20;
        local_1cd0 = PTR_DAT_04bb2020 + 0x10;
        local_1cc8 = "React_Shopping";
        if (pcVar18 != "NNPC_HotelGuest") {
          iVar11 = 0xf;
          if (*(int *)(param_1 + 0x8210) < 0x10) {
            iVar11 = *(int *)(param_1 + 0x8210) + -1;
          }
          memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
          pcVar18[iVar11] = '\0';
        }
        pcVar19 = *(char **)(param_1 + 0x8260);
        (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
        pcVar18 = local_1cc8;
        if (pcVar19 != local_1cc8) {
          (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
          lVar12 = 0;
          do {
            if (local_1cc8[lVar12] == '\0') goto LAB_01f17eec;
            if (local_1cc8[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_01f17eec;
            }
            if (local_1cc8[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_01f17eec;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_01f17eec:
          iVar11 = (int)lVar12;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar12) {
            iVar11 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(pcVar19,pcVar18,(long)iVar11);
          pcVar19[iVar11] = '\0';
        }
        puVar6 = PTR_DAT_04bb46b0;
        lVar12 = *(long *)PTR_DAT_04bb46b0;
        if (lVar12 != 0) {
          plVar16 = *(long **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
            plVar16 = (long *)*plVar16;
LAB_01f17f44:
            (**(code **)(*plVar16 + 0x38))();
          }
          else if ((plVar16 != (long *)0x0) &&
                  (plVar16 = (long *)plVar16[0x26], plVar16 != (long *)0x0)) goto LAB_01f17f44;
          lVar12 = *(long *)puVar6;
          if (lVar12 != 0) {
            puVar20 = *(undefined8 **)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
              lVar12 = (**(code **)(*(long *)*puVar20 + 0x38))();
              if (lVar12 != 0) {
                lVar12 = lVar12 + 0x70;
                goto LAB_01f17f9c;
              }
            }
            else if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
                    (lVar12 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar12 != 0)) {
LAB_01f17f9c:
              if ((*(long **)(lVar12 + 0x1a0da0) == (long *)0x0) ||
                 (puVar20 = (undefined8 *)**(long **)(lVar12 + 0x1a0da0),
                 puVar20 == (undefined8 *)0x0)) {
                uVar10 = 1;
              }
              else {
                uVar10 = (**(code **)*puVar20)();
                uVar10 = uVar10 ^ 1;
              }
              lVar17 = *(long *)(lVar12 + 0x1a0d88) + *(long *)(lVar12 + 0x1a0d80);
              if (*(int *)(param_1 + 0xaf38) < 10) {
                FUN_0289b680(&local_1cd0,lVar17,param_1 + 0xaf5c);
              }
              else {
                FUN_0289beb0(lVar17,param_1 + 0xaf5c,*(int *)(param_1 + 0xaf38) + -10);
              }
              if ((((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x1a0da0) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar12 + 0x1a0da0) + 8),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
            }
          }
        }
        FUN_01f19018(param_1);
LAB_01f18328:
        FUN_01f18ce0(param_1);
        return;
      }
      pcVar18 = (char *)*puVar20;
      local_1cd0 = PTR_DAT_04bb2020 + 0x10;
      local_1cc8 = "";
      if (pcVar18 != "NNPC_HotelGuest") {
        iVar11 = 0xf;
        if (*(int *)(param_1 + 0x8210) < 0x10) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
        pcVar18[iVar11] = '\0';
      }
      puVar20 = *(undefined8 **)(param_1 + 0x8260);
      (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
      pcVar18 = local_1cc8;
      if ((char *)puVar20 == local_1cc8) {
        return;
      }
      (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
      lVar12 = 0;
      do {
        if (*(char *)((long)local_1cc8 + lVar12) == '\0') goto LAB_01f17dac;
        if (*(char *)((long)local_1cc8 + lVar12 + 1) == '\0') goto LAB_01f17da0;
        if (*(char *)((long)local_1cc8 + lVar12 + 2) == '\0') goto LAB_01f17da8;
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
    }
  }
  else {
    local_1cd0 = (undefined *)CONCAT44(local_1cd0._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_01f17890;
    if ((param_3 & 1) != 0) {
      pcVar18 = (char *)*puVar20;
      local_1cd0 = PTR_DAT_04bb2020 + 0x10;
      local_1cc8 = "React_Watcing";
      if (pcVar18 != "NNPC_HotelGuest") {
        iVar11 = 0xf;
        if (*(int *)(param_1 + 0x8210) < 0x10) {
          iVar11 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
        pcVar18[iVar11] = '\0';
      }
      pcVar19 = *(char **)(param_1 + 0x8260);
      (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
      pcVar18 = local_1cc8;
      if (pcVar19 != local_1cc8) {
        (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
        lVar12 = 0;
        do {
          if (local_1cc8[lVar12] == '\0') goto LAB_01f17fcc;
          if (local_1cc8[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_01f17fcc;
          }
          if (local_1cc8[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_01f17fcc;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_01f17fcc:
        iVar11 = (int)lVar12;
        if (*(int *)(param_1 + 0x8268) <= (int)lVar12) {
          iVar11 = *(int *)(param_1 + 0x8268) + -1;
        }
        memcpy(pcVar19,pcVar18,(long)iVar11);
        pcVar19[iVar11] = '\0';
      }
      bVar8 = FUN_01f18360(param_1);
      *(byte *)(param_1 + 0xaf69) = bVar8 & 1;
      lVar12 = *(long *)PTR_DAT_04bb4828;
      if (lVar12 == 0) {
        return;
      }
      local_1cd0 = (undefined *)0x0;
      local_1cc8 = (undefined1 *)0x0;
      local_1cb0[0] = local_1bc8;
      local_1bc8[0] = local_1ae0;
      local_1cc0 = local_1cb0;
      local_1ae0[0] = local_19f8;
      local_19f8[0] = local_1910;
      local_1910[0] = local_1828;
      local_1828[0] = local_1740;
      local_1740[0] = local_1658;
      local_268[0] = 0;
      local_1658[0] = local_1570;
      local_1570[0] = local_1488;
      local_1488[0] = local_13a0;
      local_13a0[0] = local_12b8;
      local_12b8[0] = local_11d0;
      local_11d0[0] = local_10e8;
      local_10e8[0] = local_1000;
      local_1000[0] = local_f18;
      local_f18[0] = local_e30;
      local_e30[0] = local_d48;
      local_d48[0] = local_c60;
      local_c60[0] = local_b78;
      local_b78[0] = local_a90;
      local_a90[0] = local_9a8;
      local_9a8[0] = local_8c0;
      local_8c0[0] = local_7d8;
      local_7d8[0] = local_6f0;
      local_6f0[0] = local_608;
      local_608[0] = local_520;
      local_520[0] = local_438;
      local_438[0] = local_350;
      local_350[0] = local_268;
      if (auStack_180 != (undefined1 *)0x0) {
        local_1cd0 = (undefined *)0x1e00000000;
        local_1cc8 = auStack_180;
      }
      lVar17 = *(long *)PTR_DAT_04bb2720;
      pppppppuStack_1cb8 = local_1cc0;
      if (lVar17 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar11 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar11 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      local_75 = 0;
      local_80 = 8;
      uVar2 = *(undefined4 *)(puVar20 + 7);
      local_7c[0] = 0;
      puStack_88 = local_7c;
      local_90 = PTR_DAT_04bb3768 + 0x10;
      uVar13 = FUN_021d62e0(&local_90,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
      if ((uVar13 & 1) == 0) {
        local_6c[0] = *(uint3 *)PTR_DAT_04bb9cf0;
      }
      else {
        local_6c[0] = 0x80023;
        FUN_020fd3a0(local_6c,&local_90);
      }
      if ((local_6c[0] & 0xff) < 0x23) {
        uVar13 = (ulong)(uint)local_6c[0] & 0xff;
        if ((local_6c[0] >> 8 & 0xff) <= (uint)(byte)PTR_DAT_04bc27f0[uVar13]) {
          uVar15 = 0;
          if ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) & 1 << (ulong)(local_6c[0] >> 8 & 0x1f)) !=
              0) {
            uVar15 = uVar13;
          }
          goto LAB_01f18294;
        }
      }
      uVar15 = 0;
LAB_01f18294:
      FUN_01c23f70(lVar12,&local_1cd0,uVar2,uVar15,1,1);
      if (*(uint *)(param_1 + 0xaf38) < (uint)local_1cd0) {
        FUN_01f18914(param_1,&local_1cd0);
        return;
      }
      return;
    }
    pcVar18 = (char *)*puVar20;
    local_1cd0 = PTR_DAT_04bb2020 + 0x10;
    local_1cc8 = "";
    if (pcVar18 != "NNPC_HotelGuest") {
      iVar11 = 0xf;
      if (*(int *)(param_1 + 0x8210) < 0x10) {
        iVar11 = *(int *)(param_1 + 0x8210) + -1;
      }
      memcpy(pcVar18,"NNPC_HotelGuest",(long)iVar11);
      pcVar18[iVar11] = '\0';
    }
    puVar20 = *(undefined8 **)(param_1 + 0x8260);
    (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
    pcVar18 = local_1cc8;
    if ((char *)puVar20 == local_1cc8) {
      return;
    }
    (**(code **)(local_1cd0 + 0x18))(&local_1cd0);
    lVar12 = 0;
    do {
      if (*(char *)((long)local_1cc8 + lVar12) == '\0') goto LAB_01f17dac;
      if (*(char *)((long)local_1cc8 + lVar12 + 1) == '\0') goto LAB_01f17da0;
      if (*(char *)((long)local_1cc8 + lVar12 + 2) == '\0') goto LAB_01f17da8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
  }
  lVar12 = 0;
LAB_01f17dac:
  iVar11 = (int)lVar12;
  if (*(int *)(param_1 + 0x8268) <= (int)lVar12) {
    iVar11 = *(int *)(param_1 + 0x8268) + -1;
  }
  memcpy(puVar20,pcVar18,(long)iVar11);
  *(undefined1 *)((long)puVar20 + (long)iVar11) = 0;
  return;
LAB_01f17da0:
  lVar12 = lVar12 + 1;
  goto LAB_01f17dac;
LAB_01f17da8:
  lVar12 = lVar12 + 2;
  goto LAB_01f17dac;
}

