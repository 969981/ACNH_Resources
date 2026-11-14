
void FUN_01da7a00(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  
  if (*(int *)(DAT_0537d558[2] + 0xaa0) == 3) {
    return;
  }
  FUN_021ad600(&DAT_053fe348);
  uVar9 = FUN_021bb09c(&DAT_053fe348);
  puVar6 = PTR_DAT_04bb3968;
  FUN_01e2d5e0(*(long *)PTR_DAT_04bb3968 + 0xda0,1);
  plVar8 = DAT_0537d558;
  puVar7 = PTR_DAT_04bc1220;
  uVar10 = 0;
  lVar11 = 0x48;
  puVar1 = (undefined1 *)(*(long *)puVar6 + 0xfa8);
  bVar4 = *PTR_DAT_04bc1220;
  puVar12 = puVar1;
  do {
    lVar13 = *plVar8;
    bVar5 = *(byte *)(lVar13 + 0x473);
    if ((long)(char)bVar5 == 0xffffffffffffffff) {
      puVar14 = puVar12;
      if (bVar4 != uVar10) goto LAB_01da7aa4;
LAB_01da7b24:
      *puVar14 = 1;
      *(undefined8 *)(puVar12 + 0x24) = 0;
      *(undefined8 *)(puVar12 + 0x1c) = 0;
      *(undefined8 *)(puVar12 + 0x14) = 0;
      *(undefined8 *)(puVar12 + 0xc) = 0;
      *(undefined8 *)(puVar12 + 4) = 0;
    }
    else {
      puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar13 + 0x48);
      }
      pbVar3 = puVar7;
      if ((*puVar2 & 8) != 0) {
        pbVar3 = (byte *)(lVar13 + 0x473);
      }
      if (uVar10 == *pbVar3) {
        puVar14 = puVar1 + uVar10 * 0x2c;
        goto LAB_01da7b24;
      }
      if ((*puVar2 >> 3 & 1) == 0) {
        puVar14 = puVar1 + uVar10 * 0x2c;
      }
      else {
        puVar14 = puVar1 + uVar10 * 0x2c;
        if ((*(byte *)(lVar13 + lVar11) >> 3 & 1) != 0) goto LAB_01da7b24;
      }
LAB_01da7aa4:
      *puVar14 = 0;
    }
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 0x2c;
    lVar11 = lVar11 + 0x80;
    if (uVar10 == 8) {
      if ((uVar9 & 1) == 0) {
        FUN_021da6a0();
      }
      FUN_020f0020();
      FUN_021c279c(&DAT_053fe348);
      return;
    }
  } while( true );
}

