
void FUN_023e8800(long param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar8 = param_1 + 0x1ee8;
  lVar7 = FUN_00a77090(lVar8);
  if ((lVar7 != 0) || (lVar7 = FUN_00a76ee4(lVar8), lVar7 != 0)) {
    if (-1 < (int)DAT_04c47dc0) {
      uVar11 = 0;
      piVar14 = (int *)PTR_DAT_04bb6258;
      do {
        piVar2 = piVar14;
        if (999 < uVar11) {
          piVar2 = (int *)PTR_DAT_04bb6258;
        }
        if ((*piVar2 != 0) && (*(long *)(piVar2 + 2) == *(long *)(lVar7 + 8))) {
          if ((uint)uVar11 != 0xffffffff) {
            if (999 < (uint)uVar11) {
              piVar14 = (int *)PTR_DAT_04bb6258;
            }
            iVar16 = *piVar14;
            goto LAB_023e88c8;
          }
          break;
        }
        uVar11 = uVar11 + 1;
        piVar14 = piVar14 + 4;
      } while ((ulong)DAT_04c47dc0 + 1 != uVar11);
    }
  }
  iVar16 = 0;
LAB_023e88c8:
  iVar4 = *(int *)(param_1 + 0x834);
  pbVar1 = (byte *)(param_1 + 0x1980);
  lVar8 = FUN_00a77090(lVar8);
  puVar5 = PTR_DAT_04bb43c0;
  if ((lVar8 != 0) && (-1 < (int)DAT_04c47dc0)) {
    uVar11 = 0;
    piVar14 = (int *)PTR_DAT_04bb6258;
    do {
      piVar2 = piVar14;
      if (999 < uVar11) {
        piVar2 = (int *)PTR_DAT_04bb6258;
      }
      if ((*piVar2 != 0) && (*(long *)(piVar2 + 2) == *(long *)(lVar8 + 0x10))) {
        if ((uint)uVar11 != 0xffffffff) {
          if (999 < (uint)uVar11) {
            piVar14 = (int *)PTR_DAT_04bb6258;
          }
          iVar10 = *piVar14;
          goto LAB_023e8948;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      piVar14 = piVar14 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar11);
  }
  iVar10 = 0;
LAB_023e8948:
  if ((iVar16 != iVar4) && (iVar10 != *(int *)(param_1 + 0x834))) {
    uVar12 = *(undefined8 *)(param_1 + 0x18e0);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = uVar12;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *pbVar1 = (byte)(*(uint *)(param_1 + 0x17d0) >> 6) & 1;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar8 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar8 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar8,0x5a);
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffffffbf;
    return;
  }
  if (iVar10 != *(int *)(param_1 + 0x834)) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1 + 0x808);
  lVar8 = *(long *)puVar5;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_58 = *(undefined4 *)(param_1 + 0x808);
      local_50 = 0;
      uStack_54 = *(undefined4 *)(param_1 + 0x80c);
      uVar6 = FUN_0277d6c4(&local_58);
      uVar9 = 0;
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
          uVar9 = 0;
          if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_1 + 0x808);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((*(uint *)(lVar8 + 0x1d8) <= uVar6) ||
               (puVar13 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar13 == (uint *)0x0)) goto LAB_023e8bc8;
            uVar6 = *puVar13;
            uVar9 = 0;
            if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
              puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
              uVar9 = 0;
              if (*puVar15 != 0) {
                uVar6 = puVar15[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
                  if (lVar8 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar13 - lVar8) / (ulong)uVar6);
                    }
                    if (*puVar15 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < DAT_05326d48) &&
                       (uVar9 = *(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), uVar9 < 0x52))
                    goto LAB_023e8bcc;
                  }
                }
                goto LAB_023e8bc8;
              }
            }
          }
        }
        else {
LAB_023e8bc8:
          uVar9 = 0;
        }
      }
LAB_023e8bcc:
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *pbVar1 = uVar9 == 0x1d;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1981) = *(undefined8 *)(param_1 + 0x808);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      local_44 = 0x59;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      lVar8 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      goto LAB_023e8d98;
    }
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1981) = *(undefined8 *)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  lVar8 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
LAB_023e8d98:
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + 0x278;
  }
  FUN_03ebb160(lVar7,0x59);
  return;
}

