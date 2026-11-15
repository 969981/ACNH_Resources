
void FUN_01f95268(long param_1)

{
  undefined4 local_1d8 [22];
  undefined1 local_180;
  undefined4 local_174;
  
  FUN_0252d9bc(0);
  FUN_01e63f1c(local_1d8);
  local_180 = 0;
  local_1d8[0] = 0x3d;
  local_174 = 1;
  if (*(int *)(param_1 + 0xaf80) < *(int *)(param_1 + 0xaf84)) {
    FUN_021920b0((int *)(param_1 + 0xaf80),local_1d8);
  }
  FUN_02192850(param_1 + 0xaf70,0,0);
  return;
}

