
byte FUN_027aed78(long param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  short *psVar10;
  long lVar11;
  long lVar12;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  bVar4 = FUN_027af238(param_1 + 4);
  bVar5 = FUN_027af238(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0xb8);
  bVar6 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_1 + 0xbc),(uint)*(byte *)(param_1 + 0xbe),
                     (uint)*(byte *)(param_1 + 0xbf));
  puVar3 = PTR_DAT_04bb43c0;
  psVar10 = (short *)(param_1 + 0xc0);
  if (*psVar10 == -2) {
LAB_027aede0:
    bVar9 = 1;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(psVar10);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_68 = 0;
        local_70 = *(undefined4 *)(param_1 + 0xc0);
        uStack_6c = *(undefined4 *)(param_1 + 0xc4);
        local_78 = &PTR_FUN_04a36b50;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(psVar10);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
               (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0))
            {
              local_68 = lVar11;
            }
          }
        }
        uVar8 = FUN_01b032d0(&local_78);
        if ((uVar8 & 1) != 0) goto LAB_027aede0;
      }
    }
    bVar9 = 0;
  }
  return bVar4 & bVar5 & bVar6 & bVar9 & (cVar1 == '\0' || cVar2 == '\0');
}

