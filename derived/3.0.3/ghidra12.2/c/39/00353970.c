
void FUN_00353970(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bd0698;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_0035145c(param_1 + 6);
  param_1[0xc] = (long)(param_1 + 0xc);
  param_1[0xd] = (long)(param_1 + 0xc);
  param_1[10] = (long)(param_1 + 10);
  param_1[0xb] = (long)(param_1 + 10);
  plVar2 = param_1 + 0x10;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xf] = (long)(param_1 + 0xe);
  do {
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[3] = (long)(plVar2 + 3);
    plVar2[4] = (long)(plVar2 + 3);
    plVar2[6] = (long)(plVar2 + 6);
    plVar2[7] = (long)(plVar2 + 6);
    plVar2[9] = (long)(plVar2 + 9);
    plVar2[10] = (long)(plVar2 + 9);
    plVar2 = plVar2 + 0xc;
  } while (plVar2 != param_1 + 0x310);
  param_1[0x310] = 0;
  *(undefined4 *)(param_1 + 0x375) = 0;
  *(undefined4 *)((long)param_1 + 0x1bd4) = 1;
  *(undefined1 *)(param_1 + 0x389) = 1;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  *(undefined2 *)(param_1 + 0x37a) = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x388] = 0;
  FUN_0034f694(param_1 + 0x38a);
  FUN_0034f814(param_1 + 0x3a5);
  FUN_003490b4(param_1 + 0x3ae);
  param_1[0x3d3] = 0;
  param_1[0x3d2] = 0;
  param_1[0x3d8] = -1;
  param_1[0x3d4] = (long)&PTR_FUN_0484bc60;
  FUN_00352d04(param_1 + 0x3d4,0,0xc,0,0,0,1);
  puVar1 = PTR_DAT_04bd06a0;
  param_1[0x3d8] = -1;
  *(undefined1 *)(param_1 + 0x3d7) = 0;
  param_1[0x3d4] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x311,0,800);
  return;
}

