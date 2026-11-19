
void FUN_03b27e20(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00367b30(0x90);
  if (plVar2 != (long *)0x0) {
    *(undefined2 *)(plVar2 + 7) = 0;
    plVar2[4] = 0;
    plVar2[5] = (long)(plVar2 + 5);
    plVar2[6] = (long)(plVar2 + 5);
    *(undefined1 *)((long)plVar2 + 0x3e) = 0;
    *(undefined8 *)((long)plVar2 + 0x44) = 0;
    *(undefined8 *)((long)plVar2 + 0x4c) = 0;
    *(undefined8 *)((long)plVar2 + 0x54) = 0;
    *(undefined8 *)((long)plVar2 + 0x5c) = 0;
    *(undefined4 *)((long)plVar2 + 100) = 0;
    *(undefined4 *)(plVar2 + 8) = 0x2201f;
    plVar2[2] = (long)(plVar2 + 1);
    plVar2[3] = 0;
    puVar1 = PTR_DAT_04bd1b98 + 0x10;
    *(undefined1 *)((long)plVar2 + 0x8c) = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = (long)(plVar2 + 1);
    *(undefined4 *)(plVar2 + 0x11) = 0x1010004;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
  }
  return;
}

