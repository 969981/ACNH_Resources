
uint FUN_01957514(void)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_2c;
  
  lVar4 = DAT_052cc470;
  if ((DAT_052cc470 == 0) ||
     (((*(int *)(DAT_052cc470 + 0x160) != 0 && *(char **)(DAT_052cc470 + 0x168) != (char *)0x0 &&
       (**(char **)(DAT_052cc470 + 0x168) != '\0')) || (1 < *(byte *)(*DAT_0537d558 + 0x476))))) {
LAB_01957568:
    uVar3 = 0;
  }
  else {
    if ((DAT_0537d558[5] != 0) && ((int)DAT_0537d558[0x10] == 1)) {
      local_2c = 0x283;
      lVar1 = DAT_052cc470 + 0x680;
      FUN_0277d4ac(&local_2c);
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x680) + 0x20))(lVar1);
      uVar3 = FUN_0277d6c4(&local_2c);
      if ((0x752 < (uVar3 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar4 + (ulong)((uVar3 & 0xffff) >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) == 0)
         ) goto LAB_01957568;
    }
    if (DAT_04c487d4 == -1) {
      uVar3 = 0;
    }
    else {
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      uVar3 = *(uint *)(puVar2 + 4) & 1;
    }
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

