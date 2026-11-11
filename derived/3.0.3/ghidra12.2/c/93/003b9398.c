
undefined4 FUN_003b9398(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 >> 0x18 == 1) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
    if (((param_2 & 0xffffff) < *puVar1) &&
       (uVar2 = puVar1[(ulong)(param_2 & 0xffffff) * 2 + 2],
       *(short *)((long)puVar1 + (long)(int)uVar2 + 0xc) == 0x2201)) {
      return *(undefined4 *)
              ((long)puVar1 +
              (long)*(int *)((long)puVar1 + (long)(int)uVar2 + 0x10) + (long)(int)uVar2 + 0x20);
    }
  }
  return 0xffffffff;
}

