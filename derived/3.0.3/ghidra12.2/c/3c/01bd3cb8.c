
void FUN_01bd3cb8(long param_1,int *param_2)

{
  int local_24;
  uint uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_24 = *param_2;
  if (local_24 != 0x10e) {
    local_1c = 0x3f80000000000000;
    uStack_20 = (uint)*(ushort *)(param_1 + 0x280);
    local_14 = (uint)*(byte *)(param_1 + 0x250);
    if ((*(char *)(param_1 + 0x252) != '\0') &&
       (((0x38 < local_24 - 0xa6U ||
         ((1L << ((ulong)(local_24 - 0xa6U) & 0x3f) & 0x1f0000000000003U) == 0)) && (local_24 != 0))
       )) {
      local_24 = 0x9f;
    }
    (**(code **)(**(long **)(param_1 + 0x268) + 0x288))(*(long **)(param_1 + 0x268),&local_24);
  }
  return;
}

