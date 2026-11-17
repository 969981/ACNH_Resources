
void FUN_02a0ac90(uint *param_1,undefined8 *param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  bool bVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  byte bVar19;
  ulong uVar20;
  uint *puVar21;
  int iVar22;
  short sVar23;
  int iVar24;
  char cVar25;
  uint uVar26;
  uint *puVar27;
  float fVar28;
  uint local_64;
  
  param_1[0x74] = *(uint *)((long)param_2 + 0x24);
  bVar19 = *(byte *)(param_2 + 6);
  *(byte *)((long)param_1 + 0x23a) = bVar19;
  if ('\0' < (char)bVar19) {
    puVar4 = (ulong *)(DAT_055f4120 + 0x48);
    if (param_3 != (ulong *)0x0) {
      puVar4 = param_3;
    }
    uVar18 = *puVar4;
    puVar14 = param_1 + 2;
    if (bVar19 == 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      puVar16 = param_1;
      do {
        uVar2 = uVar20 + 1;
        puVar21 = puVar16 + 2;
        if (0xf < uVar20) {
          puVar21 = puVar14;
        }
        *puVar21 = (uint)uVar18 & 0xf;
        uVar20 = uVar20 + 2;
        puVar21 = puVar16 + 4;
        if (0xf < uVar2) {
          puVar21 = puVar14;
        }
        *puVar21 = (uint)uVar18 >> 4 & 0xf;
        uVar18 = uVar18 >> 8;
        puVar16 = puVar16 + 4;
      } while (uVar20 != ((ulong)bVar19 & 0xfe));
    }
    if ((bVar19 & 1) != 0) {
      puVar16 = puVar14 + uVar20 * 2;
      if (0xf < uVar20) {
        puVar16 = puVar14;
      }
      *puVar16 = (uint)uVar18 & 0xf;
    }
    bVar19 = *(byte *)((long)param_1 + 0x23a);
    if ((*(int *)(param_2 + 5) == 1) && ('\0' < (char)bVar19)) {
      uVar18 = 0;
      puVar16 = puVar14;
      do {
        puVar21 = puVar16;
        if (0xf < uVar18) {
          puVar21 = puVar14;
        }
        if (*puVar21 == 0xf) {
          *puVar21 = 0xe;
        }
        uVar18 = uVar18 + 1;
        puVar16 = puVar16 + 2;
      } while (bVar19 != uVar18);
      bVar19 = *(byte *)((long)param_1 + 0x23a);
    }
  }
  uVar26 = (uint)(char)bVar19;
  if (*(int *)((long)param_2 + 0x24) == 1) {
    if (0 < (int)uVar26) {
      uVar18 = 0;
      puVar14 = param_1 + 2;
      do {
        if ((uVar18 & 1) == 0) {
          puVar16 = puVar14;
          if (0xf < uVar18) {
            puVar16 = param_1 + 2;
          }
          *(undefined1 *)((long)puVar16 + 6) = 2;
        }
        uVar18 = uVar18 + 1;
        puVar14 = puVar14 + 2;
      } while (uVar26 != uVar18);
    }
  }
  else if ((*(int *)((long)param_2 + 0x24) == 2) && (0 < (int)uVar26)) {
    uVar17 = 0;
    do {
      uVar9 = param_1[0x6e];
      param_1[0x6e] = param_1[0x6f];
      uVar9 = uVar9 ^ uVar9 << 0xb;
      param_1[0x6f] = param_1[0x70];
      uVar10 = param_1[0x71];
      param_1[0x70] = uVar10;
      uVar9 = uVar9 >> 8 ^ uVar10 >> 0x13 ^ uVar9 ^ uVar10;
      param_1[0x71] = uVar9;
      if ((uVar9 & 1) != 0) {
        uVar18 = (ulong)uVar17;
        bVar12 = 0xf < uVar17;
        uVar17 = uVar17 + 1;
        puVar14 = param_1 + 2 + uVar18 * 2;
        if (bVar12) {
          puVar14 = param_1 + 2;
        }
        *(undefined1 *)((long)puVar14 + 6) = 2;
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar26);
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[3];
  *(undefined8 *)(param_1 + 0x66) = param_2[2];
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x62) = uVar6;
  *(undefined8 *)(param_1 + 100) = uVar7;
  if (*(int *)((long)param_2 + 0x24) == 3) {
    bVar19 = *(byte *)((long)param_1 + 0x23a);
    puVar14 = param_1 + 0x62;
    if ('\0' < (char)bVar19) {
      puVar16 = param_1 + 2;
      if (bVar19 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        puVar21 = (uint *)((long)param_1 + 0x18a);
        puVar27 = param_1;
        do {
          puVar15 = (uint *)((long)puVar21 + -2);
          if (0xf < uVar18) {
            puVar15 = puVar14;
          }
          puVar5 = puVar27 + 2;
          if (0xf < uVar18) {
            puVar5 = puVar16;
          }
          *(short *)(puVar5 + 1) = (short)(char)*puVar15;
          puVar15 = puVar27 + 4;
          puVar5 = puVar21;
          if (0xf < uVar18 + 1) {
            puVar15 = puVar16;
            puVar5 = puVar14;
          }
          uVar18 = uVar18 + 2;
          puVar21 = puVar21 + 1;
          *(short *)(puVar15 + 1) = (short)(char)*puVar5;
          puVar27 = puVar27 + 4;
        } while (uVar18 != ((ulong)bVar19 & 0xfe));
      }
      if ((bVar19 & 1) != 0) {
        puVar21 = puVar16 + uVar18 * 2;
        if (0xf < uVar18) {
          puVar21 = puVar16;
        }
        puVar16 = (uint *)((long)puVar14 + uVar18 * 2);
        if (0xf < uVar18) {
          puVar16 = puVar14;
        }
        *(short *)(puVar21 + 1) = (short)(char)*puVar16;
      }
      bVar19 = *(byte *)((long)param_1 + 0x23a);
    }
    local_64 = param_1[2];
    sVar23 = (short)(char)param_1[0x62];
    if (0xd < (int)local_64) {
      local_64 = 0xf;
    }
    fVar28 = (float)(int)*(char *)((long)param_1 + 0x189) / 127.0;
    puVar16 = param_1 + 0x22;
    if ((char)bVar19 < '\x02') {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      puVar21 = (uint *)((long)param_1 + 0x18a);
      puVar27 = param_1 + 4;
      uVar18 = 1;
      do {
        puVar15 = puVar27;
        if (0xf < uVar18) {
          puVar15 = param_1 + 2;
        }
        if (*puVar15 == 0xe) {
          puVar15 = puVar21;
          if (0xf < uVar18) {
            puVar15 = puVar14;
          }
          sVar23 = sVar23 + (char)*puVar15;
        }
        else {
          puVar5 = puVar16 + (ulong)uVar26 * 4;
          if (0xf < uVar26) {
            puVar5 = puVar16;
          }
          puVar5[0] = 0;
          puVar5[1] = 0;
          if (((-1 < (int)local_64) && ((int)local_64 < 0xe)) &&
             (puVar13 = *(uint **)(param_1 + 0x76), puVar13 != (uint *)0x0)) {
            if (*puVar13 <= local_64) {
              local_64 = 0;
            }
            plVar1 = (long *)(*(long *)(puVar13 + 2) + (long)(int)local_64 * 0x10);
            (**(code **)(*plVar1 + 0x18))(plVar1);
            *(long *)puVar5 = plVar1[1];
          }
          puVar5[2] = (uint)fVar28;
          *(short *)(puVar5 + 3) = sVar23;
          uVar26 = uVar26 + 1;
          *(short *)((long)puVar5 + 0xe) = sVar23;
          local_64 = *puVar15;
          puVar15 = puVar21;
          if (0xf < uVar18) {
            puVar15 = puVar14;
          }
          sVar23 = (short)(char)*puVar15;
          fVar28 = (float)(int)*(char *)((long)puVar15 + 1) / 127.0;
        }
        uVar18 = uVar18 + 1;
        puVar21 = (uint *)((long)puVar21 + 2);
        puVar27 = puVar27 + 2;
      } while (((long)(char)bVar19 & 0xffffffffU) != uVar18);
      if (uVar26 < 0x10) {
        puVar16 = puVar16 + (ulong)uVar26 * 4;
      }
    }
    cVar25 = (char)uVar26;
    puVar16[0] = 0;
    puVar16[1] = 0;
    if (((-1 < (int)local_64) && ((int)local_64 < 0xe)) &&
       (puVar14 = *(uint **)(param_1 + 0x76), puVar14 != (uint *)0x0)) {
      if (*puVar14 <= local_64) {
        local_64 = 0;
      }
      plVar1 = (long *)(*(long *)(puVar14 + 2) + (long)(int)local_64 * 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      *(long *)puVar16 = plVar1[1];
    }
    puVar16[2] = (uint)fVar28;
    *(short *)(puVar16 + 3) = sVar23;
    *(short *)((long)puVar16 + 0xe) = sVar23;
  }
  else {
    uVar26 = *(char *)((long)param_2 + 0x2c) * 3;
    bVar19 = *(byte *)((long)param_1 + 0x23a);
    iVar22 = (int)(uVar26 + ((uVar26 & 0x8000) >> 0xf)) >> 1;
    if ('\0' < (char)bVar19) {
      puVar14 = param_1 + 2;
      sVar23 = (short)iVar22;
      if (bVar19 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        puVar16 = param_1;
        do {
          puVar21 = puVar16 + 2;
          if (0xf < uVar18) {
            puVar21 = puVar14;
          }
          puVar27 = puVar16 + 4;
          if (0xf < uVar18 + 1) {
            puVar27 = puVar14;
          }
          uVar18 = uVar18 + 2;
          *(short *)(puVar21 + 1) = sVar23 * *(char *)((long)puVar21 + 6);
          *(short *)(puVar27 + 1) = sVar23 * *(char *)((long)puVar27 + 6);
          puVar16 = puVar16 + 4;
        } while (uVar18 != ((ulong)bVar19 & 0xfe));
      }
      if ((bVar19 & 1) != 0) {
        puVar16 = puVar14 + uVar18 * 2;
        if (0xf < uVar18) {
          puVar16 = puVar14;
        }
        *(short *)(puVar16 + 1) = sVar23 * *(char *)((long)puVar16 + 6);
      }
      uVar26 = *(char *)((long)param_2 + 0x2c) * 3;
      bVar19 = *(byte *)((long)param_1 + 0x23a);
      iVar22 = (int)(uVar26 + ((uVar26 & 0x8000) >> 0xf)) >> 1;
    }
    uVar26 = *(char *)((long)param_2 + 0x2d) * 3;
    iVar3 = (int)(uVar26 + ((uVar26 & 0x8000) >> 0xf)) >> 1;
    if (iVar22 <= iVar3) {
      iVar3 = iVar22;
    }
    local_64 = param_1[2];
    iVar24 = (int)*(char *)((long)param_1 + 0xe);
    if (0xd < (int)local_64) {
      local_64 = 0xf;
    }
    puVar14 = param_1 + 0x22;
    sVar23 = (short)iVar22;
    if ((char)bVar19 < '\x02') {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      puVar16 = param_1 + 4;
      uVar18 = 1;
      do {
        puVar21 = puVar16;
        if (0xf < uVar18) {
          puVar21 = param_1 + 2;
        }
        if (*puVar21 == 0xe) {
          iVar24 = iVar24 + *(char *)((long)puVar21 + 6);
        }
        else {
          puVar27 = puVar14 + (ulong)uVar26 * 4;
          if (0xf < uVar26) {
            puVar27 = puVar14;
          }
          puVar27[0] = 0;
          puVar27[1] = 0;
          if (((-1 < (int)local_64) && ((int)local_64 < 0xe)) &&
             (((1 < iVar24 && (puVar15 = *(uint **)(param_1 + 0x78), puVar15 != (uint *)0x0)) ||
              (puVar15 = *(uint **)(param_1 + 0x76), puVar15 != (uint *)0x0)))) {
            if (*puVar15 <= local_64) {
              local_64 = 0;
            }
            plVar1 = (long *)(*(long *)(puVar15 + 2) + (long)(int)local_64 * 0x10);
            (**(code **)(*plVar1 + 0x18))();
            *(long *)puVar27 = plVar1[1];
          }
          uVar26 = uVar26 + 1;
          *(short *)(puVar27 + 3) = (short)iVar3 + ((short)iVar24 + -1) * sVar23;
          *(short *)((long)puVar27 + 0xe) = sVar23 * (short)iVar24;
          local_64 = *puVar21;
          iVar24 = (int)*(char *)((long)puVar21 + 6);
        }
        uVar18 = uVar18 + 1;
        puVar16 = puVar16 + 2;
      } while (((long)(char)bVar19 & 0xffffffffU) != uVar18);
      if (uVar26 < 0x10) {
        puVar14 = puVar14 + (ulong)uVar26 * 4;
      }
    }
    cVar25 = (char)uVar26;
    puVar14[0] = 0;
    puVar14[1] = 0;
    if (((-1 < (int)local_64) && ((int)local_64 < 0xe)) &&
       (((1 < iVar24 && (puVar16 = *(uint **)(param_1 + 0x78), puVar16 != (uint *)0x0)) ||
        (puVar16 = *(uint **)(param_1 + 0x76), puVar16 != (uint *)0x0)))) {
      if (*puVar16 <= local_64) {
        local_64 = 0;
      }
      plVar1 = (long *)(*(long *)(puVar16 + 2) + (long)(int)local_64 * 0x10);
      (**(code **)(*plVar1 + 0x18))();
      *(long *)puVar14 = plVar1[1];
    }
    *(short *)(puVar14 + 3) = (short)iVar3 + ((short)iVar24 + -1) * sVar23;
    *(short *)((long)puVar14 + 0xe) = sVar23 * (short)iVar24;
  }
  *(char *)((long)param_1 + 0x23b) = cVar25 + '\x01';
  param_1[0x75] = *(uint *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x23f) = *(undefined1 *)((long)param_2 + 0x2f);
  uVar11 = *(undefined1 *)((long)param_2 + 0x2e);
  *(undefined2 *)((long)param_1 + 0x236) = 0;
  *(undefined1 *)((long)param_1 + 0x23e) = uVar11;
  return;
}

