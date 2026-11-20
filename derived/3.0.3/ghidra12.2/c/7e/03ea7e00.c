
void FUN_03ea7e00(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_60;
  undefined4 local_58;
  
  if (*(char *)(param_1 + 0xb9) != '\0' || *(char *)(param_1 + 0xba) != '\0') {
    plVar1 = *(long **)(param_1 + 0xf0);
    local_60 = PTR_DAT_04bc0cb8 + 0x10;
    local_58 = 0x28;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_60);
    (**(code **)(plVar1[3] + 0x2a0))(param_1 + 0xbc,plVar1[1]);
    if (*(long *)(param_1 + 0x60) != param_1 + 0x58) {
      lVar2 = (long)*(int *)(param_1 + 0x6c);
      plVar1 = (long *)(*(long *)(param_1 + 0x60) - lVar2);
      do {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
      } while (plVar1 != (long *)((param_1 + 0x58) - lVar2));
    }
    lVar2 = param_1 + 0x88;
    if (*(long *)(param_1 + 0x90) != lVar2) {
      lVar3 = (long)*(int *)(param_1 + 0x9c);
      plVar1 = (long *)(*(long *)(param_1 + 0x90) - lVar3);
      do {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        plVar1 = (long *)(*(long *)((long)plVar1 + lVar3 + 8) - lVar3);
      } while (plVar1 != (long *)(lVar2 - lVar3));
    }
    lVar3 = param_1 + 0x70;
    if (*(long *)(param_1 + 0x78) != lVar3) {
      lVar5 = (long)*(int *)(param_1 + 0x84);
      plVar1 = (long *)(*(long *)(param_1 + 0x78) - lVar5);
      do {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        plVar1 = (long *)(*(long *)((long)plVar1 + lVar5 + 8) - lVar5);
      } while (plVar1 != (long *)(lVar3 - lVar5));
    }
    lVar5 = param_1 + 0x10;
    if (*(long *)(param_1 + 0x18) != lVar5) {
      lVar6 = (long)*(int *)(param_1 + 0x24);
      lVar4 = *(long *)(param_1 + 0x18) - lVar6;
      do {
        FUN_03ea6e30(lVar4,lVar2);
        FUN_03ea7220(lVar4,lVar3);
        lVar4 = *(long *)(lVar4 + lVar6 + 8) - lVar6;
      } while (lVar4 != lVar5 - lVar6);
    }
    while (*(int *)(param_1 + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) < 1) {
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = *(long **)(param_1 + 0x48);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      }
      lVar2 = 0;
      if (plVar1 != (long *)0x0) {
        lVar2 = (long)plVar1 - (long)*(int *)(param_1 + 0x54);
      }
      FUN_03ea7780(lVar2);
    }
    if (*(long *)(param_1 + 0x18) != lVar5) {
      lVar3 = (long)*(int *)(param_1 + 0x24);
      lVar2 = *(long *)(param_1 + 0x18) - lVar3;
      do {
        FUN_03ea7430(lVar2);
        lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
      } while (lVar2 != lVar5 - lVar3);
    }
  }
  return;
}

