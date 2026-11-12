
bool FUN_00bb0218(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *local_28;
  
  local_30 = *param_2;
  uStack_2c = param_2[1];
  local_28 = (uint *)0x0;
  local_38 = PTR_DAT_04bc0510 + 0x10;
  FUN_0277d6c4(&local_30);
  lVar5 = *(long *)PTR_DAT_04bc0428;
  uVar2 = FUN_0277d6c4(param_2);
  local_28 = *(uint **)(*(long *)(lVar5 + 0x1e0) +
                       (long)(int)((uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8)) * 8);
  uVar2 = *local_28;
  if (uVar2 != 0 && local_28 != (uint *)(ulong)uVar2) {
    puVar4 = (uint *)((long)local_28 - (long)(ulong)uVar2);
    if (((*puVar4 != 0) && (uVar2 = puVar4[1], uVar2 != 0)) && ((ulong)(ushort)puVar4[2] != 0)) {
      lVar5 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar4 + lVar5 + (ulong)(ushort)puVar4[2] * 8;
      if (lVar5 != 0) {
        uVar1 = 0;
        if ((ulong)uVar2 != 0) {
          uVar1 = (uint)((ulong)((long)local_28 - lVar5) / (ulong)uVar2);
        }
        if (*puVar4 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326e40) && (*(short *)(DAT_05326e48 + (long)(int)uVar1 * 2) == 1)) {
          iVar3 = FUN_01ad7260(&local_38);
          return iVar3 != 0;
        }
      }
    }
  }
  return false;
}

