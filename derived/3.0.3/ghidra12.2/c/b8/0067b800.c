
void FUN_0067b800(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_006725b0();
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  *param_1 = &PTR_LAB_048eb078;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 9);
    uVar3 = param_2[8];
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,0x30,0,0,(long)param_1 + 0x4c);
      param_1[8] = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 * 0x30);
    *(int *)(param_1 + 9) = iVar1;
    uVar2 = param_2[10];
    iVar1 = *(int *)(param_2 + 0xb);
    uVar3 = param_1[10];
    if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) < iVar1) {
      uVar3 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar3,*(undefined4 *)(param_1 + 0xb),
                           (long)param_1 + 0x5c);
      param_1[10] = uVar3;
    }
    FUN_0043aa30(uVar3,uVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 0xb) = iVar1;
  }
  return;
}

