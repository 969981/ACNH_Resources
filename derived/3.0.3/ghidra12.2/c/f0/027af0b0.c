
uint FUN_027af0b0(long param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  long lVar11;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  uVar5 = FUN_027af238(param_1 + 4);
  uVar6 = FUN_027af238(param_1 + 0x60);
  puVar4 = PTR_DAT_04bb43c0;
  psVar9 = (short *)(param_1 + 0xc0);
  cVar2 = *(char *)(param_1 + 0x5c);
  cVar3 = *(char *)(param_1 + 0xb8);
  if (*psVar9 == -2) {
LAB_027af104:
    uVar7 = 1;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(psVar9);
    lVar10 = *(long *)puVar4;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_68 = 0;
        local_70 = *(undefined4 *)(param_1 + 0xc0);
        uStack_6c = *(undefined4 *)(param_1 + 0xc4);
        local_78 = &PTR_FUN_04a36b50;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(psVar9);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8), lVar10 != 0))
            {
              local_68 = lVar10;
            }
          }
        }
        uVar8 = FUN_01b032d0(&local_78);
        if ((uVar8 & 1) != 0) goto LAB_027af104;
      }
    }
    uVar7 = 0;
  }
  uVar1 = 0;
  if (cVar2 == '\0' || cVar3 == '\0') {
    uVar1 = uVar7;
  }
  return uVar5 & uVar6 & uVar1;
}

