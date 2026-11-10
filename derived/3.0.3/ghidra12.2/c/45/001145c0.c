
undefined8 FUN_001145c0(long *param_1,short *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  byte local_d0 [2];
  undefined2 local_ce [55];
  
  if ((char)param_1[10] == '\x01') {
    if (*(short *)param_1[6] == 0) goto LAB_001148b0;
  }
  else if ((char)param_1[10] != '\x02') goto LAB_001148b0;
  if ((((param_1[2] != 0) && ((short)param_1[3] != 0)) && (*(char *)((long)param_1 + 0x51) == '\0'))
     && (bVar4 = *(byte *)((long)param_2 + 0x5f) & 0xf, (byte)(bVar4 - 1) < 2)) {
    lVar13 = *(long *)(param_2 + 4);
    uVar18 = (ulong)*(uint *)(param_2 + 0x1c);
    pbVar19 = (byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x24) << 0x18 |
                                 (ulong)*(byte *)(lVar13 + 0x25) << 0x10 |
                                 (ulong)*(byte *)(lVar13 + 0x26) << 8 |
                                (ulong)*(byte *)(lVar13 + 0x27)) + uVar18);
    if (bVar4 != 1) {
      pbVar19 = pbVar19 + 10;
      if ((byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x28) << 0x18 |
                             (ulong)*(byte *)(lVar13 + 0x29) << 0x10 |
                             (ulong)*(byte *)(lVar13 + 0x2a) << 8 | (ulong)*(byte *)(lVar13 + 0x2b))
                  ) <= pbVar19) {
        *(undefined1 *)((long)param_2 + 0x5f) = 3;
        goto LAB_001148b0;
      }
      uVar18 = (ulong)(*(uint *)(param_2 + 0x1c) + 10);
    }
    lVar13 = *param_1;
    *param_1 = param_1[2];
    uVar3 = *(uint *)(*(long *)(param_2 + 4) + 0x28);
    uVar3 = ((int)*(long *)(param_2 + 4) +
            (((uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8) >> 0x10)) - (int)pbVar19 & 0xffff
    ;
    if (9 < uVar3) {
      uVar20 = 0;
      do {
        sVar10 = FUN_001139a0(param_1,(uint)(pbVar19[1] >> 7) | (uint)*pbVar19 << 1,
                              (uint)(pbVar19[2] >> 6) | (pbVar19[1] & 0x7f) << 2);
        if (sVar10 != 0) {
          if ((char)param_1[10] == '\x02') goto LAB_001148e8;
          lVar15 = *(long *)(param_2 + 4);
          lVar17 = param_1[6];
          pbVar12 = (byte *)(lVar15 + ((ulong)*(byte *)(lVar15 + 0x2c) << 0x18 |
                                       (ulong)*(byte *)(lVar15 + 0x2d) << 0x10 |
                                       (ulong)*(byte *)(lVar15 + 0x2e) << 8 |
                                      (ulong)*(byte *)(lVar15 + 0x2f)) +
                            ((ulong)pbVar19[7] << 8 | ((ulong)pbVar19[6] & 0xf) << 0x10 |
                            (ulong)pbVar19[8]));
          bVar4 = pbVar19[9];
          if (CONCAT11(*(undefined1 *)(lVar15 + 0x20),*(undefined1 *)(lVar15 + 0x21)) == 0) {
            if (0x6e < (bVar4 & 0xfe)) goto LAB_00114880;
            uVar21 = (uint)(bVar4 >> 1);
            if (uVar21 == 0) {
              pbVar14 = local_d0;
            }
            else {
              uVar11 = 0;
              pbVar14 = local_d0;
              do {
                *pbVar14 = *pbVar12;
                pbVar1 = pbVar12 + 1;
                uVar11 = uVar11 + 1;
                pbVar12 = pbVar12 + 2;
                pbVar14[1] = *pbVar1;
                pbVar14 = pbVar14 + 2;
              } while ((uVar11 & 0xffff) < uVar21);
            }
            pbVar14[0] = 0;
            pbVar14[1] = 0;
          }
          else if (CONCAT11(*(undefined1 *)(lVar15 + 0x22),*(undefined1 *)(lVar15 + 0x23)) == 2) {
            uVar21 = 0;
            if (bVar4 == 0) {
              local_d0[0] = 0;
              local_d0[1] = 0;
            }
            else {
              bVar5 = *(byte *)(lVar15 + 0x1c);
              bVar6 = *(byte *)(lVar15 + 0x1d);
              bVar7 = *(byte *)(lVar15 + 0x1e);
              bVar8 = *(byte *)(lVar15 + 0x1f);
              pbVar14 = local_d0;
              do {
                puVar16 = pbVar14;
                if (0x36 < (uVar21 & 0xffff)) goto LAB_00114880;
                puVar2 = (undefined1 *)
                         (lVar15 + ((ulong)bVar5 << 0x18 | (ulong)bVar6 << 0x10 | (ulong)bVar7 << 8
                                   | (ulong)bVar8) + ((ulong)((uint)*pbVar12 * 2 + 0xfffe) & 0xfffe)
                         );
                *puVar16 = *puVar2;
                uVar21 = uVar21 + 1;
                puVar16[1] = puVar2[1];
                pbVar12 = pbVar12 + 1;
                pbVar14 = puVar16 + 2;
              } while ((uVar21 & 0xffff) <= (uint)bVar4 && (uint)bVar4 != (uVar21 & 0xffff));
              *(undefined2 *)(puVar16 + 2) = 0;
            }
          }
          else {
            uVar21 = 0;
          }
          uVar11 = FUN_001003e0(lVar17);
          if (((uVar11 & 0xffff) <= (uVar21 & 0xffff)) &&
             (sVar10 = FUN_00100470(lVar17,local_d0,uVar11), sVar10 == 0)) {
LAB_001148e8:
            param_2[0x2f] = 0x210;
            lVar15 = *(long *)(param_2 + 4);
            *(int *)(param_2 + 0x1c) = (int)uVar18;
            iVar9 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) *
                    (*(byte *)(lVar15 + ((ulong)*(byte *)(lVar15 + 0x24) << 0x18 |
                                         (ulong)*(byte *)(lVar15 + 0x25) << 0x10 |
                                         (ulong)*(byte *)(lVar15 + 0x26) << 8 |
                                        (ulong)*(byte *)(lVar15 + 0x27)) + uVar18 + 2) & 0x3f);
            *param_2 = param_2[2] +
                       ((short)((ulong)((long)iVar9 * 0x82082083) >> 0x25) - (short)(iVar9 >> 0x1f))
            ;
            *param_1 = lVar13;
            return 1;
          }
        }
LAB_00114880:
        uVar20 = uVar20 + 1;
        pbVar19 = pbVar19 + 10;
        uVar18 = (ulong)((int)uVar18 + 10);
      } while ((uVar20 & 0xffff) < uVar3 / 10);
    }
    *(undefined1 *)((long)param_2 + 0x5f) = 3;
    *param_1 = lVar13;
  }
LAB_001148b0:
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

