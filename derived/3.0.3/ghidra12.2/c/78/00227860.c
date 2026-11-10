
void FUN_00227860(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00221300();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_04bcd020;
    do {
      uVar2 = FUN_0022131c(param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = FUN_002212bc(param_1);
        if (iVar1 != 2) {
          return;
        }
        break;
      }
      FUN_00290904((long)(lVar3 * (param_2 & 0xffffffff)) / 1000);
      uVar2 = FUN_00221300(param_1);
    } while ((uVar2 & 1) == 0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)(param_1 + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00227910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}

