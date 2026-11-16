
void FUN_027e47a0(uint *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb46f0;
  local_64 = param_2;
  if (lVar7 != 0) {
    lVar9 = 0;
    puVar8 = &DAT_05594ae4;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar6 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(puVar8);
      lVar10 = *(long *)puVar2;
      if (lVar10 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_78 = *puVar8;
          uStack_74 = puVar8[1];
          local_70 = 0;
          local_80 = puVar1;
          uVar3 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar2 != 0) {
            lVar6 = *(long *)(lVar10 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(puVar8);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
                 (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
                local_70 = lVar6;
              }
            }
          }
          FUN_01b05630(&local_88,&local_80);
          local_90 = 0;
          lVar6 = *(long *)puVar2;
          local_98 = local_88;
          uStack_94 = uStack_84;
          local_a0 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_98);
          if (*(long *)puVar2 != 0) {
            lVar6 = *(long *)(lVar6 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(&local_88);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
                 (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
                local_90 = lVar6;
              }
            }
          }
          uVar4 = FUN_01b0c3c8(&local_a0);
          uVar5 = FUN_0261e76c(lVar7,uVar4,&local_64);
          if ((uVar5 & 1) != 0) {
            *param_1 = *param_1 | 1 << (ulong)((uint)lVar9 & 0x1f);
          }
        }
      }
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 2;
    } while (lVar9 != 0xd);
  }
  local_a0 = (undefined *)CONCAT62(local_a0._2_6_,0x4c7b);
  local_80 = (undefined *)0x38d8;
  FUN_0277d4ac(&local_80);
  uVar5 = FUN_02612304(&local_a0,&local_80);
  if ((uVar5 & 1) != 0) {
    if ((((ushort)local_a0 < 0x800) &&
        ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)((ushort)local_a0 >> 3) + 0xe99e0) >>
          (ulong)((ushort)local_a0 & 7) & 1) != 0)) &&
       (uVar5 = FUN_0261e8a8((ulong)local_a0 & 0xffff,&local_64), (uVar5 & 1) != 0)) {
      *param_1 = *param_1 | 0x2000;
    }
  }
  return;
}

