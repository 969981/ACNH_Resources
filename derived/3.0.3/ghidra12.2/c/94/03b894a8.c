
void FUN_03b894a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(void **)(param_1 + 0x248) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x248),0,(ulong)*(uint *)(param_1 + 0x3f0) << 3);
  }
  if (*(void **)(param_1 + 0x250) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x250),0,(ulong)*(uint *)(param_1 + 0x3f0) << 4);
  }
  if (*(void **)(param_1 + 600) != (void *)0x0) {
    memset(*(void **)(param_1 + 600),0,(ulong)*(uint *)(param_1 + 0x3fc) << 3);
  }
  if (*(void **)(param_1 + 0x260) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x260),0,(ulong)*(uint *)(param_1 + 0x3fc) << 4);
  }
  if (*(void **)(param_1 + 0x280) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x280),0,(ulong)*(uint *)(param_1 + 0x404) << 3);
  }
  if (*(void **)(param_1 + 0x288) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x288),0,(ulong)*(uint *)(param_1 + 0x404) << 4);
  }
  memset((void *)**(undefined8 **)(param_1 + 0x290),0,(ulong)*(uint *)(param_1 + 0x410) << 3);
  memset((void *)**(undefined8 **)(param_1 + 0x298),0,(ulong)*(uint *)(param_1 + 0x410) << 4);
  **(undefined8 **)(param_1 + 0x2d0) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2d8);
  puVar1[1] = 0;
  *puVar1 = 0;
  memset(*(void **)(*(long *)(param_1 + 0x290) + 8),0,(ulong)*(uint *)(param_1 + 0x414) << 3);
  memset(*(void **)(*(long *)(param_1 + 0x298) + 8),0,(ulong)*(uint *)(param_1 + 0x414) << 4);
  *(undefined8 *)(*(long *)(param_1 + 0x2d0) + 8) = 0;
  lVar2 = *(long *)(param_1 + 0x2d8);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  memset((void *)**(undefined8 **)(param_1 + 800),0,(ulong)*(uint *)(param_1 + 0x428) << 3);
  memset((void *)**(undefined8 **)(param_1 + 0x328),0,(ulong)*(uint *)(param_1 + 0x428) << 4);
  memset(*(void **)(*(long *)(param_1 + 800) + 8),0,(ulong)*(uint *)(param_1 + 0x42c) << 3);
  memset(*(void **)(*(long *)(param_1 + 0x328) + 8),0,(ulong)*(uint *)(param_1 + 0x42c) << 4);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}

