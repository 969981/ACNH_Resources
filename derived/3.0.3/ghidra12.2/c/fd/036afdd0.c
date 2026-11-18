
undefined8 FUN_036afdd0(long param_1,uint *param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 local_34;
  
  if (0x14 < (*param_2 & 0xffff)) {
LAB_036affcc:
    *param_4 = 0;
    return 0;
  }
  local_34 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)*param_2 * 8 + 0x150),0)
  ;
  puVar5 = (uint *)FUN_036c67d0(param_1 + 0x800,&local_34);
  if (puVar5 == (uint *)0x0) goto LAB_036affcc;
  switch(param_3) {
  case 0:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab2598) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25a0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036afee0;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036afee0:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x3c);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0xaf8bc05) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x3c) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 1:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25a8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25b0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b0074;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b0074:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x40);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x4dbb249e) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x40) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 2:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25b8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25c0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b01f4;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b01f4:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x44);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x5f0e8b70) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x44) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 3:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25c8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25d0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b0374;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b0374:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x48);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x184d13eb) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x48) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 4:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25d8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25e0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b04f4;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b04f4:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x4c);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x7a65d4ac) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x4c) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 5:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25e8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab25f0 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b0674;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b0674:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x50);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x3d264c37) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x50) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 6:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab25f8) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab2600 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b07f4;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b07f4:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x54);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x54) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x2f93e3d9) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x54) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 7:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab2608) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab2610 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b0974;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b0974:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x58);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x68d07b42) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x58) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  case 8:
    uVar9 = *puVar5;
    uVar6 = 0;
    if ((uVar9 != 0) && (puVar5 != (uint *)(ulong)uVar9)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar9);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar9 = puVar7[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar5 - lVar2) / (ulong)uVar9);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05ab2618) &&
               (uVar6 = (uint)*(ushort *)(DAT_05ab2620 + (long)(int)uVar6 * 2), uVar6 < 0x3d))
            goto LAB_036b0af4;
          }
        }
        uVar6 = 0;
      }
    }
LAB_036b0af4:
    *param_4 = uVar6;
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bc11e8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
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
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x5c);
          uVar10 = (ulong)uVar9;
          if (-1 < (int)uVar9) goto LAB_036b0be8;
          if (uVar9 != 0xffffffff) goto LAB_036b0bf8;
        }
        puVar7 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar7)) goto LAB_036b0bfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) goto LAB_036b0bf8;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
        *(undefined4 *)(puVar4 + 0x5c) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_036b0bfc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x30b36b14) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_036b0bfc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x5c) = iVar1;
      } while (*puVar5 != 0);
      uVar9 = 0;
      goto LAB_036b0bfc;
    }
    break;
  default:
    *param_4 = 0;
    *param_5 = 0;
    return 0;
  }
  goto LAB_036b0bf8;
LAB_036b0be8:
  if ((byte *)(uVar10 + (long)puVar5) != (byte *)0x0) {
    uVar9 = (uint)*(byte *)(uVar10 + (long)puVar5);
    goto LAB_036b0bfc;
  }
LAB_036b0bf8:
  uVar9 = 0;
LAB_036b0bfc:
  *param_5 = uVar9;
  return 1;
}

