
void FUN_03838610(byte *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = *param_1 & 0xfd;
  FUN_03f45838(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    *param_1 = *param_1 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(DAT_05ae09a0,*(undefined8 *)(param_1 + 8),0);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_03f45838(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  iVar1 = *(int *)(param_1 + 0x1c) + -1;
  if (((*(int *)(param_1 + 0x1c) < 1) || (*(int *)(param_1 + 0x1c) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_03f44508();
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x038386c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}

