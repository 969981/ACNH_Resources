
void FUN_001fe0b4(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 local_1c;
  char local_18 [4];
  char local_14 [4];
  
  if (*(char *)(param_1 + 0x69) != '\0') {
    return;
  }
  local_14[0] = *(char *)(param_2 + 8);
  local_18[0] = '\0';
  pcVar1 = local_14;
  if (local_14[0] != '\0') {
    pcVar1 = local_18;
  }
  FUN_00197478(param_1,pcVar1,1);
  local_1c = 0;
  FUN_00197478(param_1,&local_1c,4);
  return;
}

