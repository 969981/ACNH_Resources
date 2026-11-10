
void FUN_001f9e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_58 [40];
  
  puVar1 = PTR_PTR_04bcc9a8;
  plVar2 = *(long **)PTR_PTR_04bcc9a8;
  if (plVar2 == (long *)0x0) {
    plVar2 = &DAT_04c5ee78;
    *(undefined8 **)PTR_PTR_04bcc9a8 = &DAT_04c5ee78;
  }
  if (DAT_04c5eb90 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001f9f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(param_1,plVar2,param_2,param_3);
    return;
  }
  FUN_0019c934(param_1);
  uVar3 = FUN_0019498c(DAT_04c5eb90,param_2,param_3,param_1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(**(long **)puVar1 + 0x10))(auStack_58,*(long **)puVar1,param_2,param_3);
    FUN_00194940(param_1,auStack_58);
    FUN_0019cd34(auStack_58);
    FUN_00194b8c(DAT_04c5eb90,param_2,param_3,param_1);
  }
  return;
}

