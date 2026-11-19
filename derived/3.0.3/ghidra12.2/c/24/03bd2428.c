
void FUN_03bd2428(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x30))
                             (*(long **)(param_1 + 0xb8),0x118,8);
  if (plVar2 != (long *)0x0) {
    plVar2[2] = 0;
    plVar2[3] = param_2;
    plVar2[8] = 0;
    *(undefined1 *)(plVar2 + 9) = 1;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    puVar1 = PTR_DAT_04bd2388 + 0x10;
    *(undefined4 *)((long)plVar2 + 0x94) = 0;
    *(undefined4 *)((long)plVar2 + 0x9c) = 0;
    *(undefined1 *)(plVar2 + 0x14) = 0;
    plVar2[0x15] = 0;
    plVar2[0x1b] = 0;
    *(undefined1 *)(plVar2 + 0x13) = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = 0;
    *(undefined4 *)(plVar2 + 0x16) = 0xffffffff;
    plVar2[0x17] = 0x3f80000000000000;
    plVar2[0x18] = 0;
    *(undefined4 *)(plVar2 + 0x1c) = 0;
    *(undefined4 *)((long)plVar2 + 0xe4) = 0x3f800000;
  }
  return;
}

