
byte FUN_02b684a0(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  undefined2 uVar15;
  uint local_30 [2];
  uint *local_28;
  
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  bVar6 = 0;
  if ((param_1 == (undefined2 *)0x0) || (param_2 == 0)) goto LAB_02b68708;
  if (param_2 != 0) {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar12 + 0x1e0) < 1) {
      if ((((*(long *)(lVar12 + 0xd0) != 0) &&
           (puVar8 = *(uint **)(*(long *)(lVar12 + 0xd0) + 8), puVar8 != (uint *)0x0)) &&
          ((*(uint *)(lVar12 + 0xe8) <= param_2 ||
           (*(char *)(*(long *)(lVar12 + 0xf0) + (long)(int)param_2) != '\0')))) &&
         (((param_2 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * param_2 + (uint)(ushort)puVar8[2] * 8 + iVar11) +
                         (long)puVar8);
        goto joined_r0x02b68590;
      }
    }
    else if (param_2 < *(uint *)(lVar12 + 0x1e0)) {
      uVar1 = param_2;
      if (*(uint *)(lVar12 + 0x1d0) <= param_2) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar12 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b68590:
      if (puVar8 != (uint *)0x0) {
        puVar9 = (uint *)(ulong)*puVar8;
        if (*puVar8 != 0 && puVar8 != puVar9) {
          puVar13 = (uint *)((long)puVar8 - (long)puVar9);
          if (((*puVar13 == 0) || (uVar1 = puVar13[1], uVar1 == 0)) ||
             ((ulong)(ushort)puVar13[2] == 0)) {
LAB_02b68610:
            cVar14 = *PTR_DAT_04bc4690;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
                puVar9 = (uint *)(ulong)*puVar8;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x14);
                if (-1 < (int)uVar1) {
                  if ((undefined2 *)((ulong)uVar1 + (long)puVar8) == (undefined2 *)0x0)
                  goto LAB_02b686fc;
                  uVar15 = *(undefined2 *)((ulong)uVar1 + (long)puVar8);
                  goto LAB_02b68700;
                }
                if (uVar1 != 0xffffffff) goto LAB_02b686fc;
              }
              uVar15 = 0;
              if ((puVar9 == (uint *)0x0) || (uVar15 = 0, puVar8 == puVar9)) goto LAB_02b68700;
              lVar12 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar8 + (lVar12 - (long)puVar9);
              uVar15 = 0;
              if (lVar12 == 0) goto LAB_02b68700;
              uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
              *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
              if (uVar10 == 0) goto LAB_02b686fc;
              piVar7 = (int *)(lVar12 + 4);
              while (piVar7[-1] != 0xd664b5c) {
                piVar7 = piVar7 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_02b686fc;
              }
              uVar15 = 0;
              iVar11 = 0;
              if (*piVar7 != -1) {
                iVar11 = *piVar7;
              }
              *(int *)(puVar5 + 0x14) = iVar11;
              puVar9 = (uint *)(ulong)*puVar8;
              if (*puVar8 == 0) goto LAB_02b68700;
            } while( true );
          }
          lVar12 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar12 == 0) goto LAB_02b68610;
          uVar2 = 0;
          if ((ulong)uVar1 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar1);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc46a8 <= uVar2) ||
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2),
             4 < uVar3 || uVar3 == 0)) goto LAB_02b68610;
          if (uVar3 == 1) {
            local_30[0] = 0;
            uVar10 = FUN_02b677c0(local_30);
            bVar6 = 0;
            if ((uVar10 & 1) != 0) {
              bVar6 = FUN_02b68860(param_1,local_30[0]);
            }
          }
          else {
            if (((uVar3 == 4) &&
                (local_30[0] = param_2, FUN_02b72930(local_30), puVar5 = PTR_DAT_04bc4658,
                puVar4 = PTR_DAT_04bc4650, local_28 != (uint *)0x0)) &&
               (uVar1 = *local_28, uVar1 != 0)) {
              cVar14 = *PTR_DAT_04bc4650;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *(undefined8 *)puVar5 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
                  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                  uVar1 = *local_28;
                }
                else {
                  uVar2 = *(uint *)(puVar5 + 0x18);
                  if (-1 < (int)uVar2) {
                    if ((short *)((ulong)uVar2 + (long)local_28) == (short *)0x0) break;
                    bVar6 = *(short *)((ulong)uVar2 + (long)local_28) != 0;
                    goto LAB_02b68708;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar8 = (uint *)(ulong)uVar1;
                bVar6 = 0;
                if ((puVar8 == (uint *)0x0) || (local_28 == puVar8)) goto LAB_02b68708;
                lVar12 = 0xc;
                if (*(char *)((long)local_28 + (10 - (long)puVar8)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)local_28 + (lVar12 - (long)puVar8);
                if (lVar12 == 0) break;
                uVar10 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar8));
                *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
                if (uVar10 == 0) break;
                piVar7 = (int *)(lVar12 + 4);
                while (piVar7[-1] != 0xd664b5c) {
                  piVar7 = piVar7 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_02b68858;
                }
                bVar6 = 0;
                iVar11 = 0;
                if (*piVar7 != -1) {
                  iVar11 = *piVar7;
                }
                *(int *)(puVar5 + 0x18) = iVar11;
                uVar1 = *local_28;
                if (uVar1 == 0) goto LAB_02b68708;
              } while( true );
            }
LAB_02b68858:
            bVar6 = 0;
          }
          goto LAB_02b68708;
        }
        if (puVar9 != (uint *)0x0) goto LAB_02b68610;
      }
    }
  }
LAB_02b686fc:
  uVar15 = 0;
LAB_02b68700:
  *param_1 = uVar15;
  bVar6 = 1;
LAB_02b68708:
  return bVar6 & 1;
}

