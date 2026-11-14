
undefined8 FUN_01816924(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  char *pcVar15;
  float *pfVar16;
  undefined4 uVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_74;
  undefined **local_70;
  undefined8 local_68;
  
  *(undefined1 *)((long)param_1 + 0x419) = 0;
  uVar12 = (**(code **)(*param_1 + 0x1e0))();
  if ((uVar12 & 1) != 0) {
    puVar13 = (undefined4 *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
    *puVar13 = *(undefined4 *)(param_1[0x60] + 0x284);
    lVar18 = DAT_04cfae30;
    puVar13[2] = *(undefined4 *)(param_1[0x60] + 0x28c);
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) || (*(char *)(lVar18 + 0x11c8) != '\0'))
    {
      fVar22 = -500.0;
    }
    else {
      local_74 = local_74 & 0xffffff00;
      if (DAT_04c487d4 == -1) {
        uVar17 = 7;
      }
      else {
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar17 = 7;
        if ((*puVar4 & 2) != 0) {
          uVar17 = 5;
        }
      }
      local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar17);
      fVar22 = (float)FUN_00962700(*(long *)(lVar18 + 0xa8),puVar13,&local_70,1,&local_74);
    }
    fVar24 = *(float *)(param_1 + 0x6b);
    bVar9 = false;
    bVar10 = true;
    if ((float)puVar13[1] < fVar22) {
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar22) && !NAN(fVar24)) {
        bVar9 = fVar22 == fVar24;
        bVar10 = fVar24 <= fVar22;
      }
    }
    if (!bVar10 || bVar9) {
      puVar13[1] = fVar22;
    }
    uVar21 = 1;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(float *)(param_1 + 0x6b) = fVar22;
    *(undefined1 *)((long)param_1 + 0x419) = 1;
    bVar9 = (float)puVar13[1] == fVar22;
    goto LAB_01816fa0;
  }
  fVar22 = (float)(**(code **)(*param_1 + 0x280))(param_1);
  puVar8 = PTR_DAT_04bb27d0;
  lVar18 = param_1[0x7a];
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x2d8) + 0x28))(lVar18 + 0x2d8);
    plVar19 = *(long **)puVar8;
    lVar18 = *plVar19;
    bVar5 = *(byte *)(lVar18 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar18 + 0x48);
      uVar12 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = pbVar1 + uVar12 * 0x80;
      if (7 < bVar5) {
        pbVar3 = pbVar1;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar18 = plVar19[2] + 0x108;
        lVar14 = lVar18 + uVar12 * 0xc;
        if (0xb < bVar5) {
          lVar14 = lVar18;
        }
        if (*(char *)(lVar14 + 10) == '\0') {
          uVar11 = FUN_01317b90(param_1[0x60] + 0x278,0);
          local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar11);
          local_74 = FUN_01317b90(param_1 + 0x65,0);
          if (uVar11 != local_74) {
            fVar22 = (float)FUN_01a1fd20(param_1 + 0x65,1);
          }
        }
      }
    }
  }
  lVar18 = param_1[0x7a];
  if (lVar18 == 0) {
    bVar9 = true;
  }
  else {
    (**(code **)(*(long *)(lVar18 + 0x2d8) + 0x28))(lVar18 + 0x2d8);
    plVar19 = *(long **)puVar8;
    lVar18 = *plVar19;
    bVar5 = *(byte *)(lVar18 + 0x473);
    if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_01816b00:
      bVar9 = false;
    }
    else {
      pbVar1 = (byte *)(lVar18 + 0x48);
      uVar12 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = pbVar1 + uVar12 * 0x80;
      if (7 < bVar5) {
        pbVar3 = pbVar1;
      }
      if ((*pbVar3 >> 3 & 1) == 0) goto LAB_01816b00;
      lVar18 = plVar19[2] + 0x108;
      lVar14 = lVar18 + uVar12 * 0xc;
      if (0xb < bVar5) {
        lVar14 = lVar18;
      }
      bVar9 = *(char *)(lVar14 + 10) == '\0';
    }
    bVar9 = (bool)(bVar9 ^ 1);
  }
  puVar8 = PTR_DAT_04bb46c8;
  if (((*(byte *)((long)param_1 + 0x3fc) >> 1 & 1) != 0) && (*(int *)((long)param_1 + 0x414) < 1)) {
    lVar18 = (**(code **)(*(long *)param_1[0x60] + 0xf8))();
    fVar24 = (float)FUN_01a1fd20(lVar18,0);
    local_74 = 0;
    if ((DAT_04cfae30 != 0) &&
       ((*(long *)(DAT_04cfae30 + 0xa8) != 0 && (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')))) {
      FUN_0093a950(DAT_04cfae30 + 0x28,lVar18,&local_74);
    }
    local_70 = (undefined **)CONCAT44(local_70._4_4_,local_74);
    lVar14 = FUN_009807cc(*(long *)puVar8 + 8,local_74);
    if ((((lVar14 != 0) &&
         (pcVar15 = (char *)FUN_009823a0(lVar14,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
         pcVar15 != (char *)0x0)) && (*pcVar15 != '\0')) && (*(float *)(lVar18 + 4) <= fVar24)) {
      if (*(char *)((long)param_1 + 0x432) != '\0') {
        bVar9 = true;
      }
      if (!bVar9) {
        local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_68 = "State::cDropWaterWait";
        FUN_03ebaf40(param_1 + 0x4f,3,&local_70);
        lVar18 = 0xc0;
        if (*(uint *)(param_1 + 0x54) < 4) {
          lVar18 = 0;
        }
        puVar2 = (undefined8 *)(param_1[0x55] + lVar18);
        *puVar2 = &PTR_LAB_049c58d0;
        puVar2[1] = param_1;
        puVar2[4] = &LAB_01813624;
        puVar2[5] = 0;
        puVar2[2] = &LAB_01813620;
        puVar2[3] = 0;
        puVar2[6] = &LAB_01813a60;
        puVar2[7] = 0;
        if ((int)param_1[0x50] == 3) {
          return 0;
        }
        FUN_03ebb160(param_1 + 0x4f,3);
        return 0;
      }
      (**(code **)(*param_1 + 0x298))(param_1);
      return 0;
    }
  }
  pfVar16 = (float *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
  local_74 = 0;
  fVar24 = *(float *)(param_1[0x60] + 0x278);
  fVar23 = *(float *)(param_1[0x60] + 0x280);
  iVar6 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  iVar7 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
     (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
    FUN_0093a950(DAT_04cfae30 + 0x28,pfVar16,&local_74);
  }
  local_70 = (undefined **)CONCAT44(local_70._4_4_,local_74);
  lVar18 = FUN_009807cc(*(long *)puVar8 + 8,local_74);
  if (((lVar18 == 0) ||
      (pcVar15 = (char *)FUN_009823a0(lVar18,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
      pcVar15 == (char *)0x0)) || (*pcVar15 == '\0')) {
    bVar10 = bVar9;
    if ((char)param_1[0x81] == '\0') {
      bVar10 = true;
    }
    if (!bVar10) {
LAB_01816f28:
      bVar10 = false;
      goto LAB_01816f2c;
    }
    if (fVar22 <= pfVar16[1]) {
      local_70 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      local_68 = (char *)CONCAT44((int)((float)(int)pfVar16[2] / 5.0) - (uint)(pfVar16[2] < 0.0),
                                  (int)((float)(int)*pfVar16 / 5.0) - (uint)(*pfVar16 < 0.0));
      uVar12 = (**(code **)*param_2)(param_2,&local_70);
      if ((uVar12 & 1) == 0) {
        puVar13 = (undefined4 *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
        *puVar13 = *(undefined4 *)(param_1[0x60] + 0x284);
        puVar13[2] = *(undefined4 *)(param_1[0x60] + 0x28c);
        fVar22 = (float)FUN_01a1fd20(param_1[0x60] + 0x284,0);
        uVar21 = 1;
        if (fVar22 <= (float)puVar13[1]) {
          fVar22 = (float)puVar13[1];
        }
        puVar13[1] = fVar22;
        fVar24 = (float)FUN_01a1fd20(param_1[0x60] + 0x284,1);
        bVar9 = fVar22 == fVar24;
        *(undefined1 *)((long)param_1 + 0x419) = 1;
        *(undefined4 *)(param_1 + 0x61) = 0;
        goto LAB_01816fa0;
      }
      goto LAB_01816f28;
    }
    if (((*(float *)(param_1 + 0x6b) < fVar22) &&
        (uVar12 = FUN_01a1f130(param_1[0x60] + 0x284,pfVar16,param_2), (uVar12 & 1) == 0)) &&
       (pfVar16[1] < fVar22)) {
      FUN_01817104(param_1);
      return 1;
    }
    pfVar16[1] = fVar22;
    uVar21 = 1;
    *(int *)(param_1 + 0x80) = iVar6;
    *(int *)((long)param_1 + 0x404) = iVar7;
    *(float *)(param_1 + 0x6b) = fVar22;
  }
  else {
    local_70 = &PTR_FUN_048f9730;
    fVar24 = (float)iVar6 * 0.5;
    uVar11 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar11 = (uint)(fVar24 < 0.0);
    }
    fVar23 = (float)iVar7 * 0.5;
    uVar20 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar20 = (uint)(fVar23 < 0.0);
    }
    local_68 = (char *)CONCAT44((int)fVar23 - uVar20,(int)fVar24 - uVar11);
    uVar12 = FUN_01318220(&local_70);
    if ((uVar12 & 1) == 0) {
      bVar10 = true;
      if (bVar9) goto LAB_01816f30;
LAB_01816f58:
      uVar21 = 0;
      if ((pfVar16[1] < fVar22) && (fVar22 <= *(float *)(param_1 + 0x6b))) {
        uVar21 = 1;
        pfVar16[1] = fVar22;
      }
    }
    else {
      fVar23 = pfVar16[1];
      fVar24 = (float)FUN_015cb8d4(pfVar16,0);
      bVar10 = true;
      if (fVar23 < fVar24) {
        puVar13 = (undefined4 *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
        *puVar13 = *(undefined4 *)(param_1[0x60] + 0x284);
        puVar13[2] = *(undefined4 *)(param_1[0x60] + 0x28c);
        fVar22 = (float)FUN_01a1fd20(param_1[0x60] + 0x284,0);
        if (fVar22 <= (float)puVar13[1]) {
          fVar22 = (float)puVar13[1];
        }
        puVar13[1] = fVar22;
        fVar24 = (float)FUN_01a1fd20(param_1[0x60] + 0x284,1);
        bVar9 = fVar22 == fVar24;
        *(undefined1 *)((long)param_1 + 0x419) = 1;
        uVar21 = 1;
        *(undefined4 *)(param_1 + 0x61) = 0;
        goto LAB_01816fa0;
      }
LAB_01816f2c:
      if (!bVar9) goto LAB_01816f58;
LAB_01816f30:
      uVar21 = 0;
    }
    *(int *)(param_1 + 0x80) = iVar6;
    *(int *)((long)param_1 + 0x404) = iVar7;
    *(float *)(param_1 + 0x6b) = fVar22;
    if (bVar10) {
      *(undefined1 *)(param_1 + 0x79) = 0;
      return uVar21;
    }
  }
  bVar9 = false;
  if (!NAN(pfVar16[1]) && !NAN(fVar22)) {
    bVar9 = pfVar16[1] == fVar22;
  }
LAB_01816fa0:
  *(bool *)(param_1 + 0x79) = bVar9;
  return uVar21;
}

