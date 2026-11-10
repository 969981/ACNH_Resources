
void FUN_002d80c8(undefined8 param_1,long param_2,int *param_3)

{
  ulong uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (param_3 == (int *)0x0) {
LAB_002d80f8:
    local_30 = 0x10c07;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0x88) + 0x10) != 0) {
      if (*param_3 == 1) goto LAB_002d80f8;
      if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
        *(int **)(param_2 + 0x2c0) = param_3;
        uVar1 = FUN_00311f08(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,
                             *(long *)(*(long *)(param_2 + 0x88) + 8) + 0x10,
                             *(undefined8 *)(param_2 + 0x98));
        if ((uVar1 & 1) != 0) {
          FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
          (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
          local_30 = 0;
          goto LAB_002d8170;
        }
        *(undefined8 *)(param_2 + 0x2c0) = 0;
      }
    }
    local_30 = 0x10c08;
  }
LAB_002d8170:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

