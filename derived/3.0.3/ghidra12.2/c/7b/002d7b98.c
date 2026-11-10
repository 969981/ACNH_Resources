
void FUN_002d7b98(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_34 = 0x10c07;
  }
  else if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    *(int **)(param_2 + 0x2c0) = param_3;
    uVar2 = FUN_003118e4(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,param_4,
                         *(undefined8 *)(param_2 + 0xa8));
    lVar1 = DAT_04c5fbb0;
    if ((uVar2 & 1) == 0) {
      local_34 = 0xac5a;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
    }
    else {
      plVar3 = (long *)FUN_00228380();
      *(long *)(param_2 + 0x2d8) = *(long *)(lVar1 + 0x30) + *plVar3 * 10000;
      FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
      local_34 = 0;
    }
  }
  else {
    local_34 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

