
undefined8 FUN_0025ee74(long param_1,long *param_2)

{
  long lVar1;
  short sVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = (ulong)*(ushort *)(param_1 + 0x18) + (ulong)*(ushort *)(param_1 + 0x14);
  (**(code **)(*param_2 + 0x18))
            (auStack_30,param_2,*(long *)(param_1 + 8) + lVar1,
             (uint)*(ushort *)(param_1 + 0x10) - (int)lVar1);
  sVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + sVar2;
  return 1;
}

