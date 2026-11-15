
undefined8 FUN_01e3e9e4(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  
  puVar6 = PTR_DAT_04bb27d0;
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  if ((((((param_3 & 1) == 0) && (lVar10 = *(long *)(param_1 + 0x3b8), lVar10 != 0)) &&
       (uVar7 = (**(code **)(*(long *)(lVar10 + 0x7f18) + 0x10))(lVar10 + 0x7f18), (uVar7 & 1) != 0)
       ) && (uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x3b8) + 0x7f18))
                               (*(long *)(param_1 + 0x3b8) + 0x7f18,param_2), (uVar7 & 1) == 0)) ||
     (((*(int *)(param_1 + 0x750) == 3 && ((*(byte *)(param_1 + 0x69e) >> 2 & 1) == 0)) ||
      (((param_3 & 1) == 0 && ((*(byte *)(param_1 + 0x69c) & 0x30) != 0)))))) goto LAB_01e3ec00;
  lVar10 = *(long *)(param_1 + 0x690);
  if (lVar10 == 0) {
LAB_01e3ec84:
    uVar8 = 1;
  }
  else {
    lVar12 = *plVar16;
    bVar13 = *(byte *)(lVar12 + 0x473);
    if ((long)(char)bVar13 == 0xffffffffffffffff) {
      plVar11 = *(long **)puVar6;
LAB_01e3eb14:
      lVar12 = *plVar11;
      bVar4 = *(byte *)(lVar12 + 0x473);
      uVar14 = (ulong)(char)bVar4;
      pbVar9 = PTR_DAT_04bc1220;
      if (uVar14 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar12 + 0x48) + (uVar14 & 0xffffffff) * 0x20;
        if (7 < bVar4) {
          puVar3 = (uint *)(lVar12 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar9 = (byte *)(lVar12 + 0x473);
        }
      }
      uVar7 = (ulong)*(byte *)(lVar10 + 7);
      bVar13 = *(byte *)(lVar10 + 7) >> 4 & 3;
      if (bVar13 == 1) {
        return 0;
      }
      uVar15 = (uint)*(byte *)(lVar10 + 6);
      if (bVar13 == 2) goto LAB_01e3ebf4;
      if (bVar13 == 3) {
        return 0;
      }
      uVar5 = CONCAT11(*(byte *)(lVar10 + 6),*(undefined1 *)(lVar10 + 5)) >> 2;
      if ((ushort)*pbVar9 == (uVar5 & 0xff)) goto LAB_01e3ebf4;
      if ((bVar4 != 0xff) && ((ushort)(byte)*PTR_DAT_04bb5018 == (uVar5 & 0xff))) {
        pbVar9 = (byte *)(lVar12 + 0x48) + (uVar14 & 0xffffffff) * 0x80;
        if (7 < bVar4) {
          pbVar9 = (byte *)(lVar12 + 0x48);
        }
        if ((*pbVar9 >> 3 & 1) != 0) {
          lVar10 = plVar11[2] + 0x108 + (uVar14 & 0xffffffff) * 0xc;
          if (0xb < bVar4) {
            lVar10 = plVar11[2] + 0x108;
          }
          if (*(char *)(lVar10 + 10) == '\0') goto LAB_01e3ec00;
        }
        goto LAB_01e3ebf4;
      }
      if ((ushort)(byte)*PTR_DAT_04bb5018 == (uVar5 & 0xff)) goto LAB_01e3ebf4;
    }
    else {
      pbVar9 = (byte *)(lVar12 + 0x48);
      plVar11 = *(long **)puVar6;
      pbVar1 = pbVar9 + ((long)(char)bVar13 & 0xffffffffU) * 0x80;
      if (7 < bVar13) {
        pbVar1 = pbVar9;
      }
      if ((*pbVar1 >> 3 & 1) == 0) goto LAB_01e3eb14;
      bVar13 = *(byte *)(*plVar11 + 0x473);
      if ((long)(char)bVar13 == 0xffffffffffffffff) goto LAB_01e3eb14;
      lVar12 = plVar16[2] + 0x108;
      lVar2 = lVar12 + ((long)(char)bVar13 & 0xffffffffU) * 0xc;
      if (0xb < bVar13) {
        lVar2 = lVar12;
      }
      if (*(char *)(lVar2 + 10) != '\0') goto LAB_01e3eb14;
      uVar15 = (uint)*(byte *)(lVar10 + 6);
      uVar7 = (ulong)*(byte *)(lVar10 + 7);
      if ((ushort)DAT_0537bdb8 != (*(ushort *)(lVar10 + 6) >> 2 & 0xff)) goto LAB_01e3ec00;
      bVar13 = *(byte *)(lVar10 + 7) >> 4 & 3;
LAB_01e3ebf4:
      if ((bVar13 | 2) != 3) {
        pbVar9 = (byte *)FUN_02582a24(param_2,1);
        uVar15 = (uint)((uVar7 << 0x20 | (ulong)(uVar15 << 0x18)) >> 0x1a);
        if ((((uint)DAT_0537bdb8 == (uVar15 & 0xff)) || ((uint)*pbVar9 == (uVar15 & 0xff))) &&
           (((param_3 & 1) != 0 ||
            (((DAT_053dda88 == 0 || (*(int *)(DAT_053dda88 + 8) != *(int *)(param_1 + 0x698))) &&
             ((*(byte *)(*(long *)(param_1 + 0x690) + 7) & 0x30) != 0x20)))))) goto LAB_01e3ec84;
      }
    }
LAB_01e3ec00:
    uVar8 = 0;
  }
  return uVar8;
}

