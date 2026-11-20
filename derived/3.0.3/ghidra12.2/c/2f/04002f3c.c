
void FUN_04002f3c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2 == param_1 + 1) {
      (**(code **)*puVar2)();
    }
    else {
      plVar1 = (long *)puVar2[1];
      (**(code **)*puVar2)();
      (**(code **)(*plVar1 + 0x18))(plVar1,*param_1);
    }
    *param_1 = 0;
  }
  return;
}

