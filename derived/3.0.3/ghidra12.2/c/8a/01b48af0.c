
long FUN_01b48af0(long param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  
  if (*(char *)(param_1 + 0xcc) == '\0') {
    uVar9 = FUN_027aef1c(param_1,0);
    if ((uVar9 & 1) != 0) goto LAB_01b48b78;
  }
  else {
    uVar7 = FUN_027af0b0(param_1,0);
    uVar5 = (uint)*(ushort *)(param_1 + 0x36e) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if ((uVar5 < *(uint *)(DAT_05336138 + 0x1d8)) &&
       (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar5 * 8) != 0 &&
        ((uVar7 ^ 0xffffffff) & 1) == 0)) {
LAB_01b48b78:
      lVar8 = FUN_02831a10(param_3,param_1);
      if ((lVar8 != 0) && ((param_2 & 1) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bb32e8;
        uVar4 = *(ushort *)(lVar11 + 0x4060);
        bVar2 = *(byte *)(lVar11 + 0x4062);
        bVar3 = *(byte *)(lVar11 + 0x4063);
        uVar9 = nn::time::IsValidDate((uint)uVar4,(uint)bVar2,(uint)bVar3);
        if ((uVar9 & 1) != 0) {
          *(ushort *)(lVar8 + 0xbc) = uVar4;
          *(byte *)(lVar8 + 0xbe) = bVar2;
          *(byte *)(lVar8 + 0xbf) = bVar3;
        }
      }
      lVar11 = 0;
      cVar10 = '\0';
      do {
        lVar6 = lVar11 + 0x15950;
        lVar11 = lVar11 + 4;
        pcVar1 = param_3 + (ulong)*(uint *)(param_3 + lVar6) * 0x374;
        if (99 < *(uint *)(param_3 + lVar6)) {
          pcVar1 = param_3;
        }
        if (*pcVar1 != '\0') {
          cVar10 = cVar10 + '\x01';
        }
      } while (lVar11 != 400);
      if (cVar10 == 'd') {
        param_3[0x1f2d0] = '\x01';
        return lVar8;
      }
      return lVar8;
    }
  }
  return 0;
}

