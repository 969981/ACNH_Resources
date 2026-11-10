
void FUN_002ea1a0(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_04bce838;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  FUN_002e8660(param_1 + 2);
  FUN_002e8660(param_1 + 0xcb);
  FUN_002e8660(param_1 + 0x194);
  FUN_002e8660(param_1 + 0x25d);
  plVar1 = param_1 + 3;
  param_1[0x326] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((long *)param_1[4] != plVar1) {
    plVar4 = (long *)param_1[4];
    do {
      iVar2 = *(int *)((long)param_1 + 0x44);
      plVar5 = (long *)plVar4[1];
      *plVar4 = 0;
      plVar4[1] = 0;
      FUN_002236e0(param_1 + 6,param_1 + 6,(long)iVar2 + (long)plVar4);
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  FUN_002236b0(plVar1);
  plVar1 = param_1 + 0xcc;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if ((long *)param_1[0xcd] != plVar1) {
    plVar4 = (long *)param_1[0xcd];
    do {
      iVar2 = *(int *)((long)param_1 + 0x68c);
      plVar5 = (long *)plVar4[1];
      *plVar4 = 0;
      plVar4[1] = 0;
      FUN_002236e0(param_1 + 0xcf,param_1 + 0xcf,(long)iVar2 + (long)plVar4);
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  FUN_002236b0(plVar1);
  plVar1 = param_1 + 0x195;
  *(undefined4 *)(param_1 + 0x194) = 0;
  if ((long *)param_1[0x196] != plVar1) {
    plVar4 = (long *)param_1[0x196];
    do {
      iVar2 = *(int *)((long)param_1 + 0xcd4);
      plVar5 = (long *)plVar4[1];
      *plVar4 = 0;
      plVar4[1] = 0;
      FUN_002236e0(param_1 + 0x198,param_1 + 0x198,(long)iVar2 + (long)plVar4);
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  FUN_002236b0(plVar1);
  *(undefined4 *)(param_1 + 0x25d) = 0;
  plVar1 = param_1 + 0x25e;
  if ((long *)param_1[0x25f] != plVar1) {
    plVar4 = (long *)param_1[0x25f];
    do {
      iVar2 = *(int *)((long)param_1 + 0x131c);
      plVar5 = (long *)plVar4[1];
      *plVar4 = 0;
      plVar4[1] = 0;
      FUN_002236e0(param_1 + 0x261,param_1 + 0x261,(long)iVar2 + (long)plVar4);
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  FUN_002236b0(plVar1);
  param_1[0x326] = 0;
  return;
}

