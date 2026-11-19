
void FUN_0387e5d0(long *param_1,long param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x68))();
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    uVar1 = *(uint *)(param_2 + 0xc);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
    uVar1 = *(uint *)(param_2 + 0xc);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
  }
  (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  (**(code **)(*param_1 + 200))(param_1,param_2);
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2);
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0387e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1,param_2);
  return;
}

