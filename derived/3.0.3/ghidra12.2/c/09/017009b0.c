
uint FUN_017009b0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_1;
      uStack_4c = param_1[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar3 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
            local_48 = lVar3;
          }
        }
      }
      local_40[0] = 0;
      local_40[1] = 0;
      FUN_01adab50(&local_58,local_40);
      local_3c = 0;
      do {
        if (local_3c != 0) {
          if (local_3c < 0xe) {
            uVar2 = local_3c + 7;
            if (-1 < (int)local_3c) {
              uVar2 = local_3c;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_40[(uint)((int)uVar2 >> 3)] >> (ulong)(local_3c & 7) & 1) != 0)) {
              if (local_3c == 9) {
                local_38 = local_3c;
                local_34 = local_3c;
                uVar2 = FUN_01ad8fd0(&local_58);
                goto LAB_01700b48;
              }
              break;
            }
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c != 0xe);
    }
  }
  uVar2 = 0;
LAB_01700b48:
  return uVar2 & 1;
}

