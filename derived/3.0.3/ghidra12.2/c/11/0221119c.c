
bool FUN_0221119c(void)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  undefined8 local_50;
  undefined *local_48;
  char *pcStack_40;
  undefined1 uStack_31;
  undefined8 local_18;
  
  FUN_0252d11c(&uStack_31);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "WHEREAREN_ChocolateDemoReserve";
  local_48 = puVar1;
  iVar5 = FUN_02753180(&uStack_31,&local_48);
  if (iVar5 == 0) {
    pcStack_40 = "LatestChocolateDate";
    local_48 = puVar1;
    uVar6 = FUN_0274bce0(&uStack_31,&local_48);
    puVar1 = PTR_DAT_04bb32e8;
    lVar8 = *(long *)PTR_DAT_04bb32e8;
    psVar9 = (short *)(lVar8 + 0x4068);
    if (*(short *)(lVar8 + 0x4070) == 0) {
      if (*psVar9 == 0) {
        local_18 = *(undefined8 *)(lVar8 + 0x4060);
        if ((char)(local_18 >> 0x20) < '\x05') {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
          local_48 = (undefined *)(lVar8 + -0x15180);
          local_18 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
          lVar8 = *(long *)puVar1;
        }
        uVar10 = local_18 >> 0x30;
        local_18._0_6_ = CONCAT24(5,(undefined4)local_18);
        local_18 = CONCAT26((short)uVar10,(undefined6)local_18) & 0xff00ffffffffffff;
        psVar9 = (short *)&local_18;
      }
      local_18 = *(ulong *)psVar9;
    }
    else {
      local_18 = *(undefined8 *)(lVar8 + 0x4070);
    }
    uVar10 = *(ulong *)(lVar8 + 0x4060);
    uVar2 = uVar6 >> 5 & 0xf;
    local_50._0_2_ = (short)uVar10;
    sVar3 = (short)local_50;
    local_50._0_3_ = CONCAT12((char)uVar2,(short)local_50);
    local_50._4_4_ = (undefined4)(uVar10 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,CONCAT13((char)uVar6,(undefined3)local_50)) &
               0xffffffff1fffffff;
    if (((uVar10 & 0xffff) == 0) ||
       (uVar7 = nn::time::IsValidDate((int)sVar3,uVar2,uVar6 & 0x1f), (uVar7 & 1) == 0)) {
      bVar4 = false;
    }
    else {
      if ((char)(uVar10 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_48 = (undefined *)(lVar8 + -0x15180);
        local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      uVar10 = local_50 >> 0x30;
      local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
      local_50 = CONCAT26((short)uVar10,(undefined6)local_50) & 0xff00ffffffffffff;
      iVar5 = FUN_00a82474(&local_50,&local_18);
      bVar4 = iVar5 == 0;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

