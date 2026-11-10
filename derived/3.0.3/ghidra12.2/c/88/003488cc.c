
void FUN_003488cc(undefined4 param_1,long param_2,long param_3,undefined4 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  (**(code **)PTR_DAT_04bcf290)(*(undefined8 *)(param_2 + 0xb0),0,0,0x7fffffff,0x7fffffff);
  (**(code **)PTR_DAT_04bcf1e0)(*(undefined8 *)(param_2 + 0xb0),0,0,0,uVar1,uVar2);
  if (param_5 == 3) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 1;
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 1) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
                    /* WARNING: Could not recover jumptable at 0x00348990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_04bcf298)(param_1,*(undefined8 *)(param_2 + 0xb0),1,param_4,0);
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x003489e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf298)(param_1,uVar1,uVar2,param_4,0xffffffff);
  return;
}

