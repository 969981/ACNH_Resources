
undefined * FUN_0284d880(long param_1,ulong param_2,byte *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  byte local_50 [4];
  byte local_4c [4];
  ulong local_48;
  
  uVar1 = FUN_0284da58(param_1,param_2,0);
  if (uVar1 < 7) {
    local_48 = CONCAT44(local_48._4_4_,uVar1);
    switch(uVar1) {
    default:
      lVar2 = param_1 + 8;
      break;
    case 1:
      lVar2 = param_1 + 0x44;
      break;
    case 2:
      lVar2 = param_1 + 0x80;
      break;
    case 3:
      lVar2 = param_1 + 0xc0;
      break;
    case 4:
      lVar2 = param_1 + 0xfc;
      break;
    case 5:
      lVar2 = param_1 + 0x134;
      break;
    case 6:
      lVar2 = param_1 + 0x16c;
    }
    if (*(char *)(lVar2 + 0x2f) != '\x02') goto LAB_0284d920;
LAB_0284d9a8:
    local_4c[0] = *param_3;
    if (7 < local_4c[0]) {
      local_4c[0] = 0xff;
    }
    uVar1 = FUN_0284dda0(param_1,param_2 & 0xffffffff,local_4c,uVar1);
    if (-1 < (int)uVar1) goto joined_r0x0284da28;
  }
  else {
LAB_0284d920:
    if (((int)*(char *)(param_1 + 0xbc) == (int)param_2) && (*(char *)(param_1 + 0xaf) == '\x02')) {
      local_48 = *(ulong *)(param_1 + 0xa4);
      if ((local_48 & 0xffff) != 0) {
        lVar6 = *(long *)PTR_DAT_04bb32e8;
        lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060));
        if ((lVar2 <= lVar3) &&
           (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060)), lVar3 != lVar2))
        goto LAB_0284d998;
      }
      uVar4 = FUN_0284cae0(param_1,0xc);
      if ((uVar4 & 1) == 0) {
        uVar1 = 2;
        goto LAB_0284d9a8;
      }
    }
LAB_0284d998:
    if (uVar1 < 7) goto LAB_0284d9a8;
  }
  iVar5 = (int)*(char *)(param_1 + 0x73);
  local_48 = CONCAT44(local_48._4_4_,iVar5);
  if (iVar5 == 0) {
    return (undefined *)0x0;
  }
  if (iVar5 == 3) {
    return (undefined *)0x0;
  }
  local_50[0] = *param_3;
  if (7 < local_50[0]) {
    local_50[0] = 0xff;
  }
  uVar1 = FUN_0284dda0(param_1,param_2 & 0xffffffff,local_50,1);
joined_r0x0284da28:
  if (uVar1 < 7) {
    return (&PTR_DAT_04a91cd0)[uVar1];
  }
  return (undefined *)0x0;
}

