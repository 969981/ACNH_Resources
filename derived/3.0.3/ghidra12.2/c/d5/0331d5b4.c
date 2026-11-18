
void FUN_0331d5b4(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)((long)param_1 + 0x17d9) = 1;
  (**(code **)(*param_1 + 0x180))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0331d604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,uVar1);
  return;
}

