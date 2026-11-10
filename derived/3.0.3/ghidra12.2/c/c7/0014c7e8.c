
ulong FUN_0014c7e8(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if (sVar2 < sVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00144a90(param_1,param_2 + (sVar2 - sVar1));
    if ((int)uVar3 != 0) {
      if (sVar2 == sVar1) {
        uVar3 = 1;
      }
      else {
        uVar3 = (ulong)((param_2 + (sVar2 - sVar1))[-1] == '.');
      }
    }
  }
  return uVar3;
}

