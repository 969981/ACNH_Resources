
int FUN_00a8d32c(long param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  long local_18;
  
  uVar1 = *(int *)(param_1 + 0x6539c) - 3;
  if (uVar1 < 3) {
    return (&DAT_04130ba0)[(int)uVar1];
  }
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  iVar3 = *(int *)(puVar8 + 7);
  if ((((iVar3 == -0x7975b8e8) || (iVar3 == -0x17df00c3)) || (iVar3 == -0x3e092032)) &&
     (uVar4 = FUN_03784bd0(), (uVar4 & 1) != 0)) {
    iVar3 = 0;
  }
  else {
    local_38 = *param_2;
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar5 = local_38 >> 0x10;
    uVar4 = local_38 >> 0x30;
    uVar6 = local_38 >> 0x18;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar4,(undefined6)local_38) & 0xff00ffffffffffff;
    cVar2 = FUN_00a8ae20(param_1,uVar5,uVar6,8);
    iVar3 = (uint)(cVar2 == '\x05') << 1;
    if (cVar2 == '\x04') {
      iVar3 = 1;
    }
  }
  return iVar3;
}

