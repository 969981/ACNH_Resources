
void FUN_03b5fd14(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  uint7 uStack_48;
  
  if ((((*(char *)(param_1 + 8) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) &&
      (FUN_03b63430(), *(int *)(param_1 + 0xc) - 1U < 3)) &&
     ((*(int *)(*(long *)(param_1 + 0xd8) + 0x70) == 2 &&
      ((*(byte *)(*(long *)(param_1 + 0xd8) + 0x7d) & 1) == 0)))) {
    if (*(int *)(param_1 + 0xc) - 1U < 3) {
      *(int *)(param_1 + 0xc) = 0;
    }
    plVar3 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar3 != (long *)0x0) {
      if (*(char *)(DAT_05aebb88 + 1) != '\0') {
        lVar4 = *(long *)(DAT_05aebb88 + 0x1a0);
        *(undefined4 *)(plVar3 + 2) = 0;
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar3 + 1);
        lVar1 = lVar4 + ((ulong)(*(ushort *)(plVar3 + 0x23) >> 3) & 0x1ff8);
        *(ulong *)(lVar1 + 0xb8) =
             1L << ((ulong)*(ushort *)(plVar3 + 0x23) & 0x3f) | *(ulong *)(lVar1 + 0xb8);
        lVar4 = lVar4 + ((ulong)(*(ushort *)(plVar3 + 0x23) >> 3) & 0x1ff8);
        *(ulong *)(lVar4 + 0xd0) =
             *(ulong *)(lVar4 + 0xd0) &
             (1L << ((ulong)*(ushort *)(plVar3 + 0x23) & 0x3f) ^ 0xffffffffffffffffU);
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0xe0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined2 *)(puVar2 + 0xc) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined2 *)(puVar2 + 0x10) = 0;
      *(ulong *)((long)puVar2 + 9) = (ulong)uStack_48;
      *(undefined1 *)((long)puVar2 + 0x42) = 1;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)((long)puVar2 + 0x11) = 0;
    }
  }
  return;
}

