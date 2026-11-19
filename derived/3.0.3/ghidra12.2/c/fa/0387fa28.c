
void FUN_0387fa28(long *param_1)

{
  uint uVar1;
  
  (**(code **)(**(long **)(DAT_05ae6a60 + 0x90) + 0x40))();
  uVar1 = *(uint *)((long)param_1 + 0xa4);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xf8))(param_1);
    uVar1 = *(uint *)((long)param_1 + 0xa4) & 0xfffffffe;
    *(uint *)((long)param_1 + 0xa4) = uVar1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    uVar1 = *(uint *)((long)param_1 + 0xa4) & 0xfffffffd;
    *(uint *)((long)param_1 + 0xa4) = uVar1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    *(uint *)((long)param_1 + 0xa4) = *(uint *)((long)param_1 + 0xa4) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0xd8))(param_1);
  if ((char)param_1[0x14] == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0387fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xb] + 0x18))();
  return;
}

