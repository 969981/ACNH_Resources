
void FUN_03b5fba8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  uint7 uStack_48;
  
  if (*(int *)(param_1 + 0xc) - 1U < 3) {
    *(int *)(param_1 + 0xc) = 0;
  }
  plVar5 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    if (*(char *)(DAT_05aebb88 + 1) != '\0') {
      lVar6 = *(long *)(DAT_05aebb88 + 0x1a0);
      *(undefined4 *)(plVar5 + 2) = 0;
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar5 + 1);
      lVar1 = lVar6 + ((ulong)(*(ushort *)(plVar5 + 0x23) >> 3) & 0x1ff8);
      *(ulong *)(lVar1 + 0xb8) =
           1L << ((ulong)*(ushort *)(plVar5 + 0x23) & 0x3f) | *(ulong *)(lVar1 + 0xb8);
      lVar6 = lVar6 + ((ulong)(*(ushort *)(plVar5 + 0x23) >> 3) & 0x1ff8);
      *(ulong *)(lVar6 + 0xd0) =
           *(ulong *)(lVar6 + 0xd0) &
           (1L << ((ulong)*(ushort *)(plVar5 + 0x23) & 0x3f) ^ 0xffffffffffffffffU);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0xe0);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    *(undefined2 *)(puVar4 + 0x10) = 0;
    *(ulong *)((long)puVar4 + 9) = (ulong)uStack_48;
    *(undefined1 *)((long)puVar4 + 0x42) = 1;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)((long)puVar4 + 0x11) = 0;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  uVar3 = DAT_041e8298;
  uVar2 = DAT_041e8290;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar2 = DAT_041e82a8;
  *(undefined8 *)(param_1 + 0x40) = DAT_041e82a0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = DAT_041e8288;
  *(undefined8 *)(param_1 + 0x20) = DAT_041e8280;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}

