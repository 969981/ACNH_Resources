
void FUN_03acff50(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  lVar1 = param_1 + 0x18;
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x4c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x50);
  puVar3[2] = *(undefined4 *)(param_1 + 0x54);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x58);
  puVar3[1] = *(undefined4 *)(param_1 + 0x5c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x60);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 100);
  puVar3[1] = *(undefined4 *)(param_1 + 0x68);
  puVar3[2] = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = *(undefined4 *)(param_1 + 0x74);
  puVar3[2] = *(undefined4 *)(param_1 + 0x78);
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0xa0);
  puVar3[1] = *(undefined4 *)(param_1 + 0xa4);
  puVar3[2] = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x94);
  puVar3[1] = *(undefined4 *)(param_1 + 0x98);
  puVar3[2] = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x88);
  puVar3[1] = *(undefined4 *)(param_1 + 0x8c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x90);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x80);
  puVar3[2] = *(undefined4 *)(param_1 + 0x84);
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x4c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x50);
  puVar3[2] = *(undefined4 *)(param_1 + 0x54);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = *(undefined4 *)(param_1 + 0x74);
  puVar3[2] = *(undefined4 *)(param_1 + 0x78);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0xa0);
  puVar3[1] = *(undefined4 *)(param_1 + 0xa4);
  puVar3[2] = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x80);
  puVar3[2] = *(undefined4 *)(param_1 + 0x84);
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x88);
  puVar3[1] = *(undefined4 *)(param_1 + 0x8c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x90);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x94);
  puVar3[1] = *(undefined4 *)(param_1 + 0x98);
  puVar3[2] = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 100);
  puVar3[1] = *(undefined4 *)(param_1 + 0x68);
  puVar3[2] = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x58);
  puVar3[1] = *(undefined4 *)(param_1 + 0x5c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x60);
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x94);
  puVar3[1] = *(undefined4 *)(param_1 + 0x98);
  puVar3[2] = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0xa0);
  puVar3[1] = *(undefined4 *)(param_1 + 0xa4);
  puVar3[2] = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = *(undefined4 *)(param_1 + 0x74);
  puVar3[2] = *(undefined4 *)(param_1 + 0x78);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 100);
  puVar3[1] = *(undefined4 *)(param_1 + 0x68);
  puVar3[2] = *(undefined4 *)(param_1 + 0x6c);
  puVar4 = (uint *)(lVar1 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x18);
  uVar2 = puVar4[4];
  if (*puVar4 <= uVar2) {
    uVar2 = 0;
  }
  puVar5 = *(uint **)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 8);
  memset(*(void **)(puVar5 + 2),0,(ulong)(*puVar5 * 0xc));
  puVar5[4] = 0;
  puVar4[4] = puVar4[4] + 1;
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x58);
  puVar3[1] = *(undefined4 *)(param_1 + 0x5c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x60);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x4c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x50);
  puVar3[2] = *(undefined4 *)(param_1 + 0x54);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = *(undefined4 *)(param_1 + 0x80);
  puVar3[2] = *(undefined4 *)(param_1 + 0x84);
  uVar2 = puVar5[4];
  puVar5[4] = uVar2 + 1;
  if (*puVar5 <= uVar2) {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar2 * 0xc);
  *puVar3 = *(undefined4 *)(param_1 + 0x88);
  puVar3[1] = *(undefined4 *)(param_1 + 0x8c);
  puVar3[2] = *(undefined4 *)(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x48) & 1;
  *(uint *)(param_1 + 0x48) = uVar2 ^ 1;
  *(undefined4 *)(lVar1 + (ulong)uVar2 * 0x18 + 0x10) = 0;
  return;
}

