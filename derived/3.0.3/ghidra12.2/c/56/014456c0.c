
void FUN_014456c0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x90];
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_1[0x91] < 1) {
      iVar1 = (int)param_1[0x91] + -1;
    }
    memset(puVar2,0,(long)iVar1);
    *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
  }
  puVar2 = (undefined8 *)param_1[0x9b];
  if (puVar2 != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_1[0x9c] < 1) {
      iVar1 = (int)param_1[0x9c] + -1;
    }
    memset(puVar2,0,(long)iVar1);
    *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
  }
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0xff;
  if ((*(uint *)(param_1 + 0x75) >> 2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014457a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1);
  return;
}

