
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01ed00a0(long param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  short sVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  byte *pbVar21;
  byte local_1d30 [4];
  int local_1d2c;
  undefined *local_1d28;
  char *local_1d20;
  undefined4 local_1d18;
  undefined1 local_1d14 [127];
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
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar19 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar8 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar19 = &DAT_055c04a0;
            }
          }
        }
        FUN_01c26b30(lVar15,&local_1c90,*(undefined4 *)(puVar19 + 7));
        if ((int)(uint)local_1c90 < 1) {
          return 0;
        }
        plVar16 = (long *)*local_1c88;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        lVar15 = plVar16[1];
        if ((uint)local_1c90 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *local_1c88;
        }
        (**(code **)(*(long *)(lVar12 + 0x38) + 0x18))((long *)(lVar12 + 0x38));
        FUN_0074fda4(&local_1d28,"%s:%s",lVar15,*(undefined8 *)(lVar12 + 0x40));
        pvVar17 = *(void **)(param_2 + 8);
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        pcVar7 = local_1d20;
        if (pvVar17 == local_1d20) {
          return 1;
        }
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        lVar15 = 0;
        do {
          if (*(char *)((long)local_1d20 + lVar15) == '\0') goto LAB_01ed0c4c;
          if (*(char *)((long)local_1d20 + lVar15 + 1) == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01ed0c4c;
          }
          if (*(char *)((long)local_1d20 + lVar15 + 2) == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01ed0c4c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01ed0c4c:
        iVar8 = (int)lVar15;
        if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
          iVar8 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(pvVar17,pcVar7,(long)iVar8);
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
        puVar19 = &DAT_055c04a0;
      }
      else {
        puVar19 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar19 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar8 = FUN_006bd550(*puVar19,0);
          puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar19 = &DAT_055c04a0;
          }
        }
      }
      uVar4 = *(undefined4 *)(puVar19 + 7);
      lVar12 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      if (lVar12 == 0) {
        pbVar21 = (byte *)&DAT_053e6f44;
      }
      else if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
              (puVar19 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar19 == (undefined8 *)0x0)) {
        pbVar21 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
      }
      else {
        uVar13 = (**(code **)*puVar19)();
        pbVar21 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
      }
      uVar13 = (ulong)*pbVar21;
      if ((uVar13 < 0x23) && (pbVar21[1] <= (byte)PTR_DAT_04bc27f0[uVar13])) {
        uVar14 = 0;
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) & 1 << (ulong)(pbVar21[1] & 0x1f)) != 0) {
          uVar14 = uVar13;
        }
      }
      else {
        uVar14 = 0;
      }
      FUN_01c23f70(lVar15,&local_1c90,uVar4,uVar14,1,1);
      uVar10 = *puVar2;
      if ((int)uVar10 < (int)(uint)local_1c90) {
        if (uVar10 < (uint)local_1c90) {
          lVar15 = *(long *)((long)local_1c88 + (long)(int)uVar10 * 8);
        }
        else {
          lVar15 = 0;
        }
        uVar13 = FUN_0277d7b4(lVar15 + 0x10,param_1 + 0xaf3c);
        if ((uVar13 & 1) != 0) {
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
              uVar20 = *(undefined8 *)(lVar15 + 0x20);
              (**(code **)(*(long *)(lVar15 + 0x50) + 0x18))((long *)(lVar15 + 0x50));
              FUN_038d1270(&local_1d28,"%s:%s",uVar20,*(undefined8 *)(lVar15 + 0x58));
            }
            else {
              FUN_038d1270(&local_1d28,"BO_React_Watching_Fossil:201");
            }
          }
          else {
            FUN_038d1270(&local_1d28,"BO_React_Watching_Insect:102");
            DAT_05453fe8 = 1;
          }
          puVar18 = *(undefined1 **)(param_2 + 8);
          (**(code **)(local_1d28 + 0x18))(&local_1d28);
          pcVar7 = local_1d20;
          if (puVar18 != local_1d20) {
            (**(code **)(local_1d28 + 0x18))(&local_1d28);
            lVar15 = 0;
            do {
              if (local_1d20[lVar15] == '\0') goto LAB_01ed0d30;
              if (local_1d20[lVar15 + 1] == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_01ed0d30;
              }
              if (local_1d20[lVar15 + 2] == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_01ed0d30;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_01ed0d30:
            iVar8 = (int)lVar15;
            if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
              iVar8 = *(int *)(param_2 + 0x10) + -1;
            }
            memcpy(puVar18,pcVar7,(long)iVar8);
            puVar18[iVar8] = 0;
          }
          FUN_021b197c(&DAT_053fe348,*puVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
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
      puVar18 = *(undefined1 **)(param_2 + 8);
      (**(code **)(local_1d28 + 0x18))(&local_1d28);
      pcVar7 = local_1d20;
      if (puVar18 != local_1d20) {
        (**(code **)(local_1d28 + 0x18))(&local_1d28);
        lVar15 = 0;
        do {
          if (local_1d20[lVar15] == '\0') goto LAB_01ed0be8;
          if (local_1d20[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01ed0be8;
          }
          if (local_1d20[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01ed0be8;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01ed0be8:
        iVar8 = (int)lVar15;
        if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
          iVar8 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(puVar18,pcVar7,(long)iVar8);
        puVar18[iVar8] = 0;
      }
      FUN_021b197c(&DAT_053fe348,*puVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      DAT_05453fe8 = 1;
      return 1;
    }
  }
  iVar8 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar19 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar9 = FUN_006bd550(*puVar19,0);
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
    if (pvVar17 == local_1c88) goto LAB_01ed0834;
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_1c88 + lVar15) == '\0') goto LAB_01ed080c;
      if (*(char *)((long)local_1c88 + lVar15 + 1) == '\0') goto LAB_01ed0800;
      if (*(char *)((long)local_1c88 + lVar15 + 2) == '\0') goto LAB_01ed0808;
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
        puVar19 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar9 = FUN_006bd550(*puVar19,0);
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
LAB_01ed0580:
      lVar15 = 0;
    }
    else {
      puVar19 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar12 = (**(code **)(*(long *)*puVar19 + 0x38))();
        lVar15 = 0;
        if (lVar12 != 0) {
          lVar15 = lVar12 + 0x70;
        }
      }
      else {
        if ((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0))
        goto LAB_01ed0580;
        lVar15 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
      }
    }
    if (DAT_04cd19d8 == 0) {
      pbVar21 = &DAT_0548e140;
LAB_01ed05e4:
      if (*pbVar21 < 8) goto LAB_01ed065c;
LAB_01ed05f0:
      if (DAT_0537d558 == (long *)0x0) {
LAB_01ed0654:
        pbVar21 = &DAT_0548e168;
        goto LAB_01ed065c;
      }
      lVar12 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar12 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar12 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar21 = (byte *)(lVar12 + 0x471);
        }
      }
      local_1d30[0] = *pbVar21;
      if (7 < local_1d30[0]) goto LAB_01ed0654;
    }
    else {
      pbVar21 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar21 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar21 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_01ed05e4;
        }
        goto LAB_01ed05f0;
      }
LAB_01ed065c:
      local_1d30[0] = *pbVar21;
      if (7 < local_1d30[0]) {
        local_1d30[0] = 0xff;
      }
    }
    bVar1 = true;
    lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_1d30,1);
    iVar8 = 0x35;
    if ((lVar15 != 0) && (lVar12 != 0)) {
      if ((*(long **)(lVar15 + 0xe7290) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar15 + 0xe7290), puVar19 == (undefined8 *)0x0)) {
        uVar10 = 1;
        plVar16 = *(long **)(lVar12 + 0x17bb0);
        if (plVar16 != (long *)0x0) goto LAB_01ed06e0;
LAB_01ed06fc:
        uVar11 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar19)();
        uVar10 = uVar10 ^ 1;
        plVar16 = *(long **)(lVar12 + 0x17bb0);
        if (plVar16 == (long *)0x0) goto LAB_01ed06fc;
LAB_01ed06e0:
        if ((undefined8 *)*plVar16 == (undefined8 *)0x0) goto LAB_01ed06fc;
        uVar11 = (*(code *)**(undefined8 **)*plVar16)();
        uVar11 = uVar11 ^ 1;
      }
      iVar8 = FUN_02076ca0(param_1 + 0xaf3c,
                           *(long *)(lVar15 + 0xe7278) + *(long *)(lVar15 + 0xe7270),
                           *(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90));
      if ((((uVar11 & 1) == 0) && (*(long *)(lVar12 + 0x17bb0) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
      }
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0xe7290) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar15 + 0xe7290) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
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
    if (pvVar17 == local_1c88) goto LAB_01ed0834;
    (**(code **)(local_1c90 + 0x18))(&local_1c90);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_1c88 + lVar15) == '\0') goto LAB_01ed080c;
      if (*(char *)((long)local_1c88 + lVar15 + 1) == '\0') goto LAB_01ed0800;
      if (*(char *)((long)local_1c88 + lVar15 + 2) == '\0') goto LAB_01ed0808;
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
  }
  lVar15 = 0;
LAB_01ed080c:
  iVar8 = (int)lVar15;
  if (*(int *)(param_2 + 0x10) <= (int)lVar15) {
    iVar8 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(pvVar17,plVar16,(long)iVar8);
  *(undefined1 *)((long)pvVar17 + (long)iVar8) = 0;
LAB_01ed0834:
  uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if ((uVar10 < 10) && ((&DAT_053fee41)[(ulong)uVar10 * 0xba0] != '\0')) {
    local_1d28 = PTR_DAT_04bb2020 + 0x10;
    local_1d20 = "TalkWatchPoint";
    FUN_02199310(&DAT_053fe348 + (ulong)uVar10 * 0xba0,&local_1d28,1);
  }
  return 1;
LAB_01ed0800:
  lVar15 = lVar15 + 1;
  goto LAB_01ed080c;
LAB_01ed0808:
  lVar15 = lVar15 + 2;
  goto LAB_01ed080c;
}

