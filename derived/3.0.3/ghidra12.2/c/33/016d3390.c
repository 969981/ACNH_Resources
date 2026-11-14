
uint FUN_016d3390(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  CalendarTime *pCVar5;
  long lVar6;
  long lVar7;
  undefined8 local_48;
  undefined1 local_28 [7];
  undefined1 uStack_21;
  
  puVar2 = PTR_DAT_04bb30a0;
  pCVar5 = (CalendarTime *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
  uStack_21 = (undefined1)((ulong)*(undefined8 *)pCVar5 >> 0x38);
  local_28 = (undefined1  [7])CONCAT16(0,CONCAT42(0x51403,(short)*(undefined8 *)pCVar5));
  local_48._0_6_ = CONCAT42(0x5140a,(short)*(undefined8 *)pCVar5);
  local_48 = CONCAT26((short)((ulong)*(undefined8 *)pCVar5 >> 0x30),(undefined6)local_48) &
             0xff00ffffffffffff;
  lVar6 = nn::time::ToPosixTimeFromUtc(pCVar5);
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_28);
  if (lVar7 < lVar6) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_28);
    uVar4 = (uint)(lVar7 != lVar6);
  }
  lVar6 = nn::time::ToPosixTimeFromUtc(pCVar5);
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
  if (lVar7 < lVar6) {
    bVar3 = false;
  }
  else {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    bVar3 = lVar7 != lVar6;
  }
  bVar1 = false;
  if ((int)uVar4 < 1) {
    bVar1 = bVar3;
  }
  uVar4 = FUN_016d5e04(param_1,bVar1 ^ *(int *)(*(long *)puVar2 + 0x65204) == 1,param_2);
  return uVar4 & 1;
}

