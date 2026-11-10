
void FUN_0037cf30(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)param_1[3];
  while (plVar2 != param_1 + 2) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    FUN_0037ee70(plVar2);
    FUN_00367b50(plVar2);
    plVar2 = plVar1;
  }
  param_1[0x18] = 0;
  puVar4 = (undefined8 *)param_1[0x1a];
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00367b50(puVar4);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1[0xf] != 0) {
    FUN_00367b50();
  }
  param_1[0xf] = 0;
  FUN_003871c0(param_1 + 0x14);
  return;
}

