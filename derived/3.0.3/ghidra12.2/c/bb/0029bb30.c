
void FUN_0029bb30(int *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if (*(int *)(param_2 + 0xd4) == 4) {
      if (*(int *)(param_2 + 0xd0) == 1) {
        uVar2 = (ulong)(*(char *)(param_2 + 0x162) == '\0');
        FUN_0029e4cc(param_1,*(undefined8 *)(param_2 + 0x50),param_2 + 0x110,
                     *(undefined4 *)(param_2 + uVar2 * 4 + 0x180),
                     *(undefined8 *)(param_2 + uVar2 * 8 + 0x168));
        if (*param_1 != 0) {
          return;
        }
        FUN_002211bc(*(undefined8 *)(param_2 + 0x50),0);
        iVar1 = *param_1;
      }
      else {
        local_24 = 0;
        local_34 = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
        FUN_002296c4(param_1,&local_34);
        iVar1 = *param_1;
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x140) = 0x12;
        return;
      }
      return;
    }
  }
  local_24 = 0;
  local_34 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

