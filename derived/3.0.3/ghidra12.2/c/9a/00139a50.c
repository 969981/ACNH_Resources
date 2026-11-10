
ulong FUN_00139a50(long param_1,byte *param_2,long param_3,undefined2 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined2 *puVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  undefined2 local_d0;
  
  uVar18 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
  if (uVar18 == 0x50001) {
    bVar3 = *param_2 & 0x7f;
    uVar9 = *param_2 & 0x7f;
  }
  else {
    bVar3 = param_2[4] >> 1 & 0x3f;
    uVar9 = param_2[4] >> 1 & 0x3f;
  }
  if (bVar3 == 0) {
    bVar3 = *param_2 >> 1;
    uVar16 = (ulong)bVar3 & 0x3f;
    puVar12 = (undefined1 *)
              (param_3 + ((ulong)param_2[1] << 0x10 | (ulong)param_2[2] << 8 | (ulong)param_2[3]));
    iVar20 = (int)uVar16;
    if ((char)param_2[4] < '\0') {
      if (iVar20 != 0) {
        if (iVar20 == 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          puVar15 = (undefined1 *)((ulong)&local_d0 | 3);
          do {
            puVar15[-3] = *puVar12;
            puVar15[-2] = puVar12[1];
            puVar15[-1] = puVar12[2];
            puVar1 = puVar12 + 3;
            lVar14 = lVar14 + 2;
            puVar12 = puVar12 + 4;
            *puVar15 = *puVar1;
            puVar15 = puVar15 + 4;
          } while (uVar16 - ((ulong)bVar3 & 1) != lVar14);
        }
        if ((bVar3 & 1) != 0) {
          *(undefined1 *)(&local_d0 + lVar14) = *puVar12;
          *(undefined1 *)((long)&local_d0 + lVar14 * 2 + 1) = puVar12[1];
        }
      }
      (&local_d0)[uVar16] = 0;
      FUN_00114550(&local_d0,param_4,uVar16);
      param_4 = param_4 + uVar16;
    }
    else if (iVar20 != 0) {
      uVar13 = uVar16;
      if ((bVar3 & 1) != 0) {
        *(undefined1 *)param_4 = *puVar12;
        *(undefined1 *)((long)param_4 + 1) = puVar12[1];
        puVar12 = puVar12 + 2;
        param_4 = param_4 + 1;
        uVar13 = (ulong)(iVar20 - 1);
      }
      if (iVar20 != 1) {
        do {
          *(undefined1 *)param_4 = *puVar12;
          *(undefined1 *)((long)param_4 + 1) = puVar12[1];
          *(undefined1 *)(param_4 + 1) = puVar12[2];
          *(undefined1 *)((long)param_4 + 3) = puVar12[3];
          param_4 = param_4 + 2;
          uVar18 = (int)uVar13 - 2;
          uVar13 = (ulong)uVar18;
          puVar12 = puVar12 + 4;
        } while (uVar18 != 0);
      }
    }
  }
  else {
    uVar16 = (ulong)uVar9;
    if (uVar18 == 0x50001) {
      bVar3 = *(byte *)(param_1 + 0x70);
      bVar4 = *(byte *)(param_1 + 0x71);
      uVar5 = *(undefined1 *)(param_1 + 0x76);
      uVar6 = *(undefined1 *)(param_1 + 0x77);
      bVar7 = *(byte *)(param_1 + 0x72);
      bVar8 = *(byte *)(param_1 + 0x73);
      uVar18 = 0;
      pbVar19 = (byte *)(param_3 +
                        ((ulong)param_2[1] << 0x10 | (ulong)param_2[2] << 8 | (ulong)param_2[3]));
      puVar17 = param_4;
      uVar11 = 0;
      do {
        pbVar10 = (byte *)(param_1 + ((ulong)bVar3 << 0x18 | (ulong)bVar4 << 0x10 |
                                      (ulong)bVar7 << 8 | (ulong)bVar8) +
                          (ulong)CONCAT11(uVar5,uVar6) * (ulong)*pbVar19);
        if ((*pbVar10 & 0xfc) == 0xd8) {
          iVar20 = 1;
          if (*(short *)(pbVar10 + 2) != 0) {
            iVar20 = 2;
          }
        }
        else {
          iVar20 = 1;
        }
        uVar2 = iVar20 * 2 + (uVar11 & 0xffff);
        if (0x6f < uVar2) break;
        FUN_00100660(puVar17,pbVar10,iVar20 * 2);
        puVar17 = puVar17 + (byte)iVar20;
        uVar18 = uVar18 + 1;
        pbVar19 = pbVar19 + 1;
        uVar11 = uVar2;
      } while ((uVar18 & 0xffff) < uVar9);
      uVar16 = (ulong)(uVar11 >> 1 & 0x7fff);
      *puVar17 = 0;
      param_4 = param_4 + (uVar11 >> 1 & 0xff);
    }
    else {
      puVar12 = (undefined1 *)
                (param_3 + ((ulong)param_2[5] << 0x10 | (ulong)param_2[6] << 8 | (ulong)param_2[7]))
      ;
      uVar13 = uVar16;
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)param_4 = *puVar12;
        *(undefined1 *)((long)param_4 + 1) = puVar12[1];
        puVar12 = puVar12 + 2;
        param_4 = param_4 + 1;
        uVar13 = (ulong)(uVar9 - 1);
      }
      if (uVar9 != 1) {
        do {
          *(undefined1 *)param_4 = *puVar12;
          *(undefined1 *)((long)param_4 + 1) = puVar12[1];
          *(undefined1 *)(param_4 + 1) = puVar12[2];
          *(undefined1 *)((long)param_4 + 3) = puVar12[3];
          param_4 = param_4 + 2;
          uVar18 = (int)uVar13 - 2;
          uVar13 = (ulong)uVar18;
          puVar12 = puVar12 + 4;
        } while (uVar18 != 0);
      }
    }
  }
  *param_4 = 0;
  return uVar16;
}

