
void FUN_01bd3c54(long param_1)

{
  undefined4 local_24;
  uint uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  if (*(char *)(param_1 + 0x251) != '\0') {
    local_1c = 0x3f80000000000000;
    uStack_20 = (uint)*(ushort *)(param_1 + 0x280);
    local_24 = 0x107;
    local_14 = (uint)*(byte *)(param_1 + 0x250);
    if (*(char *)(param_1 + 0x252) != '\0') {
      local_24 = 0x9f;
    }
    (**(code **)(**(long **)(param_1 + 0x268) + 0x288))(*(long **)(param_1 + 0x268),&local_24);
  }
  return;
}

