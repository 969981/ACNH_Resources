
undefined8 FUN_0187856c(long *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 local_60;
  undefined1 local_54 [4];
  
  fVar14 = (float)(**(code **)(*param_1 + 0x280))();
  if (((*(byte *)((long)param_1 + 0x3fc) >> 1 & 1) != 0) &&
     (uVar8 = FUN_01815d0c(fVar14,param_1), (uVar8 & 1) != 0)) {
    lVar11 = param_1[0x7a];
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x2d8) + 0x28))(lVar11 + 0x2d8);
      plVar13 = *(long **)PTR_DAT_04bb27d0;
      uVar8 = FUN_01d3e29c(*plVar13 + 8);
      if ((((uVar8 & 1) != 0) && (uVar8 = FUN_01d692e8(plVar13[2]), (uVar8 & 1) == 0)) &&
         (*(char *)((long)param_1 + 0x432) == '\0')) {
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "State::cDropWaterWait";
        FUN_03ebaf40(param_1 + 0x4f,3,&local_68);
        lVar11 = 0xc0;
        if (*(uint *)(param_1 + 0x54) < 4) {
          lVar11 = 0;
        }
        plVar13 = (long *)(param_1[0x55] + lVar11);
        *plVar13 = (long)(PTR_DAT_04bbe640 + 0x10);
        plVar13[1] = (long)param_1;
        puVar3 = PTR_LAB_04bbe5a0;
        plVar13[2] = (long)PTR_LAB_04bbe598;
        plVar13[3] = 0;
        plVar13[4] = (long)puVar3;
        plVar13[5] = 0;
        plVar13[6] = (long)PTR_LAB_04bbe5a8;
        plVar13[7] = 0;
        if ((int)param_1[0x50] == 3) {
          return 0;
        }
        FUN_03ebb160(param_1 + 0x4f,3);
        return 0;
      }
    }
    (**(code **)(*param_1 + 0x298))(param_1);
    return 0;
  }
  pfVar9 = (float *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_60 = (char *)CONCAT44((int)((float)(int)pfVar9[2] / 5.0) - (uint)(pfVar9[2] < 0.0),
                              (int)((float)(int)*pfVar9 / 5.0) - (uint)(*pfVar9 < 0.0));
  lVar11 = param_1[0x7a];
  if (lVar11 == 0) {
LAB_01878748:
    uVar6 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar11 + 0x2d8) + 0x28))(lVar11 + 0x2d8);
    plVar13 = *(long **)PTR_DAT_04bb27d0;
    uVar8 = FUN_01d3e29c(*plVar13 + 8);
    if ((uVar8 & 1) == 0) goto LAB_01878748;
    uVar6 = FUN_01d692e8(plVar13[2]);
  }
  uVar7 = FUN_01a1ddd0(&local_68,PTR_LAB_04bbe6c0);
  uVar8 = FUN_01a1db70(pfVar9);
  uVar6 = uVar6 | uVar7 ^ 1;
  if ((((uVar6 & 1) == 0) || ((uVar8 & 1) != 0)) || (fVar14 <= pfVar9[1])) {
    *(undefined4 *)(param_1 + 0x80) = (undefined4)local_60;
    *(undefined4 *)((long)param_1 + 0x404) = local_60._4_4_;
    fVar15 = fVar14;
    if ((uVar6 & 1) == 0) {
      lVar11 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) || (*(char *)(lVar11 + 0x11c8) != '\0')
         ) {
        fVar15 = -500.0;
      }
      else {
        local_54[0] = 0;
        sVar2 = *(short *)PTR_DAT_04bb6298;
        if (sVar2 == -1) {
          local_70 = 7;
        }
        else {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
          if (0xff < (uint)(int)sVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          local_70 = 7;
          if ((*puVar1 & 2) != 0) {
            local_70 = 5;
          }
        }
        fVar15 = (float)FUN_00962700(*(long *)(lVar11 + 0xa8),pfVar9,&local_70,1,local_54);
      }
    }
    uVar10 = 0;
    *(float *)(param_1 + 0x6b) = fVar15;
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x79) = 0;
      return 0;
    }
    fVar15 = pfVar9[1];
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar15) && !NAN(fVar14)) {
      bVar4 = fVar15 == fVar14;
      bVar5 = fVar14 <= fVar15;
    }
LAB_01878828:
    bVar4 = !bVar5 || bVar4;
  }
  else {
    uVar8 = FUN_01a1f130(param_1[0x60] + 0x284,pfVar9,0);
    if (((uVar8 & 1) != 0) || (fVar14 <= pfVar9[1])) {
      local_70 = CONCAT31(local_70._1_3_,*(undefined1 *)((long)param_1 + 0x494)) ^ 1;
      local_6c = (undefined4)param_1[0x95];
      uVar8 = FUN_01a1ddd0(&local_68,PTR_LAB_04bbe978);
      if ((uVar8 & 1) == 0) {
        uVar8 = (*(code *)param_1[0x93])
                          (pfVar9[1],(ulong)local_60 & 0xffffffff,local_60._4_4_,&local_70);
      }
      else {
        uVar8 = FUN_018773b0((ulong)local_60 & 0xffffffff,local_60._4_4_,&local_70);
      }
      if ((uVar8 & 1) != 0) {
        local_70 = 0;
        fVar14 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,pfVar9,&local_70);
        fVar15 = pfVar9[1];
        if (fVar14 <= fVar15 + 5.0) {
          fVar16 = fVar14;
          if (fVar14 <= fVar15) {
            fVar16 = fVar15;
          }
        }
        else {
          *pfVar9 = *(float *)(param_1[0x60] + 0x284);
          pfVar9[2] = *(float *)(param_1[0x60] + 0x28c);
          fVar16 = (float)FUN_015cb8d4(pfVar9,1);
        }
        bVar5 = fVar14 <= fVar16;
        bVar4 = fVar16 == fVar14;
        pfVar9[1] = fVar16;
        uVar10 = 1;
        goto LAB_01878828;
      }
      *pfVar9 = *(float *)(param_1[0x60] + 0x284);
      pfVar9[2] = *(float *)(param_1[0x60] + 0x28c);
      uVar8 = (**(code **)(*param_1 + 0x1e0))(param_1);
      lVar11 = param_1[0x60] + 0x284;
      if ((uVar8 & 1) == 0) goto LAB_018789e8;
      lVar12 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0xa8) == 0)) || (*(char *)(lVar12 + 0x11c8) != '\0')
         ) {
        fVar14 = -500.0;
      }
      else {
        fVar14 = (float)FUN_0093b024(lVar12 + 0x28,lVar11,0);
      }
    }
    else {
      *pfVar9 = *(float *)(param_1[0x60] + 0x284);
      pfVar9[2] = *(float *)(param_1[0x60] + 0x28c);
      lVar11 = param_1[0x60] + 0x284;
LAB_018789e8:
      fVar14 = (float)FUN_01a1fd20(lVar11,0);
    }
    uVar10 = 1;
    fVar15 = fVar14;
    if (fVar14 <= pfVar9[1]) {
      fVar15 = pfVar9[1];
    }
    bVar4 = fVar15 == fVar14;
    pfVar9[1] = fVar15;
    *(undefined1 *)((long)param_1 + 0x419) = 1;
  }
  *(bool *)(param_1 + 0x79) = bVar4;
  return uVar10;
}

