
undefined8 FUN_00334c20(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  
  *(long *)(param_1 + 0x10) = param_2;
  lVar8 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar8;
  lVar9 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar9;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar9 + 0x18);
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 != 0) {
    uVar10 = (ulong)*(ushort *)(lVar9 + 0xc);
    puVar15 = (uint *)((int *)(lVar9 + 8) + uVar10 * 4);
    uVar3 = *puVar15;
    if (*(int *)(lVar9 + 8) < (int)uVar3) {
      do {
        if (uVar3 < 0x18) {
          uVar14 = (ulong)((byte)(&UNK_040ecc7f)[-(ulong)(uVar3 >> 3)] >> ((ulong)uVar3 & 7)) & 1;
        }
        else {
          uVar14 = 0;
        }
        uVar10 = (ulong)*(ushort *)(lVar9 + 8 + uVar10 * 0x10 + uVar14 * 2 + 4);
        puVar15 = (uint *)(lVar9 + 8 + uVar10 * 0x10);
        bVar1 = (int)uVar3 < (int)*puVar15;
        uVar3 = *puVar15;
      } while (bVar1);
    }
    psVar11 = *(short **)(puVar15 + 2);
    if (((*psVar11 == 3) && (psVar11[1] == 0x705f && (char)psVar11[2] == '0')) &&
       (uVar10 = (long)puVar15 + (-0x18 - lVar9), ((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
       )) {
      lVar8 = *(long *)(lVar8 + 8) + (long)(int)(uVar10 >> 4) * 0x10;
      goto LAB_00334d24;
    }
  }
  lVar8 = 0;
LAB_00334d24:
  lVar9 = 0;
  do {
    while( true ) {
      lVar19 = *(long *)(param_1 + 0x18);
      lVar16 = *(long *)(lVar19 + 0x10);
      if (lVar16 != 0) break;
LAB_00334de0:
      lVar18 = 0;
      if (lVar9 != 4) goto LAB_00334f40;
LAB_00334dec:
      if (lVar18 != 0) goto LAB_00334f40;
      if ((lVar16 != 0) && (*(byte *)(param_3 + 0x14) != 0xff)) {
        pcVar17 = (char *)(*(long *)(lVar16 + 8 + (ulong)*(byte *)(param_3 + 0x14) * 0x10 + 0x18) +
                          2);
        sVar7 = strlen(pcVar17);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0xc);
        puVar15 = (uint *)(lVar16 + 8 + uVar10 * 0x10);
        uVar3 = *puVar15;
        if (*(int *)(lVar16 + 8) < (int)*puVar15) {
          do {
            uVar14 = (long)((ulong)uVar3 << 0x20) >> 0x23;
            if (uVar14 < sVar7) {
              uVar14 = (ulong)((byte)pcVar17[sVar7 + ~uVar14] >> ((ulong)uVar3 & 7)) & 1;
            }
            else {
              uVar14 = 0;
            }
            uVar10 = (ulong)*(ushort *)(lVar16 + 8 + uVar10 * 0x10 + uVar14 * 2 + 4);
            puVar15 = (uint *)(lVar16 + 8 + uVar10 * 0x10);
            bVar1 = (int)uVar3 < (int)*puVar15;
            uVar3 = *puVar15;
          } while (bVar1);
        }
        if (((sVar7 == **(ushort **)(puVar15 + 2)) &&
            (iVar5 = memcmp(*(ushort **)(puVar15 + 2) + 1,pcVar17,sVar7), iVar5 == 0)) &&
           (uVar10 = (long)puVar15 + (-0x18 - lVar16),
           ((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
          lVar18 = *(long *)(lVar19 + 8) + (long)(int)(uVar10 >> 4) * 0x10;
          goto LAB_00334f40;
        }
      }
LAB_00334d40:
      lVar16 = param_1 + lVar9 * 4;
      *(uint *)(lVar16 + 0x54) = (uint)*(byte *)(lVar8 + 0xe);
      *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(lVar8 + 8);
      lVar16 = lVar9 * 8;
      lVar9 = lVar9 + 1;
      *(ulong *)(param_1 + lVar16 + 0x68) = (ulong)*(ushort *)(lVar8 + 0xc);
      if (lVar9 == 5) goto LAB_00335238;
    }
    pcVar17 = (&PTR_DAT_0484b6f8)[lVar9];
    sVar7 = strlen(pcVar17);
    uVar10 = (ulong)*(ushort *)(lVar16 + 0xc);
    puVar15 = (uint *)((int *)(lVar16 + 8) + uVar10 * 4);
    uVar3 = *puVar15;
    if (*(int *)(lVar16 + 8) < (int)*puVar15) {
      do {
        uVar14 = (long)((ulong)uVar3 << 0x20) >> 0x23;
        if (uVar14 < sVar7) {
          uVar14 = (ulong)((byte)pcVar17[sVar7 + ~uVar14] >> ((ulong)uVar3 & 7)) & 1;
        }
        else {
          uVar14 = 0;
        }
        uVar10 = (ulong)*(ushort *)(lVar16 + 8 + uVar10 * 0x10 + uVar14 * 2 + 4);
        puVar15 = (uint *)(lVar16 + 8 + uVar10 * 0x10);
        bVar1 = (int)uVar3 < (int)*puVar15;
        uVar3 = *puVar15;
      } while (bVar1);
    }
    if (((sVar7 != **(ushort **)(puVar15 + 2)) ||
        (iVar5 = memcmp(*(ushort **)(puVar15 + 2) + 1,pcVar17,sVar7), iVar5 != 0)) ||
       (uVar10 = (long)puVar15 + (-0x18 - lVar16),
       ((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) == 0)) goto LAB_00334de0;
    lVar18 = *(long *)(lVar19 + 8) + (long)(int)(uVar10 >> 4) * 0x10;
    if (lVar9 == 4) goto LAB_00334dec;
LAB_00334f40:
    if (lVar18 == 0) goto LAB_00334d40;
    iVar5 = *(int *)(lVar18 + 8);
    lVar2 = param_1 + lVar9 * 4;
    if (lVar9 == 4) {
      if (lVar16 == 0) {
LAB_003350a0:
        *(int *)(param_1 + 0x50) = iVar5;
      }
      else {
        iVar6 = *(int *)(lVar16 + 8);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0xc);
        puVar15 = (uint *)((int *)(lVar16 + 8) + uVar10 * 4);
        uVar3 = *puVar15;
        puVar13 = puVar15;
        if (iVar6 < (int)uVar3) {
          uVar14 = uVar10;
          uVar4 = uVar3;
          do {
            if (uVar4 < 0x18) {
              uVar12 = (ulong)((byte)(&UNK_0408f73e)[-(ulong)(uVar4 >> 3)] >> ((ulong)uVar4 & 7)) &
                       1;
            }
            else {
              uVar12 = 0;
            }
            uVar14 = (ulong)*(ushort *)(lVar16 + 8 + uVar14 * 0x10 + uVar12 * 2 + 4);
            puVar13 = (uint *)(lVar16 + 8 + uVar14 * 0x10);
            bVar1 = (int)uVar4 < (int)*puVar13;
            uVar4 = *puVar13;
          } while (bVar1);
        }
        psVar11 = *(short **)(puVar13 + 2);
        if (((*psVar11 == 3) && (psVar11[1] == 0x755f && (char)psVar11[2] == '1')) &&
           ((uVar14 = (long)puVar13 + (-0x18 - lVar16),
            ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 && (*(long *)(lVar19 + 8) != 0)))) {
          iVar6 = *(int *)(*(long *)(lVar19 + 8) + (long)(int)(uVar14 >> 4) * 0x10 + 8);
joined_r0x003351fc:
          if (iVar5 == iVar6) {
            iVar6 = 0xb01;
            if (iVar5 != 0x901) {
              iVar6 = iVar5;
            }
            iVar5 = 0x1501;
            if (iVar6 != 0x1201) {
              iVar5 = iVar6;
            }
            iVar6 = 0x1505;
            if (iVar5 != 0x1205) {
              iVar6 = iVar5;
            }
            iVar5 = 0x1905;
            if (iVar6 != 0x1705) {
              iVar5 = iVar6;
            }
            iVar6 = 0xb02;
            if (iVar5 != 0x902) {
              iVar6 = iVar5;
            }
            iVar5 = 0x1502;
            if (iVar6 != 0x1202) {
              iVar5 = iVar6;
            }
            goto LAB_003350a0;
          }
          FUN_0032c410("%s.fmdb : A format of _u1 is different from _u0 of the particle shape.\n",
                       *(long *)(*(long *)(param_1 + 0x10) + 8) + 2);
          *(int *)(param_1 + 0x50) = iVar5;
        }
        else if ((ulong)*(byte *)(param_3 + 0x15) == 0xff) {
          *(int *)(param_1 + 0x50) = iVar5;
        }
        else {
          pcVar17 = (char *)(*(long *)(lVar16 + (ulong)*(byte *)(param_3 + 0x15) * 0x10 + 0x20) + 2)
          ;
          sVar7 = strlen(pcVar17);
          if (iVar6 < (int)uVar3) {
            do {
              uVar14 = (long)((ulong)uVar3 << 0x20) >> 0x23;
              if (uVar14 < sVar7) {
                uVar14 = (ulong)((byte)pcVar17[sVar7 + ~uVar14] >> ((ulong)uVar3 & 7)) & 1;
              }
              else {
                uVar14 = 0;
              }
              uVar10 = (ulong)*(ushort *)(lVar16 + 8 + uVar10 * 0x10 + uVar14 * 2 + 4);
              puVar15 = (uint *)(lVar16 + 8 + uVar10 * 0x10);
              bVar1 = (int)uVar3 < (int)*puVar15;
              uVar3 = *puVar15;
            } while (bVar1);
          }
          if ((sVar7 == **(ushort **)(puVar15 + 2)) &&
             (iVar6 = memcmp(*(ushort **)(puVar15 + 2) + 1,pcVar17,sVar7), iVar6 == 0)) {
            uVar10 = (long)puVar15 + (-0x18 - lVar16);
            if ((((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) && (*(long *)(lVar19 + 8) != 0)
               ) {
              iVar6 = *(int *)(*(long *)(lVar19 + 8) + (long)(int)(uVar10 >> 4) * 0x10 + 8);
              goto joined_r0x003351fc;
            }
            *(int *)(param_1 + 0x50) = iVar5;
          }
          else {
            *(int *)(param_1 + 0x50) = iVar5;
          }
        }
      }
    }
    else {
      *(int *)(lVar2 + 0x40) = iVar5;
    }
    *(uint *)(lVar2 + 0x54) = (uint)*(byte *)(lVar18 + 0xe);
    lVar16 = lVar9 * 8;
    lVar9 = lVar9 + 1;
    *(ulong *)(param_1 + lVar16 + 0x68) = (ulong)*(ushort *)(lVar18 + 0xc);
  } while (lVar9 != 5);
LAB_00335238:
  FUN_00347d1c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),param_1 + 0x30);
  return 1;
}

