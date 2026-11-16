
void FUN_028aadf8(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar8 = 0;
      if (lVar6 != 0) {
        lVar8 = lVar6 + 0x70;
      }
      goto LAB_028aae78;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_028aae78;
    }
  }
  lVar8 = 0;
LAB_028aae78:
  if ((*(long **)(lVar8 + 0x1a0b70) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1a0b70), puVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar9)();
    uVar5 = uVar5 ^ 1;
  }
  uVar1 = *(uint *)(*(long *)(lVar8 + 0x1a0b58) + *(long *)(lVar8 + 0x1a0b50));
  if (3 < uVar1) {
    uVar1 = 0;
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar1);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x1a0b70) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1a0b70) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb2020;
  if (2 < (int)uVar1) {
    puVar10 = (ulong *)(param_2 + 0x10);
    local_58 = *puVar10;
    uVar11 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestFestival";
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_80 = (undefined *)(lVar8 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar4 = local_58;
    uVar7 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar7,(undefined6)local_58) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar11,&local_70,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
    if ((uVar7 & 1) == 0) {
      local_60 = *puVar10;
      local_80 = puVar2 + 0x10;
      pcStack_78 = "HarvestFestival";
      if ((char)(local_60 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_58 = lVar8 - 0x15180;
        local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar7 = local_60;
      local_60._7_1_ = SUB81(uVar7,7);
      local_60._0_7_ = (uint7)CONCAT24(5,(undefined4)local_60);
      uVar7 = FUN_0087a8f0(uVar11,&local_80,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
      if (((uVar7 & 1) == 0) &&
         (uVar7 = FUN_0087cc70(*(undefined8 *)puVar3,puVar10,1,1), (uVar7 & 1) != 0)) {
        FUN_028aa290(param_1,param_2,0x122);
      }
    }
  }
  return;
}

