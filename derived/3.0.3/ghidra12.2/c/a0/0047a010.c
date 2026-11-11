
undefined8 FUN_0047a010(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = FUN_0047d060();
  uVar3 = (uint)uVar2;
  if (*(uint *)(param_1 + 1) == uVar3) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar3) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar3 = *(uint *)(param_1 + 1);
    }
    lVar1 = *param_1 + (long)(int)uVar3 * 0x10;
    FUN_0043bd90(lVar1,*param_2,param_2[1]);
    *(undefined4 *)(lVar1 + 8) = *param_3;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  return uVar2;
}

