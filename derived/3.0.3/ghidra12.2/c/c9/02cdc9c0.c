
void FUN_02cdc9c0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_6e [2];
  undefined1 auStack_6c [2];
  undefined1 auStack_6a [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_5e [2];
  undefined1 auStack_5c [2];
  undefined1 auStack_5a [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  uVar4 = FUN_02665700(param_3);
  puVar2 = PTR_DAT_04bc0510;
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar4 & 1) != 0) {
    local_50 = *param_3;
    uStack_4c = param_3[1];
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_48 = 0;
    uVar3 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
          local_48 = lVar5;
        }
      }
    }
    FUN_01b086f4(auStack_5a,&local_58);
    FUN_007ef010(auStack_5e,auStack_5a);
    FUN_02657430(auStack_5c,param_2,auStack_5e);
    FUN_007ef010(auStack_6a,auStack_5c);
    FUN_00805ba8(&local_68,auStack_6a);
    *param_1 = local_68;
    param_1[1] = uStack_64;
  }
  uVar4 = FUN_02665700(param_3 + 2);
  if ((uVar4 & 1) != 0) {
    local_50 = param_3[2];
    uStack_4c = param_3[3];
    lVar5 = *(long *)puVar1;
    local_58 = puVar2 + 0x10;
    local_48 = 0;
    uVar3 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3 + 2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
          local_48 = lVar5;
        }
      }
    }
    FUN_01b086f4(auStack_5a,&local_58);
    FUN_007ef010(auStack_6c,auStack_5a);
    FUN_026572b0(auStack_5c,param_2,auStack_6c);
    FUN_007ef010(auStack_6e,auStack_5c);
    FUN_00805ba8(&local_68,auStack_6e);
    param_1[2] = local_68;
    param_1[3] = uStack_64;
  }
  return;
}

