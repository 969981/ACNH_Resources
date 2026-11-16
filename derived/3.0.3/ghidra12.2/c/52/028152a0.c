
undefined * FUN_028152a0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined *local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  if (((DAT_0559d558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0559d558), iVar2 != 0)) {
    DAT_0559d54c = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_0559d550 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_0559d558);
  }
  puVar3 = PTR_DAT_04bb43c0;
  puVar6 = (undefined4 *)(param_1 + 0x1190);
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar1 = FUN_0277d6c4(puVar6);
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (uVar1 < *(uint *)(lVar4 + 0x1d8)) {
      puVar5 = &DAT_0559d54c;
      if (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0) {
        local_58 = *(undefined2 *)(param_1 + 0x1190);
        local_50 = 0;
        local_56 = *(undefined2 *)(param_1 + 0x1192);
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_54 = *(undefined4 *)(param_1 + 0x1194);
        uVar1 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar3 != 0) {
          lVar4 = *(long *)(lVar7 + 0x57e58);
          uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
            lVar4 = *(long *)PTR_DAT_04bc0428;
            uVar1 = FUN_0277d6c4(puVar6);
            uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (uVar1 < *(uint *)(lVar4 + 0x1d8)) {
              lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8);
              if (lVar4 != 0) {
                local_50 = lVar4;
              }
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar1 = 0;
        do {
          local_44 = uVar1;
          if ((local_44 != 0) && (local_44 < 0xe)) {
            uVar1 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar1 = local_44;
            }
            if (((uint)((int)uVar1 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar1 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
              if (local_44 != 4) {
                puVar6 = &DAT_0559d54c;
              }
              goto LAB_02815480;
            }
          }
          uVar1 = local_44 + 1;
        } while (local_44 + 1 != 0xe);
        puVar6 = &DAT_0559d54c;
LAB_02815480:
        lVar7 = *(long *)puVar3;
        puVar5 = puVar6;
      }
      goto LAB_02815484;
    }
  }
  puVar5 = &DAT_0559d54c;
LAB_02815484:
  uVar1 = FUN_0277d6c4(puVar5);
  if (*(long *)puVar3 != 0) {
    lVar4 = *(long *)(lVar7 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      return PTR_DAT_04bb37e0;
    }
  }
  puVar3 = (undefined *)FUN_026eacf0(param_1);
  return puVar3;
}

