
void FUN_0016bd90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_8;
  
  local_8 = 0;
  iVar1 = FUN_0016bdd8(&local_8,param_2,param_3,0,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_8 + 0x930) = 1;
    *param_1 = local_8;
  }
  return;
}

