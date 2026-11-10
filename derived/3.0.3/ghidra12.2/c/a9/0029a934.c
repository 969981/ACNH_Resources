
void FUN_0029a934(int *param_1,long param_2,long param_3)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if (param_3 == 0) {
      local_40 = 0x10c07;
      goto LAB_0029a9a4;
    }
    if ((*(int *)(param_2 + 0xd0) == 1) && (*(int *)(param_2 + 0xd4) == 0)) {
      FUN_002938cc(param_1,*(undefined8 *)(param_2 + 0x30),param_2 + 0x110,param_3);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x30),0);
        *(undefined4 *)(param_2 + 0x140) = 4;
        return;
      }
      return;
    }
  }
  local_40 = 0x10c08;
LAB_0029a9a4:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

