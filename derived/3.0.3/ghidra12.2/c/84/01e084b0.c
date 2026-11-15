
void FUN_01e084b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x2c0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x38))();
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[0x32b6] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x38))();
      puVar3[0x32b6] = 0;
    }
    if (puVar3[0x32b8] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x38))();
      puVar3[0x32b8] = 0;
    }
    if (puVar3[0x32ba] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x38))();
      puVar3[0x32ba] = 0;
    }
    if (puVar3[0x32bc] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x38))();
      puVar3[0x32bc] = 0;
    }
    if (DAT_05ae7600 == 0) {
      free(puVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,puVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar3);
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  puVar3 = DAT_0536bac8;
  puVar4 = *(undefined8 **)(param_1 + 0x608);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)DAT_0536bac8[2];
    if (plVar2 != DAT_0536bac8 + 1) {
      plVar1 = (long *)((long)puVar4 + (long)*(int *)((long)DAT_0536bac8 + 0x1c));
      do {
        if (plVar2 == plVar1) {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + -1;
          if (*(char *)(puVar4 + 2) == '\0') {
            (**(code **)(*(long *)*puVar3 + 0x38))((long *)*puVar3,*puVar4);
          }
          (**(code **)(*(long *)*puVar3 + 0x38))((long *)*puVar3,puVar4);
          break;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != DAT_0536bac8 + 1);
    }
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x38))();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  if (*(long **)(param_1 + 0x678) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x678) + 8))();
    *(undefined8 *)(param_1 + 0x678) = 0;
  }
  if (*(long **)(param_1 + 0x680) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x680) + 8))();
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
  if (*(long **)(param_1 + 0x688) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x688) + 8))();
    *(undefined8 *)(param_1 + 0x688) = 0;
  }
  if (*(long **)(param_1 + 0x690) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x690) + 8))();
    *(undefined8 *)(param_1 + 0x690) = 0;
  }
  if (*(long **)(param_1 + 0x698) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x698) + 8))();
    *(undefined8 *)(param_1 + 0x698) = 0;
  }
  if (*(long **)(param_1 + 0x6a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6a0) + 8))();
    *(undefined8 *)(param_1 + 0x6a0) = 0;
  }
  return;
}

