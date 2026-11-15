
/* WARNING: Removing unreachable block (ram,0x021a6ba8) */

uint FUN_021a6a60(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  byte local_54 [4];
  undefined1 local_50 [7];
  undefined1 uStack_49;
  long local_48;
  
  if ((*param_2 < 8) && (uVar5 = FUN_02b5f280(param_2), (uVar5 & 1) != 0)) {
    lVar8 = *(long *)PTR_DAT_04bb32f0;
    local_54[0] = *param_2;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    lVar6 = FUN_025830c0(DAT_055021a0,local_54,1);
    uVar4 = 0;
    if ((lVar8 != 0) && (lVar6 != 0)) {
      if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar7)();
        uVar3 = uVar3 ^ 1;
      }
      local_60 = *(undefined8 *)(DAT_04da6480 + 0x4060);
      if ((char)(local_60 >> 0x20) < '\x05') {
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_48 = local_48 + -0x15180;
        local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      uVar2 = local_60;
      uVar4 = 0;
      uVar1 = (uint)local_60;
      local_60._7_1_ = SUB81(uVar2,7);
      local_60._0_7_ = (uint7)CONCAT24(5,(uint)local_60);
      if ((uint)*(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x36908) !=
          (uVar1 & 0xffff)) {
        _local_50 = CONCAT17(local_60._7_1_,CONCAT16(0,CONCAT24(5,uVar1)));
        uVar5 = FUN_00872588(uVar2,local_60,local_60 >> 0x10,local_60 >> 0x18);
        uVar4 = 0;
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_021a6c1c(param_1,param_2);
        }
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}

