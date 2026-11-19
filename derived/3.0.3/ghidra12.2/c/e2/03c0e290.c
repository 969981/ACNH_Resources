
void FUN_03c0e290(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0xe4) = 5;
  uVar2 = *(uint *)(param_1 + 0x100);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        uVar3 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x108) + (long)(int)uVar3 * 4) = 0;
      uVar2 = *(uint *)(param_1 + 0x100);
      uVar3 = uVar1;
    } while ((int)uVar1 < (int)uVar2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 3;
  if (*(int *)(param_1 + 0x120) != 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    **(long **)(param_1 + 0x128) = param_1 + 0x138;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x18))((long *)(param_1 + 0x20));
  FUN_03a0cd90(param_2,*(undefined8 *)(param_1 + 0x28),param_1 + 0x70,*param_3,0,0);
  return;
}

