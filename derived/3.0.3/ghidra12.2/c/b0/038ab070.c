
void FUN_038ab070(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b628c0;
  plVar1 = param_1 + 0x1076;
  (**(code **)(*plVar1 + 0x50))(plVar1,0);
  *plVar1 = (long)&PTR_FUN_04b628f8;
  FUN_038e1a84(param_1 + 0x10c2);
  FUN_038e267c(plVar1);
  return;
}

