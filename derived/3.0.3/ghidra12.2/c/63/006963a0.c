
undefined8 FUN_006963a0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  do {
    uVar4 = (uint)uVar5;
    if (cVar2 == '\0') {
joined_r0x006963f0:
      if (uVar4 == 0) {
        return 0;
      }
      uVar3 = FUN_006963fc(param_1,param_2,uVar5 & 0xffffffff);
      return uVar3;
    }
    if (uVar4 == 0x7ffffffe) {
      uVar3 = FUN_006963fc(param_1,param_2,0x7fffffff);
      return uVar3;
    }
    if (pcVar1[1] == '\0') {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)uVar4;
      goto joined_r0x006963f0;
    }
    uVar5 = uVar5 + 2;
    pcVar1 = param_2 + uVar5;
    cVar2 = *pcVar1;
  } while( true );
}

