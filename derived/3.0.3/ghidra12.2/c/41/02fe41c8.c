
void FUN_02fe41c8(uint *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 2);
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[2] = 0xffffffffffffffff;
  *puVar3 = &DAT_0409da0e;
  puVar3[1] = 0x5ffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 5) = 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)(1 < *param_1) * 0x30);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x5b0) + 0xa0) + 0x14);
  *puVar3 = &DAT_040936ba;
  *(undefined8 *)((long)puVar3 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  lVar1 = 0x60;
  if (*param_1 < 3) {
    lVar1 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + lVar1);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x5a0) + 0xa0) + 0x14);
  *puVar3 = &DAT_04088a90;
  *(undefined8 *)((long)puVar3 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  lVar1 = 0x90;
  if (*param_1 < 4) {
    lVar1 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + lVar1);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x570) + 0xa0) + 0x14);
  *puVar3 = &DAT_0405e656;
  *(undefined8 *)((long)puVar3 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 0x15) = 1;
  return;
}

