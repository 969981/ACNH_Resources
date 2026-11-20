
undefined4 FUN_04002c24(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x260) - 1U < 2) {
    if (*(int *)(param_1 + 0x260) == 2) {
      nn::os::WaitThread((ThreadType *)(param_1 + 0x48));
    }
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x48));
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x208));
    (**(code **)(**(long **)(param_1 + 600) + 0x18))
              (*(long **)(param_1 + 600),*(undefined8 *)(param_1 + 0x230));
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x230) = 0;
    lVar1 = *(long *)(param_1 + 0x248);
  }
  else {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x248);
  }
  if (lVar1 != 0) {
    FUN_04002f3c(lVar1 + 0x10);
    (**(code **)(**(long **)(param_1 + 600) + 0x18))
              (*(long **)(param_1 + 600),*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    (**(code **)(**(long **)(param_1 + 600) + 0x18))();
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  *(undefined4 *)(param_1 + 0x260) = 3;
  return uVar2;
}

