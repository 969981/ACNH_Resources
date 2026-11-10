
void FUN_00219680(long param_1,void *param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined2 *puVar6;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x22);
  uVar2 = *(ushort *)(param_1 + 0x20);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar1 / uVar2;
  }
  uVar1 = uVar1 - uVar4 * uVar2;
  puVar6 = (undefined2 *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x5ac);
  *puVar6 = 0;
  memset(puVar6 + 1,0,0x5a0);
  puVar6[0x2d4] = 0;
  lVar5 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(puVar6 + 0x2d2) = 0;
  *(undefined1 *)(puVar6 + 0x2d5) = 0;
  memcpy((void *)(lVar5 + (ulong)uVar1 * 0x5ac + 2),param_2,(ulong)param_3);
  *(undefined1 *)(param_1 + 0x26) = 1;
  puVar6 = (undefined2 *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x5ac);
  sVar3 = *(short *)(param_1 + 0x24);
  *(uint *)(puVar6 + 0x2d2) = param_3;
  *puVar6 = param_4;
  *(undefined1 *)(puVar6 + 0x2d4) = 1;
  *(short *)(param_1 + 0x24) = sVar3 + 1;
  return;
}

