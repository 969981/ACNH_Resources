
void FUN_01cb0934(undefined1 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long local_38;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = *(uint *)(param_1 + 0x170);
  if (uVar2 == 0xffffffff) {
LAB_01cb09bc:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
    if (*(uint *)(param_3 + 0x130) != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a45648)[*(uint *)(param_3 + 0x130)])(&uStack_11,param_1,param_3);
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_3 + 0x130);
    }
    puVar1 = PTR_DAT_04bc0f40 + 0x10;
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 0x138);
    *(undefined **)(param_1 + 0x140) = puVar1;
    (**(code **)(*(long *)(param_3 + 0x140) + 0x10))(param_3 + 0x140,param_1 + 0x140);
    uVar4 = *(undefined1 *)(param_3 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = 0;
    param_1[0x168] = 0;
    param_1[0x160] = uVar4;
    if (*(char *)(param_3 + 0x168) != '\0') {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_3 + 0x164);
      param_1[0x168] = 1;
    }
    *(undefined4 *)(param_1 + 0x170) = 2;
    return;
  }
  if (uVar2 != 2) {
    (*(code *)(&PTR_LAB_04a454c8)[uVar2])(&uStack_12,param_1);
    goto LAB_01cb09bc;
  }
  uVar2 = *(uint *)(param_3 + 0x130);
  if (*(uint *)(param_2 + 0x130) == 0xffffffff) {
    if (uVar2 == 0xffffffff) goto LAB_01cb0a80;
  }
  else if (uVar2 == 0xffffffff) {
    (*(code *)(&PTR_LAB_04a45520)[*(uint *)(param_2 + 0x130)])(&uStack_13,param_2);
    *(undefined4 *)(param_2 + 0x130) = 0xffffffff;
    goto LAB_01cb0a80;
  }
  local_38 = param_2;
  (*(code *)(&PTR_FUN_04a45618)[uVar2])(&local_38,param_2,param_3);
LAB_01cb0a80:
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_3 + 0x138);
  (**(code **)(*(long *)(param_3 + 0x140) + 0x10))(param_3 + 0x140,param_2 + 0x140);
  *(undefined1 *)(param_2 + 0x160) = *(undefined1 *)(param_3 + 0x160);
  if (*(char *)(param_3 + 0x168) != '\0') {
    uVar3 = *(undefined4 *)(param_3 + 0x164);
    if (*(char *)(param_2 + 0x168) == '\0') {
      *(undefined1 *)(param_2 + 0x168) = 1;
    }
    *(undefined4 *)(param_2 + 0x164) = uVar3;
    return;
  }
  if (*(char *)(param_2 + 0x168) == '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0x168) = 0;
  return;
}

