
void FUN_03293ed0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x158);
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = puVar5;
    do {
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
    lVar1 = puVar5[1];
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    if (*(undefined8 **)(param_1 + 0x158) == puVar5) {
      *(long *)(param_1 + 0x158) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
    if ((long *)puVar5[0x14] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[0x14] + 8))();
    }
    if ((long *)puVar5[0xe] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[0xe] + 8))();
    }
    if ((long *)puVar5[8] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[8] + 8))();
    }
    plVar4 = (long *)*puVar5;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x158);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x160);
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = puVar5;
    do {
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
    lVar1 = puVar5[1];
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    if (*(undefined8 **)(param_1 + 0x160) == puVar5) {
      *(long *)(param_1 + 0x160) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
    if ((long *)puVar5[10] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[10] + 8))();
    }
    plVar4 = (long *)*puVar5;
    puVar5[6] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = puVar5[1];
      lVar2 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}

