
void FUN_0237561c(byte *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte local_30 [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_28 = (uint)*(ushort *)(param_2 + 3);
  local_24 = local_28;
  puVar4 = (uint *)FUN_0251d928(local_28);
  uVar3 = *puVar4;
  if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
    puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    local_2c = 0;
    if (*puVar5 == 0) goto LAB_0237565c;
    uVar3 = puVar5[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
        }
        if (*puVar5 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05490140) &&
           (local_2c = (uint)*(ushort *)(DAT_05490148 + (long)(int)uVar2 * 2), local_2c < 2))
        goto LAB_0237565c;
      }
    }
  }
  local_2c = 0;
LAB_0237565c:
  if (local_2c == 1) {
    local_30[0] = *param_1;
    if (7 < local_30[0]) {
      local_30[0] = 0xff;
    }
    (**(code **)(PTR_PTR_04bc3030 + (long)(int)local_28 * 8))(local_30,param_2);
  }
  return;
}

