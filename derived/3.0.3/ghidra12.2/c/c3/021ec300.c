
void FUN_021ec300(undefined8 *param_1,long param_2,long param_3,uint *param_4,float *param_5,
                 long *param_6,int *param_7,uint param_8,byte param_9)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  undefined *puVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong *puVar21;
  byte *pbVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined1 uVar26;
  undefined4 uVar27;
  uint *puVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  long *plVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  undefined1 *__src;
  long lVar37;
  long *plVar38;
  float local_954;
  undefined8 local_950;
  undefined1 *puStack_948;
  undefined8 local_940;
  char *local_938;
  undefined8 local_930;
  char *local_928;
  undefined8 local_920;
  long local_820;
  uint local_808;
  long local_638 [7];
  long local_600 [6];
  long local_5d0 [109];
  undefined *local_268;
  undefined2 local_260;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined4 local_25c;
  long local_258;
  undefined *local_1d0;
  undefined1 *local_1c8;
  int local_1c0;
  undefined1 local_1bc [31];
  undefined1 local_19d;
  undefined2 local_194;
  undefined1 local_192;
  char *local_190;
  char *local_188;
  undefined8 local_180;
  undefined1 local_7d;
  
  puVar12 = PTR_DAT_04bb37e0;
  *(undefined2 *)param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 2) = puVar12[2];
  *(undefined *)((long)param_1 + 3) = puVar12[3];
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar12 + 4);
  puVar12 = PTR_DAT_04bb5d40;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *param_4 = 0;
  lVar29 = *(long *)PTR_DAT_04bb2800;
  if (lVar29 != 0) {
    local_190 = (char *)((ulong)local_190 & 0xffffffffffffff00);
    uVar19 = FUN_021eed40(lVar29 + 0x1560,lVar29 + 0x1568,lVar29 + 0x1578,&local_940,0,param_9 & 1,0
                          ,&local_190);
    uVar10 = 8;
    if ((uVar19 & 1) == 0) {
      uVar10 = 0;
    }
    *(ushort *)(lVar29 + 8) =
         *(ushort *)(lVar29 + 8) & 0xffd7 | (ushort)(byte)local_190 << 5 | uVar10;
    if ((uVar19 & 1) != 0) {
      if ((param_9 & 1) == 0) {
        local_940 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_940);
        uVar16 = *(undefined4 *)(lVar29 + 0x1564);
        uVar27 = *(undefined4 *)(lVar29 + 0x1570);
        uVar7 = *(undefined4 *)(lVar29 + 0x1574);
        local_930 = *(undefined8 *)(lVar29 + 0x1570);
        uVar17 = *(uint *)(lVar29 + 0x1578);
        local_938 = PTR_DAT_04bb2010 + 0x10;
        uVar14 = *(undefined1 *)(lVar29 + 0x1562);
        uVar26 = *(undefined1 *)(lVar29 + 0x1563);
        local_940 = *(undefined **)(lVar29 + 0x1560);
        local_928 = (char *)CONCAT44(local_928._4_4_,uVar17);
        *(undefined2 *)param_1 = *(undefined2 *)(lVar29 + 0x1560);
        *(undefined1 *)((long)param_1 + 2) = uVar14;
        *(undefined4 *)((long)param_1 + 4) = uVar16;
        *(undefined1 *)((long)param_1 + 3) = uVar26;
        *(undefined4 *)(param_2 + 8) = uVar27;
        *(undefined4 *)(param_2 + 0xc) = uVar7;
        *param_4 = uVar17;
        FUN_021ed500(param_3,&local_190,param_1,param_2,param_4,0);
        *param_5 = local_190._0_4_ * 0.5 + 1.0;
        return;
      }
      return;
    }
  }
  local_194 = 0x23;
  local_192 = 8;
  FUN_020fd3a0(&local_194,param_6);
  local_19d = 0;
  local_1bc[0] = 0;
  local_1c0 = 0x20;
  local_1d0 = PTR_DAT_04bb2028 + 0x10;
  local_1c8 = local_1bc;
  (**(code **)(*param_6 + 0x18))(param_6);
  __src = (undefined1 *)param_6[1];
  if (local_1bc != __src) {
    (**(code **)(*param_6 + 0x18))(param_6);
    lVar29 = 0;
    do {
      if (*(char *)(param_6[1] + lVar29) == '\0') goto LAB_021ec57c;
      lVar36 = param_6[1] + lVar29;
      if (*(char *)(lVar36 + 1) == '\0') {
        lVar29 = lVar29 + 1;
        goto LAB_021ec57c;
      }
      if (*(char *)(lVar36 + 2) == '\0') {
        lVar29 = lVar29 + 2;
        goto LAB_021ec57c;
      }
      lVar29 = lVar29 + 3;
    } while (lVar29 != 0x80001);
    lVar29 = 0;
LAB_021ec57c:
    iVar15 = (int)lVar29;
    if (local_1c0 <= (int)lVar29) {
      iVar15 = local_1c0 + -1;
    }
    memcpy(local_1bc,__src,(long)iVar15);
    local_1bc[iVar15] = 0;
  }
  plVar33 = (long *)PTR_DAT_04bb46b0;
  if ((param_8 & 1) == 0) {
    lVar29 = *(long *)PTR_DAT_04bb46b0;
    if (lVar29 == 0) {
LAB_021ec62c:
      uVar16 = 0xffffffff;
    }
    else {
      puVar24 = *(undefined8 **)(lVar29 + 0x10);
      if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
        lVar29 = (**(code **)(*(long *)*puVar24 + 0x38))();
        if (lVar29 == 0) goto LAB_021ec62c;
        lVar29 = lVar29 + 0x70;
      }
      else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
              (lVar29 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar29 == 0))
      goto LAB_021ec62c;
      if ((*(long **)(lVar29 + 0xd0) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(lVar29 + 0xd0), puVar24 == (undefined8 *)0x0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = (**(code **)*puVar24)();
        uVar19 = uVar19 & 0xffffffff;
      }
      uVar16 = FUN_027dc31c(*(long *)(lVar29 + 0xb8) + *(long *)(lVar29 + 0xb0),&local_194);
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar29 + 0xd0) != 0)) &&
         (puVar24 = *(undefined8 **)(*(long *)(lVar29 + 0xd0) + 8), puVar24 != (undefined8 *)0x0)) {
        (**(code **)*puVar24)();
      }
    }
    puVar12 = PTR_DAT_04bb2020;
    local_940 = PTR_DAT_04bb2020 + 0x10;
    local_938 = "HouseReset";
    iVar15 = FUN_027490f0(uVar16,&local_940);
    if (iVar15 != 0) goto LAB_021ec658;
    if (*param_7 != 4) {
      if (*param_7 != 0) goto LAB_021ec658;
      cVar13 = FUN_020fd7d8(&local_194);
      if (cVar13 == '\x01') {
        puVar23 = &DAT_04086ca1;
      }
      else {
        if (cVar13 != '\a') goto LAB_021ec78c;
        puVar23 = &DAT_040ab2d3;
      }
      FUN_038d1270(&local_1d0,puVar23);
    }
LAB_021ec78c:
    cVar13 = FUN_020fd7d8(&local_194);
    if (cVar13 != '\0') {
      if (cVar13 == '\x04') {
        pcVar20 = "ImmQ_3";
      }
      else {
        if (cVar13 != '\x05') goto LAB_021ec658;
        pcVar20 = "ImmQ_2";
      }
      FUN_038d1270(&local_1d0,pcVar20);
      goto LAB_021ec658;
    }
    lVar29 = *plVar33;
    if (lVar29 != 0) {
      puVar24 = *(undefined8 **)(lVar29 + 0x10);
      if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
        lVar29 = (**(code **)(*(long *)*puVar24 + 0x38))();
        if (lVar29 != 0) {
          lVar29 = lVar29 + 0x70;
LAB_021ed3b4:
          FUN_038d1270(&local_1d0,"ImmQ_1_");
          local_938 = (char *)(lVar29 + 0x1c24c0);
          local_930 = CONCAT71(local_930._1_7_,1);
          if (*(long **)(lVar29 + 0x1c24e8) == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            puVar24 = (undefined8 *)**(long **)(lVar29 + 0x1c24e8);
            uVar14 = 0;
            if (puVar24 != (undefined8 *)0x0) {
              uVar14 = (**(code **)*puVar24)();
            }
          }
          local_930 = CONCAT62(local_930._2_6_,CONCAT11(uVar14,(undefined1)local_930)) &
                      0xffffffffffff01ff;
          local_940 = PTR_DAT_04bb4bf8 + 0x10;
          local_268 = (undefined *)
                      (ulong)*(ushort *)
                              (*(long *)(lVar29 + 0x1c24d0) + *(long *)(lVar29 + 0x1c24c8) + 0x900);
          FUN_0277d4ac(&local_268);
          iVar15 = FUN_0277d6c4(&local_268);
          if (iVar15 < 0x8ed) {
            if (iVar15 == 0x8a5) {
              local_188 = "Apple";
              goto LAB_021ed4e0;
            }
            if (iVar15 == 0x8a6) {
              local_188 = "Orange";
              goto LAB_021ed4e0;
            }
          }
          else {
            if (iVar15 == 0x8ed) {
              local_188 = "Pear";
            }
            else if (iVar15 == 0x8ee) {
              local_188 = "Peach";
            }
            else {
              if (iVar15 != 0x8ef) goto LAB_021ed4f4;
              local_188 = "Cherry";
            }
LAB_021ed4e0:
            local_190 = puVar12 + 0x10;
            FUN_00958800(&local_1d0,&local_190,0xffffffff);
          }
LAB_021ed4f4:
          FUN_02640184(&local_940);
        }
      }
      else if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
              (lVar29 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar29 != 0))
      goto LAB_021ed3b4;
      goto LAB_021ec658;
    }
LAB_021ec7e8:
    uVar16 = 0xffffffff;
  }
  else {
LAB_021ec658:
    lVar29 = *plVar33;
    if (lVar29 == 0) goto LAB_021ec7e8;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    if ((*(byte *)(lVar29 + 0x453) & 1) != 0) {
      if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
         (lVar29 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar29 != 0)) goto LAB_021ec6a8;
      goto LAB_021ec7e8;
    }
    lVar29 = (**(code **)(*(long *)*puVar24 + 0x38))();
    if (lVar29 == 0) goto LAB_021ec7e8;
    lVar29 = lVar29 + 0x70;
LAB_021ec6a8:
    if ((*(long **)(lVar29 + 0xd0) == (long *)0x0) ||
       (puVar24 = (undefined8 *)**(long **)(lVar29 + 0xd0), puVar24 == (undefined8 *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)*puVar24)();
      uVar19 = uVar19 & 0xffffffff;
    }
    uVar16 = FUN_027dc31c(*(long *)(lVar29 + 0xb8) + *(long *)(lVar29 + 0xb0),&local_194);
    if ((((uVar19 & 1) != 0) && (*(long *)(lVar29 + 0xd0) != 0)) &&
       (puVar24 = *(undefined8 **)(*(long *)(lVar29 + 0xd0) + 8), puVar24 != (undefined8 *)0x0)) {
      (**(code **)*puVar24)();
    }
  }
  puVar12 = PTR_DAT_04bb43c0;
  plVar38 = (long *)PTR_DAT_04bb3350;
  plVar35 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598);
  if (plVar35 != (long *)0x0) {
    lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar36 = *(long *)(lVar29 + 0xa8);
    *(long **)(lVar29 + 0xa8) = plVar35;
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    FUN_0074fda4(&local_268,"Param/NpcRoom/%s.byml",local_1c8);
    uVar19 = FUN_03eba3a0(&local_268);
    if ((uVar19 & 1) != 0) {
      pcVar20 = PTR_DAT_04bb2020 + 0x10;
      local_188 = "NpcRoom";
      local_190 = pcVar20;
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      puStack_948 = local_1c8;
      local_950 = pcVar20;
      FUN_00b62c50(&local_940,&local_190,&local_950,0);
      local_188 = (char *)((long)&local_180 + 4);
      local_7d = 0;
      local_180 = (uint *)CONCAT35(local_180._5_3_,0x100);
      local_190 = PTR_DAT_04bb21f8 + 0x10;
      uVar19 = (**(code **)(local_940 + 0xf0))(&local_940,&local_190,1);
      if ((uVar19 & 1) != 0) {
        FUN_03c27e60(&local_940,&local_190,plVar35);
      }
      pcVar20 = (char *)(**(code **)(local_600[0] + 0xf0))(local_600);
      if (*pcVar20 != '\0') {
        if (0 < (int)local_808) {
          uVar19 = 0;
          pcVar20 = PTR_DAT_04bc0510 + 0x10;
          do {
            puVar21 = (ulong *)(**(code **)(*(long *)(*(long *)(local_820 + uVar19 * 8) + 0x60) +
                                           0xf0))();
            uVar32 = *puVar21;
            local_950 = (char *)(uVar32 & 0xffff);
            FUN_0277d4ac(&local_950);
            local_950._0_3_ = CONCAT12((char)(uVar32 >> 0x10),(undefined2)local_950);
            local_950._0_4_ = CONCAT13((char)(uVar32 >> 0x18),(undefined3)local_950);
            lVar29 = *(long *)puVar12;
            local_950 = (char *)CONCAT44((int)(uVar32 >> 0x20),(undefined4)local_950);
            uVar17 = FUN_0277d6c4(&local_950);
            lVar37 = *(long *)puVar12;
            if (lVar37 != 0) {
              lVar29 = *(long *)(lVar29 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                local_180 = (uint *)0x0;
                local_188 = local_950;
                local_190 = pcVar20;
                uVar17 = FUN_0277d6c4(&local_188);
                if (*(long *)puVar12 != 0) {
                  lVar29 = *(long *)(lVar37 + 0x57e58);
                  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                  if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                    lVar29 = *(long *)PTR_DAT_04bc0428;
                    uVar17 = FUN_0277d6c4(&local_950);
                    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
                       (puVar25 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8),
                       puVar25 != (uint *)0x0)) {
                      local_180 = puVar25;
                    }
                  }
                }
                FUN_01aee3b4(&local_190);
                if (((local_180 != (uint *)0x0) && (uVar17 = *local_180, uVar17 != 0)) &&
                   (local_180 != (uint *)(ulong)uVar17)) {
                  puVar25 = (uint *)((long)local_180 - (long)(ulong)uVar17);
                  if (((*puVar25 != 0) && (uVar17 = puVar25[1], uVar17 != 0)) &&
                     ((ulong)(ushort)puVar25[2] != 0)) {
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar25 + lVar29 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar29 != 0) {
                      uVar18 = 0;
                      if ((ulong)uVar17 != 0) {
                        uVar18 = (uint)((ulong)((long)local_180 - lVar29) / (ulong)uVar17);
                      }
                      if (*puVar25 <= uVar18) {
                        uVar18 = 0xffffffff;
                      }
                      if (((uVar18 < *(uint *)PTR_DAT_04bc0048) &&
                          (uVar10 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar18 * 2),
                          uVar10 < 0x52)) && (uVar10 == 0x1d)) {
                        uVar27 = local_950._4_4_;
                        uVar14 = local_950._2_1_;
                        uVar26 = local_950._3_1_;
                        goto LAB_021ecb6c;
                      }
                    }
                  }
                }
              }
            }
            uVar19 = uVar19 + 1;
          } while (local_808 != uVar19);
        }
        puVar21 = (ulong *)(**(code **)(local_638[0] + 0xf0))(local_638);
        uVar19 = *puVar21;
        local_950 = (char *)(uVar19 & 0xffff);
        FUN_0277d4ac(&local_950);
        uVar14 = (undefined1)(uVar19 >> 0x10);
        uVar26 = (undefined1)(uVar19 >> 0x18);
        local_950._0_3_ = CONCAT12(uVar14,(undefined2)local_950);
        uVar27 = (undefined4)(uVar19 >> 0x20);
        local_950._0_4_ = CONCAT13(uVar26,(undefined3)local_950);
        local_950 = (char *)CONCAT44(uVar27,(undefined4)local_950);
LAB_021ecb6c:
        lVar29 = *(long *)puVar12;
        local_180 = (uint *)0x0;
        local_190 = PTR_DAT_04bc0510 + 0x10;
        local_188 = (char *)CONCAT62(CONCAT42(uVar27,CONCAT11(uVar26,uVar14)),(undefined2)local_950)
        ;
        uVar17 = FUN_0277d6c4(&local_188);
        plVar38 = (long *)PTR_DAT_04bb3350;
        if (*(long *)puVar12 != 0) {
          lVar29 = *(long *)(lVar29 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
            lVar29 = *(long *)PTR_DAT_04bc0428;
            uVar17 = FUN_0277d6c4(&local_950);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
               (puVar25 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8),
               puVar25 != (uint *)0x0)) {
              local_180 = puVar25;
            }
          }
        }
        *(undefined4 *)param_1 = (undefined4)local_950;
        *(undefined4 *)((long)param_1 + 4) = local_950._4_4_;
        if ((param_8 & 1) != 0) {
          FUN_021ec170(param_2,param_3,param_4,param_5,&local_950);
          (**(code **)(local_940 + 0x20))(&local_940);
          (**(code **)(*plVar35 + 0x58))(plVar35);
          FUN_00b634e0(&local_940);
          if (lVar36 == 1) {
            return;
          }
          lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*plVar38 + 0x68));
          *(long *)(lVar29 + 0xa8) = lVar36;
          return;
        }
        uVar17 = FUN_01ae98d0(&local_190);
        *param_4 = uVar17;
        pbVar22 = (byte *)(**(code **)(local_600[0] + 0xf0))(local_600);
        bVar8 = *pbVar22;
        pbVar22 = (byte *)(**(code **)(local_5d0[0] + 0xf0))(local_5d0);
        bVar9 = *pbVar22;
        *(uint *)(param_2 + 8) = (uint)bVar8;
        *(uint *)(param_2 + 0xc) = (uint)bVar9;
        FUN_021ed500(param_3,&local_954,&local_950,param_2,param_4,0);
        *param_5 = local_954 * 0.5 + 1.0;
      }
      (**(code **)(local_940 + 0x20))(&local_940);
      plVar33 = (long *)PTR_DAT_04bb46b0;
      FUN_00b634e0(&local_940);
    }
    (**(code **)(*plVar35 + 0x58))(plVar35);
    if (lVar36 != 1) {
      lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*plVar38 + 0x68));
      *(long *)(lVar29 + 0xa8) = lVar36;
    }
  }
  local_950 = (char *)((ulong)local_950 & 0xffffffff00000000);
  uVar19 = FUN_02b67a30(&local_950,uVar16);
  if ((uVar19 & 1) != 0) {
    local_940 = (undefined *)CONCAT44(local_940._4_4_,(undefined4)local_950);
    lVar29 = *plVar33;
    if (lVar29 != 0) {
      puVar24 = *(undefined8 **)(lVar29 + 0x10);
      if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
        lVar29 = (**(code **)(*(long *)*puVar24 + 0x38))();
        if (lVar29 == 0) goto LAB_021ed1c8;
        lVar29 = lVar29 + 0x70;
      }
      else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
              (lVar29 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar29 == 0))
      goto LAB_021ed1c8;
      if ((uint)local_940 < 10) {
        lVar36 = lVar29 + 0x1962d8 + ((ulong)local_940 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_940) {
          lVar36 = lVar29 + 0x1962d8;
        }
        if ((*(long **)(lVar36 + 0x28) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar36 + 0x28), puVar24 == (undefined8 *)0x0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (**(code **)*puVar24)();
        }
        lVar29 = -0x1b0;
        pcVar20 = PTR_DAT_04bc0510 + 0x10;
        puVar23 = PTR_DAT_04bbc1a0 + 0x10;
        pcVar2 = PTR_DAT_04bb2010 + 0x10;
        do {
          lVar34 = *(long *)puVar12;
          lVar37 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + lVar29;
          puVar24 = (undefined8 *)(lVar37 + 0x1c4);
          uVar18 = FUN_0277d6c4(puVar24);
          lVar30 = *(long *)puVar12;
          if (lVar30 != 0) {
            lVar34 = *(long *)(lVar34 + 0x57e58);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
            if ((uVar18 < *(uint *)(lVar34 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
              local_188 = (char *)*puVar24;
              local_180 = (uint *)0x0;
              local_190 = pcVar20;
              uVar18 = FUN_0277d6c4(&local_188);
              if (*(long *)puVar12 != 0) {
                lVar30 = *(long *)(lVar30 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                if ((uVar18 < *(uint *)(lVar30 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                  lVar30 = *(long *)PTR_DAT_04bc0428;
                  uVar18 = FUN_0277d6c4(puVar24);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                  if ((uVar18 < *(uint *)(lVar30 + 0x1d8)) &&
                     (((puVar25 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar18 * 8),
                       puVar25 != (uint *)0x0 && (uVar18 = *puVar25, uVar18 != 0)) &&
                      (puVar25 != (uint *)(ulong)uVar18)))) {
                    puVar28 = (uint *)((long)puVar25 - (long)(ulong)uVar18);
                    if (((*puVar28 != 0) && (uVar18 = puVar28[1], uVar18 != 0)) &&
                       ((ulong)(ushort)puVar28[2] != 0)) {
                      lVar30 = 0xc;
                      if (*(char *)((long)puVar28 + 10) != '\0') {
                        lVar30 = 0x1c;
                      }
                      lVar30 = (long)puVar28 + lVar30 + (ulong)(ushort)puVar28[2] * 8;
                      if (lVar30 != 0) {
                        uVar6 = 0;
                        if ((ulong)uVar18 != 0) {
                          uVar6 = (uint)((ulong)((long)puVar25 - lVar30) / (ulong)uVar18);
                        }
                        if (*puVar28 <= uVar6) {
                          uVar6 = 0xffffffff;
                        }
                        if ((uVar6 < *(uint *)PTR_DAT_04bc0048) &&
                           (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar6 * 2) ==
                            0x1d)) {
                          local_268 = PTR_DAT_04bc0510 + 0x10;
                          lVar30 = *(long *)puVar12;
                          local_260 = *(undefined2 *)puVar24;
                          local_25e = *(undefined1 *)(lVar37 + 0x1c6);
                          local_25d = *(undefined1 *)(lVar37 + 0x1c7);
                          local_25c = *(undefined4 *)(lVar37 + 0x1c8);
                          local_258 = 0;
                          uVar18 = FUN_0277d6c4(&local_260);
                          if (*(long *)puVar12 != 0) {
                            lVar30 = *(long *)(lVar30 + 0x57e58);
                            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                            if ((uVar18 < *(uint *)(lVar30 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar18 * 8) != 0))
                            {
                              lVar30 = *(long *)PTR_DAT_04bc0428;
                              uVar18 = FUN_0277d6c4(puVar24);
                              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                              if ((uVar18 < *(uint *)(lVar30 + 0x1d8)) &&
                                 (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) +
                                                    (long)(int)uVar18 * 8), lVar30 != 0)) {
                                local_258 = lVar30;
                              }
                            }
                          }
                          local_930 = 0;
                          local_920 = 0;
                          local_940 = puVar23;
                          local_938 = pcVar2;
                          local_928 = pcVar2;
                          FUN_01afb480(&local_268,&local_940);
                          cVar13 = *(char *)(lVar37 + 0x1ce);
                          if (((int)cVar13 | 2U) == 2) {
                            iVar15 = local_920._4_4_ - local_930._4_4_;
                          }
                          else {
                            iVar15 = (int)local_920 - (int)local_930;
                          }
                          *param_5 = (float)(iVar15 + 1) * 0.5 + 1.0;
                          local_930._0_4_ = (int)local_930 + *(char *)(lVar37 + 0x1cc);
                          local_930._4_4_ = local_930._4_4_ + *(char *)(lVar37 + 0x1cd);
                          local_920._4_4_ = local_920._4_4_ + *(char *)(lVar37 + 0x1cd);
                          local_920._0_4_ = (int)local_920 + *(char *)(lVar37 + 0x1cc);
                          if ((((*(int *)(param_3 + 0x10) <= (int)local_930) &&
                               ((int)local_920 <= *(int *)(param_3 + 0x20))) &&
                              (*(int *)(param_3 + 0x14) <= local_930._4_4_)) &&
                             (local_920._4_4_ <= *(int *)(param_3 + 0x24))) {
                            *(undefined2 *)param_1 = *(undefined2 *)(lVar37 + 0x1c4);
                            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar37 + 0x1c6);
                            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar37 + 0x1c7);
                            *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar37 + 0x1c8);
                            cVar11 = *(char *)(lVar37 + 0x1cd);
                            *(int *)(param_2 + 8) = (int)*(char *)(lVar37 + 0x1cc);
                            *(int *)(param_2 + 0xc) = (int)cVar11;
                            *param_4 = (int)cVar13;
                            if ((uVar17 & 1) == 0) {
                              return;
                            }
                            if (*(long *)(lVar36 + 0x28) == 0) {
                              return;
                            }
                            puVar24 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8);
                            if (puVar24 == (undefined8 *)0x0) {
                              return;
                            }
                            (**(code **)*puVar24)();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          lVar29 = lVar29 + 0xc;
        } while (lVar29 != 0);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar36 + 0x28) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8), puVar24 != (undefined8 *)0x0))
        {
          (**(code **)*puVar24)();
        }
      }
    }
  }
LAB_021ed1c8:
  lVar29 = *(long *)puVar12;
  uVar17 = FUN_0277d6c4(param_1);
  if (*(long *)puVar12 != 0) {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      return;
    }
  }
  local_940 = (undefined *)0x4d9;
  FUN_0277d4ac(&local_940);
  *(uint *)param_1 = (uint)local_940;
  *(undefined4 *)((long)param_1 + 4) = local_940._4_4_;
  *param_4 = 0;
  *param_5 = 2.0;
  local_940 = PTR_DAT_04bc0510;
  lVar29 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar29 == 0) {
    iVar31 = 6;
    iVar15 = 4;
  }
  else {
    iVar15 = *(int *)(lVar29 + 0xd88) + 4;
    iVar31 = *(int *)(lVar29 + 0xd8c) + 6;
  }
  local_930 = 0;
  *(int *)(param_2 + 8) = iVar15;
  *(int *)(param_2 + 0xc) = iVar31;
  lVar29 = *(long *)puVar12;
  local_940 = local_940 + 0x10;
  local_938 = (char *)*param_1;
  uVar17 = FUN_0277d6c4(&local_938);
  if (*(long *)puVar12 != 0) {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      lVar29 = *(long *)PTR_DAT_04bc0428;
      uVar17 = FUN_0277d6c4(param_1);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
         (lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8), lVar29 != 0)) {
        local_930 = lVar29;
      }
    }
  }
  FUN_01afb7fc(&local_940,param_3,*param_4);
  iVar1 = iVar31 + 5;
  iVar3 = *(int *)(param_3 + 0x10) + iVar15;
  iVar4 = *(int *)(param_3 + 0x14) + iVar31;
  iVar5 = *(int *)(param_3 + 0x20) + iVar15;
  iVar31 = *(int *)(param_3 + 0x24) + iVar31;
  if (iVar15 <= iVar3) {
    iVar3 = iVar15;
  }
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  *(int *)(param_3 + 0x10) = iVar3;
  *(int *)(param_3 + 0x14) = iVar4;
  if (iVar5 <= iVar15) {
    iVar5 = iVar15;
  }
  if (iVar31 <= iVar1) {
    iVar31 = iVar1;
  }
  *(int *)(param_3 + 0x20) = iVar5;
  *(int *)(param_3 + 0x24) = iVar31;
  return;
}

