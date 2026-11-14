
void FUN_01cb0f24(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uStack_11;
  
  uVar1 = *(uint *)(param_1 + 0x2e);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 6) {
      FUN_003ff9d8(param_2,param_3);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      (**(code **)(*(long *)(param_3 + 0x50) + 0x10))((long *)(param_3 + 0x50),param_2 + 0x50);
      *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
      return;
    }
    (*(code *)(&PTR_LAB_04a454c8)[uVar1])(&uStack_11,param_1);
  }
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *param_1 = &PTR_LAB_04a456f8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 8);
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  param_1[3] = &PTR_FUN_04a456b8;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x20);
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_3 + 0x30);
  param_1[3] = &PTR_FUN_04a42a40;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 0x38);
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  *param_1 = &PTR_LAB_04a42a60;
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  param_1[10] = &PTR_LAB_04a42b08;
  param_1[9] = uVar2;
  (**(code **)(*(long *)(param_3 + 0x50) + 0x10))((long *)(param_3 + 0x50),param_1 + 10);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_3 + 0x70);
  *(undefined4 *)(param_1 + 0x2e) = 6;
  return;
}

