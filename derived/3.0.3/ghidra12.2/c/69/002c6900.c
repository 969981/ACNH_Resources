
void FUN_002c6900(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x188) != 0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x188) + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x188,puVar2 + -2);
      FUN_002236e0(param_1 + 0x1a0,param_1 + 0x1a0,
                   (long)(puVar2 + -2) + (long)*(int *)(param_1 + 0x1b4));
    } while (*(int *)(param_1 + 0x198) != 0);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x1d8) != 0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x1d8,puVar2 + -2);
      FUN_002236e0(param_1 + 0x1f0,param_1 + 0x1f0,
                   (long)(puVar2 + -2) + (long)*(int *)(param_1 + 0x204));
    } while (*(int *)(param_1 + 0x1e8) != 0);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x228) != 0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x228) + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x228,puVar2 + -2);
      FUN_002236e0(param_1 + 0x240,param_1 + 0x240,
                   (long)(puVar2 + -2) + (long)*(int *)(param_1 + 0x254));
    } while (*(int *)(param_1 + 0x238) != 0);
  }
  if (*(int *)(param_1 + 0x288) != 0) {
    do {
      lVar3 = 0;
      if (*(long *)(param_1 + 0x278) != 0) {
        lVar3 = *(long *)(param_1 + 0x278) + 0x10;
      }
      FUN_002b4104();
      FUN_00223704(param_1 + 0x278,lVar3 + -0x10);
      FUN_002236e0(param_1 + 0x290,param_1 + 0x290,lVar3 + -0x10 + (long)*(int *)(param_1 + 0x2a4));
    } while (*(int *)(param_1 + 0x288) != 0);
  }
  piVar1 = (int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x150) == 1) {
    if ((*(long *)(param_1 + 0x1868) != 0) && (lVar3 = FUN_002c3abc(), lVar3 != 0)) {
      plVar4 = (long *)FUN_002c3abc(*(undefined8 *)(param_1 + 0x1868));
      (**(code **)(*plVar4 + 0x58))();
    }
    if (*piVar1 == 1) {
      FUN_00221064(piVar1);
    }
  }
  FUN_00220f24(piVar1);
  *(undefined4 *)(param_1 + 0x17d0) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined4 *)(param_1 + 0x17c8) = 0;
  *(undefined1 *)(param_1 + 0x17cc) = 0;
  *(undefined1 *)(param_1 + 0x1858) = 0;
  return;
}

