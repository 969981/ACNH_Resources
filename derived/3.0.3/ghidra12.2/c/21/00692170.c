
uint FUN_00692170(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  if ((undefined8 *)param_2[1] == param_1) {
    param_2[3] = param_3;
    *(undefined1 *)(param_2 + 5) = 1;
    puVar4 = (undefined8 *)param_2[2];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
  }
  if (puVar4 == param_1) {
    param_2[4] = param_3;
    *(undefined1 *)((long)param_2 + 0x29) = 1;
    cVar1 = *(char *)(param_2 + 5);
  }
  else {
    cVar1 = *(char *)(param_2 + 5);
  }
  if ((cVar1 == '\0') || (*(char *)((long)param_2 + 0x29) == '\0')) {
    plVar5 = (long *)*param_1;
    lVar3 = *plVar5;
    if (lVar3 == 0) {
      return 0;
    }
    lVar6 = 0;
    do {
      uVar2 = FUN_00692170(lVar3,param_2,*(long *)((long)plVar5 + lVar6 + 8) + param_3);
      if ((uVar2 & 1) != 0) break;
      plVar5 = (long *)*param_1;
      lVar3 = *(long *)((long)plVar5 + lVar6 + 0x10);
      lVar6 = lVar6 + 0x10;
    } while (lVar3 != 0);
  }
  else {
    *(undefined8 *)*param_2 = param_2[4] - param_2[3];
    uVar2 = 1;
  }
  return uVar2 & 1;
}

