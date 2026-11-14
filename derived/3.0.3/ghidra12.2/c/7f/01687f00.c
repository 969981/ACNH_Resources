
bool FUN_01687f00(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined *local_20c8;
  undefined8 local_20c0;
  uint local_20b8;
  uint uStack_20b4;
  undefined *local_20b0;
  int local_20a8;
  int iStack_20a4;
  undefined1 auStack_20a0 [8];
  uint local_2098;
  uint local_2094;
  undefined *local_2090;
  undefined4 local_2088;
  undefined4 uStack_2084;
  byte local_2080;
  undefined **local_2078;
  uint local_2070 [1025];
  uint local_106c;
  undefined8 local_1068;
  undefined *local_1060;
  undefined8 local_1058;
  undefined *local_1050;
  undefined8 local_1048;
  
  local_2078 = &PTR_LAB_049bb2c8;
  lVar11 = param_1 + 0x14028 + (ulong)param_3 * 0x1008;
  if (0x1d < param_3) {
    lVar11 = param_1 + 0x14028;
  }
  local_106c = param_3;
  memset(local_2070,0,0x1000);
  lVar10 = 0;
  do {
    puVar5 = (uint *)(lVar11 + 8 + lVar10);
    lVar1 = lVar10 + 8;
    uVar6 = puVar5[1];
    *(uint *)((long)local_2070 + lVar10 + 0x1008) = *puVar5 | *(uint *)((long)local_2070 + lVar10);
    *(uint *)((long)&local_1068 + lVar10 + 4) = uVar6 | *(uint *)((long)local_2070 + lVar10 + 4);
    lVar10 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2070,&local_1068,0x1000);
  puVar7 = PTR_DAT_04bb2010;
  local_1048 = 0;
  local_1058 = 0;
  local_1068 = PTR_DAT_04bbc1a0 + 0x10;
  local_1060 = PTR_DAT_04bb2010 + 0x10;
  local_1050 = local_1060;
  uVar8 = FUN_0277f02c(param_2,&local_1068);
  if ((uVar8 & 1) != 0) {
    if ((int)local_1048 - (int)local_1058 == 1) {
      if (local_1048._4_4_ - local_1058._4_4_ == 1) {
        uStack_2084 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
        local_2088 = 1;
        local_2080 = FUN_017baf44();
        lVar11 = 0;
        iVar9 = 0;
        local_2080 = local_2080 & 1;
        local_2090 = PTR_DAT_04bb6268 + 0x10;
        do {
          do {
            uVar6 = local_2070[lVar11];
            lVar11 = lVar11 + 1;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
            uVar6 = uVar6 + (uVar6 >> 8);
            iVar9 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar9;
          } while (lVar11 != 0x400);
          if (iVar9 == 0) {
            return false;
          }
          FUN_01696be0(auStack_20a0,&local_2078);
          if (local_1048._4_4_ + 1 != local_1058._4_4_) {
            iVar2 = local_2098 + (int)local_1058;
            iVar3 = local_2098 + (int)local_1048;
            iVar4 = local_1048._4_4_ + 1 + local_2094;
            iVar12 = local_2094 + local_1058._4_4_;
            iVar13 = iVar2;
            do {
              local_20c0 = (undefined *)CONCAT44(iVar12,iVar13);
              local_20c8 = puVar7 + 0x10;
              uVar8 = FUN_016771a0(&local_20c8);
              if ((uVar8 & 1) == 0) goto LAB_01688158;
              if (iVar13 < iVar3) {
                iVar13 = iVar13 + 1;
              }
              else {
                iVar12 = iVar12 + 1;
                iVar13 = iVar2;
              }
            } while ((iVar2 != iVar13) || (iVar4 != iVar12));
          }
          uVar8 = FUN_011f3880(&local_2090,0,param_2,auStack_20a0);
          if ((uVar8 & 1) != 0) {
            local_20c8 = PTR_DAT_04bbc1a0 + 0x10;
            local_20c0 = PTR_DAT_04bb2010 + 0x10;
            local_20b8 = local_2098;
            uStack_20b4 = local_2094;
            local_20a8 = local_2098 + 1;
            iStack_20a4 = local_2094 + 1;
            local_20b0 = local_20c0;
            FUN_01686550(param_1,&local_20c8);
            if (param_4 == 0) {
              return iVar9 != 0;
            }
            *(uint *)(param_4 + 8) = local_2098;
            *(uint *)(param_4 + 0xc) = local_2094;
            return iVar9 != 0;
          }
LAB_01688158:
          if ((((DAT_05233970 <= (int)local_2098) && ((int)local_2098 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)local_2094)) &&
             (((int)local_2094 <= DAT_05233984 &&
              (uVar6 = (local_2094 & 0x1fffffe) * 0x80 + ((int)local_2098 >> 1), uVar6 >> 0xf == 0))
             )) {
            uVar6 = uVar6 >> 5;
            local_2070[uVar6] =
                 local_2070[uVar6] & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          lVar11 = 0;
          iVar9 = 0;
        } while( true );
      }
    }
  }
  return false;
}

