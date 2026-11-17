
void FUN_0311a000(undefined2 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined2 local_30 [2];
  undefined2 local_2c [2];
  uint local_28;
  undefined4 local_24;
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  uVar4 = FUN_01b087d0(param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  local_24 = 0xac;
  puVar5 = *(uint **)(param_2 + 0x10);
  if (puVar5 == (uint *)0x0) {
    local_28 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    local_28 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      local_28 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_28 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_28 < 0xbd))
            goto LAB_0311a0cc;
          }
        }
        local_28 = 0;
      }
    }
  }
LAB_0311a0cc:
  if (local_28 == 0xac) {
    FUN_01b086f4(local_2c,param_2);
  }
  else {
    uVar4 = FUN_01ae89e0(param_2);
    if ((uVar4 & 1) == 0) {
      return;
    }
    FUN_01b08c14(local_30,param_2);
    local_2c[0] = local_30[0];
  }
  *param_1 = local_2c[0];
  return;
}

