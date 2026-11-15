
void FUN_02123d10(undefined2 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 *puVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c4 [15];
  undefined1 local_b5;
  undefined2 local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined2 local_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined2 local_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined8 local_9c;
  undefined2 local_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar9 = PTR_DAT_04bb37e0;
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
  if (lVar19 == 0) {
    return;
  }
  iVar13 = *(int *)(param_2 + 0x500);
  if (iVar13 == 0) {
    local_b0 = *(undefined2 *)PTR_DAT_04bb37e0;
    uStack_ae = PTR_DAT_04bb37e0[2];
    uStack_ad = PTR_DAT_04bb37e0[3];
    local_7c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    uStack_ac = (undefined2)local_7c;
    uStack_aa = (undefined1)((uint)local_7c >> 0x10);
    uStack_a9 = (undefined1)((uint)local_7c >> 0x18);
    local_9c._0_7_ = CONCAT16(uStack_ae,CONCAT24(local_b0,local_7c));
    local_9c = CONCAT17(uStack_ad,(undefined7)local_9c);
    local_84._0_7_ = CONCAT16(uStack_ae,CONCAT24(local_b0,local_7c));
    local_84 = CONCAT17(uStack_ad,(undefined7)local_84);
    local_110 = (undefined *)CONCAT44(local_110._4_4_,*(int *)(param_2 + 0x230));
    local_a8 = local_b0;
    uStack_a6 = uStack_ae;
    uStack_a5 = uStack_ad;
    uStack_a4 = uStack_ac;
    uStack_a2 = uStack_aa;
    uStack_a1 = uStack_a9;
    local_a0 = local_b0;
    uStack_9e = uStack_ae;
    uStack_9d = uStack_ad;
    local_94 = uStack_ac;
    uStack_92 = uStack_aa;
    uStack_91 = uStack_a9;
    uStack_90 = local_b0;
    uStack_8e = uStack_ae;
    uStack_8d = uStack_ad;
    uStack_8c = uStack_ac;
    uStack_8a = uStack_aa;
    uStack_89 = uStack_a9;
    uStack_88 = local_b0;
    uStack_86 = uStack_ae;
    uStack_85 = uStack_ad;
    local_78 = local_b0;
    local_76 = uStack_ae;
    local_75 = uStack_ad;
    local_74 = local_7c;
    local_70 = local_b0;
    local_6e = uStack_ae;
    local_6d = uStack_ad;
    local_6c = local_7c;
    if (*(int *)(param_2 + 0x230) == 0) {
LAB_02123eac:
      if (((*(long *)PTR_DAT_04bb5ce0 != 0) &&
          (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) != '\0')) &&
         (*(int *)(param_2 + 0x508) == -1)) {
        local_d8 = (undefined *)CONCAT53(local_d8._3_5_,0x80023);
        FUN_020fd3a0(&local_d8,param_2 + 0x3e0);
        puVar15 = *(undefined8 **)(param_2 + 0x60);
        local_110 = (undefined *)CONCAT44(local_110._4_4_,0xb);
        if (puVar15 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(&DAT_052461c0,extraout_x1,param_1 + 0xc);
            if (iVar13 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar15 = &DAT_05240280;
          }
          else {
            puVar15 = &DAT_05240280;
          }
        }
        FUN_021e0730(param_1,param_1 + 8,param_1 + 0xc,&local_110,&local_d8,puVar15);
      }
    }
    else {
      uVar12 = FUN_02119c7c(lVar19,&local_110);
      uVar14 = FUN_0211a6bc(lVar19,&local_b0,uVar12);
      if ((uVar14 & 1) == 0) goto LAB_02123eac;
      uVar5 = puVar9[3];
      *(ulong *)(param_1 + 8) =
           CONCAT17(uStack_a9,
                    CONCAT16(uStack_aa,
                             CONCAT24(uStack_ac,CONCAT13(uStack_ad,CONCAT12(uStack_ae,local_b0)))));
      *(ulong *)(param_1 + 0xc) =
           CONCAT17(uStack_a1,
                    CONCAT16(uStack_a2,
                             CONCAT24(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8)))));
      uVar12 = *(undefined4 *)(puVar9 + 4);
      *(undefined1 *)((long)param_1 + 0x33) = uVar5;
      *(undefined4 *)(param_1 + 0x1a) = uVar12;
      *(undefined1 *)((long)param_1 + 0x2b) = uVar5;
      *(undefined4 *)(param_1 + 0x16) = uVar12;
      *(ulong *)(param_1 + 4) =
           CONCAT17(uStack_89,
                    CONCAT16(uStack_8a,
                             CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))))
      ;
      *(undefined4 *)(param_1 + 0x10) = local_84._4_4_;
      *(undefined4 *)(param_1 + 0x12) = local_7c;
      uVar6 = *(undefined2 *)puVar9;
      uVar5 = puVar9[2];
      param_1[0x18] = uVar6;
      param_1[0x14] = uVar6;
      *(undefined1 *)(param_1 + 0x19) = uVar5;
      *(undefined1 *)(param_1 + 0x15) = uVar5;
      *param_1 = local_9c._4_2_;
      *(undefined1 *)(param_1 + 1) = local_9c._6_1_;
      *(undefined1 *)((long)param_1 + 3) = local_9c._7_1_;
      *(uint *)(param_1 + 2) = CONCAT13(uStack_91,CONCAT12(uStack_92,local_94));
    }
    iVar13 = *(int *)(param_2 + 0x500);
  }
  if (iVar13 != 1) goto LAB_02124548;
  local_b5 = 0;
  local_c8 = 0x10;
  lVar18 = param_2 + 0x3e0;
  local_c4[0] = '\0';
  local_d0 = local_c4;
  local_d8 = PTR_DAT_04bb2ab0 + 0x10;
  FUN_021d7aa0(&local_d8,lVar18);
  puVar2 = PTR_DAT_04bb2020;
  if ((param_3 & 1) == 0) {
    if (*(int *)(lVar19 + 0x1e8) != 0) {
      plVar21 = *(long **)(lVar19 + 0x1f0);
      plVar3 = plVar21 + *(int *)(lVar19 + 0x1e8);
      do {
        lVar20 = *plVar21;
        (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(lVar18);
        (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(lVar18);
        lVar22 = *(long *)(param_2 + 1000);
        (**(code **)(*(long *)(lVar20 + 0xf8) + 0x18))();
        lVar16 = *(long *)(lVar20 + 0x100);
        if (lVar22 == lVar16) {
LAB_021240fc:
          if (*(char *)(lVar20 + 0x1d0) != '\0') {
            uVar12 = *(undefined4 *)(lVar20 + 0x1d4);
            goto LAB_021242fc;
          }
          break;
        }
        uVar14 = 0;
        bVar11 = true;
        lVar22 = *(long *)(param_2 + 1000) + 2;
        do {
          lVar4 = lVar22 + uVar14;
          cVar7 = *(char *)(lVar4 + -2);
          if (cVar7 != *(char *)(lVar16 + uVar14)) break;
          if (cVar7 == '\0') {
            if (bVar11) goto LAB_021240fc;
            break;
          }
          cVar7 = *(char *)(lVar4 + -1);
          if (cVar7 != *(char *)(lVar16 + uVar14 + 1)) break;
          if (cVar7 == '\0') goto LAB_021240fc;
          cVar7 = *(char *)(lVar22 + uVar14);
          if (cVar7 != *(char *)(lVar16 + uVar14 + 2)) break;
          if (cVar7 == '\0') goto LAB_021240fc;
          bVar11 = uVar14 < 0x7fffe;
          uVar14 = uVar14 + 3;
        } while (uVar14 != 0x80001);
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar3);
    }
    goto LAB_02124548;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = SUB82(puVar1,0);
  uStack_ae = (undefined1)((ulong)puVar1 >> 0x10);
  uStack_ad = (undefined1)((ulong)puVar1 >> 0x18);
  uStack_ac = (undefined2)((ulong)puVar1 >> 0x20);
  uStack_aa = (undefined1)((ulong)puVar1 >> 0x30);
  uStack_a9 = (undefined1)((ulong)puVar1 >> 0x38);
  local_a8 = 0x16fb;
  uStack_a6 = 7;
  uStack_a5 = 4;
  uStack_a4 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  (**(code **)(local_d8 + 0x18))(&local_d8);
  (**(code **)(local_d8 + 0x18))(&local_d8);
  pcVar10 = local_d0;
  (**(code **)(CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT24(uStack_ac,CONCAT13(uStack_ad,CONCAT12(uStack_ae,local_b0))
                                         ))) + 0x18))(&local_b0);
  pcVar8 = (char *)CONCAT17(uStack_a1,
                            CONCAT16(uStack_a2,
                                     CONCAT24(uStack_a4,
                                              CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8)))));
  if (pcVar10 == pcVar8) {
LAB_02124114:
    uVar12 = 0x1a;
  }
  else {
    uVar14 = 0;
    bVar11 = true;
    do {
      if (local_d0[uVar14] != pcVar8[uVar14]) break;
      if (local_d0[uVar14] == '\0') {
        if (bVar11) goto LAB_02124114;
        break;
      }
      bVar11 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    puVar1 = puVar2 + 0x10;
    local_b0 = SUB82(puVar1,0);
    uStack_ae = (undefined1)((ulong)puVar1 >> 0x10);
    uStack_ad = (undefined1)((ulong)puVar1 >> 0x18);
    uStack_ac = (undefined2)((ulong)puVar1 >> 0x20);
    uStack_aa = (undefined1)((ulong)puVar1 >> 0x30);
    uStack_a9 = (undefined1)((ulong)puVar1 >> 0x38);
    local_a8 = 0xaf55;
    uStack_a6 = 10;
    uStack_a5 = 4;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a1 = 0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    (**(code **)(local_d8 + 0x18))(&local_d8);
    pcVar10 = local_d0;
    (**(code **)(CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT24(uStack_ac,
                                            CONCAT13(uStack_ad,CONCAT12(uStack_ae,local_b0))))) +
                0x18))(&local_b0);
    pcVar8 = (char *)CONCAT17(uStack_a1,
                              CONCAT16(uStack_a2,
                                       CONCAT24(uStack_a4,
                                                CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8)))));
    if (pcVar10 == pcVar8) {
LAB_021241b0:
      uVar12 = 0x19;
    }
    else {
      uVar14 = 0;
      bVar11 = true;
      do {
        if (local_d0[uVar14] != pcVar8[uVar14]) break;
        if (local_d0[uVar14] == '\0') {
          if (bVar11) goto LAB_021241b0;
          break;
        }
        bVar11 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      puVar1 = puVar2 + 0x10;
      local_b0 = SUB82(puVar1,0);
      uStack_ae = (undefined1)((ulong)puVar1 >> 0x10);
      uStack_ad = (undefined1)((ulong)puVar1 >> 0x18);
      uStack_ac = (undefined2)((ulong)puVar1 >> 0x20);
      uStack_aa = (undefined1)((ulong)puVar1 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar1 >> 0x38);
      local_a8 = 0xb637;
      uStack_a6 = 9;
      uStack_a5 = 4;
      uStack_a4 = 0;
      uStack_a2 = 0;
      uStack_a1 = 0;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      (**(code **)(local_d8 + 0x18))(&local_d8);
      pcVar10 = local_d0;
      (**(code **)(CONCAT17(uStack_a9,
                            CONCAT16(uStack_aa,
                                     CONCAT24(uStack_ac,
                                              CONCAT13(uStack_ad,CONCAT12(uStack_ae,local_b0))))) +
                  0x18))(&local_b0);
      pcVar8 = (char *)CONCAT17(uStack_a1,
                                CONCAT16(uStack_a2,
                                         CONCAT24(uStack_a4,
                                                  CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8))))
                               );
      if (pcVar10 == pcVar8) {
LAB_02124244:
        uVar12 = 0x20;
      }
      else {
        uVar14 = 0;
        bVar11 = true;
        do {
          if (local_d0[uVar14] != pcVar8[uVar14]) break;
          if (local_d0[uVar14] == '\0') {
            if (bVar11) goto LAB_02124244;
            break;
          }
          bVar11 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        if (local_d0 == "doc") {
LAB_021242b8:
          uVar12 = 0x21;
        }
        else {
          uVar14 = 0;
          bVar11 = true;
          do {
            if (local_d0[uVar14] != (&DAT_040f40a8)[uVar14]) break;
            if (local_d0[uVar14] == '\0') {
              if (bVar11) goto LAB_021242b8;
              break;
            }
            bVar11 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
          puVar2 = puVar2 + 0x10;
          local_b0 = SUB82(puVar2,0);
          uStack_ae = (undefined1)((ulong)puVar2 >> 0x10);
          uStack_ad = (undefined1)((ulong)puVar2 >> 0x18);
          uStack_ac = (undefined2)((ulong)puVar2 >> 0x20);
          uStack_aa = (undefined1)((ulong)puVar2 >> 0x30);
          uStack_a9 = (undefined1)((ulong)puVar2 >> 0x38);
          local_a8 = 0x4214;
          uStack_a6 = 0xf;
          uStack_a5 = 4;
          uStack_a4 = 0;
          uStack_a2 = 0;
          uStack_a1 = 0;
          uVar14 = FUN_00710cb0(&local_d8,&local_b0);
          if ((uVar14 & 1) == 0) goto LAB_02124548;
          local_108 = "CompleteCommuneExpandEvent";
          local_110 = puVar2;
          uVar14 = FUN_0273f0a0(&local_110);
          if ((uVar14 & 1) == 0) goto LAB_02124548;
          uVar12 = 0x3d;
        }
      }
    }
  }
LAB_021242fc:
  local_b0 = 0xffff;
  uStack_ac = 0xfffe;
  uStack_aa = 0;
  uStack_a9 = 0;
  local_a8 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  FUN_0277d4ac(&uStack_ac);
  uStack_a4 = 0xfffe;
  uStack_a2 = 0;
  uStack_a1 = 0;
  local_a0 = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  FUN_0277d4ac(&uStack_a4);
  local_9c = 0xfffe;
  FUN_0277d4ac(&local_9c);
  local_94 = 0xfffe;
  uStack_92 = 0;
  uStack_91 = 0;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8d = 0;
  FUN_0277d4ac(&local_94);
  uStack_8c = 0xfffe;
  uStack_8a = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  uStack_86 = 0;
  uStack_85 = 0;
  FUN_0277d4ac(&uStack_8c);
  local_84 = 0xfffe;
  FUN_0277d4ac(&local_84);
  FUN_0215db20(&local_110,*(undefined8 *)PTR_DAT_04bb4890,uVar12);
  local_b0 = (undefined2)local_110;
  uStack_aa = local_110._6_1_;
  uStack_a9 = local_110._7_1_;
  local_a8 = SUB82(local_108,0);
  uStack_a6 = (undefined1)((ulong)local_108 >> 0x10);
  uStack_a5 = (undefined1)((ulong)local_108 >> 0x18);
  *(undefined1 *)(param_1 + 9) = local_110._6_1_;
  *(undefined1 *)((long)param_1 + 0x13) = local_110._7_1_;
  uStack_a4 = local_108._4_2_;
  uStack_a2 = local_108._6_1_;
  uStack_a1 = local_108._7_1_;
  local_a0 = (undefined2)local_100;
  uStack_9e = (undefined1)((uint)local_100 >> 0x10);
  uStack_9d = (undefined1)((uint)local_100 >> 0x18);
  uStack_ac = local_110._4_2_;
  param_1[8] = local_110._4_2_;
  local_9c._0_4_ = CONCAT13(local_f9,CONCAT12(local_fa,local_fc));
  local_9c = CONCAT44(local_f8,(undefined4)local_9c);
  local_94 = local_f4;
  uStack_92 = local_f2;
  param_1[0x18] = *(undefined2 *)puVar9;
  uStack_91 = local_f1;
  uStack_90 = (undefined2)local_f0;
  uStack_8e = (undefined1)((uint)local_f0 >> 0x10);
  uStack_8d = (undefined1)((uint)local_f0 >> 0x18);
  uStack_8c = local_ec;
  uStack_8a = local_ea;
  uStack_89 = local_e9;
  *(undefined *)(param_1 + 0x19) = puVar9[2];
  uStack_88 = (undefined2)local_e8;
  uStack_86 = (undefined1)((uint)local_e8 >> 0x10);
  uStack_85 = (undefined1)((uint)local_e8 >> 0x18);
  uVar5 = puVar9[3];
  local_84._0_4_ = CONCAT13(local_e1,CONCAT12(local_e2,local_e4));
  local_84 = CONCAT44(local_e0,(undefined4)local_84);
  param_1[0xc] = local_108._4_2_;
  *(undefined1 *)(param_1 + 0xd) = local_108._6_1_;
  *(undefined1 *)((long)param_1 + 0x33) = uVar5;
  uVar12 = *(undefined4 *)(puVar9 + 4);
  *(undefined1 *)((long)param_1 + 0x1b) = local_108._7_1_;
  *(undefined4 *)(param_1 + 0xe) = local_100;
  param_1[4] = local_f4;
  *(undefined1 *)(param_1 + 5) = local_f2;
  *(undefined1 *)((long)param_1 + 0xb) = local_f1;
  *(undefined4 *)(param_1 + 6) = local_f0;
  *(undefined4 *)(param_1 + 10) = (undefined4)local_108;
  param_1[0x10] = local_ec;
  *(undefined1 *)(param_1 + 0x11) = local_ea;
  *(undefined1 *)((long)param_1 + 0x23) = local_e9;
  *(undefined4 *)(param_1 + 0x12) = local_e8;
  *(undefined4 *)(param_1 + 0x1a) = uVar12;
  param_1[0x14] = local_e4;
  *(undefined1 *)(param_1 + 0x15) = local_e2;
  *(undefined1 *)((long)param_1 + 0x2b) = local_e1;
  *(undefined4 *)(param_1 + 0x16) = local_e0;
  *param_1 = local_fc;
  *(undefined1 *)(param_1 + 1) = local_fa;
  *(undefined1 *)((long)param_1 + 3) = local_f9;
  *(undefined4 *)(param_1 + 2) = local_f8;
  if ((param_3 & 1) == 0) {
LAB_02124540:
    uVar12 = *(undefined4 *)puVar9;
    uVar17 = *(undefined4 *)(puVar9 + 4);
  }
  else {
    (**(code **)(local_d8 + 0x18))(&local_d8);
    (**(code **)(local_d8 + 0x18))(&local_d8);
    if (local_d0 != "alw") {
      if (*local_d0 != 'a') goto LAB_02124540;
      lVar18 = 0;
      do {
        if ((lVar18 == 0x80000) ||
           (lVar16 = lVar18 + 1, local_d0[lVar16] != (&DAT_040aaf56)[lVar18])) goto LAB_02124540;
        lVar18 = lVar18 + 1;
      } while (local_d0[lVar16] != '\0');
    }
    local_110 = (undefined *)0x31bc;
    FUN_0277d4ac(&local_110);
    uVar12 = (undefined4)local_110;
    uVar17 = local_110._4_4_;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar12;
  *(undefined4 *)(param_1 + 0x16) = uVar17;
LAB_02124548:
  local_b0 = *(undefined2 *)puVar9;
  uStack_ae = puVar9[2];
  uStack_ad = puVar9[3];
  local_7c = *(undefined4 *)(puVar9 + 4);
  uStack_ac = (undefined2)local_7c;
  uStack_aa = (undefined1)((uint)local_7c >> 0x10);
  uStack_a9 = (undefined1)((uint)local_7c >> 0x18);
  local_9c._0_7_ = CONCAT16(uStack_ae,CONCAT24(local_b0,(undefined4)local_9c));
  local_9c = CONCAT17(uStack_ad,(undefined7)local_9c);
  local_84._0_7_ = CONCAT16(uStack_ae,CONCAT24(local_b0,(undefined4)local_84));
  local_84 = CONCAT17(uStack_ad,(undefined7)local_84);
  local_110 = (undefined *)CONCAT44(local_110._4_4_,*(int *)(param_2 + 0x230));
  if (*(int *)(param_2 + 0x230) != 0) {
    local_a8 = local_b0;
    uStack_a6 = uStack_ae;
    uStack_a5 = uStack_ad;
    uStack_a4 = uStack_ac;
    uStack_a2 = uStack_aa;
    uStack_a1 = uStack_a9;
    local_94 = uStack_ac;
    uStack_92 = uStack_aa;
    uStack_91 = uStack_a9;
    uStack_90 = local_b0;
    uStack_8e = uStack_ae;
    uStack_8d = uStack_ad;
    uStack_8c = uStack_ac;
    uStack_8a = uStack_aa;
    uStack_89 = uStack_a9;
    uVar12 = FUN_02119c7c(lVar19,&local_110);
    uVar14 = FUN_0211a6bc(lVar19,&local_b0,uVar12);
    if ((uVar14 & 1) != 0) {
      *(ulong *)(param_1 + 8) =
           CONCAT17(uStack_a9,
                    CONCAT16(uStack_aa,
                             CONCAT24(uStack_ac,CONCAT13(uStack_ad,CONCAT12(uStack_ae,local_b0)))));
      *(ulong *)(param_1 + 0xc) =
           CONCAT17(uStack_a1,
                    CONCAT16(uStack_a2,
                             CONCAT24(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8)))));
      *(ulong *)(param_1 + 4) =
           CONCAT17(uStack_89,
                    CONCAT16(uStack_8a,
                             CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))))
      ;
      *(undefined4 *)(param_1 + 0x10) = local_84._4_4_;
      *(undefined4 *)(param_1 + 0x12) = local_7c;
      uVar12 = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)puVar9;
      *(undefined4 *)(param_1 + 0x1a) = uVar12;
      *param_1 = local_9c._4_2_;
      *(undefined1 *)(param_1 + 1) = local_9c._6_1_;
      *(undefined1 *)((long)param_1 + 3) = local_9c._7_1_;
      *(uint *)(param_1 + 2) = CONCAT13(uStack_91,CONCAT12(uStack_92,local_94));
    }
  }
  return;
}

