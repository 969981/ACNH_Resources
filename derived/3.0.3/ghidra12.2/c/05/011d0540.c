
undefined8 FUN_011d0540(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar7 + 0x48);
    }
    if ((((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar3)) &&
       (iVar5 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10)), iVar5 - 0x23U < 9)) {
      uVar2 = *(uint *)(param_2 + 0xc);
      if ((uVar2 >> 0xe & 1) + (uVar2 >> 0xd & 1) + (uVar2 >> 0xf & 1) + (uVar2 >> 0x10 & 1) +
          (uVar2 >> 0x11 & 1) + (uVar2 >> 0x12 & 1) + (uVar2 >> 0x13 & 1) +
          (uVar2 >> 0x14 & 1) + (uVar2 >> 0x15 & 1) + (uVar2 >> 0x16 & 1) < 5) {
        lVar7 = **(long **)puVar4;
        bVar3 = *(byte *)(lVar7 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
          if (7 < bVar3) {
            pbVar1 = (byte *)(lVar7 + 0x48);
          }
          if ((((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar3)) &&
             (1 < *(byte *)(lVar7 + 0x476))) {
            if (DAT_04c47fa4 == 10) goto LAB_011d0694;
            if ((DAT_04c47fa4 < 10) && (((uVar2 >> 0xd) >> (ulong)(DAT_04c47fa4 & 0x1f) & 1) != 0))
            {
              FUN_011c91b8(param_1);
              return 1;
            }
          }
        }
        *(ulong *)(param_1 + 0x108) = *(ulong *)(param_1 + 0x108) | 0x400;
        uVar2 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar2 = uVar2 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar2 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        DAT_0514cb64 = uVar2;
        *(char *)(param_1 + 0x117) = (char)((ulong)uVar2 * 100 >> 0x20) + 'd';
        return 0;
      }
      goto LAB_011d0694;
    }
  }
  uVar6 = FUN_0124f7e0(param_2,param_1 + 0xa8);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
LAB_011d0694:
  uVar2 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar2 = uVar2 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar2 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  DAT_0514cb64 = uVar2;
  *(char *)(param_1 + 0x117) = (char)((ulong)uVar2 * 100 >> 0x20) + 'd';
  return 1;
}

