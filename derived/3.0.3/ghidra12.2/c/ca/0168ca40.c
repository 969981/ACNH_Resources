
uint FUN_0168ca40(long param_1,float *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined *local_2090;
  undefined8 local_2088;
  undefined8 local_2080;
  undefined *puStack_2078;
  int local_2070;
  int iStack_206c;
  undefined *local_2068;
  int local_2060;
  int iStack_205c;
  undefined **local_1078;
  uint auStack_1070 [1025];
  undefined1 local_6c [12];
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  local_1078 = &PTR_LAB_049bb2c8;
  memset(auStack_1070,0,0x1000);
  FUN_016961e0(&local_1078,param_1 + 0x14028);
  FUN_01696270(&local_1078);
  lVar12 = 2;
  iVar15 = 0;
  do {
    iVar14 = iVar15;
    uVar9 = *(uint *)((long)&local_1078 + lVar12 * 4);
    lVar12 = lVar12 + 1;
    uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    uVar9 = uVar9 + (uVar9 >> 0x10);
    iVar15 = (uVar9 & 0x3f) + iVar14;
  } while (lVar12 != 0x402);
  local_2080._0_4_ = 0x49bb2c8;
  local_2080._4_4_ = 0;
  memset(&puStack_2078,0xff,0x1000);
  if (iVar15 != 0) {
    iVar15 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      local_2088 = 0;
      local_2090 = puVar1;
      uVar10 = FUN_01696a90(&local_1078,iVar15 + 1,&local_2090);
      if ((uVar10 & 1) == 0) break;
      iVar8 = FUN_01681538(&local_2090,&local_1078);
      if (((((iVar8 < 2) && (DAT_05233970 <= (int)(uint)local_2088)) &&
           ((int)(uint)local_2088 <= DAT_05233980)) &&
          ((DAT_05233974 <= (int)local_2088._4_4_ && ((int)local_2088._4_4_ <= DAT_05233984)))) &&
         (uVar13 = (local_2088._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_2088 >> 1),
         uVar13 >> 0xf == 0)) {
        lVar12 = (ulong)(uVar13 >> 5) * 4;
        *(uint *)((long)&puStack_2078 + lVar12) =
             *(uint *)((long)&puStack_2078 + lVar12) &
             (1 << (ulong)((uint)local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      iVar15 = iVar15 + 1;
    } while (iVar14 + (uVar9 & 0x3f) != iVar15);
  }
  FUN_01696270(&local_1078,&local_2080);
  if ((param_3 & 1) != 0) {
    lVar12 = *(long *)PTR_DAT_04bb5c90;
    uVar6 = *(int *)(lVar12 + 0x28) - 10;
    uVar7 = *(int *)(lVar12 + 0x2c) - 10;
    uVar9 = *(int *)(lVar12 + 0x38) + 10;
    uVar13 = *(int *)(lVar12 + 0x3c) + 10;
    uVar3 = uVar6;
    if ((int)uVar9 <= (int)uVar6) {
      uVar3 = uVar9;
    }
    if ((int)uVar6 <= (int)uVar9) {
      uVar6 = uVar9;
    }
    uVar9 = uVar7;
    if ((int)uVar13 <= (int)uVar7) {
      uVar9 = uVar13;
    }
    if ((int)uVar7 <= (int)uVar13) {
      uVar7 = uVar13;
    }
    if (uVar7 + 1 != uVar9) {
      uVar13 = uVar3;
      do {
        if (((DAT_05233970 <= (int)uVar13) && ((int)uVar13 <= DAT_05233980)) &&
           ((DAT_05233974 <= (int)uVar9 &&
            (((int)uVar9 <= DAT_05233984 &&
             (uVar2 = (uVar9 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar2 >> 0xf == 0)))))) {
          uVar2 = uVar2 >> 5;
          auStack_1070[uVar2] =
               auStack_1070[uVar2] & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if ((int)uVar13 < (int)uVar6) {
          uVar13 = uVar13 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          uVar13 = uVar3;
        }
      } while ((uVar3 != uVar13) || (uVar7 + 1 != uVar9));
    }
  }
  iVar15 = 0;
  lVar12 = 2;
  do {
    uVar9 = *(uint *)((long)&local_1078 + lVar12 * 4);
    lVar12 = lVar12 + 1;
    uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    iVar15 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar15;
  } while (lVar12 != 0x402);
  if (iVar15 == 0) {
    FUN_016961e0(&local_1078,param_1 + 0x15030);
    FUN_01696270(&local_1078,param_1 + 0x2b0e0);
    lVar12 = 2;
    iVar15 = 0;
    do {
      iVar14 = iVar15;
      uVar9 = *(uint *)((long)&local_1078 + lVar12 * 4);
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 8);
      uVar9 = uVar9 + (uVar9 >> 0x10);
      iVar15 = (uVar9 & 0x3f) + iVar14;
    } while (lVar12 != 0x402);
    local_2080._0_4_ = 0x49bb2c8;
    local_2080._4_4_ = 0;
    memset(&puStack_2078,0xff,0x1000);
    if (iVar15 != 0) {
      iVar15 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        local_2088 = 0;
        local_2090 = puVar1;
        uVar10 = FUN_01696a90(&local_1078,iVar15 + 1,&local_2090);
        if ((uVar10 & 1) == 0) break;
        iVar8 = FUN_01681538(&local_2090,&local_1078);
        if ((((iVar8 < 2) && (DAT_05233970 <= (int)(uint)local_2088)) &&
            ((int)(uint)local_2088 <= DAT_05233980)) &&
           (((DAT_05233974 <= (int)local_2088._4_4_ && ((int)local_2088._4_4_ <= DAT_05233984)) &&
            (uVar13 = (local_2088._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_2088 >> 1),
            uVar13 >> 0xf == 0)))) {
          lVar12 = (ulong)(uVar13 >> 5) * 4;
          *(uint *)((long)&puStack_2078 + lVar12) =
               *(uint *)((long)&puStack_2078 + lVar12) &
               (1 << (ulong)((uint)local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        iVar15 = iVar15 + 1;
      } while (iVar14 + (uVar9 & 0x3f) != iVar15);
    }
    FUN_01696270(&local_1078,&local_2080);
    if ((param_3 & 1) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb5c90;
      uVar6 = *(int *)(lVar12 + 0x28) - 10;
      uVar7 = *(int *)(lVar12 + 0x2c) - 10;
      uVar9 = *(int *)(lVar12 + 0x38) + 10;
      uVar13 = *(int *)(lVar12 + 0x3c) + 10;
      uVar3 = uVar6;
      if ((int)uVar9 <= (int)uVar6) {
        uVar3 = uVar9;
      }
      if ((int)uVar6 <= (int)uVar9) {
        uVar6 = uVar9;
      }
      uVar9 = uVar7;
      if ((int)uVar13 <= (int)uVar7) {
        uVar9 = uVar13;
      }
      if ((int)uVar7 <= (int)uVar13) {
        uVar7 = uVar13;
      }
      if (uVar7 + 1 != uVar9) {
        uVar13 = uVar3;
        do {
          if (((DAT_05233970 <= (int)uVar13) && ((int)uVar13 <= DAT_05233980)) &&
             ((DAT_05233974 <= (int)uVar9 &&
              (((int)uVar9 <= DAT_05233984 &&
               (uVar2 = (uVar9 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar2 >> 0xf == 0)))))) {
            uVar2 = uVar2 >> 5;
            auStack_1070[uVar2] =
                 auStack_1070[uVar2] & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar13 < (int)uVar6) {
            uVar13 = uVar13 + 1;
          }
          else {
            uVar9 = uVar9 + 1;
            uVar13 = uVar3;
          }
        } while ((uVar3 != uVar13) || (uVar7 + 1 != uVar9));
      }
    }
    iVar15 = 0;
    lVar12 = 2;
    do {
      uVar9 = *(uint *)((long)&local_1078 + lVar12 * 4);
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 8);
      iVar15 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar15;
    } while (lVar12 != 0x402);
    if (iVar15 == 0) {
      if ((param_3 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_0168ca40(param_1,param_2,0);
      }
      goto LAB_0168d1a4;
    }
    FUN_01696be0(&local_2090,&local_1078);
    *param_2 = (float)(int)(uint)local_2088 * 5.0 + 5.0;
    param_2[2] = (float)(int)local_2088._4_4_ * 5.0 + 5.0;
    if (*(long *)PTR_DAT_04bb27c8 != 0) {
      lVar12 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
      iVar15 = (uint)local_2088;
      iVar14 = local_2088._4_4_;
      if (lVar12 != 0) goto LAB_0168d0c8;
    }
LAB_0168d138:
    fVar16 = -500.0;
    iVar15 = (uint)local_2088;
    iVar14 = local_2088._4_4_;
  }
  else {
    FUN_01696be0(&local_2090,&local_1078);
    *param_2 = (float)(int)(uint)local_2088 * 5.0 + 5.0;
    param_2[2] = (float)(int)local_2088._4_4_ * 5.0 + 5.0;
    if (*(long *)PTR_DAT_04bb27c8 == 0) goto LAB_0168d138;
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
    iVar15 = (uint)local_2088;
    iVar14 = local_2088._4_4_;
    if (lVar12 == 0) goto LAB_0168d138;
LAB_0168d0c8:
    local_6c[0] = 0;
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      uVar11 = 7;
    }
    else {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar11 = 7;
      if ((*puVar4 & 2) != 0) {
        uVar11 = 5;
      }
    }
    local_2080 = (undefined *)CONCAT44(local_2080._4_4_,uVar11);
    fVar16 = (float)FUN_00962700(lVar12,param_2,&local_2080,0,local_6c);
  }
  local_2080 = PTR_DAT_04bbc1a0;
  param_2[1] = fVar16;
  local_2060 = iVar15 + 1;
  local_2080 = local_2080 + 0x10;
  puStack_2078 = PTR_DAT_04bb2010 + 0x10;
  iStack_205c = iVar14 + 1;
  local_2070 = iVar15;
  iStack_206c = iVar14;
  local_2068 = puStack_2078;
  FUN_01686550(param_1,&local_2080);
  uVar9 = 1;
LAB_0168d1a4:
  return uVar9 & 1;
}

