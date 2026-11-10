
void FUN_0037ba78(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bcfae0;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 9 & 1) == 0) {
    FUN_00348090(param_2,*(undefined8 *)(param_1 + 0x40));
    return;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) +
                   ((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) +
                   ((ulong)(uVar2 >> 2) & 3) * 0x14);
  (**(code **)PTR_DAT_04bcfae0)
            (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)(&DAT_04058080 + (ulong)*pbVar1 * 4));
  (*DAT_04c62a78)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0));
  FUN_00348090(param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0037bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar3)(*(long *)(param_1 + 0x40) + 8,8);
  return;
}

