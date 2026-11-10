
undefined8 * FUN_0035160c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined1 *)((long)param_3 + 0x39) = 1;
    param_3[4] = 0;
    param_3[5] = 0;
    return param_3;
  }
  if ((ulong)param_3[6] < (ulong)param_2[6]) {
    uVar2 = FUN_0035160c(param_1,param_2[4]);
    param_2[4] = uVar2;
  }
  else if (param_3[6] == param_2[6]) {
    if (param_2 != param_3) {
      param_3[5] = param_2[5];
      param_3[4] = param_2[4];
      *(undefined1 *)((long)param_3 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *param_2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = param_2;
      param_2 = param_3;
    }
  }
  else {
    uVar2 = FUN_0035160c(param_1,param_2[5]);
    param_2[5] = uVar2;
  }
  puVar4 = (undefined8 *)param_2[5];
  if (((puVar4 == (undefined8 *)0x0) || (*(char *)((long)puVar4 + 0x39) != '\x01')) ||
     ((param_2[4] != 0 && (*(char *)(param_2[4] + 0x39) == '\x01')))) {
    puVar3 = (undefined8 *)param_2[4];
    puVar4 = param_2;
  }
  else {
    param_2[5] = puVar4[4];
    puVar4[4] = param_2;
    *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar3 = (undefined8 *)puVar4[4];
  }
  if (puVar3 == (undefined8 *)0x0) {
    return puVar4;
  }
  puVar5 = puVar3;
  if (*(char *)((long)puVar3 + 0x39) == '\x01') {
    if (puVar3[4] != 0) {
      if (*(char *)(puVar3[4] + 0x39) != '\x01') goto LAB_0035174c;
      puVar4[4] = puVar3[5];
      puVar3[5] = puVar4;
      *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)puVar4 + 0x39);
      *(undefined1 *)((long)puVar4 + 0x39) = 1;
      puVar4 = puVar3;
      puVar5 = (undefined8 *)puVar3[4];
      if ((undefined8 *)puVar3[4] == (undefined8 *)0x0) {
        return puVar3;
      }
    }
    cVar1 = *(char *)((long)puVar5 + 0x39);
  }
  else {
LAB_0035174c:
    cVar1 = *(char *)((long)puVar3 + 0x39);
  }
  if (((cVar1 == '\x01') && (puVar4[5] != 0)) && (*(char *)(puVar4[5] + 0x39) == '\x01')) {
    *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
    *(bool *)((long)puVar5 + 0x39) = *(char *)((long)puVar5 + 0x39) == '\0';
    *(bool *)(puVar4[5] + 0x39) = *(char *)(puVar4[5] + 0x39) == '\0';
    return puVar4;
  }
  return puVar4;
}

