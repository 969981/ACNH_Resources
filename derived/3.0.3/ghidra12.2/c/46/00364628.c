
void FUN_00364628(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bd07b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
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
  param_1[1] = (long)plVar2;
  plVar2[7] = (long)param_1;
  lVar3 = FUN_0038d250(param_2);
  param_1[2] = lVar3;
  return;
}

