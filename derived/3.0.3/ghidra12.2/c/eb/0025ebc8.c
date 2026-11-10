
undefined8 FUN_0025ebc8(long param_1)

{
  ulong uVar1;
  undefined1 auStack_20 [16];
  
  uVar1 = FUN_002586b0(*(undefined8 *)(param_1 + 0x90));
  if (((((uVar1 & 1) == 0) && ((int)(*(long **)(param_1 + 0x90))[0x84] == 0)) ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x1a8))(), (uVar1 & 1) != 0)) ||
     (uVar1 = FUN_00259484(*(undefined8 *)(param_1 + 0x90)), (uVar1 & 1) != 0)) {
    FUN_0024f7a4(auStack_20,*(undefined8 *)(param_1 + 0x88),param_1 + 0x58);
    FUN_002211bc(*(undefined8 *)(param_1 + 0x88),1);
    *(undefined1 **)(param_1 + 0x30) = &LAB_0025ec84;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::WaitConnectionStatusUpdated";
  }
  return 5;
}

