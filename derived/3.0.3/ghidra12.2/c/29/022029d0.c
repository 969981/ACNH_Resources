
void FUN_022029d0(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 local_28;
  uint local_24;
  
  uVar17 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_1 + 0x18))();
  local_28 = FUN_006bd550(param_1[1],0);
  puVar9 = (uint *)FUN_0079e4d0(uVar17,&local_28);
  puVar8 = PTR_DAT_04bb40a8;
  puVar7 = PTR_DAT_04bb40a0;
  if (puVar9 != (uint *)0x0) {
    if (*puVar9 == 0) {
LAB_02202b34:
      iVar14 = 0;
    }
    else {
      cVar11 = *PTR_DAT_04bb40a0;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar8 + 8);
          if (-1 < (int)uVar3) {
            if ((int *)((ulong)uVar3 + (long)puVar9) == (int *)0x0) goto LAB_02202b34;
            iVar14 = *(int *)((ulong)uVar3 + (long)puVar9);
            if (0x45 < iVar14) {
              return;
            }
            goto LAB_02202b38;
          }
          if (uVar3 != 0xffffffff) goto LAB_02202b34;
        }
        puVar15 = (uint *)(ulong)*puVar9;
        iVar14 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar15)) goto LAB_02202b38;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar15);
        if (lVar1 == 0) goto LAB_02202b34;
        uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
        iVar14 = 0;
        if (uVar10 == 0) goto LAB_02202b38;
        piVar16 = (int *)(lVar1 + 4);
        while (piVar16[-1] != 0x3ce2e8d8) {
          piVar16 = piVar16 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            iVar14 = 0;
            goto LAB_02202b38;
          }
        }
        iVar14 = 0;
        if (*piVar16 != -1) {
          iVar14 = *piVar16;
        }
        *(int *)(puVar8 + 8) = iVar14;
      } while (*puVar9 != 0);
      iVar14 = 0;
    }
LAB_02202b38:
    puVar7 = PTR_DAT_04bb4760;
    local_24 = iVar14 + 0xb;
    lVar1 = *(long *)PTR_DAT_04bb4760 + (ulong)local_24 * 0x15;
    if (0x6c < local_24) {
      lVar1 = *(long *)PTR_DAT_04bb4760;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar12 + 0x473);
    uVar10 = (ulong)(char)bVar4;
    pbVar13 = PTR_DAT_04bc1220;
    if (uVar10 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar12 + 0x48) + (uVar10 & 0xffffffff) * 0x20;
      if (7 < bVar4) {
        puVar9 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar13 = (byte *)(lVar12 + 0x473);
      }
    }
    bVar5 = *(byte *)(lVar1 + 7) >> 4 & 3;
    if (bVar5 != 1) {
      if (bVar5 != 2) {
        if (bVar5 == 3) {
          return;
        }
        uVar6 = *(ushort *)(lVar1 + 5) >> 2;
        if ((ushort)*pbVar13 != (uVar6 & 0xff)) {
          if ((bVar4 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff))) {
            if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff)) {
              return;
            }
          }
          else {
            pbVar13 = (byte *)(lVar12 + 0x48) + (uVar10 & 0xffffffff) * 0x80;
            if (7 < bVar4) {
              pbVar13 = (byte *)(lVar12 + 0x48);
            }
            if ((*pbVar13 >> 3 & 1) != 0) {
              lVar12 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
              lVar2 = lVar12 + (uVar10 & 0xffffffff) * 0xc;
              if (0xb < bVar4) {
                lVar2 = lVar12;
              }
              if (*(char *)(lVar2 + 10) == '\0') {
                return;
              }
            }
          }
        }
      }
      *(byte *)(lVar1 + 7) = *(byte *)(lVar1 + 7) & 0xf7 | 4;
      FUN_020ea498(*(undefined8 *)puVar7,local_24,0,0);
    }
  }
  return;
}

