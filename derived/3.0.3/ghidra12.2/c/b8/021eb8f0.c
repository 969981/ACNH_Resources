
void FUN_021eb8f0(uint *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 local_40;
  ulong local_38;
  
  uVar5 = *param_1;
  if (DAT_05407608 < 10) {
    uVar5 = uVar5 & (1 << (ulong)(DAT_05407608 & 0x1f) ^ 0xffffffffU);
    *param_1 = uVar5;
  }
  if (DAT_0540760c < 10) {
    uVar5 = uVar5 & (1 << (ulong)(DAT_0540760c & 0x1f) ^ 0xffffffffU);
    *param_1 = uVar5;
  }
  if (DAT_05407610 < 10) {
    uVar5 = uVar5 & (1 << (ulong)(DAT_05407610 & 0x1f) ^ 0xffffffffU);
    *param_1 = uVar5;
  }
  lVar6 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar2)) {
      puVar7 = &DAT_05407620;
      goto LAB_021eb9b8;
    }
  }
  puVar7 = &DAT_05407614;
LAB_021eb9b8:
  if (*puVar7 < 10) {
    uVar5 = uVar5 & (1 << (ulong)(*puVar7 & 0x1f) ^ 0xffffffffU);
    *param_1 = uVar5;
  }
  if (puVar7[1] < 10) {
    uVar5 = uVar5 & (1 << (ulong)(puVar7[1] & 0x1f) ^ 0xffffffffU);
    *param_1 = uVar5;
  }
  if (puVar7[2] < 10) {
    *param_1 = uVar5 & (1 << (ulong)(puVar7[2] & 0x1f) ^ 0xffffffffU);
  }
  lVar6 = DAT_04cea100;
  if (DAT_04cea100 != 0) {
    local_40 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((char)(local_40 >> 0x20) < '\x05') {
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = lVar3 - 0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar4 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar4,(undefined6)local_40) & 0xff00ffffffffffff;
    local_38 = local_38 & 0xffffffff00000000;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffffe;
    }
    local_38._0_4_ = 1;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffffd;
    }
    local_38._0_4_ = 2;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffffb;
    }
    local_38._0_4_ = 3;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffff7;
    }
    local_38._0_4_ = 4;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xffffffef;
    }
    local_38._0_4_ = 5;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xffffffdf;
    }
    local_38._0_4_ = 6;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xffffffbf;
    }
    local_38._0_4_ = 7;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xffffff7f;
    }
    local_38._0_4_ = 8;
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffeff;
    }
    local_38 = CONCAT44(local_38._4_4_,9);
    uVar4 = FUN_0087d624(lVar6,&local_40,&local_38,1);
    if ((uVar4 & 1) != 0) {
      *param_1 = *param_1 & 0xfffffdff;
    }
  }
  return;
}

