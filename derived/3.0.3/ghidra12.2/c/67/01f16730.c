
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01f16730(long param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  short sVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  byte local_1d30 [4];
  undefined4 local_1d2c;
  undefined *local_1d28;
  undefined1 *local_1d20;
  undefined4 local_1d18;
  undefined1 local_1d14 [7];
  undefined1 local_1d0d;
  undefined1 local_1c95;
  long local_1c90;
  long *local_1c88;
  undefined8 *******local_1c80;
  undefined8 *******local_1c78;
  undefined8 *******local_1c70 [11];
  undefined8 *****local_1c18 [11];
  undefined8 ****local_1bc0 [7];
  undefined8 *******local_1b88 [4];
  undefined8 ***local_1b68 [11];
  undefined8 **local_1b10 [11];
  long local_1ab8 [3];
  undefined8 *******local_1aa0 [29];
  undefined8 *******local_19b8 [29];
  undefined8 *******local_18d0 [29];
  undefined8 *******local_17e8 [29];
  undefined8 *******local_1700 [29];
  undefined8 *******local_1618 [29];
  undefined8 *******local_1530 [29];
  undefined8 *******local_1448 [29];
  undefined8 *******local_1360 [29];
  undefined8 *******local_1278 [29];
  undefined8 *******local_1190 [29];
  undefined8 *******local_10a8 [29];
  undefined8 *******local_fc0 [29];
  undefined8 *******local_ed8 [29];
  undefined8 *******local_df0 [29];
  undefined8 *******local_d08 [29];
  undefined8 *******local_c20 [29];
  undefined8 *******local_b38 [29];
  undefined8 *******local_a50 [29];
  undefined8 *******local_968 [29];
  undefined8 *******local_880 [29];
  undefined8 ******local_798 [29];
  undefined8 *****local_6b0 [29];
  undefined8 ****local_5c8 [29];
  undefined8 ***local_4e0 [29];
  undefined8 **local_3f8 [29];
  undefined8 *local_310 [29];
  undefined8 local_228 [29];
  undefined1 auStack_140 [240];
  
  lVar15 = DAT_0534bef8;
  puVar2 = (uint *)(param_1 + 0xaf38);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_1c90 = CONCAT44(local_1c90._4_4_,0x13);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x13 & 1) != 0) {
      if (DAT_0534bef8 == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0xaf98) == '\0') {
        local_1c90 = 0;
        local_1c88 = (long *)0x0;
        local_1c80 = local_1c70;
        local_1c70[0] = (undefined8 *******)local_1c18;
        local_1c18[0] = local_1bc0;
        local_1bc0[0] = local_1b68;
        local_1b68[0] = local_1b10;
        local_1b10[0] = (undefined8 **)0x0;
        if (local_1ab8 != (long *)0x0) {
          local_1c90 = 0x500000000;
          local_1c88 = local_1ab8;
        }
        local_1c78 = local_1c80;
        if (DAT_05aed670 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar8 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        FUN_01c26b30(lVar15,&local_1c90,*(undefined4 *)(puVar20 + 7));
        if ((int)(uint)local_1c90 < 1) {
          return 0;
        }
        plVar16 = (long *)*local_1c88;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        lVar15 = plVar16[1];
        if ((uint)local_1c90 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = *local_1c88;
        }
        (**(code **)(*(long *)(lVar18 + 0x38) + 0x18))((long *)(lVar18 + 0x38));
        FUN_0074fda4(&local_1d28,"%s:%s",lVar15,*(undefined8 *)(lVar18 + 0x40));
        pvVar17 = *(void **)(param_2 + 8);
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        puVar7 = local_1d20;
        if (pvVar17 == local_1d20) {
          return 1;
        }
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        lVar15 = 0;
        do {
          if (*(char *)((long)local_1d20 + lVar15) == '\0') goto LAB_01f172e8;
          if (*(char *)((long)local_1d20 + lVar15 + 1) == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01f172e8;
          }
          if (*(char *)((long)local_1d20 + lVar15 + 2) == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01f172e8;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01f172e8:
        iVar8 = (int)lVar15;
        if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
          iVar8 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(pvVar17,puVar7,(long)iVar8);
        *(undefined1 *)((long)pvVar17 + (long)iVar8) = 0;
        return 1;
      }
      local_1c90 = 0;
      local_1c88 = (long *)0x0;
      local_1c70[0] = local_1b88;
      local_1b88[0] = local_1aa0;
      local_1c80 = local_1c70;
      local_1aa0[0] = local_19b8;
      local_19b8[0] = local_18d0;
      local_18d0[0] = local_17e8;
      local_17e8[0] = local_1700;
      local_1700[0] = local_1618;
      local_228[0] = 0;
      local_1618[0] = local_1530;
      local_1530[0] = local_1448;
      local_1448[0] = local_1360;
      local_1360[0] = local_1278;
      local_1278[0] = local_1190;
      local_1190[0] = local_10a8;
      local_10a8[0] = local_fc0;
      local_fc0[0] = local_ed8;
      local_ed8[0] = local_df0;
      local_df0[0] = local_d08;
      local_d08[0] = local_c20;
      local_c20[0] = local_b38;
      local_b38[0] = local_a50;
      local_a50[0] = local_968;
      local_968[0] = local_880;
      local_880[0] = local_798;
      local_798[0] = local_6b0;
      local_6b0[0] = local_5c8;
      local_5c8[0] = local_4e0;
      local_4e0[0] = local_3f8;
      local_3f8[0] = local_310;
      local_310[0] = local_228;
      if (auStack_140 != (undefined1 *)0x0) {
        local_1c90 = 0x1e00000000;
        local_1c88 = (long *)auStack_140;
      }
      local_1c78 = local_1c80;
      if (DAT_05aed670 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar8 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      local_1d2c._3_1_ = 0;
      local_1d0d = 0;
      local_1d18 = 8;
      uVar4 = *(undefined4 *)(puVar20 + 7);
      local_1d14[0] = 0;
      local_1d20 = local_1d14;
      local_1d28 = PTR_DAT_04bb3768 + 0x10;
      uVar12 = FUN_021d62e0(&local_1d28,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
      if ((uVar12 & 1) == 0) {
        local_1d2c = CONCAT13(local_1d2c._3_1_,CONCAT12(DAT_053e6f44._2_1_,(undefined2)DAT_053e6f44)
                             );
      }
      else {
        local_1d2c = CONCAT22((short)(CONCAT13(local_1d2c._3_1_,0x80000) >> 0x10),0x23);
        FUN_020fd3a0(&local_1d2c,&local_1d28);
      }
      if ((local_1d2c & 0xff) < 0x23) {
        uVar12 = (ulong)(local_1d2c & 0xffffff) & 0xff;
        if ((local_1d2c >> 8 & 0xff) <= (uint)(byte)PTR_DAT_04bc27f0[uVar12]) {
          uVar13 = 0;
          if ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) & 1 << (ulong)(local_1d2c >> 8 & 0x1f)) != 0
             ) {
            uVar13 = uVar12;
          }
          goto LAB_01f16fd4;
        }
      }
      uVar13 = 0;
LAB_01f16fd4:
      FUN_01c23f70(lVar15,&local_1c90,uVar4,uVar13,1,1);
      uVar10 = *puVar2;
      if ((int)uVar10 < (int)(uint)local_1c90) {
        if (uVar10 < (uint)local_1c90) {
          lVar15 = *(long *)((long)local_1c88 + (long)(int)uVar10 * 8);
        }
        else {
          lVar15 = 0;
        }
        uVar12 = FUN_0277d7b4(lVar15 + 0x10,param_1 + 0xaf3c);
        if ((uVar12 & 1) != 0) {
          if (*puVar2 < (uint)local_1c90) {
            lVar15 = *(long *)((long)local_1c88 + (long)(int)*puVar2 * 8);
          }
          else {
            lVar15 = 0;
          }
          local_1c95 = 0;
          local_1d18 = 0x80;
          local_1d20 = local_1d14;
          local_1d14[0] = 0;
          local_1d28 = PTR_DAT_04bb2d88 + 0x10;
          if (*(char *)(lVar15 + 0xcc) == '\0') {
            if (*(char *)(lVar15 + 0xcd) == '\0') {
              (**(code **)(*(long *)(lVar15 + 0x18) + 0x18))();
              uVar21 = *(undefined8 *)(lVar15 + 0x20);
              (**(code **)(*(long *)(lVar15 + 0x50) + 0x18))((long *)(lVar15 + 0x50));
              FUN_038d1270(&local_1d28,"%s:%s",uVar21,*(undefined8 *)(lVar15 + 0x58));
            }
            else {
              FUN_038d1270(&local_1d28,"BO_React_Watching_Fossil:201");
            }
          }
          else {
            FUN_038d1270(&local_1d28,"BO_React_Watching_Insect:102");
            DAT_0545404c = 1;
          }
          puVar19 = *(undefined1 **)(param_2 + 8);
          (**(code **)(local_1d28 + 0x18))(&local_1d28);
          puVar7 = local_1d20;
          if (puVar19 != local_1d20) {
            (**(code **)(local_1d28 + 0x18))(&local_1d28);
            lVar15 = 0;
            do {
              if (local_1d20[lVar15] == '\0') goto LAB_01f173cc;
              if (local_1d20[lVar15 + 1] == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_01f173cc;
              }
              if (local_1d20[lVar15 + 2] == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_01f173cc;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_01f173cc:
            iVar8 = (int)lVar15;
            if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
              iVar8 = *(int *)(param_2 + 0x10) + -1;
            }
            memcpy(puVar19,puVar7,(long)iVar8);
            puVar19[iVar8] = 0;
          }
          FUN_021b1d84(&DAT_053fe348,*puVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
          return 1;
        }
      }
      if (*(char *)(param_1 + 0xaf78) == '\0') {
        return 0;
      }
      local_1c95 = 0;
      local_1d18 = 0x80;
      local_1d20 = local_1d14;
      local_1d14[0] = 0;
      local_1d28 = PTR_DAT_04bb2d88 + 0x10;
      FUN_038d1270(&local_1d28,"BO_React_Watching_Insect:102");
      puVar19 = *(undefined1 **)(param_2 + 8);
      (**(code **)(local_1d28 + 0x18))(&local_1d28);
      puVar7 = local_1d20;
      if (puVar19 != local_1d20) {
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        lVar15 = 0;
        do {
          if (local_1d20[lVar15] == '\0') goto LAB_01f17284;
          if (local_1d20[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01f17284;
          }
          if (local_1d20[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01f17284;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01f17284:
        iVar8 = (int)lVar15;
        if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
          iVar8 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(puVar19,puVar7,(long)iVar8);
        puVar19[iVar8] = 0;
      }
      FUN_021b1d84(&DAT_053fe348,*puVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
      DAT_0545404c = 1;
      return 1;
    }
  }
  iVar8 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar20 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar9 = FUN_006bd550(*puVar20,0);
      iVar8 = 0;
      if ((iVar9 == 0x758f7eaf) && (iVar8 = 0, DAT_05aed670 != 0)) {
        iVar8 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar8 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_0529237c == iVar8) {
    if (*(char *)(param_1 + 0xaf98) == '\0') {
      return 0;
    }
    local_1d2c = FUN_02076ae0(param_1 + 0xaf3c);
    FUN_0074fda4(&local_1c90,"BO_React_Shopping_Gstore:%03d",local_1d2c + 1);
    pvVar17 = *(void **)(param_2 + 8);
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    plVar16 = local_1c88;
    if (pvVar17 == local_1c88) goto LAB_01f16ec4;
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_1c88 + lVar15) == '\0') goto LAB_01f16e9c;
      if (*(char *)((long)local_1c88 + lVar15 + 1) == '\0') goto LAB_01f16e90;
      if (*(char *)((long)local_1c88 + lVar15 + 2) == '\0') goto LAB_01f16e98;
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
  }
  else {
    iVar8 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar20 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar9 = FUN_006bd550(*puVar20,0);
        iVar8 = 0;
        if ((iVar9 == 0x758f7eaf) && (iVar8 = 0, DAT_05aed670 != 0)) {
          iVar8 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar8 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_0529239c != iVar8) {
      return 0;
    }
    if (*(char *)(param_1 + 0xaf98) == '\0') {
      return 0;
    }
    if (DAT_05574040 == 0) {
LAB_01f16c10:
      lVar15 = 0;
    }
    else {
      puVar20 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar18 = (**(code **)(*(long *)*puVar20 + 0x38))();
        lVar15 = 0;
        if (lVar18 != 0) {
          lVar15 = lVar18 + 0x70;
        }
      }
      else {
        if ((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0))
        goto LAB_01f16c10;
        lVar15 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
      }
    }
    if (DAT_04cd19d8 == 0) {
      pbVar14 = &DAT_0548e140;
LAB_01f16c74:
      if (*pbVar14 < 8) goto LAB_01f16cec;
LAB_01f16c80:
      if (DAT_0537d558 == (long *)0x0) {
LAB_01f16ce4:
        pbVar14 = &DAT_0548e168;
        goto LAB_01f16cec;
      }
      lVar18 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar18 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar14 = (byte *)(lVar18 + 0x471);
        }
      }
      local_1d30[0] = *pbVar14;
      if (7 < local_1d30[0]) goto LAB_01f16ce4;
    }
    else {
      pbVar14 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar14 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar14 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_01f16c74;
        }
        goto LAB_01f16c80;
      }
LAB_01f16cec:
      local_1d30[0] = *pbVar14;
      if (7 < local_1d30[0]) {
        local_1d30[0] = 0xff;
      }
    }
    bVar1 = true;
    lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_1d30,1);
    iVar8 = 0x35;
    if ((lVar15 != 0) && (lVar18 != 0)) {
      if ((*(long **)(lVar15 + 0xe7290) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(lVar15 + 0xe7290), puVar20 == (undefined8 *)0x0)) {
        uVar10 = 1;
        plVar16 = *(long **)(lVar18 + 0x17bb0);
        if (plVar16 != (long *)0x0) goto LAB_01f16d70;
LAB_01f16d8c:
        uVar11 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar20)();
        uVar10 = uVar10 ^ 1;
        plVar16 = *(long **)(lVar18 + 0x17bb0);
        if (plVar16 == (long *)0x0) goto LAB_01f16d8c;
LAB_01f16d70:
        if ((undefined8 *)*plVar16 == (undefined8 *)0x0) goto LAB_01f16d8c;
        uVar11 = (*(code *)**(undefined8 **)*plVar16)();
        uVar11 = uVar11 ^ 1;
      }
      iVar8 = FUN_02076ca0(param_1 + 0xaf3c,
                           *(long *)(lVar15 + 0xe7278) + *(long *)(lVar15 + 0xe7270),
                           *(long *)(lVar18 + 0x17b98) + *(long *)(lVar18 + 0x17b90));
      if ((((uVar11 & 1) == 0) && (*(long *)(lVar18 + 0x17bb0) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x17bb0) + 8), puVar20 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar20)();
      }
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0xe7290) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0xe7290) + 8), puVar20 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar20)();
      }
      bVar1 = 0x16 < iVar8;
      if (0x13 < iVar8) {
        iVar8 = iVar8 + 0x1e;
      }
    }
    iVar9 = 1;
    if (!bVar1) {
      iVar9 = iVar8 + 1;
    }
    FUN_0074fda4(&local_1c90,"BO_React_Shopping_Tailor:%03d",iVar9);
    pvVar17 = *(void **)(param_2 + 8);
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    plVar16 = local_1c88;
    if (pvVar17 == local_1c88) goto LAB_01f16ec4;
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_1c88 + lVar15) == '\0') goto LAB_01f16e9c;
      if (*(char *)((long)local_1c88 + lVar15 + 1) == '\0') goto LAB_01f16e90;
      if (*(char *)((long)local_1c88 + lVar15 + 2) == '\0') goto LAB_01f16e98;
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
  }
  lVar15 = 0;
  goto LAB_01f16e9c;
LAB_01f16e90:
  lVar15 = lVar15 + 1;
  goto LAB_01f16e9c;
LAB_01f16e98:
  lVar15 = lVar15 + 2;
LAB_01f16e9c:
  iVar8 = (int)lVar15;
  if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
    iVar8 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(pvVar17,plVar16,(long)iVar8);
  *(undefined1 *)((long)pvVar17 + (long)iVar8) = 0;
LAB_01f16ec4:
  lVar15 = FUN_021c9770(*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c),1);
  if (lVar15 != 0) {
    *(uint *)(lVar15 + 0x2ac) = *(uint *)(lVar15 + 0x2ac) | 1;
  }
  return 1;
}

