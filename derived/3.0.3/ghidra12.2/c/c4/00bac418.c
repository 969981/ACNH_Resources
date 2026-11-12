
bool FUN_00bac418(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (local_38 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8),
         local_38 != (uint *)0x0)) {
        uVar3 = *local_38;
        if (uVar3 != 0 && local_38 != (uint *)(ulong)uVar3) {
          puVar5 = (uint *)((long)local_38 - (long)(ulong)uVar3);
          if (((*puVar5 != 0) && (uVar3 = puVar5[1], uVar3 != 0)) && ((ulong)(ushort)puVar5[2] != 0)
             ) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)local_38 - lVar6) / (ulong)uVar3);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (0xff43 < (ushort)(*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) - 0xbdU))) {
                return false;
              }
            }
          }
        }
        iVar4 = FUN_01ae7550(&local_48);
        if (((iVar4 != 10) && (iVar4 = FUN_01ae7550(&local_48), iVar4 != 0xb)) &&
           ((iVar4 = FUN_01ae7550(&local_48), iVar4 != 0xc &&
            (iVar4 = FUN_01ae7550(&local_48), iVar4 != 0xe)))) {
          iVar4 = FUN_01ae7550(&local_48);
          return iVar4 != 0xd;
        }
      }
    }
  }
  return false;
}

