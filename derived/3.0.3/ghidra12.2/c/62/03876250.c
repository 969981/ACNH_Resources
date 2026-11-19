
void FUN_03876250(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar6 = (long *)*plVar2;
    if (plVar6 == plVar3) {
      if ((plVar2[1] == 0) || (plVar6 = (long *)(plVar2[1] + 0x18), *(char *)plVar6 != '\0')) {
        if ((long *)*plVar3 != param_2) {
          plVar6 = (long *)plVar3[1];
          lVar4 = *plVar6;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar6[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar6;
          *plVar6 = (long)plVar3;
          plVar3[2] = (long)plVar6;
          plVar2 = (long *)plVar6[2];
          plVar3 = plVar6;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar4 = *plVar2;
        lVar5 = *(long *)(lVar4 + 8);
        *plVar2 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar2;
        }
        *(long *)(lVar4 + 0x10) = plVar2[2];
        ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = lVar4;
        *(long **)(lVar4 + 8) = plVar2;
        plVar2[2] = lVar4;
        return;
      }
    }
    else if ((plVar6 == (long *)0x0) || (plVar6 = plVar6 + 3, (char)*plVar6 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
      }
      else {
        param_2 = plVar3;
      }
      *(undefined1 *)(param_2 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar3[2] = plVar2[2];
      ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      plVar2[2] = (long)plVar3;
      return;
    }
    bVar1 = plVar2 == param_1;
    *(undefined1 *)(plVar3 + 3) = 1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar6 = '\x01';
    param_2 = plVar2;
  } while( true );
}

