
uint FUN_03fc15c0(long *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  *(undefined2 *)((long)param_1 + 0x38a444) = 0;
  uVar3 = 3;
  if (iVar1 != 0) {
    uVar3 = 0x13;
  }
  uVar3 = uVar3 | param_2 & 0x20;
  cVar2 = *(char *)((long)param_1 + 0x38a446);
  *(undefined1 *)((long)param_1 + 0x38a446) = 0;
  if ((char)param_1[0x69c24] != '\0') {
    uVar3 = uVar3 | 0xffffff80;
  }
  if (cVar2 != '\0') {
    uVar3 = uVar3 | 0x40;
  }
  return uVar3;
}

