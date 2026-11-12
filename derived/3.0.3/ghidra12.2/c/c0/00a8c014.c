
int FUN_00a8c014(undefined8 param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  ushort uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 local_28;
  long local_8;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar10 = (ulong)(short)uVar4;
  if (uVar10 == 0xffffffffffffffff) {
LAB_00a8c104:
    puVar9 = (ulong *)(DAT_04da7238 + 0x651c8);
    if (*(short *)puVar9 == 0) {
      puVar9 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
  }
  else {
    local_8 = CONCAT44(local_8._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      local_8 = CONCAT44(local_8._4_4_,0x1f);
      piVar2 = (int *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        piVar2 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar2) {
        local_8 = CONCAT44(local_8._4_4_,0x20);
        puVar3 = PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8;
        if (0xff < uVar4) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8c104;
      }
    }
    puVar9 = (ulong *)(DAT_04da7238 + 0x651e0);
  }
  local_28 = *puVar9;
  if ((char)(local_28 >> 0x20) < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_8 = lVar6 + -0x15180;
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  }
  uVar7 = local_28 >> 0x10;
  uVar10 = local_28 >> 0x30;
  uVar8 = local_28 >> 0x18;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar10,(undefined6)local_28) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(param_1,uVar7,uVar8);
  return (int)cVar5;
}

