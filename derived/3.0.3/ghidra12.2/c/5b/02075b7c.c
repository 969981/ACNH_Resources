
void FUN_02075b7c(undefined8 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined8 local_48;
  long local_28;
  
  puVar14 = (undefined8 *)*param_1;
  psVar9 = (short *)param_1[1];
  psVar10 = (short *)*puVar14;
  if ((((*psVar10 == *psVar9) && ((char)psVar9[1] == (char)psVar10[1])) &&
      (sVar12 = psVar10[2], sVar12 == psVar9[2])) &&
     (uVar11 = (uint)*(byte *)(psVar10 + 3), *(byte *)(psVar9 + 3) == *(byte *)(psVar10 + 3))) {
    uVar7 = 0;
    if (*(byte *)((long)psVar9 + 7) < 3) {
      uVar7 = (uint)*(byte *)((long)psVar9 + 7);
    }
    local_28 = CONCAT44(local_28._4_4_,uVar7);
    if (*(byte *)((long)psVar10 + 7) != uVar7) goto LAB_02075c28;
    uVar7 = 0;
    if (*(byte *)(psVar9 + 4) < 3) {
      uVar7 = (uint)*(byte *)(psVar9 + 4);
    }
    local_48 = CONCAT44(local_48._4_4_,uVar7);
    if (*(byte *)(psVar10 + 4) == uVar7) {
      sVar13 = *psVar9;
      goto LAB_02075c60;
    }
  }
  else {
LAB_02075c28:
    sVar12 = psVar9[2];
    uVar11 = (uint)*(byte *)(psVar9 + 3);
  }
  if ((*psVar9 != 999 || (char)psVar9[1] != '\x01' && (char)psVar9[1] != '\x02') ||
     (sVar12 != 999 || 1 < uVar11 - 1)) {
    local_48 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((char)(local_48 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = lVar5 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      puVar14 = (undefined8 *)*param_1;
      psVar9 = (short *)param_1[1];
    }
    uVar3 = local_48;
    uVar6 = local_48 >> 0x30;
    uVar11 = (uint)local_48;
    local_48._0_6_ = CONCAT24(5,(uint)local_48);
    local_48 = CONCAT26((short)uVar6,(undefined6)local_48) & 0xff00ffffffffffff;
    uVar6 = local_48;
    psVar10 = (short *)*puVar14;
    *psVar10 = *psVar9;
    *(char *)(psVar10 + 1) = (char)psVar9[1];
    psVar10[2] = psVar9[2];
    *(char *)(psVar10 + 3) = (char)psVar9[3];
    bVar1 = 0;
    if (*(byte *)((long)psVar9 + 7) < 3) {
      bVar1 = *(byte *)((long)psVar9 + 7);
    }
    *(byte *)((long)psVar10 + 7) = bVar1;
    uVar7 = 0;
    if (*(byte *)(psVar9 + 4) < 3) {
      uVar7 = (uint)*(byte *)(psVar9 + 4);
    }
    local_28 = CONCAT44(local_28._4_4_,uVar7);
    local_48._0_2_ = (undefined2)uVar3;
    uVar2 = (undefined2)local_48;
    local_48._2_1_ = SUB81(uVar3,2);
    bVar1 = local_48._2_1_;
    local_48._3_1_ = SUB81(uVar3,3);
    bVar4 = local_48._3_1_;
    *(char *)(psVar10 + 4) = (char)uVar7;
    puVar15 = *(undefined2 **)param_1[2];
    uVar7 = (uint)local_48._2_1_;
    uVar8 = (uint)local_48._3_1_;
    local_48 = uVar6;
    uVar6 = nn::time::IsValidDate(uVar11 & 0xffff,uVar7,uVar8);
    if ((uVar6 & 1) != 0) {
      *puVar15 = uVar2;
      *(byte *)(puVar15 + 1) = bVar1;
      *(byte *)((long)puVar15 + 3) = bVar4;
    }
    FUN_020eeb8c(*(undefined8 *)*param_1,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],
                 *(undefined4 *)param_1[4],*(undefined1 *)param_1[5]);
    return;
  }
  sVar12 = 999;
  sVar13 = 999;
LAB_02075c60:
  if (((*psVar10 == sVar13) && ((char)psVar9[1] == (char)psVar10[1])) &&
     ((psVar10[2] == sVar12 && (uVar11 == *(byte *)(psVar10 + 3))))) {
    bVar1 = 0;
    if (*(byte *)((long)psVar9 + 7) < 3) {
      bVar1 = *(byte *)((long)psVar9 + 7);
    }
    if (*(byte *)((long)psVar10 + 7) == bVar1) {
      uVar7 = 0;
      if (*(byte *)(psVar9 + 4) < 3) {
        uVar7 = (uint)*(byte *)(psVar9 + 4);
      }
      local_48 = CONCAT44(local_48._4_4_,uVar7);
      if (*(byte *)(psVar10 + 4) == uVar7) {
        return;
      }
    }
  }
  if ((((*psVar9 != 999) || (1 < *(byte *)(psVar9 + 1) - 1)) || (sVar12 != 999)) || (1 < uVar11 - 1)
     ) {
    return;
  }
  *psVar10 = 999;
  *(char *)(psVar10 + 1) = (char)psVar9[1];
  psVar10[2] = psVar9[2];
  *(char *)(psVar10 + 3) = (char)psVar9[3];
  bVar1 = 0;
  if (*(byte *)((long)psVar9 + 7) < 3) {
    bVar1 = *(byte *)((long)psVar9 + 7);
  }
  *(byte *)((long)psVar10 + 7) = bVar1;
  uVar11 = 0;
  if (*(byte *)(psVar9 + 4) < 3) {
    uVar11 = (uint)*(byte *)(psVar9 + 4);
  }
  local_28 = CONCAT44(local_28._4_4_,uVar11);
  *(char *)(psVar10 + 4) = (char)uVar11;
  **(undefined4 **)param_1[2] = 0;
  FUN_020eeb8c(*(undefined8 *)*param_1,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],
               *(undefined4 *)param_1[4],*(undefined1 *)param_1[5]);
  return;
}

