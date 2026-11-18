
void FUN_03622410(undefined8 param_1,int param_2)

{
  FUN_0363885c();
                    /* WARNING: Could not recover jumptable at 0x03622444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_03622448 +
            (ulong)(byte)(&DAT_04194e7e)[CONCAT44(param_2,param_2 + -0xc0) >> 3 & 0xffffffff] * 4))
            ();
  return;
}

