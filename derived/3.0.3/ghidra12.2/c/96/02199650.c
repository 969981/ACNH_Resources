
void FUN_02199650(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar2[-1] = param_1[3];
    param_1[3] = (long)(plVar2 + -1);
    plVar2 = plVar1;
  }
  plVar2 = (long *)param_1[0x52];
  while (plVar2 != param_1 + 0x51) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x53) = (int)param_1[0x53] + -1;
    plVar2[-1] = param_1[0x54];
    param_1[0x54] = (long)(plVar2 + -1);
    plVar2 = plVar1;
  }
  plVar2 = (long *)param_1[0x76];
  while (plVar2 != param_1 + 0x75) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x77) = (int)param_1[0x77] + -1;
    plVar2[-1] = param_1[0x78];
    param_1[0x78] = (long)(plVar2 + -1);
    plVar2 = plVar1;
  }
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined2 *)((long)param_1 + 0x4ec) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined8 *)((long)param_1 + 0x4da) = 0;
  *(undefined4 *)((long)param_1 + 0x4ee) = 0x101;
  *(undefined1 *)((long)param_1 + 0x4f2) = 0;
  *(undefined2 *)((long)param_1 + 0x4f4) = 0;
  *(undefined1 *)((long)param_1 + 0x4f6) = 0;
  param_1[0x9f] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x9f);
  param_1[0xa0] = 0xfffe;
  FUN_0277d4ac(param_1 + 0xa0);
  FUN_02198d70(param_1,0);
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x113) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x89c) = 0xff;
  *(undefined1 *)((long)param_1 + 0x8a4) = 0;
  *(undefined2 *)((long)param_1 + 0x8a6) = 0;
  *(undefined4 *)(param_1 + 0x115) = 0x101;
  *(undefined1 *)((long)param_1 + 0x8ac) = 0;
  *(undefined1 *)((long)param_1 + 0x8ae) = 0;
  FUN_02199930(param_1 + 0x116);
  param_1[0x15d] = 1;
  *(undefined8 *)((long)param_1 + 0xb05) = 0;
  *(undefined8 *)((long)param_1 + 0xb0c) = 0;
  *(undefined2 *)(param_1 + 0x15f) = 0xff;
  *(undefined4 *)((long)param_1 + 0xaf4) = 0;
  *(undefined8 *)((long)param_1 + 0xb14) = 0xfffe;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(undefined8 *)((long)param_1 + 0xafc) = 0x244db4da244db4da;
  *(undefined1 *)((long)param_1 + 0xb04) = 0xff;
  FUN_0277d4ac();
  *(undefined2 *)((long)param_1 + 0xb1c) = 0;
  *(undefined4 *)((long)param_1 + 0xb1e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb22) = 0;
  *(undefined2 *)((long)param_1 + 0xb5c) = 0;
  *(undefined4 *)((long)param_1 + 0xb5e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb62) = 0;
  *(undefined2 *)((long)param_1 + 0xb24) = 0;
  *(undefined4 *)((long)param_1 + 0xb26) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb2a) = 0;
  *(undefined2 *)((long)param_1 + 0xb64) = 0;
  *(undefined4 *)((long)param_1 + 0xb66) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb6a) = 0;
  *(undefined2 *)((long)param_1 + 0xb2c) = 0;
  *(undefined4 *)((long)param_1 + 0xb2e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb32) = 0;
  *(undefined2 *)((long)param_1 + 0xb6c) = 0;
  *(undefined4 *)((long)param_1 + 0xb6e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb72) = 0;
  *(undefined2 *)((long)param_1 + 0xb34) = 0;
  *(undefined4 *)((long)param_1 + 0xb36) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb3a) = 0;
  *(undefined2 *)((long)param_1 + 0xb74) = 0;
  *(undefined4 *)((long)param_1 + 0xb76) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb7a) = 0;
  *(undefined2 *)((long)param_1 + 0xb3c) = 0;
  *(undefined4 *)((long)param_1 + 0xb3e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb42) = 0;
  *(undefined2 *)((long)param_1 + 0xb7c) = 0;
  *(undefined4 *)((long)param_1 + 0xb7e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb82) = 0;
  *(undefined2 *)((long)param_1 + 0xb44) = 0;
  *(undefined4 *)((long)param_1 + 0xb46) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb4a) = 0;
  *(undefined2 *)((long)param_1 + 0xb84) = 0;
  *(undefined4 *)((long)param_1 + 0xb86) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb8a) = 0;
  *(undefined2 *)((long)param_1 + 0xb4c) = 0;
  *(undefined4 *)((long)param_1 + 0xb4e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb52) = 0;
  *(undefined2 *)((long)param_1 + 0xb8c) = 0;
  *(undefined4 *)((long)param_1 + 0xb8e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb92) = 0;
  *(undefined2 *)((long)param_1 + 0xb54) = 0;
  *(undefined4 *)((long)param_1 + 0xb56) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb5a) = 0;
  *(undefined2 *)((long)param_1 + 0xb94) = 0;
  *(undefined4 *)((long)param_1 + 0xb96) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb9a) = 0;
  return;
}

