
bool FUN_001955b8(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  
  sVar1 = strlen("Encryption Error");
  if (sVar1 < param_4) {
    strcpy(param_3,"Encryption Error");
  }
  return sVar1 < param_4;
}

