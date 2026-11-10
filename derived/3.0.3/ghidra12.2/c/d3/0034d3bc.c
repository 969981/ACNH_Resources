
void FUN_0034d3bc(undefined8 param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (**(code **)PTR_DAT_04bcf918)();
  uVar1 = *(ushort *)(param_2 + 6);
  uVar2 = uVar1 >> 4 & 3;
  if (uVar2 == 2) {
    iVar5 = 5;
    if ((uVar1 & 3) != 2) {
      iVar5 = 1;
    }
    iVar3 = 3;
    if ((uVar1 & 3) != 1) {
      iVar3 = iVar5;
    }
  }
  else {
    if (uVar2 != 1) goto LAB_0034d578;
    iVar3 = 2;
    if ((uVar1 & 3) != 1) {
      iVar3 = (uint)((uVar1 & 3) == 2) << 2;
    }
  }
  uVar1 = uVar1 >> 2 & 3;
  if (uVar1 == 1) {
    uVar4 = 0;
  }
  else {
    if (uVar1 != 2) {
LAB_0034d578:
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    uVar4 = 1;
  }
  (**(code **)PTR_DAT_04bcf920)(param_1,iVar3,uVar4);
  (*DAT_04c623f8)(param_1,*(undefined4 *)(&DAT_04130c58 + (ulong)*param_2 * 4),
                  *(undefined4 *)(&DAT_04130c58 + (ulong)param_2[1] * 4),
                  *(undefined4 *)(&DAT_04130c58 + (ulong)param_2[2] * 4));
  (**(code **)PTR_DAT_04bcf930)(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_1)
  ;
  (**(code **)PTR_DAT_04bcf938)(*(undefined4 *)(param_2 + 0x10),param_1);
  (*DAT_04c62410)(param_1,*(ushort *)(param_2 + 6) >> 7 & 1,
                  *(undefined4 *)(&DAT_040582c0 + (ulong)param_2[3] * 4));
  (*DAT_04c62418)(param_1,&UNK_04130c90 + (ulong)param_2[4] * 0x10);
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 >> 6 & 1) != 0) {
    uVar6 = NEON_ucvtf((uint)param_2[5]);
    (**(code **)PTR_DAT_04bcf960)(uVar6,param_1);
    uVar1 = *(ushort *)(param_2 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0034d574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c62438)(param_1,*(undefined4 *)(&DAT_04130c84 + (ulong)(uVar1 >> 8 & 3) * 4));
  return;
}

