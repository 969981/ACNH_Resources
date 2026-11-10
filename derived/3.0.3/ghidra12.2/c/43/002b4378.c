
void FUN_002b4378(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_00227258(param_1);
  if (*(char *)(param_2 + 0x7b) == '\x01') {
    param_2 = param_2 + 0x28;
  }
  else {
    param_2 = param_2 + 8;
  }
  FUN_00227440(auStack_30,param_1,param_2);
  return;
}

