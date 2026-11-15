
undefined8 FUN_023259c8(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  if (((*(char *)(param_1 + 0x17ac) == '\0') && ((*(uint *)(param_1 + 0xed4) >> 0xf & 1) != 0)) &&
     (DAT_04c487d4 != -1)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((puVar1[1] & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) &&
       (uVar2 = FUN_025394e8(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230),1,1),
       (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

