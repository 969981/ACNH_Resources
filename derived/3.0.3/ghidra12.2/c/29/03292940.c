
void FUN_03292940(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar1 = param_1 + 0x2b;
  puVar6 = (undefined8 *)param_1[0x2b];
  while (puVar6 != (undefined8 *)0x0) {
    puVar4 = puVar6;
    do {
      puVar4 = (undefined8 *)puVar4[2];
    } while (puVar4 != (undefined8 *)0x0);
    lVar2 = puVar6[1];
    lVar3 = puVar6[2];
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    if ((undefined8 *)*plVar1 == puVar6) {
      *plVar1 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    if ((long *)puVar6[0x14] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[0x14] + 8))();
    }
    if ((long *)puVar6[0xe] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[0xe] + 8))();
    }
    if ((long *)puVar6[8] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[8] + 8))();
    }
    plVar5 = (long *)*puVar6;
    if (plVar5 != (long *)0x0) {
      lVar2 = puVar6[1];
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar5 == puVar6) {
        *plVar5 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(puVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,puVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar6);
      }
    }
    puVar6 = (undefined8 *)*plVar1;
  }
  puVar6 = (undefined8 *)param_1[0x2c];
  while (puVar6 != (undefined8 *)0x0) {
    puVar4 = puVar6;
    do {
      puVar4 = (undefined8 *)puVar4[2];
    } while (puVar4 != (undefined8 *)0x0);
    lVar2 = puVar6[1];
    lVar3 = puVar6[2];
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    if ((undefined8 *)param_1[0x2c] == puVar6) {
      param_1[0x2c] = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    if ((long *)puVar6[10] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[10] + 8))();
    }
    plVar5 = (long *)*puVar6;
    puVar6[6] = 0;
    if (plVar5 != (long *)0x0) {
      lVar2 = puVar6[1];
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar5 == puVar6) {
        *plVar5 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(puVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,puVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar6);
      }
    }
    puVar6 = (undefined8 *)param_1[0x2c];
  }
  *plVar1 = 0;
  param_1[0x2c] = 0;
  *param_1 = &PTR_LAB_04b1a0b8;
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
  }
  if ((long *)param_1[0x1a] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03292b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x1a] + 8))();
  return;
}

