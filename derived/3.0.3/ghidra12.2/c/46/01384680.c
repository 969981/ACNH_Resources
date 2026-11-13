
bool FUN_01384680(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar2 = FUN_013671a0();
  lVar4 = *(long *)PTR_DAT_04bb27a8;
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0xd90);
  if (uVar2 < *(uint *)(lVar4 + 0xd70)) {
    puVar5 = *(uint **)(*(long *)(lVar4 + 0xd78) + (long)(int)uVar2 * 8);
    uVar3 = 0;
    if (puVar5 == (uint *)0x0) goto LAB_01384744;
    uVar2 = *puVar5;
    if (uVar2 != 0 && puVar5 != (uint *)(ulong)uVar2) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
      if (((*puVar6 != 0) && (uVar2 = puVar6[1], uVar2 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar4 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar6 + lVar4 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar4 != 0) {
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar4) / (ulong)uVar2);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161b20) &&
             (uVar3 = *(ushort *)(DAT_05161b28 + (long)(int)uVar1 * 2), uVar3 < 2))
          goto LAB_01384744;
        }
      }
    }
  }
  uVar3 = 0;
LAB_01384744:
  return uVar3 == 0;
}

