
void FUN_01b35e10(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 local_38;
  
  if ((1 < (int)param_1[2]) && (*(long **)(param_1[1] + 8) != param_1)) {
    lVar7 = -(long)*(int *)((long)param_1 + 0x14);
    plVar6 = *(long **)(param_1[1] + 8);
    do {
      plVar8 = (long *)*plVar6;
      plVar1 = (long *)plVar6[1];
      lVar4 = (long)plVar6 + lVar7 + 0xc;
      local_38 = FUN_0272eca4(lVar4,1);
      local_58 = FUN_0272eca4((long)plVar8 + lVar7 + 0xc,1);
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      if ((lVar2 <= lVar3) &&
         (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58), lVar3 != lVar2)) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == param_1) {
            lVar4 = *plVar6;
            plVar8 = param_1;
            if (lVar4 == 0) goto LAB_01b35f3c;
            goto LAB_01b35f34;
          }
          local_38 = FUN_0272eca4(lVar4,1);
          local_58 = FUN_0272eca4((long)plVar8 + lVar7 + 0xc,1);
          lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        } while ((lVar2 <= lVar3) &&
                (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58), lVar3 != lVar2));
        lVar4 = *plVar6;
        if (lVar4 != 0) {
LAB_01b35f34:
          *(long *)(lVar4 + 8) = plVar6[1];
        }
LAB_01b35f3c:
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        puVar5 = (undefined8 *)plVar8[1];
        plVar8[1] = (long)plVar6;
        *plVar6 = (long)plVar8;
        plVar6[1] = (long)puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = plVar6;
        }
      }
      plVar6 = plVar1;
    } while (plVar1 != param_1);
  }
  return;
}

