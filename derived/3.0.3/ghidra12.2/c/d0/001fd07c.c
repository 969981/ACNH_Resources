
void FUN_001fd07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_001a4ff4(*(undefined8 *)(param_1 + 0x30),param_2,0);
  local_28 = param_2;
  FUN_001a5060(*(undefined8 *)(param_1 + 0x30),param_3,&local_28);
  return;
}

