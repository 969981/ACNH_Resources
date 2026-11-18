
ulong FUN_03423cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar2 = FUN_01afcfa0();
  if ((iVar2 == 0) || (iVar2 = FUN_01b006b0(param_1), iVar2 != 2)) {
    uVar4 = FUN_01afcfa0(param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    iVar2 = FUN_01b006b0(param_1);
    if (iVar2 != 1) {
      return 0;
    }
  }
  uVar3 = FUN_02f5a2f0(2);
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (0x11 < uVar3) {
    uVar3 = 0;
  }
  if ((*(char *)(&DAT_056c6838)[(ulong)uVar3 * 7] != '\0') &&
     (uVar4 = FUN_0274bce0(param_2,&DAT_056c6830 + (ulong)uVar3 * 7), (int)uVar4 == 0)) {
    return uVar4;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return 1;
    }
  }
  if ((DAT_0537d558 == 0) || (*(uint *)(DAT_0537d558 + 0x80) < 2)) {
    return 1;
  }
  if ((*(uint *)(DAT_0537d558 + 0x80) & 0xfffffffe) != 2) {
    return 1;
  }
  if (*(long *)(DAT_0537d558 + 0x10) == 0) {
    return 1;
  }
  return (ulong)(*(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x3e4) == 1);
}

