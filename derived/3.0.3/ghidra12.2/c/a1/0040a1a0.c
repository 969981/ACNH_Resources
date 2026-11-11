
long * FUN_0040a1a0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,char *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    cVar1 = *param_5;
    if ((char)param_2[4] <= cVar1) {
      if (cVar1 <= (char)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar5 = (long *)param_2[1];
      if (plVar5 == (long *)0x0) {
        plVar6 = param_2;
        do {
          plVar3 = (long *)plVar6[2];
          bVar2 = (long *)*plVar3 != plVar6;
          plVar6 = plVar3;
        } while (bVar2);
      }
      else {
        plVar6 = plVar5;
        do {
          plVar3 = plVar6;
          plVar6 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (cVar1 < (char)plVar3[4])) {
        if (plVar5 == (long *)0x0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar3;
        return plVar3;
      }
      plVar5 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar6 = plVar5, cVar1 < (char)plVar6[4]) {
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
          if ((long *)*plVar6 == (long *)0x0) goto LAB_0040a350;
        }
        if (cVar1 <= (char)plVar6[4]) break;
        plVar4 = plVar6 + 1;
        plVar5 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_0040a350:
      *param_3 = (long)plVar6;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  if ((long *)*param_1 == param_2) {
    plVar6 = param_2;
  }
  else {
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2;
      do {
        plVar6 = (long *)plVar3[2];
        bVar2 = (long *)*plVar6 == plVar3;
        plVar3 = plVar6;
      } while (bVar2);
    }
    else {
      plVar3 = plVar5;
      do {
        plVar6 = plVar3;
        plVar3 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
    cVar1 = *param_5;
    if (cVar1 <= (char)plVar6[4]) {
      plVar5 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar6 = plVar5, cVar1 < (char)plVar6[4]) {
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
          if ((long *)*plVar6 == (long *)0x0) goto LAB_0040a2a0;
        }
        if (cVar1 <= (char)plVar6[4]) break;
        plVar4 = plVar6 + 1;
        plVar5 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_0040a2a0:
      *param_3 = (long)plVar6;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar6;
  return plVar6 + 1;
}

