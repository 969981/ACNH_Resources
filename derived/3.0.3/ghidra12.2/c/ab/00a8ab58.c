
/* WARNING: Removing unreachable block (ram,0x00a8ac40) */

int FUN_00a8ab58(long param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  undefined8 local_48;
  int local_3c;
  undefined1 local_38 [7];
  undefined1 uStack_31;
  long local_18;
  
  if (((int)*param_2 < 0) || (uVar1 = *param_2, *(int *)(param_1 + 0x653a0) <= (int)uVar1)) {
    iVar8 = 0;
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,uVar1);
    if (uVar1 < *(uint *)(param_1 + 0x100)) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x108) + (long)(int)uVar1 * 8);
    }
    else {
      lVar7 = 0;
    }
    piVar6 = (int *)(**(code **)(*(long *)(lVar7 + 0xbc8) + 0xf0))(lVar7 + 0xbc8);
    local_48 = *param_3;
    iVar8 = *piVar6;
    local_3c = iVar8;
    if ((char)(local_48 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_18 = lVar7 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar4 = local_48;
    uVar2 = local_48 >> 0x30;
    uVar3 = (undefined4)local_48;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar2,(undefined6)local_48) & 0xff00ffffffffffff;
    uStack_31 = (undefined1)((ulong)uVar4 >> 0x38);
    local_38 = (undefined1  [7])CONCAT16(0,CONCAT24(5,uVar3));
    cVar5 = FUN_00a8ae20(param_1,local_48 >> 0x10,local_48 >> 0x18,4);
    if ((('\0' < cVar5) && (uVar1 = local_3c - 2, iVar8 = local_3c, uVar1 < 6)) &&
       ((0x39U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      iVar8 = *(int *)(&DAT_04168258 + (long)(int)uVar1 * 4);
    }
  }
  return iVar8;
}

