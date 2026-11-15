
undefined1 FUN_01febefc(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_04bb30a0;
  uVar3 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  if (uVar3 < 4) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
    if ((uVar3 & 0xfffffffe) == 6) {
      uVar2 = 2;
    }
    else {
      iVar4 = FUN_0220f3c4(*(long *)(param_1 + 8) + 0x3e0,0);
      uVar2 = iVar4 != 3;
    }
  }
  return uVar2;
}

