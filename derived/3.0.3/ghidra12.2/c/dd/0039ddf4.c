
void FUN_0039ddf4(long param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x10) & 0x70) == 0x20) {
    iVar3 = (int)((float)(int)*(float *)(param_1 + 0x1c) + 1.0) - (int)*(float *)(param_1 + 0x18);
    uVar2 = 0xffffffffffffffe8;
    if (1 < iVar3) {
      uVar2 = (ulong)(iVar3 + 1) * 4 + 7 & 0x7fffffff8;
    }
    puVar1 = (undefined2 *)(*(long *)(param_1 + 8) + uVar2);
    *(undefined2 *)(param_1 + 0x10) = *puVar1;
    *(undefined2 *)(param_1 + 0x12) = puVar1[1];
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar1 + 2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(puVar1 + 4);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)((long)puVar1 + 0x13U & 0xfffffffffffffff8);
  }
  return;
}

