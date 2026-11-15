
void FUN_01f95f04(long param_1,undefined4 *param_2)

{
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_14;
  
  local_14 = 0;
  FUN_01f93710(param_1,&local_3c,&local_14);
  *param_2 = 0x3e;
  *(undefined8 *)(param_2 + 10) = local_3c;
  param_2[0xc] = local_34;
  param_2[0x11] = local_14;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  *(undefined8 *)(param_2 + 0x18) = 0x100000002;
  param_2[0xd] = 0xc0400000;
  if (*(int *)(param_1 + 0xaf80) < *(int *)(param_1 + 0xaf84)) {
    FUN_021920b0((int *)(param_1 + 0xaf80),param_2);
  }
  FUN_02192850(param_1 + 0xaf70,0,0);
  return;
}

