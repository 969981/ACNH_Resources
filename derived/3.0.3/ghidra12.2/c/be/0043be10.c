
void FUN_0043be10(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar2 = FUN_0043c4e0(DAT_04c6f050);
  lVar1 = DAT_04c6f058;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  FUN_00438ad0(*(undefined8 *)(lVar1 + 0x58),uVar3 - 1);
  return;
}

