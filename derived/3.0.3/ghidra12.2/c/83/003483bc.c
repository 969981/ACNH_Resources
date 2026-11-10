
void FUN_003483bc(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  (**(code **)PTR_DAT_04bcf1f0)
            ((float)(double)param_2[4],(float)(double)param_2[5],*(undefined8 *)(param_1 + 0xb0));
  puVar3 = PTR_DAT_04bcf1f8;
  (**(code **)PTR_DAT_04bcf1f8)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 2);
  puVar4 = PTR_DAT_04bcf200;
  (**(code **)PTR_DAT_04bcf200)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 6);
  if ((int)param_2[1] < 2) {
    return;
  }
  uVar2 = (int)param_2[1] - 1;
  lVar1 = *param_2 + (ulong)uVar2 * 0x10;
  (**(code **)puVar3)(*(undefined8 *)(param_1 + 0xb0),1,uVar2);
  (**(code **)PTR_DAT_04bcf208)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x003484ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1 + (ulong)uVar2 * 8);
  return;
}

