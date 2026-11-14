
void FUN_01865f6c(long *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
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
      puVar3 = *(undefined8 **)(param_1[0x55] + (long)(int)uVar1 * 0x40);
      if (puVar3 != (undefined8 *)0x0) {
        (*(code *)*puVar3)();
      }
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_01815e0c(param_1,(int)param_1[0x50],param_1 + 0x65);
  lVar4 = param_1[0x99];
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0xf8) + 0xf0))((long *)(lVar4 + 0xf8));
  *(undefined4 *)(param_1 + 0xa0) = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x128) + 0xf0))(lVar4 + 0x128);
  *(undefined4 *)((long)param_1 + 0x504) = *puVar2;
  return;
}

