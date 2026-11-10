
undefined8 FUN_0016037c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0xa30);
  if (lVar3 == 0) {
LAB_001603c8:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa28) == 2) {
      if (param_2 < lVar3) goto LAB_001603c8;
      pcVar2 = "The requested document is not old enough\n";
    }
    else {
      if (lVar3 < param_2) goto LAB_001603c8;
      pcVar2 = "The requested document is not new enough\n";
    }
    FUN_0014d430(param_1,pcVar2);
    uVar1 = 0;
    *(byte *)(param_1 + 0x16f8) = *(byte *)(param_1 + 0x16f8) | 1;
  }
  return uVar1;
}

