
undefined8 FUN_001ad354(long param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int local_28;
  undefined4 uStack_24;
  
  FUN_00187aac();
  uVar3 = FUN_00187db0();
  FUN_001896d4(uVar3,2);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
    uVar2 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
    cVar1 = *(char *)(param_1 + 0x70);
  }
  else {
    uVar2 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
    cVar1 = *(char *)(param_1 + 0x70);
  }
  if (cVar1 == '\0') {
    FUN_001b8590(param_1 + 8);
    FUN_001e17d0(*(undefined8 *)(param_1 + 0x10),uVar2);
    *(undefined1 *)(param_1 + 0x71) = 0;
    lVar4 = *param_3;
  }
  else {
    FUN_001e17d0(*(undefined8 *)(param_1 + 0x10),uVar2);
    *(undefined1 *)(param_1 + 0x71) = 0;
    lVar4 = *param_3;
  }
  if (lVar4 != 0) {
    FUN_00187810(&local_28);
    *(int *)(param_1 + 0x80) = local_28 - (int)*param_3;
  }
  FUN_00187aac();
  uVar3 = FUN_00187db0();
  FUN_001896e4(uVar3,2);
  FUN_00187810(&local_28);
  *(ulong *)(param_1 + 0x88) = CONCAT44(uStack_24,local_28);
  return 1;
}

