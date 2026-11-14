
void FUN_01af3d60(undefined4 *param_1,short *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  char cVar13;
  uint *puVar14;
  long lVar15;
  undefined **local_68;
  short local_60;
  short local_5e;
  undefined4 local_5c;
  uint *local_58;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_68 = &PTR_FUN_04a36b50;
  sVar4 = *param_2;
  local_5e = param_2[1];
  local_58 = (uint *)0x0;
  local_5c = *(undefined4 *)(param_2 + 2);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_60 = sVar4;
  uVar7 = FUN_0277d6c4(&local_60);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar5 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar11 != (uint *)0x0)) {
        local_58 = puVar11;
      }
    }
  }
  if (((0xff < param_3) || (sVar4 == -2)) || (uVar9 = FUN_01af0020(&local_68), (uVar9 & 1) == 0))
  goto LAB_01af40c8;
  iVar8 = FUN_01af02d0(&local_68);
  puVar6 = PTR_DAT_04bbfeb8;
  puVar5 = PTR_DAT_04bbfeb0;
  param_3 = iVar8 - param_3;
  if ((param_3 & 0xff) == 0) {
    param_2 = (short *)PTR_DAT_04bb37e0;
    goto LAB_01af40c8;
  }
  if (iVar8 != 0) {
    if (local_58 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar3 = *local_58;
      uVar7 = 0;
      if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
        puVar11 = (uint *)((long)local_58 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar11 != 0) {
          uVar7 = puVar11[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar1 != 0) {
              uVar3 = 0;
              if ((ulong)uVar7 != 0) {
                uVar3 = (uint)((ulong)((long)local_58 - lVar1) / (ulong)uVar7);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 uVar7 < 0xbd)) goto LAB_01af3f1c;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_01af3f1c:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a778 + 200) <= uVar7 ||
           (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * uVar7 + (uint)(ushort)puVar11[2] * 8 + iVar12) +
                          (long)puVar11);
        goto joined_r0x01af40b4;
      }
    }
    else if (uVar7 < *(uint *)(DAT_0532a778 + 0x1c0)) {
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar11 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01af40b4:
      if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) {
        cVar13 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar6 + 0x18);
            if (-1 < (int)uVar7) {
              if ((short *)((ulong)uVar7 + (long)puVar11) == (short *)0x0) break;
              if (*(short *)((ulong)uVar7 + (long)puVar11) < iVar8) {
                param_3 = 1;
              }
              uVar7 = param_3;
              goto LAB_01af40bc;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar11;
          uVar7 = 1;
          if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_01af40bc;
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + (lVar1 - (long)puVar14);
          if (lVar1 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
          *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar10 = (int *)(lVar1 + 4);
          while (piVar10[-1] != 0x4c9ba961) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01af40b8;
          }
          uVar7 = 1;
          iVar12 = 0;
          if (*piVar10 != -1) {
            iVar12 = *piVar10;
          }
          *(int *)(puVar6 + 0x18) = iVar12;
          if (*puVar11 == 0) goto LAB_01af40bc;
        } while( true );
      }
    }
  }
LAB_01af40b8:
  uVar7 = 1;
LAB_01af40bc:
  FUN_01af2bc0(&local_68,uVar7);
  param_2 = &local_60;
LAB_01af40c8:
  uVar2 = *(undefined4 *)(param_2 + 2);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar2;
  return;
}

