
void FUN_01e2ea60(long param_1,ulong param_2)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  
  puVar6 = PTR_DAT_04bc1220;
  lVar1 = param_1 + 0x208;
  plVar7 = *(long **)PTR_DAT_04bb27d0;
  if ((param_2 & 1) == 0) {
    lVar11 = *plVar7;
    bVar4 = *(byte *)(lVar11 + 0x473);
    pcVar8 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar8 = (char *)(lVar11 + 0x473);
      }
    }
    lVar11 = lVar1 + (ulong)(uint)(int)*pcVar8 * 0x2c;
    if (0xb < (uint)(int)*pcVar8) {
      lVar11 = lVar1;
    }
    *(undefined8 *)(lVar11 + 0x24) = 0;
    *(undefined8 *)(lVar11 + 0x1c) = 0;
    *(undefined8 *)(lVar11 + 0x14) = 0;
    *(undefined8 *)(lVar11 + 0xc) = 0;
    *(undefined8 *)(lVar11 + 4) = 0;
  }
  else {
    uVar9 = 0;
    puVar10 = (undefined8 *)(param_1 + 0x20c);
    lVar11 = 0x48;
    bVar4 = *PTR_DAT_04bc1220;
    do {
      lVar12 = *plVar7;
      bVar5 = *(byte *)(lVar12 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        puVar13 = (undefined1 *)(lVar1 + uVar9 * 0x2c);
        if (bVar4 != uVar9) goto LAB_01e2ea9c;
LAB_01e2eb20:
        *puVar13 = 1;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
      }
      else {
        puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar12 + 0x48);
        }
        pbVar3 = puVar6;
        if ((*puVar2 & 8) != 0) {
          pbVar3 = (byte *)(lVar12 + 0x473);
        }
        if (uVar9 == *pbVar3) {
          puVar13 = (undefined1 *)(lVar1 + uVar9 * 0x2c);
          goto LAB_01e2eb20;
        }
        if ((*puVar2 >> 3 & 1) == 0) {
          puVar13 = (undefined1 *)(lVar1 + uVar9 * 0x2c);
        }
        else {
          puVar13 = (undefined1 *)((long)puVar10 + -4);
          if ((*(byte *)(lVar12 + lVar11) >> 3 & 1) != 0) goto LAB_01e2eb20;
        }
LAB_01e2ea9c:
        *puVar13 = 0;
      }
      uVar9 = uVar9 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 0x2c);
      lVar11 = lVar11 + 0x80;
    } while (uVar9 != 8);
  }
  return;
}

