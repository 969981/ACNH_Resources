
bool FUN_028584ac(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (local_38 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8),
         local_38 != (uint *)0x0)) {
        uVar4 = *local_38;
        if (uVar4 != 0 && local_38 != (uint *)(ulong)uVar4) {
          puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar4);
          if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)
             ) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar7 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar4);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) {
                if (uVar2 - 9 < 2) {
                  return true;
                }
                if (uVar2 != 0) {
                  return false;
                }
              }
            }
          }
        }
        iVar5 = FUN_01ae7550(&local_48);
        if (((iVar5 != 10) && (iVar5 = FUN_01ae7550(&local_48), iVar5 != 0xb)) &&
           ((iVar5 = FUN_01ae7550(&local_48), iVar5 != 0xc &&
            (iVar5 = FUN_01ae7550(&local_48), iVar5 != 0xe)))) {
          iVar5 = FUN_01ae7550(&local_48);
          return iVar5 != 0xd;
        }
      }
    }
  }
  return false;
}

