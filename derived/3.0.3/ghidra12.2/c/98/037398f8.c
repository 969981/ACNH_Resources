
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_037398f8(undefined1 param_1 [16],float param_2,float param_3,float *param_4,undefined4 *param_5,
            long param_6)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte bVar14;
  long lVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_d4;
  undefined *local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 local_a0;
  char *pcStack_98;
  
  puVar5 = PTR_DAT_04bb27f8;
  puVar4 = PTR_DAT_04bb2720;
  lVar15 = *(long *)PTR_DAT_04bb27f8;
  if (lVar15 == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  iVar8 = *(int *)(puVar16 + 7);
  FUN_0252d11c(&uStack_a2);
  puVar3 = PTR_DAT_04bb2020;
  if ((*(long *)puVar5 != 0) && ((*(ushort *)(*(long *)puVar5 + 0xc0) & 0xf) == 1)) {
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "SeqKabetasuEventReady";
    iVar9 = FUN_02758850(&local_d0);
    if ((iVar9 != 0) && ((iVar8 == -0x3e092032 || (iVar8 == -0x7975b8e8)))) {
      if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) != 0) {
        param_4[2] = 205.0;
        param_4[0] = 160.0;
        param_4[1] = 0.0;
        uVar10 = 0x60000000;
        goto LAB_0373a604;
      }
      sVar2 = *(short *)(param_6 + 0x38);
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)) {
        sVar7 = *(short *)(lVar15 + 0x2a);
      }
      else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
              (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)) {
        sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
      }
      else {
        uVar11 = (**(code **)*puVar16)();
        sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar16 != (undefined8 *)0x0))
        {
          (**(code **)*puVar16)();
        }
      }
      if (sVar2 != sVar7) {
        return 0;
      }
      fVar17 = -12.5;
      param_4[2] = 190.0;
      param_4[0] = 175.0;
      param_4[1] = 0.0;
      param_3 = -32.5;
      goto LAB_0373a7c0;
    }
  }
  local_d0 = puVar3 + 0x10;
  local_c8 = "SeqFirstEditOngoing";
  iVar9 = FUN_02758850(&local_d0);
  if (((iVar9 == 0) || (*(int *)(lVar15 + 0x14) == 0)) ||
     (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
      || ((iVar8 != -0x3e092032 && (iVar8 != -0x7975b8e8)))))) {
    if (iVar8 == -0x17df00c3) {
      local_c8 = "SeqFirstVistCustomerOngoing";
      local_d0 = puVar3 + 0x10;
      iVar9 = FUN_02758850(&local_d0);
      if (iVar9 != 0) {
        pcStack_98 = "SeqFirstVisitCustomerArrivalTalk";
        local_a0 = puVar3 + 0x10;
        iVar9 = FUN_02758850(&local_a0);
        if (iVar9 == 0) {
          sVar2 = *(short *)(param_6 + 0x38);
          if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
               ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
             (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)) {
            sVar7 = *(short *)(lVar15 + 0x2a);
          }
          else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
                  (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)
                  ) {
            sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
          }
          else {
            uVar11 = (**(code **)*puVar16)();
            sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8),
               puVar16 != (undefined8 *)0x0)) {
              (**(code **)*puVar16)();
            }
          }
          if (sVar2 != sVar7) {
            return 0;
          }
          lVar15 = *(long *)PTR_DAT_04bb59d8;
          if (lVar15 == 0) {
            return 0;
          }
          iVar8 = *(int *)(lVar15 + 0x50);
          iVar9 = *(int *)(lVar15 + 0x54);
          param_4[1] = 0.0;
          *param_4 = (float)iVar8 * 5.0 + 5.0 + 10.0;
          param_4[2] = (float)iVar9 * 5.0 + 5.0 + -50.0;
          lVar15 = *(long *)PTR_DAT_04bb27c8;
          if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) ||
             (*(char *)(lVar15 + 0x11c8) != '\0')) {
            fVar17 = -500.0;
          }
          else {
            fVar17 = (float)FUN_0093a950(lVar15 + 0x28,param_4,0);
          }
          goto LAB_0373a4d4;
        }
      }
    }
  }
  else {
    local_a0 = puVar3 + 0x10;
    pcStack_98 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
    iVar9 = FUN_02753180(&uStack_a2,&local_a0);
    if (iVar9 == 0) {
      if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) == 0) {
        sVar2 = *(short *)(param_6 + 0x38);
        sVar7 = FUN_036da084(lVar15);
        if (sVar2 != sVar7) {
          return 0;
        }
        param_4[2] = 180.0;
        param_4[0] = 170.0;
        param_4[1] = 0.0;
        uVar10 = 0x80000000;
      }
      else {
        param_4[2] = 195.0;
        param_4[0] = 165.0;
        param_4[1] = 0.0;
        uVar10 = 0x72e40edc;
      }
      goto LAB_0373a604;
    }
  }
  local_c8 = "SeqFirstVistCustomerOngoing";
  local_d0 = puVar3 + 0x10;
  iVar9 = FUN_02758850(&local_d0);
  if (iVar9 != 0) {
    pcStack_98 = "WHEREAREN_MncTalkReserve_House";
    local_a0 = puVar3 + 0x10;
    iVar9 = FUN_02753180(&uStack_a2,&local_a0);
    if ((iVar9 == 0) || ((iVar8 != -0x3e092032 && (iVar8 != -0x7975b8e8)))) goto LAB_03739cd8;
    local_c0 = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    uStack_b0 = 0;
    local_b8 = local_c8;
    FUN_01811430(&local_d0);
    fVar19 = (float)local_c0._4_4_ * 5.0 + 5.0;
    fVar17 = (float)(int)local_c0 * 5.0 + 5.0;
    param_3 = fVar19 + 10.0;
    fVar20 = fVar17 + 10.0;
    if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) != 0) {
      param_4[1] = 0.0;
      *param_4 = fVar20;
      param_4[2] = param_3;
      lVar15 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) || (*(char *)(lVar15 + 0x11c8) != '\0')
         ) {
        fVar18 = -500.0;
        fVar17 = fVar20;
      }
      else {
        fVar18 = (float)FUN_0093a950(lVar15 + 0x28,param_4,0);
        param_3 = param_4[2];
        fVar17 = *param_4;
      }
      param_4[1] = fVar18;
      param_3 = fVar19 - param_3;
      fVar17 = fVar20 - fVar17;
      goto LAB_0373a7c0;
    }
    sVar2 = *(short *)(param_6 + 0x38);
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)) {
      sVar7 = *(short *)(lVar15 + 0x2a);
    }
    else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
            (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)) {
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
    }
    else {
      uVar11 = (**(code **)*puVar16)();
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
    if (sVar2 != sVar7) {
      return 0;
    }
    *param_4 = fVar20;
    param_4[1] = 0.0;
    param_4[2] = fVar19;
    fVar19 = (float)FUN_0097a900(param_4,0);
    param_4[1] = fVar19;
    param_3 = param_3 - param_4[2];
LAB_0373a7b8:
    fVar17 = fVar17 - *param_4;
    goto LAB_0373a7c0;
  }
LAB_03739cd8:
  puVar5 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar12 = *(long *)puVar4, lVar12 != 0)) &&
     (*(long *)(lVar12 + 0x330) != 0)) {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
    iVar9 = FUN_006bd550(*puVar16,0);
    if (((iVar9 != 0x758f7eaf) || (*(long *)puVar4 == 0)) ||
       ((lVar12 = *(long *)(*(long *)puVar4 + 0x330), lVar12 == 0 || (*(int *)(lVar12 + 0x244) == 0)
        ))) goto LAB_03739e6c;
    FUN_0252d11c(&local_d4);
    local_c8 = "WHEREAREN_MncTalkReserve_House";
    local_d0 = puVar3 + 0x10;
    iVar9 = FUN_02753180(&local_d4,&local_d0);
    if (iVar9 == 0) {
LAB_03739d94:
      uVar11 = FUN_03773570();
      if ((uVar11 & 1) == 0) goto LAB_03739e6c;
    }
    else {
      FUN_0252d11c(&uStack_a1);
      pcStack_98 = "WHEREAREN_Unlock_DustCloth_01";
      local_a0 = puVar3 + 0x10;
      iVar9 = FUN_0274bce0(&uStack_a1,&local_a0);
      if (iVar9 != 0) goto LAB_03739d94;
    }
    if (*(long *)PTR_DAT_04bb59d8 == 0) {
      return 0;
    }
    local_c0 = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    uStack_b0 = 0;
    local_b8 = local_c8;
    FUN_01811430(&local_d0);
    if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) != 0) {
      return 0;
    }
    iVar8 = (int)local_c0;
    iVar9 = local_c0._4_4_;
    sVar2 = *(short *)(param_6 + 0x38);
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)))) {
      sVar7 = *(short *)(lVar15 + 0x2a);
    }
    else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
            (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)) {
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
    }
    else {
      uVar11 = (**(code **)*puVar16)();
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
    if (sVar2 != sVar7) {
      return 0;
    }
    param_4[1] = NAN;
    *param_4 = (float)iVar8 * 5.0 + 15.0;
    param_4[2] = (float)iVar9 * 5.0 + 5.0;
LAB_0373a434:
    fVar17 = (float)FUN_0097a900(param_4,0);
    uVar10 = 0x80000000;
    param_4[1] = fVar17;
LAB_0373a604:
    *param_5 = uVar10;
    return 1;
  }
LAB_03739e6c:
  local_c8 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
  local_d0 = puVar3 + 0x10;
  iVar9 = FUN_02753180(&uStack_a2,&local_d0);
  if (iVar9 != 1) {
    local_c8 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
    local_d0 = puVar3 + 0x10;
    iVar9 = FUN_02753180(&uStack_a2,&local_d0);
    if (iVar9 != 2) {
      local_c8 = "WHEREAREN_OtgTalkReserve_Facility";
      local_d0 = puVar3 + 0x10;
      iVar9 = FUN_02753180(&uStack_a2,&local_d0);
      if (iVar9 != 0) {
        pcStack_98 = "WHREAREN_IsFacilityEndDemoTakePicture";
        local_a0 = puVar3 + 0x10;
        iVar9 = FUN_02753180(&uStack_a2,&local_a0);
        if (iVar9 != 0) {
          if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) == 0) {
            return 0;
          }
          fVar17 = (float)FUN_03771210();
          fVar19 = param_3;
          fVar20 = (float)FUN_037715a0();
          *param_4 = fVar20;
          fVar17 = fVar17 - fVar20;
          param_4[1] = param_2;
          param_3 = param_3 - fVar19;
          param_4[2] = fVar19;
          goto LAB_0373a7c0;
        }
      }
      local_c8 = "SeqFirstVistCustomerOngoing";
      local_d0 = puVar3 + 0x10;
      iVar9 = FUN_02758850(&local_d0);
      if (iVar9 != 0) {
        pcStack_98 = "SeqFirstVisitCustomerArrivalTalk";
        local_a0 = puVar3 + 0x10;
        iVar9 = FUN_02758850(&local_a0);
        if (iVar9 == 0) {
          lVar12 = *(long *)PTR_DAT_04bb59d8;
          if (lVar12 == 0) {
            return 0;
          }
          fVar19 = 5.0;
          fVar20 = (float)*(int *)(lVar12 + 0x54) * 5.0 + 5.0;
          fVar17 = (float)*(int *)(lVar12 + 0x50) * 5.0 + 5.0;
          if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) != 0) {
            param_4[1] = 0.0;
            fVar17 = fVar17 + 10.0;
            *param_4 = fVar17;
            param_4[2] = fVar20 + 10.0;
            fVar20 = (float)FUN_03771fd0();
            param_4[1] = fVar17 + param_4[1];
            *param_4 = *param_4 + fVar20;
            param_4[2] = fVar19 + param_4[2];
            fVar17 = (float)FUN_0097a900(param_4,0);
            param_4[1] = fVar17;
            return 1;
          }
          sVar2 = *(short *)(param_6 + 0x38);
          sVar7 = FUN_036da084(lVar15);
          if (sVar2 != sVar7) {
            return 0;
          }
          param_4[1] = 0.0;
          param_4[2] = fVar20;
          *param_4 = fVar17 + 10.0;
          fVar17 = (float)FUN_0097a900(param_4,0);
LAB_0373a4d4:
          param_4[1] = fVar17;
          *param_5 = 0;
          return 1;
        }
      }
      local_d0 = puVar3 + 0x10;
      local_c8 = "WHEREAREN_CustomerTalkReserve_House";
      iVar9 = FUN_02753180(&uStack_a2,&local_d0);
      if (iVar9 == 0) {
        return 0;
      }
      if (iVar8 != -0x3e092032) {
        return 0;
      }
      if ((*(byte *)(lVar15 + 0x1a72) & 1) == 0) {
        local_d4 = *(ushort *)(lVar15 + 0xc0) >> 4 & 0xf;
        local_a0 = (undefined *)
                   (CONCAT44(local_a0._4_4_,(uint)*(ushort *)(lVar15 + 0xc0)) & 0xffffffff0000000f);
        if ((int)local_a0 != 3) {
          local_d4 = 0;
        }
        if (local_d4 != 3) {
          return 0;
        }
      }
      sVar2 = *(short *)(param_6 + 0x38);
      sVar7 = FUN_036da084(lVar15);
      if ((sVar2 != sVar7) &&
         (sVar2 = *(short *)(param_6 + 0x38), sVar7 = FUN_036de07c(lVar15), sVar2 != sVar7)) {
        return 0;
      }
      sVar2 = *(short *)(param_6 + 0x38);
      sVar7 = FUN_036de07c(lVar15);
      local_d0 = puVar3 + 0x10;
      local_c8 = "";
      fVar17 = (float)FUN_03771b40(sVar2 == sVar7,&local_d0);
      *param_4 = fVar17;
      param_4[1] = param_2;
      param_4[2] = param_3;
      goto LAB_0373a434;
    }
    iVar8 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    local_c0 = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    uStack_b0 = 0;
    local_b8 = local_c8;
    if (((*(long *)puVar5 == 0) || (lVar12 = *(long *)puVar4, lVar12 == 0)) ||
       (*(long *)(lVar12 + 0x330) == 0)) {
LAB_0373a140:
      if (*(long *)PTR_DAT_04bb59d8 != 0) {
        local_c0 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x50);
      }
    }
    else {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar9 = FUN_006bd550(*puVar16,0);
      if ((((iVar9 != 0x758f7eaf) || (*(long *)puVar4 == 0)) ||
          (lVar12 = *(long *)(*(long *)puVar4 + 0x330), lVar12 == 0)) ||
         (*(int *)(lVar12 + 0x244) == 0)) goto LAB_0373a140;
      FUN_01811430(&local_d0);
    }
    param_3 = (float)local_c0._4_4_ * 5.0 + 5.0;
    fVar19 = (float)(int)local_c0 * 5.0 + 5.0;
    if (iVar8 == -0x3e092032) {
      fVar20 = fVar19;
      fVar17 = fVar19 + 10.0;
    }
    else {
      fVar20 = fVar19 + 10.0;
      fVar17 = fVar19;
    }
    if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb39b0;
      pbVar13 = PTR_DAT_04bb32e0;
      if (lVar12 == 0) {
LAB_0373a618:
        if (*pbVar13 < 8) goto LAB_0373a690;
LAB_0373a624:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0373a688:
          pbVar13 = PTR_DAT_04bb5038;
          goto LAB_0373a690;
        }
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar12 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar1 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar13 = (byte *)(lVar12 + 0x471);
          }
        }
        bVar14 = *pbVar13;
        bVar6 = 7 < bVar14;
        if (bVar6) {
          bVar14 = 0xff;
        }
        local_a0 = (undefined *)CONCAT71(local_a0._1_7_,bVar14);
        if (bVar6) goto LAB_0373a688;
      }
      else {
        if (*(int *)(lVar12 + 0x15c) != 0) {
          pbVar13 = (byte *)(lVar12 + 0x158);
        }
        if (7 < *pbVar13) {
          if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0373a618;
          }
          goto LAB_0373a624;
        }
LAB_0373a690:
        bVar14 = *pbVar13;
        if (7 < bVar14) {
          bVar14 = 0xff;
        }
        local_a0 = (undefined *)CONCAT71(local_a0._1_7_,bVar14);
      }
      local_d0 = puVar3 + 0x10;
      local_c8 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
      iVar9 = FUN_02753180(&local_a0,&local_d0);
      if (iVar9 == 2) {
        *param_4 = fVar19;
        param_4[1] = 0.0;
        if (iVar8 != -0x3e092032) {
          *param_4 = fVar19 + 10.0;
        }
        param_4[2] = param_3 + 10.0;
        fVar17 = (float)FUN_0097a900(param_4,0);
        param_4[1] = fVar17;
        param_3 = param_3 - param_4[2];
        fVar17 = fVar20 - *param_4;
        goto LAB_0373a7c0;
      }
    }
    sVar2 = *(short *)(param_6 + 0x38);
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)))) {
      sVar7 = *(short *)(lVar15 + 0x2a);
    }
    else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
            (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)) {
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
    }
    else {
      uVar11 = (**(code **)*puVar16)();
      sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
    if (sVar2 != sVar7) {
      return 0;
    }
    *param_4 = fVar20;
    param_4[1] = 0.0;
    param_4[2] = param_3;
    fVar19 = (float)FUN_0097a900(param_4,0);
    param_4[1] = fVar19;
    param_3 = (param_3 + 10.0) - param_4[2];
    goto LAB_0373a7b8;
  }
  sVar2 = *(short *)(param_6 + 0x38);
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)))) {
    sVar7 = *(short *)(lVar15 + 0x2a);
  }
  else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
          (puVar16 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar16 == (undefined8 *)0x0)) {
    sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
  }
  else {
    uVar11 = (**(code **)*puVar16)();
    sVar7 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)();
    }
  }
  if (sVar2 != sVar7) {
    return 0;
  }
  if (((*(long *)puVar5 == 0) || (lVar15 = *(long *)puVar4, lVar15 == 0)) ||
     (*(long *)(lVar15 + 0x330) == 0)) {
LAB_0373a190:
    local_c8 = (char *)((ulong)local_c8 & 0xffffffff00000000);
    local_d0 = (undefined *)0x0;
    uVar11 = FUN_021d9820(&local_d0,1);
    if ((uVar11 & 1) == 0) {
      fVar17 = 0.0;
      param_3 = 0.0;
      fVar20 = 0.0;
      fVar19 = 0.0;
    }
    else {
      iVar8 = (int)((float)(int)(local_d0._0_4_ + -10.0) / 5.0) -
              (uint)(local_d0._0_4_ + -10.0 < 0.0);
      iVar9 = (int)((float)(int)(local_c8._0_4_ + -5.0) / 5.0) - (uint)(local_c8._0_4_ + -5.0 < 0.0)
      ;
      fVar19 = (float)(iVar8 + 3) * 5.0;
      param_3 = (float)iVar9 * 5.0 + 5.0;
      fVar20 = (float)(iVar9 + 2) * 5.0;
      fVar17 = (float)iVar8 * 5.0 + 5.0;
    }
  }
  else {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar8 = FUN_006bd550(*puVar16,0);
    if (((iVar8 != 0x758f7eaf) || (*(long *)puVar4 == 0)) ||
       ((lVar15 = *(long *)(*(long *)puVar4 + 0x330), lVar15 == 0 || (*(int *)(lVar15 + 0x244) == 0)
        ))) goto LAB_0373a190;
    local_c0 = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    uStack_b0 = 0;
    local_b8 = local_c8;
    FUN_01811430(&local_d0);
    fVar20 = (float)local_c0._4_4_ * 5.0 + 5.0;
    fVar18 = (float)(int)local_c0 * 5.0 + 5.0;
    param_3 = fVar20 + 5.0;
    fVar17 = fVar18 + 10.0;
    fVar19 = fVar17 + -10.0;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3e092032) {
      fVar19 = fVar17;
      fVar17 = fVar18;
    }
  }
  *param_4 = fVar19;
  param_4[1] = 0.0;
  param_4[2] = fVar20;
  lVar15 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) || (*(char *)(lVar15 + 0x11c8) != '\0')) {
    fVar18 = -500.0;
  }
  else {
    fVar18 = (float)FUN_0093a950(lVar15 + 0x28,param_4,0);
    fVar20 = param_4[2];
    fVar19 = *param_4;
  }
  param_4[1] = fVar18;
  param_3 = param_3 - fVar20;
  fVar17 = fVar17 - fVar19;
LAB_0373a7c0:
  uVar10 = FUN_006f0400(fVar17,param_3);
  *param_5 = uVar10;
  return 1;
}

