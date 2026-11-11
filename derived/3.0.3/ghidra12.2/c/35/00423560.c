
void FUN_00423560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
    uVar2 = FUN_00426720(PTR_DAT_048607c0,1,1,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = uVar2;
    iVar1 = *(int *)(param_1 + 1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_7;
  FUN_004232d0(param_1,0,&local_80,(long)register0x00000008 + -0x50);
  return;
}

