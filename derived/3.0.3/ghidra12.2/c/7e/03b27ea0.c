
void FUN_03b27ea0(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00367b30(0x70);
  puVar1 = PTR_DAT_04bd1ba0;
  if (plVar2 != (long *)0x0) {
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = (long)(plVar2 + 1);
    plVar2[3] = 0;
    plVar2[8] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 9) = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = (long)(plVar2 + 1);
  }
  return;
}

