
void FUN_02558ce0(byte *param_1,long *param_2,char *param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ushort uVar12;
  short sVar13;
  byte bVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  
  if (*param_3 != '\0') {
    if (DAT_05aed670 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar9 = 0;
      puVar15 = DAT_055c1b60;
      do {
        if (*(int *)(puVar15 + -1) == *(int *)(puVar20 + 7)) {
          if (((uVar9 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02558dc8;
          break;
        }
        puVar15 = (undefined8 *)puVar15[1];
        uVar9 = uVar9 + 1;
      } while (puVar15 != &DAT_055c1b58);
    }
    uVar9 = 0;
LAB_02558dc8:
    uVar10 = FUN_016e6c20(uVar9);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  if (7 < *param_1) {
    return;
  }
  puVar11 = (uint *)FUN_0251d928(*(undefined2 *)((long)param_2 + 3));
  uVar9 = *puVar11;
  if (uVar9 != 0 && puVar11 != (uint *)(ulong)uVar9) {
    puVar16 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
    uVar12 = 0;
    if (*puVar16 == 0) goto LAB_02558e00;
    uVar9 = puVar16[1];
    if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
      lVar4 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar16 + lVar4 + (ulong)(ushort)puVar16[2] * 8;
      if (lVar4 != 0) {
        uVar3 = 0;
        if ((ulong)uVar9 != 0) {
          uVar3 = (uint)((ulong)((long)puVar11 - lVar4) / (ulong)uVar9);
        }
        if (*puVar16 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05490140) &&
           (uVar12 = *(ushort *)(DAT_05490148 + (long)(int)uVar3 * 2), uVar12 < 2))
        goto LAB_02558e00;
      }
    }
  }
  uVar12 = 0;
LAB_02558e00:
  if ((uVar12 != 1) || (param_3[4] == '\0')) {
    bVar14 = *param_1;
    bVar7 = 7 < bVar14;
    lVar4 = param_2[2];
    lVar17 = param_2[3];
    if (bVar7) {
      bVar14 = 0xff;
    }
    pbVar1 = (byte *)(DAT_054f5738 + 0x2e8) + ((long)(char)bVar14 & 0xffffffffU) * 0x80;
    if (bVar7) {
      pbVar1 = (byte *)(DAT_054f5738 + 0x2e8);
    }
    lVar19 = *param_2;
    *(long *)(pbVar1 + 8) = param_2[1];
    *(long *)(pbVar1 + 0x10) = lVar4;
    *(long *)(pbVar1 + 0x18) = lVar17;
    lVar17 = param_2[7];
    lVar4 = param_2[4];
    lVar5 = param_2[5];
    *(long *)(pbVar1 + 0x30) = param_2[6];
    *(long *)(pbVar1 + 0x38) = lVar17;
    *(long *)(pbVar1 + 0x20) = lVar4;
    *(long *)(pbVar1 + 0x28) = lVar5;
    lVar17 = param_2[0xb];
    lVar4 = param_2[8];
    lVar5 = param_2[9];
    *(long *)(pbVar1 + 0x50) = param_2[10];
    *(long *)(pbVar1 + 0x58) = lVar17;
    *(long *)(pbVar1 + 0x40) = lVar4;
    *(long *)(pbVar1 + 0x48) = lVar5;
    lVar5 = param_2[0xf];
    lVar4 = param_2[0xd];
    lVar17 = param_2[0xe];
    lVar18 = param_2[0xc];
    *(long *)pbVar1 = lVar19;
    *(short *)(pbVar1 + 0x78) = (short)lVar5;
    *(long *)(pbVar1 + 0x60) = lVar18;
    *(long *)(pbVar1 + 0x68) = lVar4;
    *(long *)(pbVar1 + 0x70) = lVar17;
    bVar14 = *param_1;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    *pbVar1 = bVar14;
    if (param_3[2] != '\0') {
      if (DAT_05aed670 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar8 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar13 = 0;
        puVar15 = DAT_055c1b60;
        do {
          if (*(int *)(puVar15 + -1) == *(int *)(puVar20 + 7)) {
            if (sVar13 != -1) goto LAB_02558fe4;
            break;
          }
          puVar15 = (undefined8 *)puVar15[1];
          sVar13 = sVar13 + 1;
        } while (puVar15 != &DAT_055c1b58);
      }
      sVar13 = 0;
LAB_02558fe4:
      *(short *)(pbVar1 + 1) = sVar13;
    }
    bVar14 = *param_1;
    bVar7 = 7 < bVar14;
    if (bVar7) {
      bVar14 = 0xff;
    }
    cVar6 = param_3[1];
    puVar2 = PTR_DAT_04bc31b0 + (ulong)(uint)(int)(char)bVar14 * 0x30;
    if (bVar7) {
      puVar2 = PTR_DAT_04bc31b0;
    }
    if (((*(long *)(puVar2 + 8) != *(long *)pbVar1 ||
         *(long *)(puVar2 + 0x10) != *(long *)(pbVar1 + 8)) ||
        *(long *)(puVar2 + 0x18) != *(long *)(pbVar1 + 0x10)) ||
        *(int *)(puVar2 + 0x20) != *(int *)(pbVar1 + 0x18)) {
      lVar4 = *(long *)pbVar1;
      lVar17 = *(long *)(pbVar1 + 8);
      lVar19 = *(long *)(pbVar1 + 0x10);
      *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(pbVar1 + 0x18);
      *(long *)(puVar2 + 8) = lVar4;
      *(long *)(puVar2 + 0x10) = lVar17;
      *(long *)(puVar2 + 0x18) = lVar19;
      if (cVar6 == '\0') {
        puVar2[0x24] = 1;
      }
    }
    bVar14 = *param_1;
    bVar7 = 7 < bVar14;
    if (bVar7) {
      bVar14 = 0xff;
    }
    puVar2 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar14 * 0x70;
    if (bVar7) {
      puVar2 = PTR_DAT_04bc31b8;
    }
    iVar8 = memcmp(puVar2 + 8,pbVar1 + 0x20,0x58);
    if (iVar8 != 0) {
      lVar4 = *(long *)(pbVar1 + 0x20);
      lVar17 = *(long *)(pbVar1 + 0x30);
      *(long *)(puVar2 + 0x10) = *(long *)(pbVar1 + 0x28);
      *(long *)(puVar2 + 0x18) = lVar17;
      *(long *)(puVar2 + 8) = lVar4;
      lVar4 = *(long *)(pbVar1 + 0x38);
      lVar17 = *(long *)(pbVar1 + 0x40);
      lVar19 = *(long *)(pbVar1 + 0x50);
      *(long *)(puVar2 + 0x30) = *(long *)(pbVar1 + 0x48);
      *(long *)(puVar2 + 0x38) = lVar19;
      *(long *)(puVar2 + 0x20) = lVar4;
      *(long *)(puVar2 + 0x28) = lVar17;
      lVar4 = *(long *)(pbVar1 + 0x58);
      lVar17 = *(long *)(pbVar1 + 0x60);
      lVar19 = *(long *)(pbVar1 + 0x70);
      *(long *)(puVar2 + 0x50) = *(long *)(pbVar1 + 0x68);
      *(long *)(puVar2 + 0x58) = lVar19;
      *(long *)(puVar2 + 0x40) = lVar4;
      *(long *)(puVar2 + 0x48) = lVar17;
      if (cVar6 == '\0') {
        puVar2[0x60] = 1;
      }
    }
  }
  return;
}

