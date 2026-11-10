
void FUN_002c6240(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_002aa86c();
  *param_1 = (long)(PTR_DAT_04bce288 + 0x10);
  FUN_002b3fa8(param_1 + 10);
  FUN_002b3fa8(param_1 + 0x1a);
  FUN_00220ebc(param_1 + 0x2a);
  FUN_002c9a30(param_1 + 0x30);
  FUN_002caa60(param_1 + 0x3a);
  FUN_002caa60(param_1 + 0x44);
  FUN_002c6410(param_1 + 0x4e);
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  *(undefined4 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)((long)param_1 + 0x17cc) = 0;
  *(undefined4 *)(param_1 + 0x2fa) = 0;
  FUN_002b3fa8(param_1 + 0x2fb);
  *(undefined1 *)(param_1 + 0x30b) = 0;
  plVar1 = param_1 + 0x31;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0;
  if ((long *)param_1[0x32] != plVar1) {
    plVar3 = (long *)param_1[0x32];
    do {
      iVar2 = *(int *)((long)param_1 + 0x1b4);
      plVar4 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 0x34,param_1 + 0x34,(long)iVar2 + (long)plVar3);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  FUN_002236b0(plVar1);
  plVar1 = param_1 + 0x3b;
  if ((long *)param_1[0x3c] != plVar1) {
    plVar3 = (long *)param_1[0x3c];
    do {
      iVar2 = *(int *)((long)param_1 + 0x204);
      plVar4 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 0x3e,param_1 + 0x3e,(long)iVar2 + (long)plVar3);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  FUN_002236b0(plVar1);
  plVar1 = param_1 + 0x45;
  if ((long *)param_1[0x46] != plVar1) {
    plVar3 = (long *)param_1[0x46];
    do {
      iVar2 = *(int *)((long)param_1 + 0x254);
      plVar4 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 0x48,param_1 + 0x48,(long)iVar2 + (long)plVar3);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  FUN_002236b0(plVar1);
  plVar1 = param_1 + 0x4f;
  if ((long *)param_1[0x50] != plVar1) {
    plVar3 = (long *)param_1[0x50];
    do {
      iVar2 = *(int *)((long)param_1 + 0x2a4);
      plVar4 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 0x52,param_1 + 0x52,(long)iVar2 + (long)plVar3);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  FUN_002236b0(plVar1);
  FUN_0028d4cc(&DAT_04c612b8);
  return;
}

