
bool FUN_01250394(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_0277e158(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),3);
    if ((uVar3 & 1) == 0) {
      iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
      bVar1 = iVar2 == 0x2d;
      if (!bVar1) {
        return bVar1;
      }
      if ((param_2 & 1) == 0) {
        return bVar1;
      }
    }
    else if ((param_2 & 1) == 0) goto LAB_012503bc;
    iVar2 = FUN_0123d070(*(undefined8 *)(param_1 + 0x10));
    bVar1 = iVar2 == 0xfffe || iVar2 == 0;
  }
  else {
LAB_012503bc:
    bVar1 = true;
  }
  return bVar1;
}

