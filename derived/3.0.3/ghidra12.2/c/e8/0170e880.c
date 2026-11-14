
undefined8 FUN_0170e880(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  byte local_40 [16];
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = (undefined **)CONCAT44(local_58._4_4_,4);
  if ((*(uint *)(param_1 + 0x15f4) >> 4 & 1) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    lVar5 = *(long *)(param_1 + 0x1480) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0x1480) + 0x10) & 1) * 0x20;
    puVar1 = (undefined4 *)(lVar5 + 0x14);
    uVar4 = FUN_0277d6c4(puVar1);
    lVar6 = *(long *)puVar3;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_58 = &PTR_FUN_04a36b50;
        local_50 = *puVar1;
        local_4c = *(undefined4 *)(lVar5 + 0x18);
        local_48 = 0;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar5 = *(long *)(lVar6 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(puVar1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
              local_48 = lVar5;
            }
          }
        }
        local_40[0] = 0;
        local_40[1] = 0;
        FUN_01adab50(&local_58,local_40);
        uVar4 = 0;
        do {
          if ((uVar4 != 0) && (uVar4 < 0xe)) {
            uVar2 = uVar4 + 7;
            if (-1 < (int)uVar4) {
              uVar2 = uVar4;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_40[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar4 & 7) & 1) != 0)) {
              if (uVar4 == 9) {
                return 1;
              }
              return 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0xe);
      }
    }
  }
  return 0;
}

