
uint * FUN_0038ce70(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  char acStack_87 [71];
  
  if (*(short *)(param_1 + 8) != 0) {
    uVar3 = 0;
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      FUN_00397b58(acStack_87,0x47,param_1 + 0xc + (ulong)*puVar2,puVar2);
      iVar1 = strcmp(acStack_87,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < *(ushort *)(param_1 + 8));
  }
  return (uint *)0x0;
}

