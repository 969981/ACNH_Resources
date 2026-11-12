
void FUN_00a81c00(long param_1)

{
  CalendarTime *pCVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long local_18;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x18) =
       *(long *)(param_1 + 0x20) / 1000000000 + *(long *)(param_1 + 8) +
       *(long *)(param_1 + 0x28) / 1000000000;
  FUN_00a818cc(param_1,0);
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    pCVar1 = (CalendarTime *)(param_1 + 0x4068);
    if ((*(long **)(lVar3 + 0xe71b0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar3 + 0xe71b0), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xe7198) + *(long *)(lVar3 + 0xe7190));
    *(undefined8 *)pCVar1 = uVar6;
    uVar4 = (uint)uVar6 & 0xffff;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0xe71b0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0xe71b0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
      uVar4 = (uint)*(ushort *)pCVar1;
    }
    if (uVar4 == 0) {
      *(undefined8 *)(param_1 + 0x4068) = *(undefined8 *)(param_1 + 0x4060);
      if ((char)((ulong)*(undefined8 *)(param_1 + 0x4060) >> 0x20) < '\x05') {
        local_18 = nn::time::ToPosixTimeFromUtc(pCVar1);
        local_18 = local_18 + -0x15180;
        uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
        *(undefined8 *)pCVar1 = uVar6;
      }
      *(undefined1 *)(param_1 + 0x406e) = 0;
      *(undefined2 *)(param_1 + 0x406c) = 5;
    }
  }
  return;
}

