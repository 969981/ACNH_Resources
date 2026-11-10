
void FUN_00348134(long param_1,long param_2)

{
  undefined *puVar1;
  
  (**(code **)PTR_DAT_04bcf180)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_04bcf188)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 8));
  (**(code **)PTR_DAT_04bcf190)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 0xc));
  puVar1 = PTR_DAT_04bcf198;
  (**(code **)PTR_DAT_04bcf198)(*(undefined8 *)(param_1 + 0xb0),2,*(undefined4 *)(param_2 + 0x10));
  (**(code **)puVar1)(*(undefined8 *)(param_1 + 0xb0),1,*(undefined4 *)(param_2 + 0x14));
  if ((*(ushort *)(param_2 + 0x1a) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003481f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_04bcf1a0)(0,0x3f800000,*(undefined8 *)(param_1 + 0xb0),0);
    return;
  }
  return;
}

