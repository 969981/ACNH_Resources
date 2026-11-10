
void FUN_001a6ed0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(long *)(param_2 + 0x80) == 0) {
    *(undefined8 *)(param_2 + 0x80) = param_3;
    local_4 = 0x10001;
    FUN_0018aa70(param_1,&local_4);
    return;
  }
  local_8 = 0x8001000e;
  FUN_0018aa70(param_1,&local_8);
  return;
}

