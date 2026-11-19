
void FUN_03bebf70(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + 0x3c))) {
    uVar8 = 0;
    plVar1 = (long *)(param_3 + 8);
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x40) + uVar8 * 8);
      if (lVar9 != 0) {
        plVar6 = (long *)(lVar9 + 8);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar7 = *(long *)(lVar9 + 0x10);
        (**(code **)(*(long *)(param_3 + 8) + 0x18))(plVar1);
        lVar4 = *(long *)(param_3 + 0x10);
        if (lVar7 == lVar4) {
LAB_03bec090:
                    /* WARNING: Could not recover jumptable at 0x03bec0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x18))(plVar1);
          return;
        }
        uVar5 = 0;
        bVar3 = true;
        lVar9 = *(long *)(lVar9 + 0x10) + 2;
        do {
          lVar7 = lVar9 + uVar5;
          cVar2 = *(char *)(lVar7 + -2);
          if (cVar2 != *(char *)(lVar4 + uVar5)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_03bec090;
            break;
          }
          cVar2 = *(char *)(lVar7 + -1);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 1)) break;
          if (cVar2 == '\0') goto LAB_03bec090;
          cVar2 = *(char *)(lVar9 + uVar5);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 2)) break;
          if (cVar2 == '\0') goto LAB_03bec090;
          bVar3 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x3c));
    *(long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 8) = param_3;
    if ((*(uint *)(param_3 + 0x60) < 2) || (*(uint *)(param_3 + 0x60) == 2)) {
      *(undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)param_2 * 4) = 0;
    }
  }
  return;
}

