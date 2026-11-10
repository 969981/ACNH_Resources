
void FUN_001f1c98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_00189140(*(long *)(param_1 + 0x1d0),0xffffffff);
    if (*(long **)(param_1 + 0x1d0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1d0) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x150);
  if (lVar2 != 0) {
    FUN_001f3ee8(lVar2);
    FUN_00185ac4(lVar2);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_001f5330();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x148);
  if (lVar2 != 0) {
    FUN_001f3d60(lVar2);
    FUN_00185ac4(lVar2);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  FUN_0018ac30(param_1 + 0x1d8);
  if (*(long *)(param_1 + 0x1b0) != 0) {
    *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b0);
    FUN_00187e4c();
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x198);
    FUN_00187e4c();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
    FUN_00187e4c();
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x128);
    FUN_00187e4c();
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined **)(param_1 + 0x100) = puVar1;
  FUN_0018b1a0(param_1 + 0x100);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0xb0) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x88) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x60) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x30) = puVar1;
  FUN_0018b1a0();
  *(long *)(param_1 + 8) = (long)puVar1;
  FUN_0018b1a0((long *)(param_1 + 8));
  return;
}

