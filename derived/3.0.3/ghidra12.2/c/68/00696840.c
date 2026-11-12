
void FUN_00696840(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  while( true ) {
    if (cVar2 == '\0') {
      FUN_006963fc(param_1,param_2,uVar3 & 0xffffffff);
      return;
    }
    if ((int)uVar3 == 0x7ffffffe) break;
    if (pcVar1[1] == '\0') {
      FUN_006963fc(param_1,param_2,(int)uVar3 + 1);
      return;
    }
    uVar3 = uVar3 + 2;
    pcVar1 = param_2 + uVar3;
    cVar2 = *pcVar1;
  }
  FUN_006963fc(param_1,param_2,0x7fffffff);
  return;
}

