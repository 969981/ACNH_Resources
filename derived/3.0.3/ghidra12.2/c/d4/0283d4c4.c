
void FUN_0283d4c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *__src;
  char cVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  code *pcVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  char *pcVar17;
  long local_1f0;
  ulong *local_1e8;
  char *local_1e0;
  uint *local_1d8;
  int local_1d0;
  char local_1cc [127];
  undefined1 local_14d;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 uStack_134;
  uint *local_130;
  char *local_100;
  ulong local_f8;
  int local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  char local_e4 [4];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 local_6d;
  
  puVar8 = (ushort *)param_1[2];
  if (puVar8 == (ushort *)0x0) {
    if (param_1[1] == 0) {
      return;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x20));
    return;
  }
  uVar6 = (uint)*(undefined8 *)puVar8;
  if ((uVar6 >> 10 & 1) == 0) {
    if ((uVar6 >> 9 & 1) != 0) {
      uVar12 = 1;
      goto LAB_0283d58c;
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      uVar12 = 3;
      goto LAB_0283d58c;
    }
    *(undefined4 *)(param_1 + 7) = 0;
    if (((((*puVar8 & 0x1ff) == 0) &&
         (uVar9 = (**(code **)(*(long *)(puVar8 + 8) + 0x10))(), (uVar9 & 1) == 0)) &&
        (uVar9 = (**(code **)(*(long *)(param_1[2] + 0x30) + 0x10))(), (uVar9 & 1) == 0)) &&
       ((*(byte *)(param_1[2] + 1) & 0x60) != 0)) {
      uVar12 = 4;
      goto LAB_0283d58c;
    }
  }
  else {
    uVar12 = 2;
LAB_0283d58c:
    *(undefined4 *)(param_1 + 7) = uVar12;
  }
  puVar4 = PTR_DAT_04bb46b0;
  uVar6 = *(uint *)(param_1 + 7);
  if (4 < uVar6) {
    uVar6 = 0;
  }
  pcVar13 = *(code **)((long)&PTR_FUN_04a91770 +
                      (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5));
  if ((pcVar13 != (code *)0x0) && (*(long *)PTR_DAT_04bb46b0 != 0)) {
    (*pcVar13)();
  }
  local_1e8 = (ulong *)param_1[2];
  local_1f0 = *param_1;
  uVar9 = *local_1e8;
  if (((uint)uVar9 >> 0xe & 1) != 0) {
    if (*(long *)PTR_DAT_04bb46a8 == 0) {
      if ((int)local_1e8[1] == 0) {
        *(undefined4 *)(local_1e8 + 1) = 7;
      }
    }
    else {
      FUN_026d189c();
    }
  }
  if ((uVar9 & 0xf) == 0) {
LAB_0283d680:
    if ((*local_1e8 & 0xf) == 1) {
      FUN_026ebca0();
    }
    puVar3 = PTR_DAT_04bb46a8;
    if ((uVar9 & 0x70) == 0) goto LAB_0283df48;
    if (DAT_055a1b58 == 0 && DAT_055a1b60 == 0) {
LAB_0283dd14:
      if (((*(byte *)((long)local_1e8 + 0x54) >> 1 & 1) == 0) &&
         (((uint)*local_1e8 >> 0xf & 1) == 0)) {
        local_100 = (char *)0x100000000;
        local_f8 = 0x300000002;
        uVar16 = (*local_1e8 >> 4 & 7) - 1;
        local_f0 = 4;
        if (uVar16 < 5) {
          iVar7 = *(int *)(local_e4 + uVar16 * 4 + -0x1c);
          nn::os::GetSystemTick();
          uVar16 = FUN_028bdcc0();
          if ((((uVar16 & 1) != 0) && (*(long *)PTR_DAT_04bb2268 != 0)) &&
             (*(long *)PTR_DAT_04bb48c8 != 0)) {
            local_1e0 = (char *)((ulong)local_1e0 & 0xffffffff00000000);
            if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) & 1) != 0) {
              FUN_008122f0();
            }
            FUN_026cb020();
            uVar16 = (*(code *)(&PTR_FUN_04a922a0)[iVar7])();
            nn::os::GetSystemTick();
            if ((uVar16 & 1) != 0) {
              if (*(long *)puVar4 != 0) {
                FUN_026f64f0();
              }
              *(uint *)((long)local_1e8 + 0x54) = *(uint *)((long)local_1e8 + 0x54) | 2;
              goto LAB_0283ddd8;
            }
          }
        }
        goto LAB_0283e0a8;
      }
LAB_0283ddd8:
      local_100 = &LAB_02835540;
      local_f8 = 0;
      local_f0 = 0x2835978;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_e4[0] = '\0';
      local_e4[1] = '\0';
      local_e4[2] = 0;
      local_e4[3] = 0;
      local_e0 = &LAB_02835a54;
      uStack_d8 = 0;
      uVar16 = (*local_1e8 >> 4 & 7) - 1;
      local_d0 = &LAB_02835acc;
      uStack_c8 = 0;
      local_c0 = &LAB_02835b44;
      uStack_b8 = 0;
      if (4 < uVar16) {
LAB_0283e090:
        if ((int)local_1e8[1] == 0) {
          *(int *)(local_1e8 + 1) = 7;
        }
LAB_0283e0b8:
        lVar10 = *(long *)PTR_DAT_04bb46a8;
        goto joined_r0x0283e0c4;
      }
      lVar10 = uVar16 * 0x10;
      pcVar13 = *(code **)(local_e4 + lVar10 + -0x1c);
      uVar16 = *(ulong *)(local_e4 + lVar10 + -0x14) & 1;
      if (uVar16 != 0 || pcVar13 != (code *)0x0) {
        if (uVar16 != 0) {
          pcVar13 = *(code **)(pcVar13 +
                              *(long *)(local_1cc +
                                       ((long)*(ulong *)(local_e4 + lVar10 + -0x14) >> 1) + -0x24));
        }
        uVar16 = (*pcVar13)();
        if ((uVar16 & 1) == 0) goto LAB_0283e090;
      }
      if (((*(long *)puVar4 != 0) &&
          (lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x20))(),
          lVar10 != 0)) && (*(long *)PTR_DAT_04bc37f0 != 0)) {
        *(undefined4 *)(*(long *)PTR_DAT_04bc37f0 + 8) = *(undefined4 *)(lVar10 + 0x97d458);
      }
      lVar10 = *(long *)PTR_DAT_04bb27d0;
      if (((lVar10 != 0) && (*(long *)(lVar10 + 0x28) != 0)) && (*(int *)(lVar10 + 0x80) == 1)) {
LAB_0283e0a8:
        if ((int)local_1e8[1] == 0) {
          *(undefined4 *)(local_1e8 + 1) = 7;
        }
        goto LAB_0283e0b8;
      }
      uVar16 = (*local_1e8 >> 4 & 7) - 1;
      local_100 = &LAB_02835ef0;
      local_f8 = 0;
      local_f0 = 0x28361b0;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_e4[0] = '\0';
      local_e4[1] = '\0';
      local_e4[2] = 0;
      local_e4[3] = 0;
      local_e0 = &LAB_028361f4;
      uStack_d8 = 0;
      local_d0 = &LAB_02836238;
      uStack_c8 = 0;
      local_c0 = &LAB_0283627c;
      uStack_b8 = 0;
      if (4 < uVar16) goto LAB_0283e0a8;
      lVar10 = uVar16 * 0x10;
      pcVar13 = *(code **)(local_e4 + lVar10 + -0x1c);
      uVar16 = *(ulong *)(local_e4 + lVar10 + -0x14) & 1;
      if (uVar16 != 0 || pcVar13 != (code *)0x0) {
        if (uVar16 != 0) {
          pcVar13 = *(code **)(pcVar13 +
                              *(long *)(local_1cc +
                                       ((long)*(ulong *)(local_e4 + lVar10 + -0x14) >> 1) + -0x24));
        }
        uVar16 = (*pcVar13)();
        if ((uVar16 & 1) == 0) goto LAB_0283e0b8;
      }
LAB_0283df48:
      if ((uVar9 & 0x180) != 0) {
        local_100 = &LAB_028364c0;
        local_f8 = 0;
        local_f0 = 0x2836518;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_e4[0] = '\0';
        local_e4[1] = '\0';
        local_e4[2] = 0;
        local_e4[3] = 0;
        local_e0 = &LAB_02836610;
        uStack_d8 = 0;
        uVar16 = (*local_1e8 >> 7 & 3) - 1;
        if (2 < uVar16) goto LAB_0283e0a8;
        lVar10 = uVar16 * 0x10;
        pcVar13 = *(code **)(local_e4 + lVar10 + -0x1c);
        uVar16 = *(ulong *)(local_e4 + lVar10 + -0x14) & 1;
        if (uVar16 != 0 || pcVar13 != (code *)0x0) {
          if (uVar16 != 0) {
            pcVar13 = *(code **)(pcVar13 +
                                *(long *)(local_1cc +
                                         ((long)*(ulong *)(local_e4 + lVar10 + -0x14) >> 1) + -0x24)
                                );
          }
          uVar16 = (*pcVar13)();
          if ((uVar16 & 1) == 0) goto LAB_0283e0b8;
        }
      }
      if (((uVar9 & 0x21f0) != 0) && (uVar6 = (uint)*local_1e8, (uVar6 >> 0xc & 1) == 0)) {
        lVar10 = *(long *)PTR_DAT_04bb46a8;
        if (lVar10 != 0) {
          if (DAT_055a1b70 == '\x01') {
            local_6d = 0;
            local_f0 = 0x80;
            local_f8 = (ulong)&uStack_ec;
            local_e4[2] = 0;
            local_138 = local_138 & 0xffffff00;
            local_100 = PTR_DAT_04bb2d88 + 0x10;
            uStack_ec = s_MovingMark_040882de._0_4_;
            uStack_e8 = s_MovingMark_040882de._4_4_;
            local_e4[0] = s_MovingMark_040882de[8];
            local_e4[1] = s_MovingMark_040882de[9];
            FUN_026d0f70(lVar10,&local_138,&local_100);
            if (local_138._0_1_ != false) {
              iVar7 = FUN_026d04b0(lVar10,&local_100);
              local_1e0 = (char *)CONCAT44(local_1e0._4_4_,iVar7);
              if (iVar7 != 1) goto LAB_0283e1a4;
            }
            DAT_055a1b70 = '\0';
            uVar6 = (uint)*local_1e8;
          }
          if ((uVar6 >> 0x13 & 1) == 0) {
            iVar7 = FUN_026d16c0(lVar10);
          }
          else {
            local_1e0 = (char *)CONCAT44(local_1e0._4_4_,1);
            iVar7 = FUN_026d17d8(lVar10,&local_1e0);
          }
          local_100 = (char *)CONCAT44(local_100._4_4_,iVar7);
          if (iVar7 == 1) {
            local_1e0 = (char *)0x0;
            local_1d8 = (uint *)0x0;
            lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x20))();
            puVar14 = (uint *)0x0;
            pcVar17 = (char *)0x0;
            if ((ulong)*(byte *)(lVar10 + 0x97d948) < 8) {
              lVar10 = lVar10 + (ulong)*(byte *)(lVar10 + 0x97d948) * 0x48;
              plVar1 = (long *)(lVar10 + 0x1e34c0);
              plVar2 = &DAT_0417bad0;
              if (*plVar1 != 0 || *(long *)(lVar10 + 0x1e34c8) != 0) {
                plVar2 = plVar1;
              }
              pcVar17 = (char *)*plVar2;
              puVar14 = (uint *)plVar2[1];
              local_1e0 = pcVar17;
              local_1d8 = puVar14;
            }
            if (pcVar17 != (char *)0x0 || puVar14 != (uint *)0x0) {
              local_138 = local_138 & 0xffffff00;
              local_100 = pcVar17;
              local_f8 = (ulong)puVar14;
              nn::account::GetUserExistence((bool *)&local_138,(Uid *)&local_100);
              if ((local_138._0_1_ != false) && (cVar5 = FUN_006b7b00(&local_1e0), cVar5 == '\x01'))
              {
                FUN_02683560(local_1e0,local_1d8);
              }
            }
            goto LAB_0283e1b8;
          }
        }
LAB_0283e1a4:
        if ((int)local_1e8[1] == 0) {
          *(undefined4 *)(local_1e8 + 1) = 7;
        }
      }
LAB_0283e1b8:
      if ((int)local_1e8[1] != 0) goto LAB_0283e1c8;
      uVar12 = 1;
      goto LAB_0283e1c4;
    }
    lVar10 = *(long *)PTR_DAT_04bb46a8;
    if (((lVar10 == 0) || (*(long *)puVar4 == 0)) ||
       (lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x20))(),
       lVar11 == 0)) {
LAB_0283dcd8:
      if ((int)local_1e8[1] == 0) {
        uVar12 = 7;
LAB_0283dce8:
        *(undefined4 *)(local_1e8 + 1) = uVar12;
      }
    }
    else {
      uVar16 = FUN_02818404(lVar11 + 0x1e34c0,&DAT_055a1b58);
      if (((uVar16 & 1) == 0) || (uVar6 = FUN_028189c8(lVar11 + 0x1e34c0,&DAT_055a1b58), 7 < uVar6))
      goto LAB_0283dcd8;
      local_6d = 0;
      local_f0 = 0x80;
      local_f8 = (ulong)&uStack_ec;
      uStack_ec = uStack_ec & 0xffffff00;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      FUN_006d8678(&local_1e0,"Moved");
      uVar16 = local_f8;
      (**(code **)(local_1e0 + 0x18))(&local_1e0);
      puVar14 = local_1d8;
      if ((uint *)uVar16 != local_1d8) {
        (**(code **)(local_1e0 + 0x18))(&local_1e0);
        lVar11 = 0;
        do {
          if (*(char *)((long)local_1d8 + lVar11) == '\0') goto LAB_0283d7d0;
          if (*(char *)((long)local_1d8 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283d7d0;
          }
          if (*(char *)((long)local_1d8 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283d7d0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283d7d0:
        iVar7 = (int)lVar11;
        if (local_f0 <= (int)lVar11) {
          iVar7 = local_f0 + -1;
        }
        memcpy((void *)uVar16,puVar14,(long)iVar7);
        *(char *)(uVar16 + (long)iVar7) = '\0';
      }
      if (*(char *)local_f8 != '\0') {
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar11 = 0;
        do {
          if (*(char *)(local_f8 + lVar11) == '\0') goto LAB_0283d860;
          if (*(char *)(local_f8 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283d860;
          }
          if (*(char *)(local_f8 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283d860;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283d860:
        if ((int)lVar11 < local_f0 + -1) {
          pcVar17 = (char *)(local_f8 + (long)(int)lVar11);
          pcVar17[0] = '/';
          pcVar17[1] = '\0';
        }
      }
      FUN_02701270(&local_100,5);
      iVar7 = FUN_026d0230(lVar10,&local_100);
      local_1e0 = (char *)CONCAT44(local_1e0._4_4_,iVar7);
      local_13c = 3;
      local_138 = 1;
      local_144 = 5;
      local_140 = 4;
      if (((iVar7 != 1) && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) goto LAB_0283dcd8;
      local_6d = 0;
      local_f0 = 0x80;
      local_f8 = (ulong)&uStack_ec;
      uStack_ec = uStack_ec & 0xffffff00;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      FUN_006d8678(&local_1e0,"Moved");
      uVar16 = local_f8;
      (**(code **)(local_1e0 + 0x18))(&local_1e0);
      puVar14 = local_1d8;
      if ((uint *)uVar16 != local_1d8) {
        (**(code **)(local_1e0 + 0x18))(&local_1e0);
        lVar11 = 0;
        do {
          if (*(char *)((long)local_1d8 + lVar11) == '\0') {
LAB_0283d9b8:
            iVar7 = (int)lVar11;
            goto LAB_0283d9bc;
          }
          if (*(char *)((long)local_1d8 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283d9b8;
          }
          if (*(char *)((long)local_1d8 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283d9b8;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar7 = 0;
LAB_0283d9bc:
        if (local_f0 <= iVar7) {
          iVar7 = local_f0 + -1;
        }
        memcpy((void *)uVar16,puVar14,(long)iVar7);
        *(char *)(uVar16 + (long)iVar7) = '\0';
      }
      if (*(char *)local_f8 != '\0') {
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar11 = 0;
        do {
          if (*(char *)(local_f8 + lVar11) == '\0') goto LAB_0283da58;
          if (*(char *)(local_f8 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283da58;
          }
          if (*(char *)(local_f8 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283da58;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283da58:
        if ((int)lVar11 < local_f0 + -1) {
          pcVar17 = (char *)(local_f8 + (long)(int)lVar11);
          pcVar17[0] = '/';
          pcVar17[1] = '\0';
        }
      }
      FUN_027014c0(&local_100,5);
      iVar7 = FUN_026d0230(lVar10,&local_100);
      local_1e0 = (char *)CONCAT44(local_1e0._4_4_,iVar7);
      local_13c = 3;
      local_138 = 1;
      local_144 = 5;
      local_140 = 4;
      if ((((iVar7 != 1) && (iVar7 != 3)) && (iVar7 != 4)) && (iVar7 != 5)) goto LAB_0283dcd8;
      local_6d = 0;
      local_f8 = (ulong)&uStack_ec;
      local_f0 = 0x80;
      local_1d0 = 0x80;
      local_14d = 0;
      local_1cc[0] = '\0';
      local_1e0 = PTR_DAT_04bb2d88 + 0x10;
      uStack_ec = uStack_ec & 0xffffff00;
      local_1d8 = (uint *)local_1cc;
      local_100 = local_1e0;
      FUN_006d8678(&local_138,"Moved");
      uVar16 = local_f8;
      (**(code **)(CONCAT44(uStack_134,local_138) + 0x18))(&local_138);
      puVar14 = local_130;
      if ((uint *)uVar16 != local_130) {
        (**(code **)(CONCAT44(uStack_134,local_138) + 0x18))(&local_138);
        lVar11 = 0;
        do {
          if (*(char *)((long)local_130 + lVar11) == '\0') goto LAB_0283dbac;
          if (*(char *)((long)local_130 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283dbac;
          }
          if (*(char *)((long)local_130 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283dbac;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283dbac:
        iVar7 = (int)lVar11;
        if (local_f0 <= (int)lVar11) {
          iVar7 = local_f0 + -1;
        }
        memcpy((void *)uVar16,puVar14,(long)iVar7);
        *(char *)(uVar16 + (long)iVar7) = '\0';
      }
      *(char *)local_1d8 = '\0';
      FUN_006d8678(&local_138,"Villager%d",uVar6);
      puVar14 = local_1d8;
      (**(code **)(CONCAT44(uStack_134,local_138) + 0x18))(&local_138);
      __src = local_130;
      if (puVar14 != local_130) {
        (**(code **)(CONCAT44(uStack_134,local_138) + 0x18))(&local_138);
        lVar11 = 0;
        do {
          if (*(char *)((long)local_130 + lVar11) == '\0') goto LAB_0283dc6c;
          if (*(char *)((long)local_130 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283dc6c;
          }
          if (*(char *)((long)local_130 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283dc6c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283dc6c:
        iVar7 = (int)lVar11;
        if (local_1d0 <= (int)lVar11) {
          iVar7 = local_1d0 + -1;
        }
        memcpy(puVar14,__src,(long)iVar7);
        *(char *)((long)puVar14 + (long)iVar7) = '\0';
      }
      local_138 = FUN_026d11f0(lVar10,&local_100,&local_1e0);
      if (local_138 == 1) {
        DAT_055a1b58 = 0;
        DAT_055a1b60 = 0;
        goto LAB_0283dd14;
      }
      if ((local_138 == 8) || (local_138 != 5)) goto LAB_0283dcd8;
      if ((int)local_1e8[1] == 0) {
        uVar12 = 4;
        goto LAB_0283dce8;
      }
    }
    lVar10 = *(long *)puVar3;
joined_r0x0283e0c4:
    if (lVar10 == 0) goto LAB_0283dcf8;
    FUN_026d189c();
  }
  else {
    uVar16 = (*local_1e8 & 0xf) - 1;
    if (uVar16 < 7) {
      if (((code *)(&PTR_LAB_04a916e0)[uVar16 * 2] == (code *)0x0) ||
         (uVar16 = (*(code *)(&PTR_LAB_04a916e0)[uVar16 * 2])(&local_1f0), (uVar16 & 1) != 0)) {
        if ((*(long *)puVar4 != 0) &&
           ((lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x10))(),
            lVar10 != 0 && (*(long *)PTR_DAT_04bc37f0 != 0)))) {
          *(undefined4 *)(*(long *)PTR_DAT_04bc37f0 + 8) = *(undefined4 *)(lVar10 + 0x97d458);
        }
        goto LAB_0283d680;
      }
    }
    else {
LAB_0283dcf8:
      if ((int)local_1e8[1] == 0) {
        uVar12 = 7;
LAB_0283e1c4:
        *(undefined4 *)(local_1e8 + 1) = uVar12;
      }
    }
  }
LAB_0283e1c8:
  if ((int)local_1e8[1] == 0) {
    *(undefined4 *)(local_1e8 + 1) = 7;
    if ((int)local_1e8[1] != 1) goto LAB_0283e214;
LAB_0283e1dc:
    uVar9 = (**(code **)(local_1e8[2] + 0x10))();
    if ((uVar9 & 1) == 0) goto LAB_0283e238;
    puVar15 = (undefined8 *)local_1e8[2];
  }
  else {
    if ((int)local_1e8[1] == 1) goto LAB_0283e1dc;
LAB_0283e214:
    uVar9 = (**(code **)(local_1e8[6] + 0x10))();
    if ((uVar9 & 1) == 0) goto LAB_0283e238;
    puVar15 = (undefined8 *)local_1e8[6];
  }
  (*(code *)*puVar15)();
LAB_0283e238:
  if ((((int)local_1e8[1] != 1) && (DAT_055a1b78 != 0)) && (*(char *)(DAT_055a1b78 + 0x3c) != '\0'))
  {
    *(undefined1 *)(DAT_055a1b78 + 0x3d) = 1;
    FUN_02833830();
  }
  *(uint *)((long)local_1e8 + 0x54) = *(uint *)((long)local_1e8 + 0x54) | 1;
  uVar6 = *(uint *)(param_1 + 7);
  if (4 < uVar6) {
    uVar6 = 0;
  }
  if (((code *)(&PTR_FUN_04a91780)[(long)(int)uVar6 * 4] != (code *)0x0) && (*(long *)puVar4 != 0))
  {
    (*(code *)(&PTR_FUN_04a91780)[(long)(int)uVar6 * 4])();
  }
  if (param_1[1] != 0) {
    nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x20));
  }
  return;
}

