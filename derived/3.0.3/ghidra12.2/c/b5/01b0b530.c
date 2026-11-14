
void FUN_01b0b530(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  char cVar12;
  long lVar13;
  uint *puVar14;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  puVar14 = *(uint **)(param_1 + 0x10);
  if (puVar14 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar7 = *puVar14;
    if (uVar7 != 0 && puVar14 != (uint *)(ulong)uVar7) {
      puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      uVar7 = 0;
      if (*puVar8 == 0) goto LAB_01b0b5f0;
      uVar7 = puVar8[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar13 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar13 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar7);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar7 < 0xbd)) goto LAB_01b0b5f0;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01b0b5f0:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar7 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
       (((uVar7 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar11 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar11) +
                       (long)puVar8);
      goto joined_r0x01b0b7a4;
    }
  }
  else if (uVar7 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01b0b7a4:
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar12 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar5 + 0x70);
            if (-1 < (int)uVar7) {
              lVar13 = (ulong)uVar7 + (long)puVar8;
              goto LAB_01b0b718;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          lVar13 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_01b0b718;
          lVar13 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar1 = (long)puVar8 + (lVar13 - (long)puVar14);
          if (lVar1 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar5 + 0x70) = 0xfffffffe;
          lVar13 = 0;
          if (uVar9 == 0) goto LAB_01b0b718;
          piVar10 = (int *)(lVar1 + 4);
          while (piVar10[-1] != -0x7840ff18) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              lVar13 = 0;
              goto LAB_01b0b718;
            }
          }
          iVar11 = 0;
          if (*piVar10 != -1) {
            iVar11 = *piVar10;
          }
          *(int *)(puVar5 + 0x70) = iVar11;
        } while (*puVar8 != 0);
      }
      lVar13 = 0;
LAB_01b0b718:
      puVar14 = *(uint **)(param_1 + 0x10);
      lVar1 = *(long *)PTR_PTR_04bbfea8;
      puVar3 = PTR_DAT_04bbfe90;
      pcVar4 = PTR_DAT_04bbfe88;
      if (lVar13 != 0) {
        lVar1 = lVar13;
      }
      goto joined_r0x01b0b7b4;
    }
  }
  lVar1 = *(long *)(PTR_PTR_04bb2238 + 8);
  puVar3 = PTR_DAT_04bbfe90;
  pcVar4 = PTR_DAT_04bbfe88;
joined_r0x01b0b7b4:
  PTR_DAT_04bbfe88 = pcVar4;
  PTR_DAT_04bbfe90 = puVar3;
  if (puVar14 == (uint *)0x0) {
    uVar6 = 0xfffe;
  }
  else {
    if (*puVar14 != 0) {
      cVar12 = *pcVar4;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *pcVar4 = '\x01';
          memset(puVar3,0xff,0x1ac);
        }
        else {
          uVar7 = *(uint *)(puVar3 + 0x128);
          if (-1 < (int)uVar7) {
            if ((undefined2 *)((ulong)uVar7 + (long)puVar14) == (undefined2 *)0x0) break;
            uVar6 = *(undefined2 *)((ulong)uVar7 + (long)puVar14);
            goto LAB_01b0b8a4;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar8 = (uint *)(ulong)*puVar14;
        uVar6 = 0;
        if ((*puVar14 == 0) || (puVar14 == puVar8)) goto LAB_01b0b8a4;
        lVar13 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar8)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar14 + (lVar13 - (long)puVar8);
        if (lVar13 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar8));
        *(undefined4 *)(puVar3 + 0x128) = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar10 = (int *)(lVar13 + 4);
        while (piVar10[-1] != 0x54706054) {
          piVar10 = piVar10 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_01b0b8a0;
        }
        uVar6 = 0;
        iVar11 = 0;
        if (*piVar10 != -1) {
          iVar11 = *piVar10;
        }
        *(int *)(puVar3 + 0x128) = iVar11;
        if (*puVar14 == 0) goto LAB_01b0b8a4;
      } while( true );
    }
LAB_01b0b8a0:
    uVar6 = 0;
  }
LAB_01b0b8a4:
  FUN_038d1270(param_2,"%s_%05d",lVar1,uVar6);
  return;
}

