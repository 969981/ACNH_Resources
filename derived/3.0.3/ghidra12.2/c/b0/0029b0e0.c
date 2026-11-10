
void FUN_0029b0e0(int *param_1,long param_2,undefined8 param_3)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) == 1) {
    local_24 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
  }
  else {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    FUN_0029ac88(param_1,param_2,
                 *(undefined4 *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180),
                 *(undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168),param_3,0)
    ;
    if (*param_1 == 0) {
      *(undefined4 *)(param_2 + 0x140) = 0x13;
      return;
    }
  }
  return;
}

