
void FUN_0036eb5c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  FUN_00364628();
  *param_1 = (long)(PTR_DAT_04bd0788 + 0x10);
  plVar2 = (long *)FUN_00367b30(0xd8);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    puVar1 = PTR_DAT_04bd07b8;
    plVar2[7] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = -1;
    FUN_0034f974(plVar2 + 8);
    FUN_0034f3dc(plVar2 + 0x11);
    plVar2[0x1a] = -0x100000000;
  }
  param_1[4] = (long)plVar2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[8] = 0xb0100000000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

