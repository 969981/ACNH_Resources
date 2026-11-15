
ulong FUN_0241b874(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = PTR_DAT_04bb4128;
  if (*(long *)(param_1 + 0xdc8) == 0) {
    return (ulong)DAT_04c9a0c8;
  }
  iVar4 = FUN_020e78f0(*(undefined8 *)PTR_DAT_04bb4128,param_1 + 0x1ee8);
  if (iVar4 == 5) {
    lVar5 = *(long *)puVar3;
    uVar2 = 5;
LAB_0241b904:
    lVar1 = lVar5 + 0x344 + (ulong)uVar2 * 8;
    if (6 < uVar2) {
      lVar1 = lVar5 + 0x344;
    }
    uVar6 = (ulong)*(uint *)(lVar1 + 4);
  }
  else {
    if (iVar4 == 0) {
      lVar5 = *(long *)puVar3;
      if (7 < *(byte *)(lVar5 + 0x269)) {
        uVar2 = 0;
        goto LAB_0241b904;
      }
    }
    else {
      lVar5 = *(long *)puVar3;
    }
    uVar6 = FUN_020e7d28(lVar5,param_1 + 0x1ee8);
  }
  return uVar6;
}

