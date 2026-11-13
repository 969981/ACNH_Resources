
undefined8 FUN_01372490(uint *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_48 = lVar6;
          }
        }
      }
      uVar5 = FUN_01af0020(&local_58);
      if ((uVar5 & 1) != 0) {
        iVar3 = FUN_01af02d0(&local_58);
        iVar4 = FUN_01af2610(&local_58);
        if ((iVar3 != iVar4) && (uVar2 = *param_1, uVar2 != 0)) {
          lVar6 = *(long *)(param_1 + 2);
          uVar7 = 0;
          do {
            lVar8 = lVar6 + ((long)((ulong)uVar7 << 0x20) >> 0x1c);
            uVar5 = FUN_0277d7b4(param_2,lVar8);
            if (((uVar5 & 1) != 0) && (uVar5 = FUN_01af28ac(&local_58,lVar8), (uVar5 & 1) != 0)) {
              return 1;
            }
            uVar7 = uVar7 + 1;
          } while (uVar2 != uVar7);
        }
      }
    }
  }
  return 0;
}

