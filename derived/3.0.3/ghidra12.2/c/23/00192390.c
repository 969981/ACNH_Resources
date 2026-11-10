
void FUN_00192390(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_001923b0:
    plVar5 = (long *)plVar7[1];
    if (plVar5 != (long *)0x0) goto LAB_001923f0;
    bVar2 = true;
    puVar9 = (undefined8 *)plVar7[2];
    plVar4 = (long *)*puVar9;
    if (plVar4 == plVar7) goto LAB_001923cc;
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_001923b0;
    }
LAB_001923f0:
    bVar2 = false;
    plVar5[2] = plVar7[2];
    puVar9 = (undefined8 *)plVar7[2];
    plVar4 = (long *)*puVar9;
    if (plVar4 == plVar7) {
LAB_001923cc:
      *puVar9 = plVar5;
      if (plVar7 == param_1) {
        plVar4 = (long *)0x0;
        cVar3 = (char)plVar7[3];
        param_1 = plVar5;
      }
      else {
        plVar4 = (long *)puVar9[1];
        cVar3 = (char)plVar7[3];
      }
      goto joined_r0x00192418;
    }
  }
  puVar9[1] = plVar5;
  cVar3 = (char)plVar7[3];
joined_r0x00192418:
  if (plVar7 != param_2) {
    lVar6 = param_2[2];
    plVar7[2] = lVar6;
    *(long **)(lVar6 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar7;
    lVar6 = *param_2;
    lVar8 = param_2[1];
    *(long **)(lVar6 + 0x10) = plVar7;
    *plVar7 = lVar6;
    plVar7[1] = lVar8;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x10) = plVar7;
    }
    plVar1 = plVar7;
    if (param_1 != param_2) {
      plVar1 = param_1;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
    param_1 = plVar1;
  }
  if ((cVar3 != '\0') && (param_1 != (long *)0x0)) {
    if (bVar2) {
      while( true ) {
        plVar5 = (long *)plVar4[2];
        if ((long *)*plVar5 != plVar4) break;
        if ((char)plVar4[3] == '\0') {
          lVar6 = plVar4[1];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          *plVar5 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar5;
          }
          plVar4[2] = plVar5[2];
          ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = plVar4;
          plVar4[1] = (long)plVar5;
          plVar5[2] = (long)plVar4;
          plVar7 = plVar4;
          if (param_1 != plVar5) {
            plVar7 = param_1;
          }
          plVar4 = (long *)*plVar5;
          plVar5 = (long *)*plVar4;
          param_1 = plVar7;
          if (plVar5 == (long *)0x0) goto LAB_001925a4;
LAB_0019259c:
          param_1 = plVar7;
          if ((char)plVar5[3] != '\0') goto LAB_001925a4;
LAB_001926b4:
          plVar7 = plVar4;
LAB_001926b8:
          plVar4 = (long *)plVar7[2];
          *(char *)(plVar7 + 3) = (char)plVar4[3];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 1;
          lVar6 = *plVar4;
          lVar8 = *(long *)(lVar6 + 8);
          *plVar4 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar4;
          }
          *(long *)(lVar6 + 0x10) = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = lVar6;
          *(long **)(lVar6 + 8) = plVar4;
          plVar4[2] = lVar6;
          return;
        }
        plVar5 = (long *)*plVar4;
        plVar7 = param_1;
        if (plVar5 != (long *)0x0) goto LAB_0019259c;
LAB_001925a4:
        plVar7 = (long *)plVar4[1];
        if ((plVar7 != (long *)0x0) && ((char)plVar7[3] == '\0')) {
          if (plVar5 != (long *)0x0) {
            if ((char)plVar5[3] == '\0') goto LAB_001926b4;
            plVar7 = (long *)plVar4[1];
          }
          *(undefined1 *)(plVar7 + 3) = 1;
          lVar6 = *plVar7;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar4[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          plVar7[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar7;
          *plVar7 = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar5 = plVar4;
          goto LAB_001926b8;
        }
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (long *)plVar4[2];
        if (((char)plVar5[3] == '\0') || (plVar5 == param_1)) {
LAB_001925f8:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
LAB_00192470:
        plVar4 = (long *)((undefined8 *)plVar5[2])[*(long **)plVar5[2] == plVar5];
      }
      if ((char)plVar4[3] == '\0') {
        plVar7 = (long *)plVar5[1];
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        lVar6 = *plVar7;
        plVar5[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar5;
        }
        plVar7[2] = plVar5[2];
        ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = plVar7;
        *plVar7 = (long)plVar5;
        plVar5[2] = (long)plVar7;
        plVar5 = plVar4;
        if (param_1 != (long *)*plVar4) {
          plVar5 = param_1;
        }
        plVar4 = (long *)((long *)*plVar4)[1];
        plVar7 = (long *)*plVar4;
        param_1 = plVar5;
        if (plVar7 != (long *)0x0) goto LAB_00192518;
LAB_00192520:
        plVar5 = (long *)plVar4[1];
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] != '\0')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = (long *)plVar4[2];
          if (plVar5 == param_1) {
            plVar5 = param_1;
          }
          else if ((char)plVar5[3] != '\0') goto LAB_00192470;
          goto LAB_001925f8;
        }
LAB_0019260c:
        if ((char)plVar5[3] == '\0') {
          plVar7 = plVar4;
          goto LAB_00192710;
        }
      }
      else {
        plVar7 = (long *)*plVar4;
        plVar5 = param_1;
        if (plVar7 == (long *)0x0) goto LAB_00192520;
LAB_00192518:
        param_1 = plVar5;
        if ((char)plVar7[3] != '\0') goto LAB_00192520;
        plVar5 = (long *)plVar4[1];
        if (plVar5 != (long *)0x0) goto LAB_0019260c;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      lVar6 = plVar7[1];
      *(undefined1 *)(plVar4 + 3) = 0;
      *plVar4 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar4;
      }
      plVar7[2] = plVar4[2];
      ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar7;
      plVar7[1] = (long)plVar4;
      plVar4[2] = (long)plVar7;
      plVar5 = plVar4;
LAB_00192710:
      lVar6 = plVar7[2];
      *(undefined1 *)(plVar7 + 3) = *(undefined1 *)(lVar6 + 0x18);
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar5 = *(long **)(lVar6 + 8);
      lVar8 = *plVar5;
      *(long *)(lVar6 + 8) = lVar8;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x10) = lVar6;
      }
      plVar5[2] = *(long *)(lVar6 + 0x10);
      (*(long **)(lVar6 + 0x10))[**(long **)(lVar6 + 0x10) != lVar6] = (long)plVar5;
      *plVar5 = lVar6;
      *(long **)(lVar6 + 0x10) = plVar5;
      return;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}

