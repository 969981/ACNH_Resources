
undefined8 FUN_004666f0(undefined8 param_1,ushort *param_2,undefined8 param_3,long *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  lVar4 = FUN_00426d90(param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00426fc0(lVar4);
    uVar5 = FUN_00428370(lVar4);
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
  }
  uVar6 = param_4[3];
  *param_4 = (ulong)uVar1 + (long)param_2;
  param_4[1] = lVar4;
  *(uint *)(param_4 + 2) = (uint)uVar2;
  *(undefined4 *)((long)param_4 + 0x14) = uVar3;
  param_4[3] = uVar5;
  if ((uVar6 & 1) != 0) {
    FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
  }
  return 0;
}

