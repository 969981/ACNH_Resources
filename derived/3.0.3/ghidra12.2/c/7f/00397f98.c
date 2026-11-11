
undefined8
FUN_00397f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char acStack_97 [71];
  
  nn::util::SNPrintf(acStack_97,0x47,"%s_%d",param_7,(ulong)*(uint *)(param_6 + 4));
  uVar1 = *(ushort *)(param_6 + 10) - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined4 *)(&DAT_041352b4 + (long)(short)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  FUN_00397480(param_1 + 0x20,param_2,param_3,param_5,param_4,param_8,0,0);
  FUN_00397c90(param_1,param_3,param_5);
  return 1;
}

