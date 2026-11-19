
void FUN_038db57c(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x70))();
  *(byte *)((long)param_1 + 0x1c) = bVar1 & 1;
  return;
}

