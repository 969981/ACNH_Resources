
void FUN_0246c468(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  if (3 < param_2 - 0xf6 || param_2 - 0xf6 == 2) {
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffd7ffff;
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar3 = *(undefined4 *)((long)puVar1 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar3;
  }
  *(undefined8 *)(param_1 + 0x184c) = 0x3d4ccccd00000000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar2 + 0x148))();
  if (*piVar5 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  FUN_0231e48c(param_1);
  uVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar6 = 0;
    if (uVar4 < 0x149) {
      uVar6 = uVar4;
    }
  }
  if (uVar6 != param_2) {
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
  }
  return;
}

