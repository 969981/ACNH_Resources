
undefined8 FUN_0017c8b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
      ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) &&
     ((int)plVar2[1] - 0x3f34U < 0x20)) {
    *(undefined8 *)((long)plVar2 + 0x3c) = 0;
    *(undefined4 *)((long)plVar2 + 0x44) = 0;
    if (((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
       ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 &&
        ((*plVar2 == param_1 && ((int)plVar2[1] - 0x3f34U < 0x20)))))) {
      plVar2[5] = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(uint *)(plVar2 + 2) != 0) {
        *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(plVar2 + 2) & 1;
      }
      plVar2[6] = 0;
      plVar2[1] = 0x3f34;
      plVar2[10] = 0;
      *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff00000000;
      *(undefined4 *)(plVar2 + 0xb) = 0;
      *(undefined4 *)((long)plVar2 + 0x1c) = 0x8000;
      plVar1 = plVar2 + 0xab;
      plVar2[0x12] = (long)plVar1;
      plVar2[0xd] = (long)plVar1;
      plVar2[0xe] = (long)plVar1;
      plVar2[0x37d] = -0xffffffff;
      return 0;
    }
  }
  return 0xfffffffe;
}

