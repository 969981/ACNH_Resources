
undefined8 FUN_00167b24(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20)) < *param_2) {
    uVar1 = 0xfffffdf6;
  }
  else {
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
    FUN_001674fc();
    lVar2 = FUN_00167b94(*(undefined8 *)(lVar3 + 0x20),param_2[3],param_2[2]);
    uVar1 = 0;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + lVar2;
  }
  return uVar1;
}

