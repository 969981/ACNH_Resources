
void FUN_021ed770(undefined8 *param_1,long param_2,long param_3,uint *param_4,float *param_5,
                 long *param_6,int *param_7,uint param_8,byte param_9,uint param_10)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  ulong *puVar18;
  byte *pbVar19;
  undefined *puVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  int iVar30;
  undefined1 *__src;
  long lVar31;
  long *plVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  uint local_99c;
  int local_994;
  ulong local_94c;
  float local_944;
  undefined8 local_940;
  undefined1 *puStack_938;
  undefined8 local_930;
  char *local_928;
  undefined8 local_920;
  char *local_918;
  undefined8 local_910;
  long local_440 [7];
  long local_408 [6];
  long local_3d8 [48];
  undefined *local_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined4 local_24c;
  long local_248;
  undefined *local_1c0;
  undefined1 *local_1b8;
  int local_1b0;
  undefined1 local_1ac [31];
  undefined1 local_18d;
  undefined2 local_184;
  undefined1 local_182;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_6d;
  
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined2 *)param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 2) = puVar2[2];
  *(undefined *)((long)param_1 + 3) = puVar2[3];
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar2 + 4);
  puVar2 = PTR_DAT_04bb5d40;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *param_4 = 0;
  plVar29 = (long *)PTR_DAT_04bb43c0;
  lVar26 = *(long *)PTR_DAT_04bb2800;
  if (lVar26 != 0) {
    local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
    uVar16 = FUN_021eed40(lVar26 + 0x1560,lVar26 + 0x1568,lVar26 + 0x1578,&local_930,1,param_9 & 1,0
                          ,&local_180);
    uVar8 = 8;
    if ((uVar16 & 1) == 0) {
      uVar8 = 0;
    }
    *(ushort *)(lVar26 + 8) =
         *(ushort *)(lVar26 + 8) & 0xffd7 | (ushort)(byte)local_180 << 5 | uVar8;
    if ((uVar16 & 1) != 0) {
      local_930 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_930);
      local_928 = PTR_DAT_04bb2010 + 0x10;
      local_930 = *(undefined **)(lVar26 + 0x1560);
      local_920 = *(ulong *)(lVar26 + 0x1570);
      lVar27 = *plVar29;
      local_918 = (char *)CONCAT44(local_918._4_4_,*(undefined4 *)(lVar26 + 0x1578));
      uVar13 = FUN_0277d6c4(&local_930);
      if (*plVar29 != 0) {
        lVar26 = *(long *)(lVar27 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          *(uint *)param_1 = (uint)local_930;
          *(undefined4 *)((long)param_1 + 4) = local_930._4_4_;
          *(int *)(param_2 + 8) = (int)local_920;
          *(int *)(param_2 + 0xc) = local_920._4_4_;
          *param_4 = (uint)local_918;
          FUN_021ed500(param_3,&local_258,param_1,param_2,param_4,param_10);
          *param_5 = local_258._0_4_ * 0.5 + 1.0;
          local_180 = (undefined *)0x3e6;
          FUN_0277d4ac(&local_180);
          uVar16 = FUN_0277d7b4(param_1,&local_180);
          if ((param_10 >> 1 & 1) != 0) {
            return;
          }
          if ((uVar16 & 1) == 0) {
            return;
          }
          *param_5 = -*param_5;
          return;
        }
      }
    }
  }
  local_184 = 0x23;
  local_182 = 8;
  FUN_020fd3a0(&local_184,param_6);
  local_18d = 0;
  local_1ac[0] = 0;
  local_1b0 = 0x20;
  local_1c0 = PTR_DAT_04bb2028 + 0x10;
  local_1b8 = local_1ac;
  (**(code **)(*param_6 + 0x18))(param_6);
  __src = (undefined1 *)param_6[1];
  if (local_1ac != __src) {
    (**(code **)(*param_6 + 0x18))(param_6);
    lVar26 = 0;
    do {
      if (*(char *)(param_6[1] + lVar26) == '\0') goto LAB_021eda6c;
      lVar27 = param_6[1] + lVar26;
      if (*(char *)(lVar27 + 1) == '\0') {
        lVar26 = lVar26 + 1;
        goto LAB_021eda6c;
      }
      if (*(char *)(lVar27 + 2) == '\0') {
        lVar26 = lVar26 + 2;
        goto LAB_021eda6c;
      }
      lVar26 = lVar26 + 3;
    } while (lVar26 != 0x80001);
    lVar26 = 0;
LAB_021eda6c:
    iVar15 = (int)lVar26;
    if (local_1b0 <= (int)lVar26) {
      iVar15 = local_1b0 + -1;
    }
    memcpy(local_1ac,__src,(long)iVar15);
    local_1ac[iVar15] = 0;
  }
  plVar33 = (long *)PTR_DAT_04bb46b0;
  if ((param_8 & 1) == 0) {
    lVar26 = *(long *)PTR_DAT_04bb46b0;
    if (lVar26 == 0) {
LAB_021edb1c:
      uVar14 = 0xffffffff;
    }
    else {
      puVar23 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
        lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
        if (lVar26 == 0) goto LAB_021edb1c;
        lVar26 = lVar26 + 0x70;
      }
      else if (((puVar23 == (undefined8 *)0x0) || ((long *)puVar23[0x26] == (long *)0x0)) ||
              (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 == 0))
      goto LAB_021edb1c;
      if ((*(long **)(lVar26 + 0xd0) == (long *)0x0) ||
         (puVar23 = (undefined8 *)**(long **)(lVar26 + 0xd0), puVar23 == (undefined8 *)0x0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)*puVar23)();
        uVar16 = uVar16 & 0xffffffff;
      }
      uVar14 = FUN_027dc31c(*(long *)(lVar26 + 0xb8) + *(long *)(lVar26 + 0xb0),&local_184);
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar26 + 0xd0) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0xd0) + 8), puVar23 != (undefined8 *)0x0)) {
        (**(code **)*puVar23)();
      }
    }
    puVar2 = PTR_DAT_04bb2020;
    local_930 = PTR_DAT_04bb2020 + 0x10;
    local_928 = "HouseReset";
    iVar15 = FUN_027490f0(uVar14,&local_930);
    if (iVar15 != 0) goto LAB_021edb94;
    if (*param_7 != 4) {
      if (*param_7 != 0) goto LAB_021edb94;
      cVar10 = FUN_020fd7d8(&local_184);
      if (cVar10 == '\x01') {
        puVar20 = &DAT_04086ca1;
      }
      else {
        if (cVar10 != '\a') goto LAB_021edc8c;
        puVar20 = &DAT_040ab2d3;
      }
      FUN_038d1270(&local_1c0,puVar20);
    }
LAB_021edc8c:
    cVar10 = FUN_020fd7d8(&local_184);
    if (cVar10 != '\0') {
      if (cVar10 == '\x04') {
        pcVar17 = "ImmQ_3";
      }
      else {
        if (cVar10 != '\x05') goto LAB_021edb94;
        pcVar17 = "ImmQ_2";
      }
      FUN_038d1270(&local_1c0,pcVar17);
      goto LAB_021edb94;
    }
    lVar26 = *plVar33;
    if (lVar26 != 0) {
      puVar23 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
        lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
        if (lVar26 != 0) {
          lVar26 = lVar26 + 0x70;
LAB_021ee7c8:
          FUN_038d1270(&local_1c0,"ImmQ_1_");
          local_928 = (char *)(lVar26 + 0x1c24c0);
          local_920 = CONCAT71(local_920._1_7_,1);
          if (*(long **)(lVar26 + 0x1c24e8) == (long *)0x0) {
            uVar12 = 0;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1c24e8);
            uVar12 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar12 = (**(code **)*puVar23)();
            }
          }
          local_920 = CONCAT62(local_920._2_6_,CONCAT11(uVar12,(undefined1)local_920)) &
                      0xffffffffffff01ff;
          local_930 = PTR_DAT_04bb4bf8 + 0x10;
          local_258 = (undefined *)
                      (ulong)*(ushort *)
                              (*(long *)(lVar26 + 0x1c24d0) + *(long *)(lVar26 + 0x1c24c8) + 0x900);
          FUN_0277d4ac(&local_258);
          iVar15 = FUN_0277d6c4(&local_258);
          if (iVar15 < 0x8ed) {
            if (iVar15 == 0x8a5) {
              local_178 = "Apple";
              goto LAB_021ee8ec;
            }
            if (iVar15 == 0x8a6) {
              local_178 = "Orange";
              goto LAB_021ee8ec;
            }
          }
          else {
            if (iVar15 == 0x8ed) {
              local_178 = "Pear";
            }
            else if (iVar15 == 0x8ee) {
              local_178 = "Peach";
            }
            else {
              if (iVar15 != 0x8ef) goto LAB_021ee900;
              local_178 = "Cherry";
            }
LAB_021ee8ec:
            local_180 = puVar2 + 0x10;
            FUN_00958800(&local_1c0,&local_180,0xffffffff);
          }
LAB_021ee900:
          FUN_02640184(&local_930);
        }
      }
      else if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
              (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0))
      goto LAB_021ee7c8;
      goto LAB_021edb94;
    }
LAB_021edce8:
    uVar14 = 0xffffffff;
  }
  else {
LAB_021edb94:
    lVar26 = *plVar33;
    if (lVar26 == 0) goto LAB_021edce8;
    puVar23 = *(undefined8 **)(lVar26 + 0x10);
    if ((*(byte *)(lVar26 + 0x453) & 1) != 0) {
      if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
         (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0)) goto LAB_021edbe4;
      goto LAB_021edce8;
    }
    lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
    if (lVar26 == 0) goto LAB_021edce8;
    lVar26 = lVar26 + 0x70;
LAB_021edbe4:
    if ((*(long **)(lVar26 + 0xd0) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar26 + 0xd0), puVar23 == (undefined8 *)0x0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)*puVar23)();
      uVar16 = uVar16 & 0xffffffff;
    }
    uVar14 = FUN_027dc31c(*(long *)(lVar26 + 0xb8) + *(long *)(lVar26 + 0xb0),&local_184);
    if ((((uVar16 & 1) != 0) && (*(long *)(lVar26 + 0xd0) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0xd0) + 8), puVar23 != (undefined8 *)0x0)) {
      (**(code **)*puVar23)();
    }
  }
  plVar32 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598);
  if (plVar32 != (long *)0x0) {
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar27 = *(long *)(lVar26 + 0xa8);
    *(long **)(lVar26 + 0xa8) = plVar32;
    (**(code **)(local_1c0 + 0x18))(&local_1c0);
    FUN_0074fda4(&local_258,"Param/NpcRoom/%s.byml",local_1b8);
    uVar16 = FUN_03eba3a0(&local_258);
    if ((uVar16 & 1) != 0) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_178 = "NpcRoom";
      local_180 = puVar2;
      (**(code **)(local_1c0 + 0x18))(&local_1c0);
      puStack_938 = local_1b8;
      local_940 = puVar2;
      FUN_00b62c50(&local_930,&local_180,&local_940,0);
      local_178 = (char *)((long)&local_170 + 4);
      local_6d = 0;
      local_170 = (uint *)CONCAT35(local_170._5_3_,0x100);
      local_180 = PTR_DAT_04bb21f8 + 0x10;
      uVar16 = (**(code **)(local_930 + 0xf0))(&local_930,&local_180,1);
      if ((uVar16 & 1) != 0) {
        FUN_03c27e60(&local_930,&local_180,plVar32);
      }
      pcVar17 = (char *)(**(code **)(local_408[0] + 0xf0))(local_408);
      if (*pcVar17 == '\0') {
        (**(code **)(local_930 + 0x20))(&local_930);
      }
      else {
        puVar18 = (ulong *)(**(code **)(local_440[0] + 0xf0))(local_440);
        uVar16 = *puVar18;
        local_940 = (undefined *)(uVar16 & 0xffff);
        FUN_0277d4ac(&local_940);
        local_940._0_4_ =
             CONCAT13((char)(uVar16 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(undefined2)local_940))
        ;
        lVar26 = *plVar29;
        uVar21 = (undefined4)(uVar16 >> 0x20);
        local_940 = (undefined *)CONCAT44(uVar21,(undefined4)local_940);
        local_180 = PTR_DAT_04bc0510 + 0x10;
        local_178 = (char *)CONCAT44(uVar21,CONCAT22((short)(uVar16 >> 0x10),(undefined2)local_940))
        ;
        local_170 = (uint *)0x0;
        uVar13 = FUN_0277d6c4(&local_178);
        if (*plVar29 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar13 = FUN_0277d6c4(&local_940);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
               (puVar24 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8),
               puVar24 != (uint *)0x0)) {
              local_170 = puVar24;
            }
          }
        }
        *(undefined4 *)param_1 = (undefined4)local_940;
        *(undefined4 *)((long)param_1 + 4) = local_940._4_4_;
        if ((param_8 & 1) != 0) {
          FUN_021ec170(param_2,param_3,param_4,param_5,&local_940);
          (**(code **)(local_930 + 0x20))(&local_930);
          (**(code **)(*plVar32 + 0x58))(plVar32);
          FUN_00b634e0(&local_930);
          if (lVar27 == 1) {
            return;
          }
          lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          *(long *)(lVar26 + 0xa8) = lVar27;
          return;
        }
        uVar13 = FUN_01ae98d0(&local_180);
        *param_4 = uVar13;
        pbVar19 = (byte *)(**(code **)(local_408[0] + 0xf0))(local_408);
        bVar11 = *pbVar19;
        pbVar19 = (byte *)(**(code **)(local_3d8[0] + 0xf0))(local_3d8);
        bVar7 = *pbVar19;
        *(uint *)(param_2 + 8) = (uint)bVar11;
        *(uint *)(param_2 + 0xc) = (uint)bVar7;
        FUN_021ed500(param_3,&local_944,&local_940,param_2,param_4,param_10);
        *param_5 = local_944 * 0.5 + 1.0;
        local_94c = 0x3e6;
        FUN_0277d4ac(&local_94c);
        uVar16 = FUN_0277d7b4(&local_940,&local_94c);
        if (((param_10 >> 1 & 1) == 0) && ((uVar16 & 1) != 0)) {
          *param_5 = -*param_5;
        }
        (**(code **)(local_930 + 0x20))(&local_930);
        plVar29 = (long *)PTR_DAT_04bb43c0;
      }
      plVar33 = (long *)PTR_DAT_04bb46b0;
      FUN_00b634e0(&local_930);
    }
    (**(code **)(*plVar32 + 0x58))(plVar32);
    if (lVar27 != 1) {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar26 + 0xa8) = lVar27;
    }
  }
  local_94c = local_94c & 0xffffffff00000000;
  uVar16 = FUN_02b67a30(&local_94c,uVar14);
  if ((uVar16 & 1) != 0) {
    local_930 = (undefined *)CONCAT44(local_930._4_4_,(undefined4)local_94c);
    lVar26 = *plVar33;
    if (lVar26 != 0) {
      puVar23 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
        lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
        if (lVar26 == 0) goto LAB_021ee5e4;
        lVar26 = lVar26 + 0x70;
      }
      else if (((puVar23 == (undefined8 *)0x0) || ((long *)puVar23[0x26] == (long *)0x0)) ||
              (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 == 0))
      goto LAB_021ee5e4;
      if ((uint)local_930 < 10) {
        lVar27 = lVar26 + 0x1962d8 + ((ulong)local_930 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_930) {
          lVar27 = lVar26 + 0x1962d8;
        }
        if ((*(long **)(lVar27 + 0x28) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar27 + 0x28), puVar23 == (undefined8 *)0x0)) {
          local_99c = 0;
        }
        else {
          local_99c = (**(code **)*puVar23)();
        }
        lVar26 = -0x1b0;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        puVar20 = PTR_DAT_04bbc1a0 + 0x10;
        pcVar17 = PTR_DAT_04bb2010 + 0x10;
        do {
          lVar31 = *plVar29;
          lVar6 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8) + lVar26;
          puVar23 = (undefined8 *)(lVar6 + 0x1c4);
          uVar13 = FUN_0277d6c4(puVar23);
          lVar28 = *plVar29;
          if (lVar28 != 0) {
            lVar31 = *(long *)(lVar31 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar31 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
              local_178 = (char *)*puVar23;
              local_170 = (uint *)0x0;
              local_180 = puVar2;
              uVar13 = FUN_0277d6c4(&local_178);
              if (*plVar29 == 0) {
LAB_021ee374:
                uVar22 = 0;
              }
              else {
                lVar28 = *(long *)(lVar28 + 0x57e58);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                if ((*(uint *)(lVar28 + 0x1d8) <= uVar13) ||
                   (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
                goto LAB_021ee374;
                lVar28 = *(long *)PTR_DAT_04bc0428;
                uVar13 = FUN_0277d6c4(puVar23);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                if ((*(uint *)(lVar28 + 0x1d8) <= uVar13) ||
                   (puVar24 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8),
                   puVar24 == (uint *)0x0)) goto LAB_021ee374;
                uVar22 = 0;
                uVar13 = *puVar24;
                local_170 = puVar24;
                if (uVar13 == 0) goto LAB_021ee374;
                if (puVar24 != (uint *)(ulong)uVar13) {
                  puVar25 = (uint *)((long)puVar24 - (long)(ulong)uVar13);
                  uVar22 = 0;
                  if (*puVar25 != 0) {
                    uVar13 = puVar25[1];
                    if ((uVar13 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar25 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar25 + lVar28 + (ulong)(ushort)puVar25[2] * 8;
                      if (lVar28 != 0) {
                        uVar22 = 0;
                        if ((ulong)uVar13 != 0) {
                          uVar22 = (uint)((ulong)((long)puVar24 - lVar28) / (ulong)uVar13);
                        }
                        if (*puVar25 <= uVar22) {
                          uVar22 = 0xffffffff;
                        }
                        if ((uVar22 < *(uint *)PTR_DAT_04bc0048) &&
                           (uVar8 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar22 * 2),
                           uVar22 = (uint)uVar8, uVar8 < 0x52)) goto LAB_021ee37c;
                      }
                    }
                    uVar22 = 0;
                  }
                }
              }
LAB_021ee37c:
              local_930 = (undefined *)CONCAT44(local_930._4_4_,uVar22);
              if (uVar22 - 0x1e < 4) {
                local_258 = PTR_DAT_04bc0510 + 0x10;
                lVar28 = *plVar29;
                local_250 = *(undefined2 *)puVar23;
                local_24e = *(undefined1 *)(lVar6 + 0x1c6);
                local_24d = *(undefined1 *)(lVar6 + 0x1c7);
                local_24c = *(undefined4 *)(lVar6 + 0x1c8);
                local_248 = 0;
                uVar13 = FUN_0277d6c4(&local_250);
                if (*plVar29 != 0) {
                  lVar28 = *(long *)(lVar28 + 0x57e58);
                  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                  if ((uVar13 < *(uint *)(lVar28 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                    lVar28 = *(long *)PTR_DAT_04bc0428;
                    uVar13 = FUN_0277d6c4(puVar23);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                    if ((uVar13 < *(uint *)(lVar28 + 0x1d8)) &&
                       (lVar28 = *(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8),
                       lVar28 != 0)) {
                      local_248 = lVar28;
                    }
                  }
                }
                FUN_01afade0(&local_258,(int)*(char *)(lVar6 + 0x1ce));
                local_920 = 0;
                local_910 = 0;
                local_930 = puVar20;
                local_928 = pcVar17;
                local_918 = pcVar17;
                FUN_01afb480(&local_258,&local_930);
                cVar10 = *(char *)(lVar6 + 0x1ce);
                if (((int)cVar10 | 2U) == 2) {
                  local_994 = local_910._4_4_;
                  iVar15 = local_920._4_4_;
                }
                else {
                  local_994 = (int)local_910;
                  iVar15 = (int)local_920;
                }
                local_940 = (undefined *)0x3e6;
                FUN_0277d4ac(&local_940);
                bVar11 = FUN_0277d7b4(puVar23,&local_940);
                local_920._0_4_ = (int)local_920 + *(char *)(lVar6 + 0x1cc);
                local_910._0_4_ = (int)local_910 + *(char *)(lVar6 + 0x1cc);
                local_920._4_4_ = local_920._4_4_ + *(char *)(lVar6 + 0x1cd);
                local_910._4_4_ = local_910._4_4_ + *(char *)(lVar6 + 0x1cd);
                if ((((*(int *)(param_3 + 0x10) <= (int)local_920) &&
                     ((int)local_910 <= *(int *)(param_3 + 0x20))) &&
                    (*(int *)(param_3 + 0x14) <= local_920._4_4_)) &&
                   (local_910._4_4_ <= *(int *)(param_3 + 0x24))) {
                  *(undefined2 *)param_1 = *(undefined2 *)(lVar6 + 0x1c4);
                  fVar34 = (float)((local_994 - iVar15) + 1);
                  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar6 + 0x1c6);
                  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar6 + 0x1c7);
                  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar6 + 0x1c8);
                  cVar9 = *(char *)(lVar6 + 0x1cd);
                  fVar35 = -(fVar34 * 0.5) - 1.0;
                  if (((param_10 & 2) == 0 & bVar11) == 0) {
                    fVar35 = fVar34 * 0.5 + 1.0;
                  }
                  *(int *)(param_2 + 8) = (int)*(char *)(lVar6 + 0x1cc);
                  *(int *)(param_2 + 0xc) = (int)cVar9;
                  *param_4 = (int)cVar10;
                  *param_5 = fVar35;
                  if ((local_99c & 1) == 0) {
                    return;
                  }
                  if (*(long *)(lVar27 + 0x28) == 0) {
                    return;
                  }
                  puVar23 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8);
                  if (puVar23 == (undefined8 *)0x0) {
                    return;
                  }
                  (**(code **)*puVar23)();
                  return;
                }
              }
            }
          }
          lVar26 = lVar26 + 0xc;
        } while (lVar26 != 0);
        if ((((local_99c & 1) != 0) && (*(long *)(lVar27 + 0x28) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8), puVar23 != (undefined8 *)0x0))
        {
          (**(code **)*puVar23)();
        }
      }
    }
  }
LAB_021ee5e4:
  lVar26 = *plVar29;
  uVar13 = FUN_0277d6c4(param_1);
  if (*plVar29 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      return;
    }
  }
  local_930 = (undefined *)0xcc6;
  FUN_0277d4ac(&local_930);
  *(uint *)param_1 = (uint)local_930;
  *(undefined4 *)((long)param_1 + 4) = local_930._4_4_;
  *param_4 = 0;
  *param_5 = 2.0;
  local_930 = PTR_DAT_04bc0510;
  lVar26 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar26 == 0) {
    iVar30 = 6;
    iVar15 = 4;
  }
  else {
    iVar15 = *(int *)(lVar26 + 0xd88) + 4;
    iVar30 = *(int *)(lVar26 + 0xd8c) + 6;
  }
  *(int *)(param_2 + 8) = iVar15;
  *(int *)(param_2 + 0xc) = iVar30;
  lVar26 = *plVar29;
  local_920 = 0;
  local_928 = (char *)*param_1;
  local_930 = local_930 + 0x10;
  uVar13 = FUN_0277d6c4(&local_928);
  if (*plVar29 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(param_1);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
         (lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8), lVar26 != 0)) {
        local_920 = lVar26;
      }
    }
  }
  FUN_01afb7fc(&local_930,param_3,*param_4);
  iVar1 = iVar30 + 5;
  iVar3 = *(int *)(param_3 + 0x10) + iVar15;
  iVar4 = *(int *)(param_3 + 0x14) + iVar30;
  iVar5 = *(int *)(param_3 + 0x20) + iVar15;
  iVar30 = *(int *)(param_3 + 0x24) + iVar30;
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
  if (iVar30 <= iVar1) {
    iVar30 = iVar1;
  }
  *(int *)(param_3 + 0x20) = iVar5;
  *(int *)(param_3 + 0x24) = iVar30;
  return;
}

