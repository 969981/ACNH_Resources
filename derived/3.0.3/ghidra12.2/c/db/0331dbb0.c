
void FUN_0331dbb0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (((*(long *)(param_1 + 0x338) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x338) + 0x428), lVar3 != 0)) &&
     (plVar2 = (long *)(lVar3 + 8), *plVar2 == 0)) {
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)plVar2;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar2;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *plVar2 = (long)plVar4;
  }
  if (((*(long *)(param_1 + 0x340) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x340) + 0x428), lVar3 != 0)) &&
     (plVar2 = (long *)(lVar3 + 8), *plVar2 == 0)) {
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)plVar2;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar2;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *plVar2 = (long)plVar4;
  }
  if (((*(long *)(param_1 + 0x348) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x348) + 0x428), lVar3 != 0)) &&
     (plVar2 = (long *)(lVar3 + 8), *plVar2 == 0)) {
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)plVar2;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar2;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *plVar2 = (long)plVar4;
  }
  if (((*(long *)(param_1 + 0x350) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x350) + 0x428), lVar3 != 0)) &&
     (plVar2 = (long *)(lVar3 + 8), *plVar2 == 0)) {
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)plVar2;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar2;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *plVar2 = (long)plVar4;
  }
  if (((*(long *)(param_1 + 0x360) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x360) + 0x428), lVar3 != 0)) &&
     (plVar2 = (long *)(lVar3 + 8), *plVar2 == 0)) {
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)plVar2;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar2;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *plVar2 = (long)plVar4;
  }
  if (((*(long *)(param_1 + 0x300) == 0) ||
      (lVar3 = *(long *)(*(long *)(param_1 + 0x300) + 0x428), lVar3 == 0)) ||
     (plVar2 = (long *)(lVar3 + 8), *plVar2 != 0)) {
    return;
  }
  plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x390) + 0x18) + 0x58);
  plVar4 = (long *)*plVar5;
  if ((long *)*plVar5 == (long *)0x0) {
    *plVar5 = (long)plVar2;
    *plVar2 = (long)plVar5;
    return;
  }
  do {
    plVar5 = plVar4;
    plVar4 = (long *)plVar5[2];
  } while ((long *)plVar5[2] != (long *)0x0);
  plVar5[2] = (long)plVar2;
  *(long **)(lVar3 + 0x10) = plVar5;
  *plVar2 = *plVar5;
  return;
}

