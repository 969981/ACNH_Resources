
void FUN_00348260(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      goto LAB_00348298;
    }
  }
  uVar1 = FUN_0034cdd0(param_3);
LAB_00348298:
                    /* WARNING: Could not recover jumptable at 0x003482b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bc9538)(*(undefined8 *)(param_1 + 0xb0),uVar2,uVar1);
  return;
}

