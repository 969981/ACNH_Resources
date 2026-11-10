
bool FUN_00197568(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(long *)(lVar1 + 0x18) - lVar2;
  if (uVar3 < 8) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 7 < uVar3;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 8;
  *param_2 = uVar4;
  return 7 < uVar3;
}

