
void FUN_004406b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  long lVar4;
  
  __s = (char *)FUN_00427270();
  if (__s == (char *)0x0) {
    FUN_00423880(param_2,"<Unnamed",0xffffffff);
    uVar1 = FUN_00428440(param_1);
    FUN_004283a0(uVar1 & 0x1f);
    lVar4 = FUN_00427270();
    if ((lVar4 != 0) && (iVar2 = FUN_0043a2d0(), 0xf < iVar2)) {
      FUN_00423880(param_2,&DAT_04064e67,0xffffffff);
      FUN_00423880(param_2,lVar4 + 0xb,iVar2 + -0xf);
    }
    __s = ">";
    iVar2 = -1;
  }
  else {
    pcVar3 = strchr(__s,0x3c);
    if (pcVar3 == (char *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)pcVar3 - (int)__s;
    }
  }
  FUN_00423880(param_2,__s,iVar2);
  return;
}

