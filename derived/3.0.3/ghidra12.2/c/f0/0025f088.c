
void FUN_0025f088(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x12);
  *puVar3 = 1;
  uVar2 = *(undefined2 *)(param_1 + 0x16);
  puVar3[1] = uVar1;
  *(undefined2 *)(puVar3 + 2) = uVar2;
  memset(puVar3 + 4,0,6);
  *(undefined4 *)(*(long *)(param_1 + 8) + 0xc) = 0;
  return;
}

