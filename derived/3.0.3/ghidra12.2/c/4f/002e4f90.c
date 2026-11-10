
void FUN_002e4f90(undefined8 param_1,long param_2,int *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_30 = 0x10c07;
  }
  else if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    lVar2 = *(long *)(param_2 + 0xf8);
    *(int **)(param_2 + 0x2c0) = param_3;
    *(undefined4 *)(lVar2 + 0xc) = param_5;
    *(undefined4 *)(lVar2 + 0x10) = param_6;
    uVar1 = FUN_00312794(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,param_4 & 1,lVar2,
                         *(undefined8 *)(param_2 + 0xe0));
    if ((uVar1 & 1) == 0) {
      local_30 = 0xac5a;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
    }
    else {
      FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
      (**(code **)(**(long **)(param_2 + 0xe8) + 0x40))();
      local_30 = 0;
    }
  }
  else {
    local_30 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

