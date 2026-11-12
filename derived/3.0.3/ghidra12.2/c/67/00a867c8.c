
void FUN_00a867c8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong local_28;
  ulong local_8;
  
  if ((*(int *)(param_1 + 0x65410) == 0) || (0xf < *(int *)(param_1 + 0x65410) - 1U)) {
    uVar1 = *(undefined1 *)(param_1 + 0x651ec);
LAB_00a8685c:
    FUN_00a868d0(param_1,uVar1);
    return;
  }
  puVar3 = (ulong *)(param_1 + 0x65438);
  switch(*(int *)(param_1 + 0x65410)) {
  default:
    local_28 = *puVar3;
    if ((local_28 & 0xffff) != 0) {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = lVar2 + 0xe10;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    FUN_00a868d0(param_1,local_28 >> 0x20);
    return;
  case 4:
  case 5:
    local_8 = *puVar3;
    puVar3 = &local_8;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    local_28 = *puVar3;
    if ((local_28 & 0xffff) != 0) {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = lVar2 + 0xe10;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    puVar3 = &local_28;
    break;
  case 0xc:
  case 0xd:
    uVar1 = *(undefined1 *)(param_1 + 0x6543c);
    goto LAB_00a8685c;
  }
  FUN_00a86ba4(param_1,puVar3);
  return;
}

