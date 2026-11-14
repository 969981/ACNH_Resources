
void FUN_0186d954(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_1[9] + 0x248) >> 3 & 1) == 0) {
    *(int *)(param_1 + 0x51) = (int)param_1[0x50];
    uVar1 = *(uint *)(param_1 + 0x52);
    *(undefined4 *)((long)param_1 + 0x28c) = *(undefined4 *)((long)param_1 + 0x284);
    *(undefined4 *)((long)param_1 + 0x284) = 0;
    *(undefined1 *)((long)param_1 + 0x299) = 1;
    *(uint *)(param_1 + 0x50) = uVar1;
    if (uVar1 != 0xffffffff) {
      if (*(uint *)(param_1 + 0x54) <= uVar1) {
        uVar1 = 0;
      }
      puVar2 = *(undefined8 **)(param_1[0x55] + (long)(int)uVar1 * 0x40);
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)*puVar2)();
      }
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_01815e0c(param_1,(int)param_1[0x50],param_1 + 0x65);
  if ((*(char *)((long)param_1 + 0x432) == '\0') || ((int)param_1[0x50] == 1)) {
    return;
  }
  FUN_03ebb160(param_1 + 0x4f,1);
  return;
}

