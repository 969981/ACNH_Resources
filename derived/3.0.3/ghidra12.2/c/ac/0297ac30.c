
void FUN_0297ac30(short *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  short *psVar8;
  uint *puVar9;
  char cVar10;
  short sVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  
  puVar6 = PTR_DAT_04bc38b0;
  puVar5 = PTR_DAT_04bc38a8;
  param_3 = param_3 & 0xffff;
  uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
  if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
     (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
     puVar9 != (uint *)0x0)) {
    if (*puVar9 != 0) {
      cVar10 = *PTR_DAT_04bc38a8;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar6 + 0x18);
          if (-1 < (int)uVar4) {
            if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
              sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
              goto LAB_0297ad6c;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar9;
        sVar11 = -2;
        if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297ad6c;
        lVar7 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
        if (lVar7 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
        *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar7 + 4);
        while (piVar14[-1] != 0x291a1b04) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0297ad68;
        }
        iVar15 = 0;
        if (*piVar14 != -1) {
          iVar15 = *piVar14;
        }
        *(int *)(puVar6 + 0x18) = iVar15;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0297ad68:
    sVar11 = -2;
LAB_0297ad6c:
    *param_1 = sVar11;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_0277d4ac(param_1);
    puVar6 = PTR_DAT_04bc38b0;
    puVar5 = PTR_DAT_04bc38a8;
    iVar15 = 0;
    if (*param_1 != -2) {
      if (param_4 == 0) {
        return;
      }
      iVar15 = 1;
    }
    uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
       puVar9 != (uint *)0x0)) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bc38a8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
                goto LAB_0297aed0;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          sVar11 = -2;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297aed0;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != 0x395b7795) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0297aecc;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0xc) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0297aecc:
      sVar11 = -2;
LAB_0297aed0:
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    puVar6 = PTR_DAT_04bc38b0;
    puVar5 = PTR_DAT_04bc38a8;
    if (sVar3 != -2) {
      if (iVar15 == param_4) {
        return;
      }
      iVar15 = iVar15 + 1;
    }
    uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
       puVar9 != (uint *)0x0)) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bc38a8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x10);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
                goto LAB_0297b034;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          sVar11 = -2;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297b034;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != 0x79ad3f84) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0297b030;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0x10) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0297b030:
      sVar11 = -2;
LAB_0297b034:
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    puVar6 = PTR_DAT_04bc38b0;
    puVar5 = PTR_DAT_04bc38a8;
    if (sVar3 != -2) {
      if (iVar15 == param_4) {
        return;
      }
      iVar15 = iVar15 + 1;
    }
    uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
       puVar9 != (uint *)0x0)) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bc38a8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x24);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
                goto LAB_0297b1a0;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          sVar11 = -2;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297b1a0;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != -0x78f0e1d7) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0297b19c;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0x24) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0297b19c:
      sVar11 = -2;
LAB_0297b1a0:
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    puVar6 = PTR_DAT_04bc38b0;
    puVar5 = PTR_DAT_04bc38a8;
    if (sVar3 != -2) {
      if (iVar15 == param_4) {
        return;
      }
      iVar15 = iVar15 + 1;
    }
    uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
       puVar9 != (uint *)0x0)) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bc38a8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x14);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
                goto LAB_0297b304;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          sVar11 = -2;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297b304;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != -0x33ec914b) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0297b300;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0x14) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0297b300:
      sVar11 = -2;
LAB_0297b304:
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    puVar6 = PTR_DAT_04bc38b0;
    puVar5 = PTR_DAT_04bc38a8;
    if (sVar3 != -2) {
      if (iVar15 == param_4) {
        return;
      }
      iVar15 = iVar15 + 1;
    }
    uVar4 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((uVar4 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (puVar9 = *(uint **)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)uVar4 * 8),
       puVar9 != (uint *)0x0)) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bc38a8;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar4 + (long)puVar9);
                goto LAB_0297b470;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          sVar11 = -2;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0297b470;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != 0x39ed7f5a) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0297b46c;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0297b46c:
      sVar11 = -2;
LAB_0297b470:
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    if (sVar3 != -2) {
      if (iVar15 == param_4) {
        return;
      }
      iVar15 = iVar15 + 1;
    }
    param_3 = param_3 - *(ushort *)(DAT_055dc9c0 + 0x420);
    if ((param_3 < *(uint *)(DAT_055dc9c0 + 0x400)) &&
       (lVar7 = *(long *)(*(long *)(DAT_055dc9c0 + 0x408) + (long)(int)param_3 * 8), lVar7 != 0)) {
      psVar8 = (short *)FUN_0289d130(lVar7,7,0xce827d47,DAT_055dc9f8);
      if (psVar8 == (short *)0x0) {
        sVar11 = -2;
      }
      else {
        sVar11 = *psVar8;
      }
      *param_1 = sVar11;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      sVar3 = *param_1;
    }
    else {
      sVar3 = *(short *)PTR_DAT_04bb37e0;
      sVar11 = *(short *)(PTR_DAT_04bb37e0 + 2);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = sVar3;
      param_1[1] = sVar11;
      *(undefined4 *)(param_1 + 2) = uVar2;
    }
    if ((sVar3 != -2) && (iVar15 == param_4)) {
      return;
    }
  }
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 2) = uVar2;
  return;
}

