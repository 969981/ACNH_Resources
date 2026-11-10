
void FUN_0025eee8(long *param_1,void *param_2,ushort param_3)

{
  memcpy((void *)(param_1[1] +
                 (ulong)*(ushort *)((long)param_1 + 0x16) + (ulong)*(ushort *)((long)param_1 + 0x14)
                 ),param_2,(ulong)param_3);
  *(ushort *)((long)param_1 + 0x16) = *(short *)((long)param_1 + 0x16) + param_3;
                    /* WARNING: Could not recover jumptable at 0x0025ef34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

