
void FUN_027ef890(long param_1,long *param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  ushort uVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char *__s;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  CalendarTime *pCVar22;
  undefined8 local_98;
  char *pcStack_90;
  int local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  long local_70;
  undefined4 local_64;
  
  puVar18 = (uint *)(param_1 + 0x3690a);
  pbVar1 = (byte *)(param_1 + 0x1341c);
  local_64 = param_3;
  if (((*pbVar1 - 1 < 0xc) &&
      ((byte)(*(char *)(param_1 + 0x1341d) - 1U) < (byte)(&DAT_0417b531)[*pbVar1 - 1])) &&
     (uVar15 = nn::time::IsValidDate
                         ((uint)*(ushort *)puVar18,(uint)*(byte *)(param_1 + 0x3690c),
                          (uint)*(byte *)(param_1 + 0x3690d)), (uVar15 & 1) != 0)) {
    local_98 = (undefined *)param_2[2];
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
    local_80 = lVar16 + 0x1baf80;
    local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    local_70 = param_2[2];
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_80 = lVar16 + -0x1baf80;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    uVar17 = FUN_00a82800(&local_98,&local_70);
    puVar8 = (undefined8 *)PTR_DAT_04bb32f0;
    uVar15 = (ulong)local_98;
    while (PTR_DAT_04bb32f0 = (undefined *)puVar8, local_98 = (undefined *)uVar15, (uVar17 & 1) != 0
          ) {
      local_98._0_2_ = (ushort)uVar15;
      local_98._2_1_ = (byte)(uVar15 >> 0x10);
      if ((*(short *)puVar18 == (ushort)local_98 && *(char *)(param_1 + 0x3690c) == local_98._2_1_)
         && (local_98._3_1_ = (byte)(uVar15 >> 0x18), *(char *)(param_1 + 0x3690d) == local_98._3_1_
            )) {
        uVar15 = FUN_00873540(*puVar8,&local_98,1,1);
        if ((uVar15 & 1) != 0) {
          FUN_00873ad0(&local_80,*puVar8,&local_98,1);
          local_84 = FUN_00874898(*puVar8,&local_80);
          bVar12 = local_84 != 2;
          goto LAB_027efa34;
        }
        break;
      }
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_80 = lVar16 + -0x15180;
      local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      uVar17 = FUN_00a82800(&local_98,&local_70);
      puVar8 = (undefined8 *)PTR_DAT_04bb32f0;
      uVar15 = (ulong)local_98;
    }
  }
  bVar12 = false;
LAB_027efa34:
  if (*(char *)((long)param_2 + 0x29) != '\0' || *(char *)((long)param_2 + 0x2a) != '\0') {
    FUN_026d6170(param_1 + 0x36910,param_3,param_1 + 0x3690a);
  }
  bVar7 = bVar12;
  if ((char)param_2[5] != '\0' || *param_2 != 0) {
    bVar7 = true;
  }
  if (bVar7) {
    uVar3 = *puVar18;
    uVar6 = uVar3 >> 0x18;
    *puVar18 = 0;
    if ((*pbVar1 - 1 < 0xc) &&
       ((byte)(*(char *)(param_1 + 0x1341d) - 1U) < (byte)(&DAT_0417b531)[*pbVar1 - 1])) {
      pCVar22 = (CalendarTime *)(param_2 + 2);
      local_98 = *(undefined **)pCVar22;
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_80 = lVar16 + -0x1baf80;
      local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      local_70 = *(long *)pCVar22;
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_80 = lVar16 + 0x1baf80;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      puVar2 = PTR_DAT_04bb32f0;
      bVar7 = false;
      do {
        bVar4 = *pbVar1;
        if ((bVar4 - 1 < 0xc) &&
           (cVar5 = *(char *)(param_1 + 0x1341d),
           (byte)(cVar5 - 1U) < (byte)(&DAT_0417b531)[bVar4 - 1])) {
          if ((bVar4 == 2) && (cVar5 == '\x1d')) {
            if ((((ulong)local_98 & 3) == 0) &&
               ((0x28f5c28 <
                 ((uint)(ushort)local_98 * -0x3d70a3d7 >> 2 | (uint)(ushort)local_98 * 0x40000000)
                || (((ulong)local_98 & 0xf) == 0)))) goto LAB_027efc00;
            bVar11 = local_98._2_1_ == 2 && local_98._3_1_ == '\x1c';
          }
          else {
LAB_027efc00:
            bVar11 = false;
            if (bVar4 == local_98._2_1_) {
              bVar11 = cVar5 == local_98._3_1_;
            }
          }
          bVar7 = (bool)(bVar7 | bVar11);
          if (bVar7) {
LAB_027efc14:
            uVar15 = FUN_00873540(*(undefined8 *)puVar2,&local_98,1,1);
            if ((uVar15 & 1) == 0) {
              lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
              lVar21 = nn::time::ToPosixTimeFromUtc(pCVar22);
              if ((lVar16 <= lVar21) &&
                 (lVar21 = nn::time::ToPosixTimeFromUtc(pCVar22), lVar21 != lVar16)) break;
            }
            else {
              FUN_00873ad0(&local_80,*(undefined8 *)puVar2,&local_98,1);
              iVar13 = FUN_00874898(*(undefined8 *)puVar2,&local_80);
              if (iVar13 == 1) break;
              if (iVar13 != 2) goto LAB_027efb30;
            }
            uVar9 = (ushort)local_98;
            bVar4 = local_98._2_1_;
            bVar10 = local_98._3_1_;
            uVar15 = nn::time::IsValidDate
                               ((uint)(ushort)local_98,(uint)local_98._2_1_,(uint)local_98._3_1_);
            if ((uVar15 & 1) != 0) {
              *(ushort *)puVar18 = uVar9;
              *(byte *)(param_1 + 0x3690c) = bVar4;
              *(byte *)(param_1 + 0x3690d) = bVar10;
            }
            break;
          }
        }
        else if (bVar7) goto LAB_027efc14;
LAB_027efb30:
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
        local_80 = lVar16 + 0x15180;
        local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        uVar15 = FUN_00a82800(&local_70,&local_98);
      } while ((uVar15 & 1) != 0);
    }
    uVar14 = nn::time::IsValidDate(uVar3 & 0xffff,uVar3 >> 0x10 & 0xff,uVar6);
    uVar19 = (uint)*(byte *)(param_1 + 0x3690c);
    uVar20 = (uint)*(byte *)(param_1 + 0x3690d);
    if (!bVar12 && ((uVar14 ^ 0xffffffff) & 1) == 0) {
      uVar15 = nn::time::IsValidDate
                         ((uint)*(ushort *)puVar18,(uint)*(byte *)(param_1 + 0x3690c),
                          (uint)*(byte *)(param_1 + 0x3690d));
      if (((((uVar15 & 1) == 0) || ((uint)*(ushort *)puVar18 != (uVar3 & 0xffff))) ||
          (uVar19 = uVar3 >> 0x10, (uint)*(byte *)(param_1 + 0x3690c) != (uVar19 & 0xff))) ||
         (*(byte *)(param_1 + 0x3690d) != uVar6)) {
        iVar13 = 0;
        lVar16 = param_1 + 0x36910;
        do {
          __s = (char *)(lVar16 + (long)iVar13 * 0x230);
          if (((*__s == '\0') ||
              (lVar21 = lVar16 + (long)iVar13 * 0x230,
              *(int *)(lVar21 + 0x200) == 0 || *(int *)(lVar21 + 0x1e4) == 0)) ||
             (lVar21 = lVar16 + (long)iVar13 * 0x230,
             *(char *)(lVar21 + 1) == '\0' || *(char *)(lVar21 + 2) != '\0')) {
            lVar21 = lVar16 + (long)iVar13 * 0x230;
            memset(__s,0,0x230);
            *(undefined1 *)(lVar21 + 0x1fc) = 2;
            *(undefined4 *)(lVar21 + 0x1f8) = 0;
            *(undefined8 *)(lVar21 + 0x220) = 0;
            *(undefined8 *)(lVar21 + 0x228) = 0;
            *(undefined8 *)(lVar21 + 0x200) = 0;
            *(undefined8 *)(lVar21 + 0x208) = 0;
            *(undefined8 *)(lVar21 + 0x210) = 0;
            *(undefined4 *)(lVar21 + 0x218) = 0;
            *(undefined8 *)(lVar21 + 0x1e8) = 0;
            *(undefined8 *)(lVar21 + 0x1f0) = 0;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != 8);
        uVar19 = (uint)*(byte *)(param_1 + 0x3690c);
        uVar20 = (uint)*(byte *)(param_1 + 0x3690d);
      }
      else {
        uVar20 = uVar6;
      }
    }
    uVar15 = nn::time::IsValidDate((uint)*(ushort *)puVar18,uVar19 & 0xff,uVar20);
    if ((((uVar15 & 1) != 0) && (*(short *)puVar18 == (short)param_2[2])) &&
       ((*(char *)(param_1 + 0x3690c) == *(char *)((long)param_2 + 0x12) &&
        (*(char *)(param_1 + 0x3690d) == *(char *)((long)param_2 + 0x13))))) {
      local_80 = 0;
      local_78 = 0x23080023;
      local_74 = 0x800;
      FUN_020b6e70(param_3,&local_80);
      puVar2 = PTR_DAT_04bb2020;
      uVar15 = (ulong)(byte)local_78;
      if (((uVar15 < 0x23) && (local_78._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
         (((uint)(&DAT_053e6eb8)[uVar15] >> (ulong)(local_78._1_1_ & 0x1f) & 1) != 0)) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        pcStack_90 = "BDayMsgSenderNNpcUniqueID0";
        FUN_0274d104(&local_64,&local_98,CONCAT11((byte)local_78,local_78._1_1_));
      }
      uVar15 = (ulong)local_78._3_1_;
      if (((uVar15 < 0x23) && ((byte)local_74 <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
         (((uint)(&DAT_053e6eb8)[uVar15] >> (ulong)((byte)local_74 & 0x1f) & 1) != 0)) {
        local_98 = puVar2 + 0x10;
        pcStack_90 = "BDayMsgSenderNNpcUniqueID1";
        FUN_0274d104(&local_64,&local_98,CONCAT11(local_78._3_1_,(byte)local_74));
      }
      puVar2 = puVar2 + 0x10;
      pcStack_90 = "BDayMsgSenderSNpcUniqueID0";
      local_98 = puVar2;
      FUN_0274d104(&local_64,&local_98,local_80 & 0xffffffff);
      pcStack_90 = "BDayMsgSenderSNpcUniqueID1";
      local_98 = puVar2;
      FUN_0274d104(&local_64,&local_98,local_80._4_4_);
      puVar18 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      pcStack_90 = "BDayMsgRandomSead";
      local_98 = puVar2;
      uVar15 = FUN_0274f6e0(&local_98);
      uVar6 = puVar18[3];
      uVar3 = *puVar18 ^ *puVar18 << 0xb;
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar3 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar3;
      pcStack_90 = "BDayMsgRandomSead";
      local_98 = puVar2;
      FUN_0274d104(&local_64,&local_98,(ulong)uVar3 * (uVar15 & 0xffffffff) >> 0x20);
    }
  }
  return;
}

