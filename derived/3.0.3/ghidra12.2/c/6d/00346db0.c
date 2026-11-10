
void FUN_00346db0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((char)param_1[0xc] != '\0') {
    if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + (long)*param_1 * 2 + 4)) {
      *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + (long)*param_1 * 2 + 4);
    }
    piVar4 = param_1 + (long)*param_1 * 0x6a + 0xe;
    FUN_00347cdc(piVar4,0,*(undefined8 *)(piVar4 + 0x5c));
    FUN_00347cd8(piVar4);
    iVar1 = param_1[1];
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (*param_1 + 1) / iVar1;
    }
    iVar1 = (*param_1 + 1) - iVar2 * iVar1;
    piVar4 = param_1 + (long)iVar1 * 0x6a + 0xe;
    *param_1 = iVar1;
    piVar4[0x66] = 0;
    piVar4[0x67] = 0;
    uVar3 = FUN_00347cc4(piVar4);
    iVar1 = *param_1;
    *(undefined8 *)(piVar4 + 0x68) = uVar3;
    (param_1 + (long)iVar1 * 2 + 4)[0] = 0;
    (param_1 + (long)iVar1 * 2 + 4)[1] = 0;
  }
  return;
}

