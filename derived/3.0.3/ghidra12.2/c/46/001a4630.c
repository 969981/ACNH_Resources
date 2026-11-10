
void FUN_001a4630(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *local_68 [5];
  
  puVar1 = PTR_DAT_04bc0ec8;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  *param_1 = (long)(puVar1 + 0x10);
  iVar2 = FUN_0018b980(param_2,uVar3,0);
  if (iVar2 < 0) {
    FUN_00189504(param_1,param_2);
    FUN_0018a58c(param_2,&DAT_0407ebb1);
    return;
  }
  if ((param_4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0018b798(param_3);
  }
  FUN_001a4858(local_68,param_2,iVar2,uVar3);
  FUN_00189504(param_1,local_68);
  local_68[0] = puVar1 + 0x10;
  FUN_0018b1a0(local_68);
  return;
}

