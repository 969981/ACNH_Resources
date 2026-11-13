
undefined8 FUN_0124f7e0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if ((8 < iVar2 - 0x23U) &&
     (iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), 5 < iVar2 - 0x12U)) {
    return 0;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      uVar4 = 0;
      goto LAB_0124f894;
    }
  }
  uVar3 = FUN_0122a4e0();
  uVar4 = 1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
LAB_0124f894:
  uVar4 = FUN_0122ade0(param_2,uVar4);
  return uVar4;
}

