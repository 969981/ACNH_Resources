
void FUN_002a43a8(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x002a43d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}

