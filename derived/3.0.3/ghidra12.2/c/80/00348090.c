
void FUN_00348090(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04bcf160;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x25);
  if (uVar3 != 0) {
    lVar2 = *param_2;
    do {
      (**(code **)puVar1)(*(undefined8 *)(param_1 + 0xb0),lVar2);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)PTR_DAT_04bcf168)(*(undefined8 *)(param_1 + 0xb0),(long)param_2 + 0xc);
  (**(code **)PTR_DAT_04bcf170)(*(undefined8 *)(param_1 + 0xb0),param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00348130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf178)(*(undefined8 *)(param_1 + 0xb0),param_2 + 2);
  return;
}

