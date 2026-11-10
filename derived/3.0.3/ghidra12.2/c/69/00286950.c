
long FUN_00286950(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  FUN_00286140(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x104),PTR_LAB_04bcdcb8);
  lVar3 = *(long *)(param_1 + 0xd8);
  lVar4 = *(long *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0xe8) < 1) {
    lVar3 = 0;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = lVar3 - *(int *)(param_1 + 0xec);
  }
  if (*(int *)(param_1 + 0x100) < 1) {
    lVar4 = 0;
  }
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = lVar4 - *(int *)(param_1 + 0x104);
  }
  if (uVar2 < uVar1) {
    lVar4 = uVar1 - *(long *)(param_1 + 0x30);
    FUN_002860e8((long)*(int *)(param_1 + 0xec) + uVar1);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x48))
                      (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar4);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x38) = lVar4;
      return lVar4;
    }
  }
  return *(long *)(param_1 + 0x38);
}

