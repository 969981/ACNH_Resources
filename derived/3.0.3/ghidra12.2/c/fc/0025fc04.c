
void FUN_0025fc04(long *param_1)

{
  undefined4 in_w4;
  
  *(undefined4 *)(param_1 + 0xc) = in_w4;
                    /* WARNING: Could not recover jumptable at 0x0025fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}

