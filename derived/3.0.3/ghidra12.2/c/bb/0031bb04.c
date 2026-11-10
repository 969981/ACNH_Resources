
undefined8 FUN_0031bb04(long param_1)

{
  if (*(uint *)(param_1 + 0x10) == 3) {
    return 0;
  }
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + 0x240) + (ulong)*(uint *)(param_1 + 0x10) * 8 + 0x350)
  ;
}

