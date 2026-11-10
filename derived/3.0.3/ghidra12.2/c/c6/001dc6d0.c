
long * FUN_001dc6d0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1 + 1;
  plVar8 = plVar6;
  if (plVar6 != param_2) {
    uVar2 = FUN_001dc410(param_5,param_2 + 4);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_001dc410(param_2 + 4,param_5);
      if ((uVar2 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = param_2 + 1;
      plVar5 = (long *)*plVar3;
      if (plVar5 == (long *)0x0) {
        plVar4 = param_2;
        do {
          plVar7 = (long *)plVar4[2];
          bVar1 = (long *)*plVar7 != plVar4;
          plVar4 = plVar7;
        } while (bVar1);
      }
      else {
        plVar4 = plVar5;
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 == plVar6) {
LAB_001dc8a0:
        if (plVar5 == (long *)0x0) {
          *param_3 = (long)param_2;
          return plVar3;
        }
        *param_3 = (long)plVar7;
        return plVar7;
      }
      uVar2 = FUN_001dc410(param_5,plVar7 + 4);
      if ((uVar2 & 1) != 0) {
        plVar5 = (long *)*plVar3;
        goto LAB_001dc8a0;
      }
      plVar5 = (long *)*plVar6;
      if ((long *)*plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = plVar5;
            uVar2 = FUN_001dc410(param_5,plVar6 + 4);
            if ((uVar2 & 1) != 0) break;
            uVar2 = FUN_001dc410(plVar6 + 4,param_5);
            if ((uVar2 & 1) == 0) goto LAB_001dc910;
            plVar8 = plVar6 + 1;
            plVar5 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_001dc910;
          }
          plVar5 = (long *)*plVar6;
          plVar8 = plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      goto LAB_001dc910;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar5 = param_2;
  }
  else {
    plVar3 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      plVar3 = param_2;
      do {
        plVar5 = (long *)plVar3[2];
        bVar1 = (long *)*plVar5 == plVar3;
        plVar3 = plVar5;
      } while (bVar1);
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    uVar2 = FUN_001dc410(plVar5 + 4,param_5);
    if ((uVar2 & 1) == 0) {
      plVar5 = (long *)*plVar6;
      if ((long *)*plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = plVar5;
            uVar2 = FUN_001dc410(param_5,plVar6 + 4);
            if ((uVar2 & 1) != 0) break;
            uVar2 = FUN_001dc410(plVar6 + 4,param_5);
            if ((uVar2 & 1) == 0) goto LAB_001dc910;
            plVar8 = plVar6 + 1;
            plVar5 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_001dc910;
          }
          plVar5 = (long *)*plVar6;
          plVar8 = plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
LAB_001dc910:
      *param_3 = (long)plVar6;
      return plVar8;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar5;
  return plVar5 + 1;
}

