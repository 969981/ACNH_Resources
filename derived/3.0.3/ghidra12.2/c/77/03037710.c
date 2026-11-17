
void FUN_03037710(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (1 < *(int *)(param_1 + 0x220)) {
    lVar4 = *(long *)(param_1 + 0x228);
    uVar6 = 0;
    uVar9 = *(int *)(param_1 + 0x220) - 1;
    do {
      if ((int)uVar9 <= (int)uVar6) {
        return;
      }
      uVar5 = (ulong)uVar6;
      uVar7 = (ulong)uVar9;
      uVar8 = uVar5;
      uVar9 = uVar6;
      do {
        plVar1 = (long *)(lVar4 + uVar8 * 8);
        uStack_58 = *(undefined8 *)(*plVar1 + 0x70);
        local_60 = *(undefined8 *)(plVar1[1] + 0x70);
        lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&uStack_58);
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        if ((lVar2 <= lVar3) &&
           (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60), lVar3 != lVar2)) {
          lVar2 = plVar1[1];
          uVar9 = (uint)uVar8;
          plVar1[1] = *(long *)(lVar4 + uVar8 * 8);
          *(long *)(lVar4 + uVar8 * 8) = lVar2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
      if ((int)uVar9 <= (int)uVar6) {
        return;
      }
      uVar8 = (ulong)uVar9;
      uVar6 = uVar9;
      do {
        plVar1 = (long *)(lVar4 + uVar8 * 8);
        uStack_58 = *(undefined8 *)(*plVar1 + 0x70);
        local_60 = *(undefined8 *)(plVar1[-1] + 0x70);
        lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&uStack_58);
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        if (lVar3 < lVar2) {
          lVar2 = plVar1[-1];
          uVar6 = (uint)uVar8;
          plVar1[-1] = *(long *)(lVar4 + uVar8 * 8);
          *(long *)(lVar4 + uVar8 * 8) = lVar2;
        }
        else {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        }
        uVar8 = uVar8 - 1;
      } while ((long)uVar5 < (long)uVar8);
    } while (uVar6 != uVar9);
  }
  return;
}

