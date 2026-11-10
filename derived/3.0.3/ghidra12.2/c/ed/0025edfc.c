
undefined8 FUN_0025edfc(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_24 [16];
  undefined4 local_14;
  
  local_14 = 0;
  lVar1 = (ulong)*(ushort *)((long)param_1 + 0x16) + (ulong)*(ushort *)((long)param_1 + 0x14);
  (**(code **)(*param_2 + 0x10))
            (auStack_24,param_2,param_1[1] + lVar1,&local_14,
             (uint)*(ushort *)(param_1 + 2) - (int)lVar1);
  *(short *)((long)param_1 + 0x16) = *(short *)((long)param_1 + 0x16) + (short)local_14;
  (**(code **)(*param_1 + 0x10))(param_1);
  return 1;
}

