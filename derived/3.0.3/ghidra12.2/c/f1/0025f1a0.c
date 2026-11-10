
void FUN_0025f1a0(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x12);
  *puVar4 = 1;
  uVar2 = *(undefined2 *)(param_1 + 0x16);
  puVar4[1] = uVar1;
  *(undefined2 *)(puVar4 + 2) = uVar2;
  memset(puVar4 + 4,0,6);
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  return;
}

