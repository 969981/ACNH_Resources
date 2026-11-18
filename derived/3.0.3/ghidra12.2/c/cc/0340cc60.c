
void FUN_0340cc60(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_58;
  byte local_54;
  undefined *local_50;
  byte local_14 [4];
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  (**(code **)*param_1)(&local_58);
  puVar3 = PTR_DAT_04bb2230;
  lVar4 = FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),uVar1,&local_58);
  if (lVar4 != 0) {
    local_50 = PTR_DAT_04bbba70 + 0x10;
    local_58 = *(undefined4 *)(param_1 + 0x34);
    (**(code **)*param_1)(local_14,param_1);
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    local_54 = local_14[0];
    FUN_0339bb10(*(undefined8 *)(*(long *)puVar3 + 0x10),&local_58);
  }
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_1 + 0x36);
  uVar2 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)((long)param_1 + 0x1bc) = *(undefined4 *)((long)param_1 + 0x1b4);
  *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)((long)param_1 + 0x1c9) = 1;
  *(uint *)(param_1 + 0x36) = uVar2;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x3a) <= uVar2) {
      uVar2 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[0x3b] + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  param_1[0x34] = 0xffffffffffffffff;
  return;
}

