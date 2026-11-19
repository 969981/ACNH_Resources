
void FUN_03bdd8d4(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x30))
                             (*(long **)(param_1 + 0xb8),0xa8,8);
  if (plVar2 != (long *)0x0) {
    plVar2[2] = 0;
    plVar2[3] = param_2;
    plVar2[8] = 0;
    *(undefined1 *)(plVar2 + 9) = 1;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    puVar1 = PTR_DAT_04bd23d0 + 0x10;
    *(undefined1 *)(plVar2 + 10) = 0;
    *(undefined4 *)(plVar2 + 0xf) = 0;
    plVar2[0xd] = 0;
    *(undefined4 *)(plVar2 + 0xe) = 0;
    plVar2[0x14] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = 0;
    *(undefined8 *)((long)plVar2 + 0x7c) = 0xbf8000003f800000;
    *(undefined8 *)((long)plVar2 + 0x84) = 0x3f800000;
    *(undefined4 *)((long)plVar2 + 0x8c) = 0x3f800000;
  }
  return;
}

