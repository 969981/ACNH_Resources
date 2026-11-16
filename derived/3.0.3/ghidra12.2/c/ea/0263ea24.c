
undefined8 FUN_0263ea24(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0261fb40(*(undefined8 *)PTR_DAT_04bb46f0,param_1,param_2,param_3,param_4);
  if (((uVar2 & 1) == 0) || (*(short *)(param_1 + 8) == -2)) {
    uVar3 = 0;
    uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

