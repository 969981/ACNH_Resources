
uint FUN_01aff960(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  float fVar13;
  
  puVar4 = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  if (*puVar11 == 0) {
    return 0;
  }
  cVar12 = *PTR_DAT_04bbfe88;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *puVar3 = 1;
      memset(puVar4,0xff,0x1ac);
    }
    else {
      uVar7 = *(uint *)(puVar4 + 0x120);
      uVar10 = (ulong)uVar7;
      if (-1 < (int)uVar7) {
        if ((short *)(uVar10 + (long)puVar11) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar10 + (long)puVar11) == -1) {
          return 0;
        }
        puVar11 = *(uint **)(param_1 + 0x10);
        if ((puVar11 == (uint *)0x0) || (*puVar11 == 0)) goto LAB_01affb34;
        break;
      }
      if (uVar7 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0;
    }
    if (puVar11 == puVar6) {
      return 0;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar11 + (lVar1 - (long)puVar6);
    if (lVar1 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
    *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar1 + 4);
    while (piVar8[-1] != -0x34a14cc1) {
      piVar8 = piVar8 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar5 = 0;
    if (*piVar8 != -1) {
      iVar5 = *piVar8;
    }
    *(int *)(puVar4 + 0x120) = iVar5;
    if (*puVar11 == 0) {
      return 0;
    }
  } while( true );
LAB_01affaa0:
  if (-1 < (int)uVar10) {
    if ((ushort *)((long)puVar11 + uVar10) == (ushort *)0x0) {
LAB_01affb34:
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (uint)*(ushort *)((long)puVar11 + uVar10);
    }
LAB_01affb38:
    puVar4 = PTR_DAT_04bbff50;
    puVar3 = PTR_DAT_04bbff48;
    uVar7 = uVar7 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
    if ((uVar7 < *(uint *)(DAT_0532a7c8 + 0x1d8)) &&
       (puVar11 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar11 != (uint *)0x0)) {
      puVar6 = *(uint **)(param_1 + 0x10);
      if ((puVar6 != (uint *)0x0) &&
         ((uVar7 = *puVar6, uVar7 != 0 && (puVar6 != (uint *)(ulong)uVar7)))) {
        puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar7);
        if ((*puVar9 != 0) && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x78)) {
              iVar5 = FUN_01af02d0(param_1);
              fVar13 = (float)iVar5 * 0.1;
              uVar7 = 0;
              if (fVar13 != (float)(int)fVar13) {
                uVar7 = (uint)(0.0 <= fVar13);
              }
              return uVar7 + (int)fVar13;
            }
          }
        }
      }
      if (*puVar11 != 0) {
        cVar12 = *PTR_DAT_04bbff48;
        while( true ) {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0xe0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xa8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xb0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xb8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xc0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 200) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xd0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xd8) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar4 + 0x4c);
            if (-1 < (int)uVar7) {
              if ((byte *)((ulong)uVar7 + (long)puVar11) == (byte *)0x0) {
                return 0;
              }
              return (uint)*(byte *)((ulong)uVar7 + (long)puVar11);
            }
            if (uVar7 != 0xffffffff) {
              return 0;
            }
          }
          puVar6 = (uint *)(ulong)*puVar11;
          if (*puVar11 == 0) {
            return 0;
          }
          if (puVar11 == puVar6) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + (lVar1 - (long)puVar6);
          if (lVar1 == 0) {
            return 0;
          }
          uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
          *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
          if (uVar10 == 0) {
            return 0;
          }
          piVar8 = (int *)(lVar1 + 4);
          while (piVar8[-1] != 0x29ecb129) {
            piVar8 = piVar8 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              return 0;
            }
          }
          iVar5 = 0;
          if (*piVar8 != -1) {
            iVar5 = *piVar8;
          }
          *(int *)(puVar4 + 0x4c) = iVar5;
          if (*puVar11 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
    return 0;
  }
  if ((int)uVar10 != -1) goto LAB_01affb34;
  puVar6 = (uint *)(ulong)*puVar11;
  uVar7 = 0xffff;
  if ((*puVar11 == 0) || (puVar11 == puVar6)) goto LAB_01affb38;
  lVar1 = 0xc;
  if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar11 + (lVar1 - (long)puVar6);
  if (lVar1 == 0) goto LAB_01affb34;
  uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
  *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01affb34;
  puVar6 = (uint *)(lVar1 + 4);
  while (puVar6[-1] != 0xcb5eb33f) {
    puVar6 = puVar6 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01affb34;
  }
  uVar2 = 0;
  if (*puVar6 != 0xffffffff) {
    uVar2 = *puVar6;
  }
  uVar10 = (ulong)uVar2;
  uVar7 = 0xffff;
  *(uint *)(puVar4 + 0x120) = uVar2;
  if (*puVar11 == 0) goto LAB_01affb38;
  goto LAB_01affaa0;
}

