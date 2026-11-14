
undefined8 FUN_01dd0ed0(long param_1,long *param_2)

{
  void *__s;
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((((*(char *)(param_1 + 0x161) != '\0') && (*(char *)(param_1 + 0x162) != '\0')) &&
      (*(char *)(param_1 + 0x163) == '\0')) && (*(long *)(param_1 + 0x98) != 0)) {
    __s = (void *)(*(long *)(param_1 + 0xa0) + 0x90);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_01dd0f8c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01dd0f8c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01dd0f8c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01dd0f8c:
    uVar3 = (uint)lVar4;
    if (0x3fe < (int)uVar3) {
      uVar3 = 0x3ff;
    }
    memset(__s,0,0x400);
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(__s,(void *)param_2[1],(ulong)uVar3);
    lVar4 = FUN_01dd0780(DAT_0536bac8,*(undefined8 *)(param_1 + 0xa0));
    *(long *)(param_1 + 0xa8) = lVar4;
    uVar2 = 0;
    if (lVar4 != 0) {
      FUN_03ebb160(param_1,3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

