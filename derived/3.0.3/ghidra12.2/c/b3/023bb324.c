
void FUN_023bb324(long param_1)

{
  undefined4 local_24;
  undefined4 local_8;
  int local_4;
  
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
  *(undefined8 *)(param_1 + 0x1844) = 0;
  local_4 = *(int *)(param_1 + 0x1810);
  if (local_4 - 2U < 2) {
    *(undefined4 *)(param_1 + 0x1bf8) = 5;
    FUN_0231b1d0(param_1,6);
    local_24 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    FUN_016d88bc(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_24);
  }
  else {
    if (local_4 != 4) {
      FUN_023164ec(param_1,6);
      return;
    }
    *(undefined4 *)(param_1 + 0x1bf8) = 5;
    FUN_0231b5b4(param_1,6);
    local_8 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    FUN_016da530(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_8);
  }
  return;
}

