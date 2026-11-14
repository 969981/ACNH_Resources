
/* WARNING: Removing unreachable block (ram,0x017290b8) */
/* WARNING: Removing unreachable block (ram,0x0172908c) */
/* WARNING: Removing unreachable block (ram,0x01729098) */
/* WARNING: Removing unreachable block (ram,0x017290a4) */
/* WARNING: Removing unreachable block (ram,0x017290c4) */
/* WARNING: Removing unreachable block (ram,0x017290d4) */

bool FUN_01728110(long param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                 byte *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  bool bVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint *puVar26;
  uint *puVar27;
  int *piVar28;
  long lVar29;
  long *plVar30;
  undefined2 *puVar31;
  undefined4 uVar32;
  undefined *puVar33;
  undefined2 local_d8;
  undefined1 local_d6;
  char local_d5;
  int local_d4;
  undefined *local_d0;
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  char cStack_b6;
  undefined4 uStack_b5;
  char cStack_b1;
  char cStack_b0;
  char cStack_af;
  char cStack_ae;
  char cStack_ad;
  ushort local_ac;
  undefined1 local_9d;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  cVar20 = cStack_ae;
  cVar19 = cStack_af;
  cVar16 = cStack_b0;
  cVar18 = cStack_b1;
  uVar9 = uStack_b5;
  cVar13 = cStack_b6;
  uVar10 = uStack_b8;
  uVar3 = uStack_bc;
  piVar28 = (int *)(param_1 + 8);
  iVar4 = *piVar28;
  if (iVar4 != 0) goto switchD_017281a0_default;
  *(undefined4 *)(param_1 + 8) = 0;
  bVar22 = *param_6;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  if (7 < bVar22) {
    bVar22 = 0xff;
  }
  *(byte *)(param_1 + 0x188) = bVar22;
  if (*(int *)(param_1 + 0x194) == 0) {
    *(undefined2 *)(param_1 + 0x261) = 0;
  }
  puVar7 = PTR_DAT_04bb43c0;
  puVar6 = PTR_DAT_04bb37e0;
  puVar33 = PTR_DAT_04bb2028;
  cStack_b6 = s_DeliveryPass_040a0f37[6];
  cVar14 = cStack_b6;
  uStack_b5._0_1_ = s_DeliveryPass_040a0f37[7];
  cVar17 = (char)uStack_b5;
  uStack_b8 = s_DeliveryPass_040a0f37._4_2_;
  uVar11 = uStack_b8;
  uStack_bc = s_DeliveryPass_040a0f37._0_4_;
  uVar8 = uStack_bc;
  cStack_b6 = s_DeliveryShow_04091c67[6];
  cVar15 = cStack_b6;
  uStack_b5._0_1_ = s_DeliveryShow_04091c67[7];
  uStack_b8 = s_DeliveryShow_04091c67._4_2_;
  uVar12 = uStack_b8;
  uStack_bc = s_DeliveryShow_04091c67._0_4_;
  uVar32 = uStack_bc;
  cStack_b6 = s_DeliveryPutaway_040d4e1d[6];
  uStack_b8 = s_DeliveryPutaway_040d4e1d._4_2_;
  uStack_bc = s_DeliveryPutaway_040d4e1d._0_4_;
  cStack_b1 = s_DeliveryPutaway_040d4e1d[0xb];
  cStack_b0 = s_DeliveryPutaway_040d4e1d[0xc];
  cStack_af = s_DeliveryPutaway_040d4e1d[0xd];
  cStack_ae = s_DeliveryPutaway_040d4e1d[0xe];
  local_80 = param_2;
  switch(param_2) {
  case 0:
    local_9d = 0;
    cStack_b0 = 0;
    cStack_b1 = 0x73;
    local_c0 = 0x20;
    uStack_b5 = CONCAT31(0x736150,cVar17);
    local_94 = *param_3;
    local_c8 = &uStack_bc;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    puVar33 = PTR_DAT_04bb2028 + 0x10;
    local_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    uVar32 = 2;
    uStack_84 = 2;
    local_d0 = puVar33;
    uStack_bc = uVar8;
    uStack_b8 = uVar11;
    cStack_b6 = cVar14;
    local_98 = param_5;
    FUN_01729120(piVar28,&local_d0);
    local_94 = *param_4;
    uStack_bc = s_DeliveryReceive_040f48c2._0_4_;
    uStack_b8 = s_DeliveryReceive_040f48c2._4_2_;
    cStack_b6 = s_DeliveryReceive_040f48c2[6];
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryReceive_040f48c2._8_7_,s_DeliveryReceive_040f48c2[7])
    ;
    cStack_b1 = s_DeliveryReceive_040f48c2[0xb];
    cStack_b0 = s_DeliveryReceive_040f48c2[0xc];
    cStack_af = s_DeliveryReceive_040f48c2[0xd];
    cStack_ae = s_DeliveryReceive_040f48c2[0xe];
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_d0 = puVar33;
    local_98 = param_5;
    break;
  case 1:
    local_9d = 0;
    cStack_b0 = 0;
    cStack_b1 = 0x73;
    local_c0 = 0x20;
    uStack_b5 = CONCAT31(0x736150,cVar17);
    local_94 = *param_3;
    local_c8 = &uStack_bc;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    puVar33 = PTR_DAT_04bb2028 + 0x10;
    local_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    local_98 = 0;
    uStack_84 = 0;
    local_d0 = puVar33;
    uStack_bc = uVar8;
    uStack_b8 = uVar11;
    cStack_b6 = cVar14;
    FUN_01729120(piVar28,&local_d0);
    goto LAB_01728b38;
  case 2:
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryPutaway_040d4e1d._8_7_,s_DeliveryPutaway_040d4e1d[7])
    ;
    local_94 = *param_3;
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    goto LAB_01728b54;
  case 3:
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryPutaway_040d4e1d._8_7_,s_DeliveryPutaway_040d4e1d[7])
    ;
    cStack_ad = '\0';
    goto LAB_01728760;
  case 4:
    FUN_01729420(param_1,param_3);
    goto switchD_017281a0_default;
  case 5:
  case 6:
    local_d6 = *(undefined1 *)(param_1 + 0x22a);
    local_d5 = *(char *)(param_1 + 0x22b);
    local_d0 = PTR_DAT_04bc0510 + 0x10;
    local_d4 = *(int *)(param_1 + 0x22c);
    local_d8 = *(undefined2 *)(param_1 + 0x228);
    local_c8 = *(undefined4 **)(param_1 + 0x228);
    local_c0 = 0;
    uStack_bc = 0;
    lVar29 = *(long *)PTR_DAT_04bb43c0;
    uVar23 = FUN_0277d6c4(&local_c8);
    puVar26 = (uint *)0x0;
    if (*(long *)puVar7 != 0) {
      lVar29 = *(long *)(lVar29 + 0x57e58);
      uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if (uVar23 < *(uint *)(lVar29 + 0x1d8)) {
        puVar26 = (uint *)0x0;
        if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar23 * 8) != 0) {
          lVar29 = *(long *)PTR_DAT_04bc0428;
          uVar23 = FUN_0277d6c4(param_1 + 0x228);
          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if (*(uint *)(lVar29 + 0x1d8) <= uVar23) goto LAB_01728cf4;
          puVar26 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar23 * 8);
          if (puVar26 != (uint *)0x0) {
            local_c0 = SUB84(puVar26,0);
            uStack_bc = (undefined4)((ulong)puVar26 >> 0x20);
          }
        }
      }
      else {
LAB_01728cf4:
        puVar26 = (uint *)0x0;
      }
    }
    local_70 = *(undefined4 *)(param_1 + 0x228);
    local_6c = *(int *)(param_1 + 0x22c);
    if (puVar26 == (uint *)0x0) {
      local_74 = 0xbc;
    }
    else {
      uVar23 = *puVar26;
      local_74 = 0;
      if ((uVar23 != 0) && (puVar26 != (uint *)(ulong)uVar23)) {
        puVar27 = (uint *)((long)puVar26 - (long)(ulong)uVar23);
        local_74 = 0;
        if (*puVar27 != 0) {
          uVar23 = puVar27[1];
          if ((uVar23 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar27 + lVar29 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar29 != 0) {
              uVar2 = 0;
              if ((ulong)uVar23 != 0) {
                uVar2 = (uint)((ulong)((long)puVar26 - lVar29) / (ulong)uVar23);
              }
              if (*puVar27 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_74 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                 local_74 < 0xbd)) goto LAB_01728d9c;
            }
          }
          local_74 = 0;
        }
      }
    }
LAB_01728d9c:
    if (local_74 == 0x8d) {
      FUN_01b06c00(&local_7c,&local_d0);
LAB_01728ea0:
      *(undefined4 *)(param_1 + 0x228) = local_7c;
      *(int *)(param_1 + 0x22c) = local_78;
    }
    else {
      if (local_74 != 0x92) {
        FUN_01b079ec(&local_7c,&local_d0);
        goto LAB_01728ea0;
      }
      *(undefined2 *)(param_1 + 0x228) = (undefined2)DAT_05405f5c;
      *(undefined1 *)(param_1 + 0x22a) = DAT_05405f5c._2_1_;
      *(undefined1 *)(param_1 + 0x22b) = DAT_05405f5c._3_1_;
      *(undefined4 *)(param_1 + 0x22c) = DAT_05405f60;
    }
    if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar23 = *(uint *)(param_1 + 400), uVar23 != 0)) &&
        (plVar30 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                             ((ulong)(uVar23 >> 0x11) & 0x7ff8)), plVar30 != (long *)0x0)) &&
       (((*(uint *)(plVar30 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar30 + 0x46) == uVar23)))) {
      lVar29 = plVar30[0x2a];
      if (((*PTR_DAT_04bb3760 & 1) == 0) &&
         (iVar24 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar24 != 0)) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
      uVar25 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb3758);
      if (((uVar25 & 1) != 0) && ((int)lVar29 == 1)) {
        FUN_016e5238(plVar30,param_1 + 0x1e0);
      }
    }
    puVar33 = PTR_DAT_04bb2230;
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    if (*(char *)(lVar29 + 0x28) == '\0') {
      bVar22 = 1;
    }
    else {
      bVar22 = (**(code **)(*(long *)(lVar29 + 0x20) + 0x18))((long *)(lVar29 + 0x20));
      *(undefined1 *)(lVar29 + 0x28) = 0;
    }
    *(byte *)(lVar29 + 0x29) = bVar22 & 1;
    local_7c = *(undefined4 *)(lVar29 + 0x2c);
    local_78 = *(int *)(lVar29 + 0x30);
    uVar25 = FUN_0277d7b4(&local_70,&local_7c);
    if ((uVar25 & 1) != 0) {
      if ((local_70._3_1_ == local_7c._3_1_) && (local_6c == local_78)) {
        lVar29 = 0;
        if (*(long *)puVar33 != 0) {
          lVar29 = *(long *)(*(long *)puVar33 + 0x28);
        }
        local_68 = 1;
        local_64 = 2;
        *(undefined2 *)(lVar29 + 0x2c) = *(undefined2 *)(param_1 + 0x228);
        *(undefined1 *)(lVar29 + 0x2e) = *(undefined1 *)(param_1 + 0x22a);
        *(undefined1 *)(lVar29 + 0x2f) = *(undefined1 *)(param_1 + 0x22b);
        uVar3 = *(undefined4 *)(param_1 + 0x22c);
        *(undefined4 *)(&DAT_00002140 + lVar29) = 1;
        *(undefined4 *)(lVar29 + 0x30) = uVar3;
      }
    }
    puVar31 = (undefined2 *)(param_1 + 0x238);
    uVar25 = FUN_0277d7b4(&local_d8,puVar31);
    if ((((uVar25 & 1) == 0) || (local_d5 != *(char *)(param_1 + 0x23b))) ||
       (local_d4 != *(int *)(param_1 + 0x23c))) {
      puVar31 = (undefined2 *)(param_1 + 0x240);
      uVar25 = FUN_0277d7b4(&local_d8,puVar31);
      if ((((uVar25 & 1) == 0) || (local_d5 != *(char *)(param_1 + 0x243))) ||
         (local_d4 != *(int *)(param_1 + 0x244))) goto switchD_017281a0_default;
    }
    *puVar31 = *(undefined2 *)(param_1 + 0x228);
    *(undefined1 *)(puVar31 + 1) = *(undefined1 *)(param_1 + 0x22a);
    *(undefined1 *)((long)puVar31 + 3) = *(undefined1 *)(param_1 + 0x22b);
    *(undefined4 *)(puVar31 + 2) = *(undefined4 *)(param_1 + 0x22c);
    goto switchD_017281a0_default;
  case 7:
    uStack_bc = uVar3;
    uStack_b8 = uVar10;
    cStack_b6 = cVar13;
    uStack_b5 = uVar9;
    cStack_b1 = cVar18;
    if ((*(int *)(param_1 + 0x194) == 0) || (*(int *)(param_1 + 400) != *param_4)) {
      cStack_b0 = cVar16;
      cStack_af = cVar19;
      cStack_ae = cVar20;
      FUN_01729298(&local_d0,param_3,param_1 + 0x238,2);
      FUN_01729120(piVar28,&local_d0);
      FUN_01729320(&local_d0,"DeliveryReceive",param_4,2);
      FUN_01729120(piVar28,&local_d0);
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x19);
      uVar25 = FUN_0290cbcc(&local_d0);
      puVar1 = &DAT_0524bdd4;
      if ((uVar25 & 1) == 0) {
        puVar1 = &DAT_0524bdcc;
      }
      FUN_01729298(&local_d0,param_4,puVar1,0);
      FUN_01729120(piVar28,&local_d0);
    }
    else {
      cStack_b0 = cVar16;
      cStack_af = cVar19;
      cStack_ae = cVar20;
      FUN_01729320(&local_d0,"DeliveryPutaway",param_4,2);
      FUN_01729120(piVar28,&local_d0);
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x19);
      uVar25 = FUN_0290cbcc(&local_d0);
      puVar1 = &DAT_0524bdd4;
      if ((uVar25 & 1) == 0) {
        puVar1 = &DAT_0524bdcc;
      }
      FUN_01729298(&local_d0,param_4,puVar1,0);
      FUN_01729120(piVar28,&local_d0);
    }
    FUN_01729320(&local_d0,"DeliveryReceive",param_3,1);
    goto LAB_01728cc0;
  case 8:
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x19);
    uVar25 = FUN_0290cbcc(&local_d0);
    local_9d = 0;
    local_c0 = 0x20;
    cStack_b1 = 0x73;
    bVar21 = (uVar25 & 1) == 0;
    uStack_bc = s_DeliveryPass_040a0f37._0_4_;
    uVar3 = uStack_bc;
    uStack_b8 = s_DeliveryPass_040a0f37._4_2_;
    uVar10 = uStack_b8;
    cStack_b6 = s_DeliveryPass_040a0f37[6];
    cVar13 = cStack_b6;
    uStack_b5._0_1_ = s_DeliveryPass_040a0f37[7];
    cVar18 = (char)uStack_b5;
    uStack_b5 = CONCAT31(0x736150,(char)uStack_b5);
    cStack_b0 = 0;
    local_90 = 0;
    puVar33 = PTR_DAT_04bb2028 + 0x10;
    local_94 = *param_3;
    local_98 = 0;
    puVar1 = &DAT_0524bdd4;
    if (bVar21) {
      puVar1 = &DAT_0524bdcc;
    }
    puVar5 = &DAT_0524bdd4;
    if (bVar21) {
      puVar5 = &DAT_0524bdcc;
    }
    local_8c._0_3_ = CONCAT12(*(undefined1 *)((long)puVar5 + 2),*(undefined2 *)puVar1);
    puVar1 = &DAT_0524bdd4;
    if (bVar21) {
      puVar1 = &DAT_0524bdcc;
    }
    puVar5 = &DAT_0524bdd4;
    if (bVar21) {
      puVar5 = &DAT_0524bdcc;
    }
    local_8c = CONCAT13(*(undefined1 *)((long)puVar1 + 3),(undefined3)local_8c);
    local_88 = *(undefined4 *)((long)puVar5 + 4);
    uStack_84 = 2;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    FUN_01729120(piVar28,&local_d0);
    puVar6 = PTR_DAT_04bb37e0;
    local_c0 = 0x20;
    local_94 = *param_4;
    local_9d = 0;
    cStack_ad = 0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_90 = 0;
    local_98 = 0;
    uStack_bc = s_DeliveryReceive_040f48c2._0_4_;
    uVar9 = uStack_bc;
    uStack_b8 = s_DeliveryReceive_040f48c2._4_2_;
    uVar11 = uStack_b8;
    cStack_b6 = s_DeliveryReceive_040f48c2[6];
    cVar16 = cStack_b6;
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryReceive_040f48c2._8_7_,s_DeliveryReceive_040f48c2[7])
    ;
    uVar8 = uStack_b5;
    cStack_b1 = s_DeliveryReceive_040f48c2[0xb];
    cVar19 = cStack_b1;
    cStack_b0 = s_DeliveryReceive_040f48c2[0xc];
    cVar20 = cStack_b0;
    cStack_af = s_DeliveryReceive_040f48c2[0xd];
    cVar14 = cStack_af;
    cStack_ae = s_DeliveryReceive_040f48c2[0xe];
    cVar15 = cStack_ae;
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_84 = 2;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    FUN_01729120(piVar28,&local_d0);
    local_9d = 0;
    local_c0 = 0x20;
    cStack_b1 = 0x73;
    cStack_b0 = 0;
    uStack_b5 = CONCAT31(0x736150,cVar18);
    local_94 = *param_4;
    local_98 = 0;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    local_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    uVar32 = 1;
    uStack_84 = 1;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    uStack_bc = uVar3;
    uStack_b8 = uVar10;
    cStack_b6 = cVar13;
    FUN_01729120(piVar28,&local_d0);
    local_94 = *param_3;
    local_98 = 0;
    local_8c = *(undefined4 *)puVar6;
    local_88 = *(undefined4 *)(puVar6 + 4);
    local_d0 = puVar33;
    uStack_bc = uVar9;
    uStack_b8 = uVar11;
    cStack_b6 = cVar16;
    uStack_b5 = uVar8;
    cStack_b1 = cVar19;
    cStack_b0 = cVar20;
    cStack_af = cVar14;
    cStack_ae = cVar15;
    break;
  case 9:
    uStack_bc = s_DeliveryChange_040b5a77._0_4_;
    uStack_b8 = s_DeliveryChange_040b5a77._4_2_;
    cStack_b6 = s_DeliveryChange_040b5a77[6];
    uStack_b5 = (undefined4)
                (CONCAT62(s_DeliveryChange_040b5a77._8_6_,s_DeliveryChange_040b5a77._6_2_) >> 8);
    cStack_b1 = s_DeliveryChange_040b5a77[0xb];
    cStack_b0 = s_DeliveryChange_040b5a77[0xc];
    cStack_af = s_DeliveryChange_040b5a77[0xd];
    cStack_ae = '\0';
LAB_01728760:
    local_94 = *param_3;
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    uStack_84 = 2;
    goto LAB_01728cbc;
  case 10:
    local_9d = 0;
    cStack_ae = 0;
    local_94 = *param_3;
    local_90 = 0;
    uStack_bc = s_DeliveryReject_040ca2d2._0_4_;
    uStack_b8 = s_DeliveryReject_040ca2d2._4_2_;
    cStack_b6 = s_DeliveryReject_040ca2d2[6];
    uStack_b5 = (undefined4)
                (CONCAT62(s_DeliveryReject_040ca2d2._8_6_,s_DeliveryReject_040ca2d2._6_2_) >> 8);
    cStack_b1 = s_DeliveryReject_040ca2d2[0xb];
    cStack_b0 = s_DeliveryReject_040ca2d2[0xc];
    cStack_af = s_DeliveryReject_040ca2d2[0xd];
    local_98 = 0;
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    local_c8 = &uStack_bc;
    local_c0 = 0x20;
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    uStack_84 = 0;
    FUN_01729120(piVar28,&local_d0);
    local_94 = *param_4;
    uStack_b5._1_3_ = s_DeliveryRejected_040a6353._8_3_;
    cStack_b1 = s_DeliveryRejected_040a6353[0xb];
    cStack_b0 = s_DeliveryRejected_040a6353[0xc];
    cStack_af = s_DeliveryRejected_040a6353[0xd];
    cStack_ae = s_DeliveryRejected_040a6353[0xe];
    cStack_ad = s_DeliveryRejected_040a6353[0xf];
    uStack_bc = s_DeliveryRejected_040a6353._0_4_;
    uStack_b8 = s_DeliveryRejected_040a6353._4_2_;
    cStack_b6 = s_DeliveryRejected_040a6353[6];
    uStack_b5._0_1_ = s_DeliveryRejected_040a6353[7];
    local_8c = *(undefined4 *)puVar6;
    local_88 = *(undefined4 *)(puVar6 + 4);
    goto LAB_01728870;
  case 0xb:
    local_9d = 0;
    cStack_b0 = 0;
    local_c0 = 0x20;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    cStack_b1 = 0x73;
    local_94 = *param_3;
    uStack_b5 = CONCAT31(0x736150,cVar17);
    local_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    puVar33 = PTR_DAT_04bb2028 + 0x10;
    local_98 = 0;
    uStack_84 = 2;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    uStack_bc = uVar8;
    uStack_b8 = uVar11;
    cStack_b6 = cVar14;
    FUN_01729120(piVar28,&local_d0);
    puVar6 = PTR_DAT_04bb37e0;
    local_c0 = 0x20;
    local_94 = *param_4;
    local_9d = 0;
    cStack_ad = 0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_90 = 0;
    local_98 = 0;
    uStack_bc = s_DeliveryReceive_040f48c2._0_4_;
    uVar3 = uStack_bc;
    uStack_b8 = s_DeliveryReceive_040f48c2._4_2_;
    uVar10 = uStack_b8;
    cStack_b6 = s_DeliveryReceive_040f48c2[6];
    cVar13 = cStack_b6;
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryReceive_040f48c2._8_7_,s_DeliveryReceive_040f48c2[7])
    ;
    uVar9 = uStack_b5;
    cStack_b1 = s_DeliveryReceive_040f48c2[0xb];
    cVar18 = cStack_b1;
    cStack_b0 = s_DeliveryReceive_040f48c2[0xc];
    cVar16 = cStack_b0;
    cStack_af = s_DeliveryReceive_040f48c2[0xd];
    cVar19 = cStack_af;
    cStack_ae = s_DeliveryReceive_040f48c2[0xe];
    cVar20 = cStack_ae;
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_84 = 2;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    FUN_01729120(piVar28,&local_d0);
    local_9d = 0;
    local_c0 = 0x20;
    cStack_b1 = 0x73;
    cStack_b0 = 0;
    uStack_b5 = CONCAT31(0x736150,cVar17);
    local_94 = *param_4;
    local_98 = 0;
    local_8c = *(undefined4 *)(param_1 + 0x240);
    local_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x244);
    uVar32 = 1;
    uStack_84 = 1;
    local_d0 = puVar33;
    local_c8 = &uStack_bc;
    uStack_bc = uVar8;
    uStack_b8 = uVar11;
    cStack_b6 = cVar14;
    FUN_01729120(piVar28,&local_d0);
    local_94 = *param_3;
    local_98 = 0;
    local_8c = *(undefined4 *)puVar6;
    local_88 = *(undefined4 *)(puVar6 + 4);
    local_d0 = puVar33;
    uStack_bc = uVar3;
    uStack_b8 = uVar10;
    cStack_b6 = cVar13;
    uStack_b5 = uVar9;
    cStack_b1 = cVar18;
    cStack_b0 = cVar16;
    cStack_af = cVar19;
    cStack_ae = cVar20;
    break;
  case 0xc:
    local_94 = *param_3;
    cStack_b1 = '\0';
    uStack_bc = s_DeliveryEat_040cf61b._0_4_;
    uStack_b8 = s_DeliveryEat_040cf61b._4_2_;
    cStack_b6 = s_DeliveryEat_040cf61b[6];
    uStack_b5._0_1_ = s_DeliveryEat_040cf61b[7];
    uStack_b5 = CONCAT31(0x746145,(char)uStack_b5);
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    uStack_84 = 2;
    cStack_b0 = cVar16;
    cStack_af = cVar19;
    cStack_ae = cVar20;
    goto LAB_01728cbc;
  case 0xd:
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x19);
    uVar25 = FUN_0290cbcc(&local_d0);
    local_9d = 0;
    cStack_b1 = 0x73;
    local_c0 = 0x20;
    cStack_b0 = 0;
    local_c8 = &uStack_bc;
    bVar21 = (uVar25 & 1) == 0;
    uStack_bc = s_DeliveryPass_040a0f37._0_4_;
    uStack_b8 = s_DeliveryPass_040a0f37._4_2_;
    cStack_b6 = s_DeliveryPass_040a0f37[6];
    uStack_b5._0_1_ = s_DeliveryPass_040a0f37[7];
    uStack_b5 = CONCAT31(0x736150,(char)uStack_b5);
    local_90 = 0;
    puVar33 = PTR_DAT_04bb2028 + 0x10;
    local_94 = *param_3;
    local_98 = 0;
    puVar1 = &DAT_0524bdd4;
    if (bVar21) {
      puVar1 = &DAT_0524bdcc;
    }
    puVar5 = &DAT_0524bdd4;
    if (bVar21) {
      puVar5 = &DAT_0524bdcc;
    }
    local_8c._0_3_ = CONCAT12(*(undefined1 *)((long)puVar5 + 2),*(undefined2 *)puVar1);
    puVar1 = &DAT_0524bdd4;
    if (bVar21) {
      puVar1 = &DAT_0524bdcc;
    }
    puVar5 = &DAT_0524bdd4;
    if (bVar21) {
      puVar5 = &DAT_0524bdcc;
    }
    local_8c = CONCAT13(*(undefined1 *)((long)puVar1 + 3),(undefined3)local_8c);
    local_88 = *(undefined4 *)((long)puVar5 + 4);
    uStack_84 = 0;
    local_d0 = puVar33;
    FUN_01729120(piVar28,&local_d0);
LAB_01728b38:
    local_94 = *param_4;
    uStack_bc = s_DeliveryReceive_040f48c2._0_4_;
    uStack_b8 = s_DeliveryReceive_040f48c2._4_2_;
    cStack_b6 = s_DeliveryReceive_040f48c2[6];
    uStack_b5 = (undefined4)CONCAT71(s_DeliveryReceive_040f48c2._8_7_,s_DeliveryReceive_040f48c2[7])
    ;
    cStack_b1 = s_DeliveryReceive_040f48c2[0xb];
    cStack_b0 = s_DeliveryReceive_040f48c2[0xc];
    cStack_af = s_DeliveryReceive_040f48c2[0xd];
    cStack_ae = s_DeliveryReceive_040f48c2[0xe];
    local_d0 = puVar33;
LAB_01728b54:
    cStack_ad = '\0';
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
LAB_01728c10:
    uStack_84 = 1;
LAB_01728cbc:
    local_90 = 0;
    local_9d = 0;
    local_c0 = 0x20;
    local_c8 = &uStack_bc;
    local_98 = param_5;
    goto LAB_01728cc0;
  case 0xe:
    cStack_b1 = 'w';
    cStack_b0 = '\0';
    uStack_b5 = CONCAT31(0x6f6853,(char)uStack_b5);
    uStack_bc = uVar32;
    uStack_b8 = uVar12;
    cStack_b6 = cVar15;
    cStack_af = cVar19;
    cStack_ae = cVar20;
    goto LAB_01728c50;
  case 0xf:
    uStack_bc = s_DeliveryForGst_040679e3._0_4_;
    uStack_b8 = s_DeliveryForGst_040679e3._4_2_;
    cStack_b6 = s_DeliveryForGst_040679e3[6];
    uStack_b5 = (undefined4)
                (CONCAT62(s_DeliveryForGst_040679e3._8_6_,s_DeliveryForGst_040679e3._6_2_) >> 8);
    cStack_b1 = s_DeliveryForGst_040679e3[0xb];
    cStack_b0 = s_DeliveryForGst_040679e3[0xc];
    cStack_af = s_DeliveryForGst_040679e3[0xd];
    cStack_ae = '\0';
LAB_01728c50:
    local_94 = *param_3;
LAB_01728ca8:
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    uStack_84 = 2;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    goto LAB_01728cbc;
  case 0x10:
    local_ac = 100;
    uStack_bc = s_DeliveryForGstEnd_0407c66b._0_4_;
    uStack_b8 = s_DeliveryForGstEnd_0407c66b._4_2_;
    cStack_b6 = s_DeliveryForGstEnd_0407c66b[6];
    uStack_b5._0_1_ = s_DeliveryForGstEnd_0407c66b[7];
    uStack_b5._1_3_ = s_DeliveryForGstEnd_0407c66b._8_3_;
    cStack_b1 = s_DeliveryForGstEnd_0407c66b[0xb];
    cStack_b0 = s_DeliveryForGstEnd_0407c66b[0xc];
    cStack_af = s_DeliveryForGstEnd_0407c66b[0xd];
    cStack_ae = s_DeliveryForGstEnd_0407c66b[0xe];
    cStack_ad = s_DeliveryForGstEnd_0407c66b[0xf];
    local_94 = *param_3;
    goto LAB_01728ca8;
  case 0x11:
    cStack_b1 = 'w';
    local_94 = *param_3;
    cStack_b0 = '\0';
    uStack_b5 = CONCAT31(0x6f6853,(char)uStack_b5);
    local_d0 = PTR_DAT_04bb2028 + 0x10;
    local_8c = *(undefined4 *)(param_1 + 0x238);
    local_88 = *(undefined4 *)(param_1 + 0x23c);
    uStack_bc = uVar32;
    uStack_b8 = uVar12;
    cStack_b6 = cVar15;
    cStack_af = cVar19;
    cStack_ae = cVar20;
    goto LAB_01728c10;
  case 0x12:
  case 0x13:
    local_94 = *param_4;
    uStack_b5._1_3_ = s_DeliveryRejected_040a6353._8_3_;
    cStack_b1 = s_DeliveryRejected_040a6353[0xb];
    cStack_b0 = s_DeliveryRejected_040a6353[0xc];
    cStack_af = s_DeliveryRejected_040a6353[0xd];
    cStack_ae = s_DeliveryRejected_040a6353[0xe];
    cStack_ad = s_DeliveryRejected_040a6353[0xf];
    uStack_bc = s_DeliveryRejected_040a6353._0_4_;
    uStack_b8 = s_DeliveryRejected_040a6353._4_2_;
    cStack_b6 = s_DeliveryRejected_040a6353[6];
    uStack_b5._0_1_ = s_DeliveryRejected_040a6353[7];
    local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
LAB_01728870:
    local_90 = 0;
    local_9d = 0;
    local_ac = local_ac & 0xff00;
    local_c0 = 0x20;
    local_c8 = &uStack_bc;
    local_d0 = puVar33 + 0x10;
    uStack_84 = 0;
    local_98 = param_5;
    goto LAB_01728cc0;
  default:
    goto switchD_017281a0_default;
  }
  local_90 = 0;
  local_9d = 0;
  cStack_ad = '\0';
  local_c0 = 0x20;
  local_c8 = &uStack_bc;
  uStack_84 = uVar32;
LAB_01728cc0:
  FUN_01729120(piVar28,&local_d0);
switchD_017281a0_default:
  return iVar4 == 0;
}

