
void FUN_01252b70(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  uint local_3c;
  undefined8 local_30;
  undefined8 local_28;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar12 >> 0x11 & 1) != 0) &&
         (uVar7 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         uVar7 < DAT_0534f408)) &&
        (puVar12 = *(uint **)(DAT_0534f410 + (long)(int)uVar7 * 8), puVar12 != (uint *)0x0)) &&
       (uVar7 = *puVar12, uVar7 != 0 && puVar12 != (uint *)(ulong)uVar7)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
      if (((*puVar13 != 0) && (uVar7 = puVar13[1], uVar7 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar13 + lVar9 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar7);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar2 * 2) == 1))
          goto LAB_01252cf0;
        }
      }
    }
    local_48 = CONCAT44(local_48._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_01252cf0;
  }
  uVar8 = FUN_0123d890(*(undefined8 *)(param_2 + 0x10),4);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = FUN_0123d890(*(undefined8 *)(param_2 + 0x10),0), (uVar8 & 1) != 0)) {
LAB_01252cf0:
    uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    return;
  }
  iVar6 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
  local_30 = 0xfffe;
  FUN_0277d4ac(&local_30);
  if (iVar6 == 7) {
    uVar14 = *(undefined8 *)PTR_DAT_04bb30a0;
    local_28 = FUN_00a8c31c(uVar14);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_48 = lVar9 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar10 = local_28 >> 0x10;
    uVar8 = local_28 >> 0x30;
    uVar11 = local_28 >> 0x18;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar8,(undefined6)local_28) & 0xff00ffffffffffff;
    cVar5 = FUN_00a8ae20(uVar14,uVar10,uVar11);
    if (cVar5 == '\0') {
      uVar7 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar7 = uVar7 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar7 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      DAT_0514cb64 = uVar7;
      if ((uint)((ulong)uVar7 * 100 >> 0x20) < 0x1e) {
        local_48 = 0x1661;
        FUN_0277d4ac(&local_48);
        local_30 = local_48;
        FUN_01ad5d04(&local_48,&local_30);
        FUN_01b152b8(&local_48);
        goto LAB_01252ff8;
      }
    }
    local_48 = 0x9c5;
LAB_01252ef8:
    FUN_0277d4ac(&local_48);
    local_40 = (undefined2)local_48;
    local_3e = local_48._2_1_;
    local_3d = local_48._3_1_;
    local_3c = local_48._4_4_;
    goto LAB_01252ff8;
  }
  uVar8 = FUN_01229624(1);
  if ((uVar8 & 1) == 0) {
    switch(iVar6 + -1) {
    case 0:
    case 8:
      uVar7 = FUN_0122b8ec();
      if ((int)uVar7 < 0x23) break;
      if (uVar7 < 0x46) goto LAB_01252ea4;
LAB_01252ed4:
      if (99 < uVar7) {
switchD_01252e3c_caseD_1:
        *param_1 = 0xfffe;
        FUN_0277d4ac(param_1);
        return;
      }
      lVar9 = 2;
      goto LAB_01252ee0;
    default:
      goto switchD_01252e3c_caseD_1;
    case 2:
      uVar7 = FUN_0122b8ec();
      if (0x22 < (int)uVar7) {
LAB_01252ecc:
        if (0x40 < uVar7) goto LAB_01252ed4;
LAB_01252ea4:
        lVar9 = 1;
        goto LAB_01252ee0;
      }
      break;
    case 4:
      uVar7 = FUN_0122b8ec();
      if (0x1d < (int)uVar7) goto LAB_01252ecc;
    }
    lVar9 = 0;
LAB_01252ee0:
    local_48 = (ulong)(ushort)(&DAT_04174adc)[lVar9];
    goto LAB_01252ef8;
  }
  switch(iVar6 + -1) {
  case 0:
  case 8:
  case 9:
    uVar7 = FUN_0122b8ec();
    if ((int)uVar7 < 0x19) {
LAB_01252f60:
      lVar9 = 0;
    }
    else if (uVar7 < 0x37) {
LAB_01252f70:
      lVar9 = 1;
    }
    else {
      if (uVar7 < 0x50) break;
LAB_01252f30:
      if (99 < uVar7) goto switchD_01252e3c_caseD_1;
      lVar9 = 3;
    }
    goto LAB_01252f74;
  default:
    goto switchD_01252e3c_caseD_1;
  case 2:
    uVar7 = FUN_0122b8ec();
    if ((int)uVar7 < 0x1e) goto LAB_01252f60;
    if (uVar7 < 0x37) goto LAB_01252f70;
    if (0x54 < uVar7) goto LAB_01252f30;
    break;
  case 4:
    uVar7 = FUN_0122b8ec();
    if ((int)uVar7 < 0xf) goto LAB_01252f60;
    if (uVar7 < 0x23) goto LAB_01252f70;
    if (0x36 < uVar7) goto LAB_01252f30;
  }
  lVar9 = 2;
LAB_01252f74:
  local_48 = (ulong)(ushort)(&DAT_04102710)[lVar9];
  FUN_0277d4ac(&local_48);
  local_30 = local_48;
  iVar6 = FUN_0277d6c4(&local_30);
  if (iVar6 == 0x30e0) {
    FUN_01ad5d04(&local_48,&local_30);
    uVar8 = FUN_01b15170(&local_48);
    if ((uVar8 & 1) != 0) {
      local_3c = local_3c | 0x10000;
    }
  }
  else {
    local_40 = (undefined2)local_30;
    local_3e = local_30._2_1_;
    local_3d = local_30._3_1_;
    local_3c = local_30._4_4_;
  }
LAB_01252ff8:
  *(undefined2 *)param_1 = local_40;
  *(undefined1 *)((long)param_1 + 2) = local_3e;
  *(undefined1 *)((long)param_1 + 3) = local_3d;
  *(uint *)((long)param_1 + 4) = local_3c;
  return;
}

