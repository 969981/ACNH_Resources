
/* WARNING: Type propagation algorithm not settling */

void FUN_001982c0(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = (long *)(param_1 + 0x50);
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2;
    plVar9 = plVar3;
    do {
      plVar8 = plVar4;
      if (*(uint *)(plVar4 + 4) < param_2) {
        plVar8 = plVar9;
        plVar4 = plVar4 + 1;
      }
      plVar4 = (long *)*plVar4;
      plVar9 = plVar8;
    } while (plVar4 != (long *)0x0);
    if ((plVar8 != plVar3) && (*(uint *)(plVar8 + 4) <= param_2)) goto LAB_00198324;
  }
  plVar8 = plVar3;
LAB_00198324:
  plVar3 = (long *)plVar8[1];
  if ((long *)plVar8[1] == (long *)0x0) {
    plVar3 = plVar8;
    do {
      plVar4 = (long *)plVar3[2];
      bVar1 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar1);
  }
  else {
    do {
      plVar4 = plVar3;
      plVar3 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if (*(long **)(param_1 + 0x48) == plVar8) {
    *(long **)(param_1 + 0x48) = plVar4;
  }
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
  FUN_00192390(plVar2,plVar8);
  FUN_00187e4c(plVar8);
  plVar2 = (long *)(param_1 + 0x68);
  plVar3 = (long *)*plVar2;
  while( true ) {
    while( true ) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      if (*(uint *)((long)plVar3 + 0x1c) <= param_2) break;
      plVar2 = plVar3;
      plVar3 = (long *)*plVar3;
    }
    if (param_2 <= *(uint *)((long)plVar3 + 0x1c)) break;
    plVar3 = (long *)plVar3[1];
  }
  puVar5 = (undefined8 *)*plVar3;
  plVar4 = plVar3;
  if (puVar5 != (undefined8 *)0x0) {
    plVar9 = plVar3;
    do {
      plVar4 = puVar5;
      if (*(uint *)((long)puVar5 + 0x1c) < param_2) {
        plVar4 = plVar9;
        puVar5 = puVar5 + 1;
      }
      puVar5 = (undefined8 *)*puVar5;
      plVar9 = plVar4;
    } while (puVar5 != (undefined8 *)0x0);
  }
  for (plVar3 = (long *)plVar3[1]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar9 = plVar3;
    if (*(uint *)((long)plVar3 + 0x1c) <= param_2) {
      plVar9 = plVar2;
      plVar3 = plVar3 + 1;
    }
    plVar2 = plVar9;
  }
  while (plVar4 != plVar2) {
    puVar5 = (undefined8 *)plVar4[1];
    puVar6 = plVar4;
    if ((undefined8 *)plVar4[1] == (undefined8 *)0x0) {
      do {
        puVar7 = (undefined8 *)puVar6[2];
        bVar1 = (undefined8 *)*puVar7 != puVar6;
        puVar6 = puVar7;
      } while (bVar1);
    }
    else {
      do {
        puVar7 = puVar5;
        puVar5 = (undefined8 *)*puVar7;
      } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x60) == plVar4) {
      *(undefined8 **)(param_1 + 0x60) = puVar7;
    }
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    FUN_00192390(*(undefined8 *)(param_1 + 0x68),plVar4);
    FUN_00187e4c(plVar4);
    plVar4 = puVar7;
  }
  return;
}

