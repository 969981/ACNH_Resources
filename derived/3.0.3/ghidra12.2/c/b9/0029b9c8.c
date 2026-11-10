
void FUN_0029b9c8(int *param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if (*(int *)(param_2 + 0xd4) == 4) {
      uVar1 = (ulong)(*(char *)(param_2 + 0x162) == '\0');
      FUN_0029ab78(param_1,param_2,*(undefined4 *)(param_2 + uVar1 * 4 + 0x180),
                   *(undefined8 *)(param_2 + uVar1 * 8 + 0x168),0);
      if (*param_1 == 0) {
        *(undefined4 *)(param_2 + 0x140) = 0x10;
        return;
      }
      return;
    }
  }
  local_14 = 0;
  local_30 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

