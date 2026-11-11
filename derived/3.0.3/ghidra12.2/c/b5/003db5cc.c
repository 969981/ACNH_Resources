
bool FUN_003db5cc(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined1 auStack_140 [272];
  
  if ((*(uint *)(param_1 + 0x14) == 0) || ((ulong)*(ushort *)(param_1 + 0x18) == 0)) {
    return false;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))
            (*(long **)(param_1 + 8),
             (ulong)*(uint *)(param_1 + 0x14) +
             (ulong)*(ushort *)(param_1 + 0x18) * (param_3 & 0xffffffff),0);
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                    (*(long **)(param_1 + 8),auStack_140,0x100,0);
  if (lVar1 == 0x100) {
    memcpy(param_2,auStack_140,0x100);
  }
  return lVar1 == 0x100;
}

