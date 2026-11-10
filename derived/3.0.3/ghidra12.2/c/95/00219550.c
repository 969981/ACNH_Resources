
void FUN_00219550(undefined1 *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  memset(param_1 + 8,0xff,4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(short *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    lVar4 = 0x5aa;
    do {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x28) + lVar4);
      *(undefined2 *)(puVar1 + -0x5aa) = 0;
      memset(puVar1 + -0x5a8,0,0x5a0);
      *(undefined2 *)(puVar1 + -2) = 0;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x5ac;
      uVar2 = *(ushort *)(param_1 + 0x20);
      *(undefined4 *)(puVar1 + -6) = 0;
      *puVar1 = 0;
    } while (uVar3 < uVar2);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  if (lVar4 != 0) {
    FUN_00285e00(lVar4);
    FUN_00285dc0(lVar4);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  *param_1 = 0;
  return;
}

