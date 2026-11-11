
uint * FUN_0038ce00(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 8) != 0) {
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      iVar1 = strcmp((char *)(param_1 + (ulong)*puVar2),param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      puVar2 = puVar2 + 0xc;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (uint *)0x0;
}

