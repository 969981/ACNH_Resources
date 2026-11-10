
undefined8 FUN_00278f90(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_0026c10c(DAT_04c603c8);
  if (-1 < lVar1) {
    if ((*(int *)(*(long *)(DAT_04c603c8 + 0x50) + 0x158) == 0) &&
       (uVar2 = FUN_0026b3b4(), lVar1 = DAT_04c603c8, (uVar2 & 1) == 0)) {
      *(undefined1 *)(DAT_04c603c8 + 0x9a) = 0;
      uVar2 = FUN_0027abe8(*(undefined8 *)(lVar1 + 0x18));
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        FUN_002211bc(*(undefined8 *)(DAT_04c603c8 + 0x18),0);
        if (*(char *)(*(long *)(DAT_04c603c8 + 0x20) + 0x104) != '\0') {
          FUN_0027fa50();
          (**(code **)(**(long **)(DAT_04c603c8 + 0x20) + 0x10))(*(long **)(DAT_04c603c8 + 0x20),0);
        }
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

