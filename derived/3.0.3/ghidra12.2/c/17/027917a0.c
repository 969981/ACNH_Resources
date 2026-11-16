
void FUN_027917a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar5 = 0;
  do {
    uVar2 = uVar5 << 1;
    uVar3 = uVar5 >> 0x1f;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(undefined2 *)(param_1 + (-uVar3 & 0xfffffffe00000000 | uVar2)) = 0;
  } while (uVar1 != 0x200);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x400 + (long)iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x800 + (long)iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x600 + (long)iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0xc40 + (long)iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_1 + 0x54a8 + (long)iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  uVar5 = 0;
  do {
    uVar2 = uVar5 << 2;
    uVar3 = uVar5 >> 0x1f;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(undefined4 *)(param_1 + 0xe98 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
  } while (uVar1 != 0x200);
  memset((void *)(param_1 + 0x1698),0,0x3e00);
  lVar7 = 0x200;
  puVar6 = (undefined4 *)(param_1 + 0x56be);
  do {
    *(undefined2 *)((long)puVar6 + -0xe) = 0;
    lVar7 = lVar7 + -4;
    *(undefined4 *)((long)puVar6 + -0x12) = 0;
    puVar6[-3] = 0;
    *(undefined2 *)(puVar6 + -2) = 0;
    *(undefined4 *)((long)puVar6 + -6) = 0;
    *(undefined2 *)((long)puVar6 + -2) = 0;
    *puVar6 = 0;
    *(undefined2 *)(puVar6 + 1) = 0;
    puVar6 = puVar6 + 6;
  } while (lVar7 != 0);
  *(undefined8 *)(param_1 + 0xc38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc08) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc00) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe44) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe4c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe54) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe5c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe64) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe6c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe7c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe84) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe8c) = 0xffffffffffffffff;
  return;
}

