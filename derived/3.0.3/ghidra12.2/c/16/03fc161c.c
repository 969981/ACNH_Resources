
void FUN_03fc161c(long param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  ushort uVar13;
  byte bVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  
  lVar17 = (long)(int)param_2;
  lVar2 = param_1 + 0x41cd8;
  lVar4 = lVar2 + lVar17 * 0x20;
  pbVar1 = (byte *)(lVar2 + (int)(param_2 << 2));
  bVar8 = *(byte *)(lVar2 + ((int)param_2 >> 2) + 0x200) >> (ulong)((param_2 & 3) << 1);
  uVar15 = bVar8 >> 1 & 1;
  *(char *)(lVar4 + 0x2c77) = (char)uVar15;
  cVar10 = *(char *)(lVar2 + (ulong)uVar15 + 0x2b8);
  *(char *)(lVar4 + 0x2c78) = cVar10;
  uVar19 = -(bVar8 & 1) & 0xffffff00 | (uint)*pbVar1;
  *(ushort *)(lVar4 + 0x2c6c) = (ushort)uVar19;
  pcVar16 = (char *)(lVar4 + 0x2c7a);
  *pcVar16 = '\0';
  if (uVar19 == 0xffffff00 || -(int)cVar10 < (int)uVar19) {
    bVar8 = pbVar1[1];
    lVar2 = param_1 + 0x41cd8 + lVar17 * 0x20;
    *(byte *)(lVar2 + 0x2c70) = bVar8;
    cVar10 = *(char *)(param_1 + 0x41cd8 + (ulong)uVar15 + 0x2ba);
    pcVar18 = (char *)(lVar2 + 0x2c79);
    *pcVar18 = cVar10;
    if ((bVar8 < 0xf0) || (0x100 < (int)((int)cVar10 + (uint)bVar8))) {
      bVar8 = pbVar1[2];
      lVar2 = param_1 + 0x41cd8 + lVar17 * 0x20;
      lVar17 = param_1 + 0x41cd8 + lVar17 * 8;
      *(byte *)(lVar2 + 0x2c6a) = bVar8;
      *(ushort *)(lVar2 + 0x2c68) = (ushort)bVar8 << 5;
      bVar11 = pbVar1[3];
      uVar19 = (uint)(char)bVar11;
      *(byte *)(lVar2 + 0x2c6b) = bVar11 & 1;
      lVar5 = param_1 + 0x316fc6 + ((ulong)(uint)((int)(char)bVar11 << 4) & 0xe0);
      *(byte *)(lVar2 + 0x2c71) = bVar11 >> 1 & 7;
      *(long *)(lVar17 + 0x2460) = lVar5;
      bVar14 = (byte)(uVar19 >> 6) & 1;
      *(long *)(lVar17 + 0x2860) =
           lVar5 + (long)(int)(uint)(*(byte *)(lVar2 + 0x2c71) >> 2) * -0x202;
      *(byte *)(lVar2 + 0x2c72) = ((byte)(uVar19 >> 1) & 0x18) + 9;
      *(byte *)(lVar2 + 0x2c73) = bVar14;
      bVar8 = *(byte *)(lVar2 + 0x2c6b);
      iVar6 = *(int *)(param_1 + 0x41f84);
      iVar7 = *(int *)(param_1 + 0x41f88);
      lVar17 = *(long *)(param_1 + 0x88);
      cVar12 = *(char *)(lVar4 + 0x2c78);
      *(byte *)(lVar2 + 0x2c74) = (byte)(uVar19 >> 7) & 1;
      cVar9 = *pcVar18;
      cVar10 = cVar12 >> 3;
      *(char *)(lVar2 + 0x2c7b) = cVar10;
      *pcVar16 = cVar10;
      *(byte *)(lVar2 + 0x2c76) = cVar9 - 1U & (byte)((uint)(int)(char)bVar11 >> 7);
      *(ulong *)(lVar4 + 0x2c60) = lVar17 + (ulong)(iVar6 + iVar7 * (uint)bVar8 & 0xe000);
      uVar13 = *(ushort *)(lVar4 + 0x2c6c);
      *(byte *)(lVar2 + 0x2c75) = (cVar12 + -1) * bVar14 ^ 1;
      uVar3 = uVar13 + (short)cVar12;
      *(ushort *)(lVar2 + 0x2c6e) = uVar3;
      if (((short)uVar13 < 0) && (uVar13 != 0xff00)) {
        uVar19 = -(uint)uVar13;
      }
      else {
        if ((short)uVar3 < 0x101) {
          return;
        }
        uVar19 = uVar3 + 0x700;
      }
      *pcVar16 = cVar10 - (char)(uVar19 >> 3);
      return;
    }
  }
  return;
}

