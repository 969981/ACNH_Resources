
void FUN_02019a54(long param_1,undefined4 param_2)

{
  FUN_02019af0(*(undefined4 *)
                (*(long *)(param_1 + 0x60a8) +
                 ((ulong)*(uint *)(*(long *)(param_1 + 0x60a8) + 0x10) & 1) * 0x20 + 0x28));
  FUN_02019af0(*(undefined4 *)
                (*(long *)(param_1 + 0x6098) +
                 ((ulong)*(uint *)(*(long *)(param_1 + 0x6098) + 0x10) & 1) * 0x20 + 0x28),param_2);
  FUN_02019af0(*(undefined4 *)
                (*(long *)(param_1 + 0x60a0) +
                 ((ulong)*(uint *)(*(long *)(param_1 + 0x60a0) + 0x10) & 1) * 0x20 + 0x28),param_2);
  FUN_02019af0(*(undefined4 *)
                (*(long *)(param_1 + 0x1480) +
                 ((ulong)*(uint *)(*(long *)(param_1 + 0x1480) + 0x10) & 1) * 0x20 + 0x28),param_2);
  FUN_02019af0(*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),param_2);
  return;
}

