
ulong FUN_004dc1c0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong local_c0 [18];
  
  FUN_0043bd90(local_c0,*param_2,param_2[1]);
  uVar1 = FUN_00427d40(param_1,local_c0[0] & 0xfffffffffffffffe,0);
  FUN_0043be10(local_c0);
  if (uVar1 < 2) {
    FUN_004225d0(local_c0,&DAT_04084559);
    FUN_00423880(local_c0,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
    uVar1 = FUN_00427d40(param_1,local_c0[0],0);
    FUN_00422550(local_c0);
  }
  uVar2 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  puVar3 = (undefined8 *)FUN_00426d40(uVar1,0x10000);
  *puVar3 = uVar2;
  FUN_004294d0(local_c0,uVar1);
  return local_c0[0];
}

