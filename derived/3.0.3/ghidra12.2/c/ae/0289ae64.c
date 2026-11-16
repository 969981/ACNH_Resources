
/* WARNING: Removing unreachable block (ram,0x0289af28) */

bool FUN_0289ae64(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  long lVar11;
  char cVar12;
  undefined8 uVar13;
  char cVar14;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_DAT_04bb32e8;
  lVar11 = *(long *)PTR_DAT_04bb32e8;
  psVar10 = (short *)(lVar11 + 0x4068);
  if (*psVar10 == 0) {
    local_58 = *(undefined8 *)(lVar11 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_50 = (undefined *)(lVar8 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
    }
    uVar9 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar9,(undefined6)local_58) & 0xff00ffffffffffff;
    psVar10 = (short *)&local_58;
  }
  cVar14 = DAT_0417fb6b;
  cVar12 = DAT_0417fb6a;
  uVar13 = *(undefined8 *)psVar10;
  bVar5 = false;
  uVar2 = *param_1;
  if (2 < uVar2) {
    uVar2 = 0;
  }
  if (1 < (int)uVar2) {
    local_58 = CONCAT44(local_58._4_4_,5);
    if (DAT_0417fb69 == '\0') {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "RegulationType2";
      local_50 = puVar1;
      uVar9 = FUN_0273f0a0(&local_50);
      if ((uVar9 & 1) == 0) {
        pcStack_48 = "RegulationType3";
        local_50 = puVar1;
        bVar7 = FUN_0273f0a0(&local_50);
        cVar14 = cVar14 + (bVar7 & cVar14 < '\x19');
      }
      else {
        cVar12 = cVar12 - ('\0' < cVar12);
      }
      if ((int)uVar13 == *(int *)(*(long *)puVar4 + 0x4060)) {
        cVar3 = *(char *)(lVar11 + 0x4064);
        bVar5 = false;
        bVar6 = false;
        if (cVar12 <= cVar3) {
          bVar6 = SBORROW4((int)cVar3,(int)cVar14);
          bVar5 = (int)cVar3 - (int)cVar14 < 0;
        }
        bVar5 = bVar5 != bVar6;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = true;
    }
  }
  return bVar5;
}

