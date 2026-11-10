
void FUN_001668a4(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x4c8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_1) {
        FUN_00143bd8(param_2 + 0x4c8,plVar1,param_2 + 0x4e8,*(undefined8 *)(param_2 + 0x4f0));
        if (*(undefined8 **)(param_2 + 0x4c8) == (undefined8 *)0x0) {
          return;
        }
        *(byte *)(param_2 + 0x68c) = *(byte *)(param_2 + 0x68c) & 0xfb;
        FUN_00147570(**(undefined8 **)(param_2 + 0x4c8),0,6);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}

