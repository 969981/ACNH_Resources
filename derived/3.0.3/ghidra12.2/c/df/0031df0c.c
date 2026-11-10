
void FUN_0031df0c(long param_1,undefined8 param_2,ulong param_3)

{
  long local_8;
  
  if ((param_3 & 1) != 0) {
    FUN_0031c0c0(param_1);
    local_8 = param_1;
    FUN_0031c010(&local_8);
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + -1;
    (**(code **)(**(long **)(param_1 + 0x9b0) + 0x18))();
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x770) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x780),*(long *)(param_1 + 0x770),0);
    *(undefined8 *)(param_1 + 0x770) = 0;
  }
  if (*(long *)(param_1 + 0x798) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x7a8),*(long *)(param_1 + 0x798),0);
    *(undefined8 *)(param_1 + 0x798) = 0;
  }
  if (*(long *)(param_1 + 0x7b8) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x7c8),*(long *)(param_1 + 0x7b8),0);
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  if (*(long *)(param_1 + 0x7d8) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x7e8),*(long *)(param_1 + 0x7d8),0);
    *(undefined8 *)(param_1 + 0x7d8) = 0;
  }
  if (*(long *)(param_1 + 0x7f8) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x808),*(long *)(param_1 + 0x7f8),0);
    *(undefined8 *)(param_1 + 0x7f8) = 0;
  }
  if (*(long *)(param_1 + 0x818) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x828),*(long *)(param_1 + 0x818),0);
    *(undefined8 *)(param_1 + 0x818) = 0;
  }
  FUN_0031ed34(param_1 + 0x838);
  FUN_0031ed34(param_1 + 0x880);
  FUN_0031ed34(param_1 + 0x8c8);
  FUN_0031ed34(param_1 + 0x910);
  FUN_0031ed34(param_1 + 0x958);
  return;
}

