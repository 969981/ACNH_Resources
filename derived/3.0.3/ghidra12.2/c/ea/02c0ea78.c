
undefined8 FUN_02c0ea78(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ushort uVar10;
  long lVar11;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  *(undefined8 *)(param_1 + 0x244) = 0;
  puVar3 = PTR_DAT_04bb7ff8;
  local_34[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar11 = *(long *)PTR_DAT_04bb7ff8;
  if (lVar11 != 0) {
    uVar6 = FUN_02ef9074(lVar11,0,local_34);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_02ef9074(lVar11,10,local_34);
    puVar1 = PTR_DAT_04bb2020;
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((*(long *)puVar3 != 0) && (*(int *)(*(long *)puVar3 + 0x588) != 0)) {
      return 0;
    }
    if (DAT_04c487d4 == 0xffff) {
      return 1;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar10 = DAT_04c487d4;
    if ((*puVar2 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x244) = 0xc;
      local_48 = puVar1 + 0x10;
      pcStack_40 = "OtgGetStartingSalary";
      uVar7 = FUN_02758850(&local_48);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      local_48._0_4_ = 4;
      uVar6 = FUN_0290cbcc(&local_48);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      pfVar8 = (float *)FUN_0251b3b0(local_34,0);
      uVar10 = DAT_04c487d4;
      if (pfVar8 == (float *)0x0) {
        return 0;
      }
      if (170.0 <= *pfVar8) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x244) = 0;
      if (uVar10 == 0xffff) {
        return 1;
      }
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x21);
    puVar3 = PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8;
    if (0xff < uVar10) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar3 + 4) >> 1 & 1) != 0) {
      iVar5 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar5 = 0;
        }
        else {
          puVar9 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar9,0);
          iVar5 = 0;
          if ((iVar4 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
            iVar5 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      puVar3 = PTR_DAT_04bb2020;
      if (DAT_05292430 == iVar5) {
        lVar11 = param_1 + 0x1f8;
        *(undefined4 *)(param_1 + 0x248) = 0xf;
        puVar1 = puVar3 + 0x10;
        pcStack_40 = "SeqHotelEditTutorialDone";
        local_48 = puVar1;
        iVar5 = FUN_0274bce0(lVar11,&local_48);
        if (iVar5 == 0) {
          pcStack_50 = "HotelDiyTradeAchieveOrderNumNowIsland";
          local_58 = puVar1;
          uVar7 = FUN_0274bce0(lVar11,&local_58);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
        }
        local_48 = puVar3 + 0x10;
        pcStack_40 = "HotelReserveInviteDemo";
        iVar5 = FUN_02753180(lVar11,&local_48);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x240) = 9;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x248) = 0;
      }
    }
  }
  return 1;
}

