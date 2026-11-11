
void FUN_00473650(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[3];
  while (plVar3 = plVar2, plVar2 != (long *)0x0) {
    while( true ) {
      param_1[0xc] = param_1[0xc] - plVar3[3];
      param_1[0xd] = param_1[0xd] - plVar3[3];
      plVar2 = (long *)*plVar3;
      plVar1 = (long *)param_1[10];
      if (param_1[0xb] == 0) break;
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar3[1],param_1[5]);
      (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],plVar3,0x20);
      plVar3 = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_004736e8;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar3,param_1[5]);
  }
LAB_004736e8:
  plVar2 = (long *)param_1[4];
  param_1[3] = 0;
  while (plVar3 = plVar2, plVar2 != (long *)0x0) {
    while( true ) {
      param_1[0xc] = param_1[0xc] - plVar3[3];
      param_1[0xd] = param_1[0xd] - plVar3[3];
      plVar2 = (long *)*plVar3;
      plVar1 = (long *)param_1[10];
      if (param_1[0xb] == 0) break;
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar3[1],param_1[5]);
      (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],plVar3,0x20);
      plVar3 = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_00473774;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar3,param_1[5]);
  }
LAB_00473774:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

