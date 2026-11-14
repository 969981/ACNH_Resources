
void FUN_01b35fa0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_58;
  undefined8 local_38;
  
  if (1 < *(int *)(param_1 + 0x28)) {
    plVar1 = (long *)(param_1 + 0x18);
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    if (plVar7 != plVar1) {
      lVar8 = -(long)*(int *)(param_1 + 0x2c);
      do {
        plVar9 = (long *)*plVar7;
        plVar2 = (long *)plVar7[1];
        lVar5 = (long)plVar7 + lVar8 + 0xc;
        local_38 = FUN_0272eca4(lVar5,1);
        local_58 = FUN_0272eca4((long)plVar9 + lVar8 + 0xc,1);
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        if ((lVar3 <= lVar4) &&
           (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58), lVar4 != lVar3)) {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == plVar1) {
              lVar5 = *plVar7;
              plVar9 = plVar1;
              if (lVar5 == 0) goto LAB_01b360cc;
              goto LAB_01b360c4;
            }
            local_38 = FUN_0272eca4(lVar5,1);
            local_58 = FUN_0272eca4((long)plVar9 + lVar8 + 0xc,1);
            lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
            lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
          } while ((lVar3 <= lVar4) &&
                  (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58), lVar4 != lVar3))
          ;
          lVar5 = *plVar7;
          if (lVar5 != 0) {
LAB_01b360c4:
            *(long *)(lVar5 + 8) = plVar7[1];
          }
LAB_01b360cc:
          if ((long *)plVar7[1] != (long *)0x0) {
            *(long *)plVar7[1] = *plVar7;
          }
          *plVar7 = 0;
          plVar7[1] = 0;
          puVar6 = (undefined8 *)plVar9[1];
          plVar9[1] = (long)plVar7;
          *plVar7 = (long)plVar9;
          plVar7[1] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = plVar7;
          }
        }
        plVar7 = plVar2;
      } while (plVar2 != plVar1);
    }
  }
  return;
}

