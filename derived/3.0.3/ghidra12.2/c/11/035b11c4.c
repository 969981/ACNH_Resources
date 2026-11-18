
void FUN_035b11c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)param_1[5];
  *param_1 = &PTR_FUN_04b3e850;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = *(long **)PTR_DAT_04bdf328;
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

