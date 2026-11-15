
void FUN_01fe55f8(long param_1)

{
  undefined4 local_1d8 [4];
  long local_1c8;
  undefined4 local_174;
  undefined2 local_170;
  
  FUN_01e63f1c(local_1d8);
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 3) {
    FUN_01fe41d0(param_1,local_1d8);
  }
  else {
    *(long *)(param_1 + 0x12458) = param_1;
    local_1d8[0] = 1;
    local_174 = 1;
    local_1c8 = param_1 + 0x12450;
    local_170 = 0x101;
    *(undefined1 **)(param_1 + 0x12460) = &LAB_01fe3590;
    *(undefined8 *)(param_1 + 0x12468) = 0;
  }
  if (*(int *)(param_1 + 0xb0c8) < *(int *)(param_1 + 0xb0cc)) {
    FUN_021920b0((int *)(param_1 + 0xb0c8),local_1d8);
  }
  return;
}

