
undefined8 FUN_0343c0f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_1;
      uStack_4c = param_1[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
      }
      uVar3 = FUN_01af9000(&local_58);
      if ((uVar3 & 1) != 0) {
        lVar6 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(param_2);
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            local_48 = 0;
            local_58 = &PTR_FUN_04a36b50;
            local_50 = *param_2;
            uStack_4c = param_2[1];
            uVar2 = FUN_0277d6c4(&local_50);
            if (*(long *)puVar1 != 0) {
              lVar5 = *(long *)(lVar5 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                lVar5 = *(long *)PTR_DAT_04bc0428;
                uVar2 = FUN_0277d6c4(param_2);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0))
                {
                  local_48 = lVar5;
                }
              }
            }
            uVar3 = FUN_01af9000(&local_58);
            if (((uVar3 & 1) != 0) && (uVar4 = FUN_01a4f270(param_1,param_2), (int)uVar4 != 0)) {
              return uVar4;
            }
          }
        }
      }
    }
  }
  return 0;
}

