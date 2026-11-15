
void FUN_022050a0(undefined8 param_1)

{
  undefined1 auVar1 [8];
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_40;
  char *pcStack_38;
  undefined1 local_18 [8];
  
  if (DAT_05574040 != 0) {
    if (((*(long *)(DAT_05574040 + 0x4c0) != 0) &&
        (plVar3 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar3 != (long *)0x0)) &&
       (lVar4 = (**(code **)(*plVar3 + 0x38))(), lVar4 != 0)) {
      if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      lVar7 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
      uVar6 = nn::time::IsValidDate
                        ((uint)*(ushort *)(lVar7 + 0x74072),(uint)*(byte *)(lVar7 + 0x74074),
                         (uint)*(byte *)(lVar7 + 0x74075));
      if ((uVar6 & 1) != 0) {
        FUN_0272eca4(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x74072,1);
        local_18 = *(undefined1 (*) [8])(DAT_04da6480 + 0x4060);
        if ((char)((ulong)local_18 >> 0x20) < '\x05') {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_18);
          local_40 = (undefined **)(lVar7 + -0x15180);
          local_18 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
        }
        auVar1 = local_18;
        local_18._4_2_ = 5;
        local_18[7] = auVar1[7];
        local_18[6] = 0;
        local_40 = &PTR_LAB_048f9770;
        pcStack_38 = "JuneBridePlacementDataClearFlag";
        FUN_0274d104(param_1,&local_40,1);
        FUN_02203a60(param_1);
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

