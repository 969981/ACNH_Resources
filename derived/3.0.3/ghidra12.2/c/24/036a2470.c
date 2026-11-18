
bool FUN_036a2470(long param_1,uint param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  
  if (3 < param_2) {
switchD_036a2678_default:
    iVar8 = 0;
    *param_4 = 0;
    goto LAB_036a3808;
  }
  if (param_2 == 2) {
    switch(param_3) {
    case 0:
      puVar9 = *(uint **)(param_1 + 8);
      uVar7 = 0;
      uVar3 = *puVar9;
      if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar10 != 0) {
          uVar3 = puVar10[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar7 = 0;
              if ((ulong)uVar3 != 0) {
                uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
              }
              if (*puVar10 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_05ab1120) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05ab1128 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
              goto LAB_036a25c8;
            }
          }
          uVar7 = 0;
        }
      }
LAB_036a25c8:
      *param_4 = uVar7;
      puVar9 = *(uint **)(param_1 + 8);
      iVar8 = 0;
      if (*puVar9 != 0) {
        if (DAT_05ab0f10 == '\x01') {
          uVar3 = DAT_05ab0fdc._4_4_;
        }
        else {
          DAT_05ab0f10 = '\x01';
          DAT_05ab0ff4 = 0xffffffffffffffff;
          uVar3 = 0xffffffff;
          DAT_05ab0f14 = 0xffffffffffffffff;
          DAT_05ab0f1c = 0xffffffffffffffff;
          DAT_05ab0ffc = 0xffffffff;
          DAT_05ab0f24 = 0xffffffffffffffff;
          DAT_05ab0f2c = 0xffffffffffffffff;
          DAT_05ab0f34 = 0xffffffffffffffff;
          DAT_05ab0f3c = 0xffffffffffffffff;
          DAT_05ab0f44 = 0xffffffffffffffff;
          DAT_05ab0f4c = 0xffffffffffffffff;
          DAT_05ab0f54 = 0xffffffffffffffff;
          DAT_05ab0f5c = 0xffffffffffffffff;
          DAT_05ab0f64 = 0xffffffffffffffff;
          DAT_05ab0f6c = 0xffffffffffffffff;
          DAT_05ab0f74 = 0xffffffffffffffff;
          DAT_05ab0f7c = 0xffffffffffffffff;
          DAT_05ab0f84 = 0xffffffffffffffff;
          DAT_05ab0f8c = 0xffffffffffffffff;
          DAT_05ab0f94 = 0xffffffffffffffff;
          DAT_05ab0f9c = 0xffffffffffffffff;
          DAT_05ab0fa4 = 0xffffffffffffffff;
          DAT_05ab0fac = 0xffffffffffffffff;
          DAT_05ab0fb4 = 0xffffffffffffffff;
          DAT_05ab0fbc = 0xffffffffffffffff;
          DAT_05ab0fc4 = 0xffffffffffffffff;
          DAT_05ab0fcc = 0xffffffffffffffff;
          DAT_05ab0fd4 = 0xffffffffffffffff;
          DAT_05ab0fdc = 0xffffffffffffffff;
          DAT_05ab0fe4 = 0xffffffffffffffff;
          DAT_05ab0fec = 0xffffffffffffffff;
        }
        while( true ) {
          if (-1 < (int)uVar3) goto LAB_036a3824;
          if (uVar3 != 0xffffffff) goto LAB_036a3804;
          puVar10 = (uint *)(ulong)*puVar9;
          iVar8 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) goto LAB_036a3804;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          DAT_05ab0fdc = CONCAT44(0xfffffffe,(undefined4)DAT_05ab0fdc);
          if (uVar11 == 0) goto LAB_036a3804;
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xf360859a) {
            iVar8 = 0;
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_036a3808;
          }
          iVar8 = 0;
          uVar3 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar3 = *puVar10;
          }
          DAT_05ab0fdc = CONCAT44(uVar3,(undefined4)DAT_05ab0fdc);
          if (*puVar9 == 0) break;
        }
      }
      goto LAB_036a3808;
    case 1:
      puVar9 = *(uint **)(param_1 + 8);
      uVar7 = 0;
      uVar3 = *puVar9;
      if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar10 != 0) {
          uVar3 = puVar10[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar7 = 0;
              if ((ulong)uVar3 != 0) {
                uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
              }
              if (*puVar10 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_05ab1130) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05ab1138 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
              goto LAB_036a27d4;
            }
          }
          uVar7 = 0;
        }
      }
LAB_036a27d4:
      *param_4 = uVar7;
      puVar9 = *(uint **)(param_1 + 8);
      iVar8 = 0;
      if (*puVar9 != 0) {
        if (DAT_05ab0f10 == '\x01') {
          uVar3 = (uint)DAT_05ab0fe4;
        }
        else {
          DAT_05ab0f10 = '\x01';
          DAT_05ab0ff4 = 0xffffffffffffffff;
          uVar3 = 0xffffffff;
          DAT_05ab0f14 = 0xffffffffffffffff;
          DAT_05ab0f1c = 0xffffffffffffffff;
          DAT_05ab0ffc = 0xffffffff;
          DAT_05ab0f24 = 0xffffffffffffffff;
          DAT_05ab0f2c = 0xffffffffffffffff;
          DAT_05ab0f34 = 0xffffffffffffffff;
          DAT_05ab0f3c = 0xffffffffffffffff;
          DAT_05ab0f44 = 0xffffffffffffffff;
          DAT_05ab0f4c = 0xffffffffffffffff;
          DAT_05ab0f54 = 0xffffffffffffffff;
          DAT_05ab0f5c = 0xffffffffffffffff;
          DAT_05ab0f64 = 0xffffffffffffffff;
          DAT_05ab0f6c = 0xffffffffffffffff;
          DAT_05ab0f74 = 0xffffffffffffffff;
          DAT_05ab0f7c = 0xffffffffffffffff;
          DAT_05ab0f84 = 0xffffffffffffffff;
          DAT_05ab0f8c = 0xffffffffffffffff;
          DAT_05ab0f94 = 0xffffffffffffffff;
          DAT_05ab0f9c = 0xffffffffffffffff;
          DAT_05ab0fa4 = 0xffffffffffffffff;
          DAT_05ab0fac = 0xffffffffffffffff;
          DAT_05ab0fb4 = 0xffffffffffffffff;
          DAT_05ab0fbc = 0xffffffffffffffff;
          DAT_05ab0fc4 = 0xffffffffffffffff;
          DAT_05ab0fcc = 0xffffffffffffffff;
          DAT_05ab0fd4 = 0xffffffffffffffff;
          DAT_05ab0fdc = 0xffffffffffffffff;
          DAT_05ab0fe4 = 0xffffffffffffffff;
          DAT_05ab0fec = 0xffffffffffffffff;
        }
        while( true ) {
          if (-1 < (int)uVar3) goto LAB_036a3824;
          if (uVar3 != 0xffffffff) goto LAB_036a3804;
          puVar10 = (uint *)(ulong)*puVar9;
          iVar8 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) goto LAB_036a3804;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          DAT_05ab0fe4 = CONCAT44(DAT_05ab0fe4._4_4_,0xfffffffe);
          if (uVar11 == 0) goto LAB_036a3804;
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x4bdce2ff) {
            iVar8 = 0;
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_036a3808;
          }
          iVar8 = 0;
          uVar3 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar3 = *puVar10;
          }
          DAT_05ab0fe4 = CONCAT44(DAT_05ab0fe4._4_4_,uVar3);
          if (*puVar9 == 0) break;
        }
      }
      goto LAB_036a3808;
    case 2:
      puVar9 = *(uint **)(param_1 + 8);
      uVar7 = 0;
      uVar3 = *puVar9;
      if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar10 != 0) {
          uVar3 = puVar10[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar7 = 0;
              if ((ulong)uVar3 != 0) {
                uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
              }
              if (*puVar10 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_05ab1140) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05ab1148 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
              goto LAB_036a2890;
            }
          }
          uVar7 = 0;
        }
      }
LAB_036a2890:
      *param_4 = uVar7;
      puVar9 = *(uint **)(param_1 + 8);
      iVar8 = 0;
      if (*puVar9 != 0) {
        if (DAT_05ab0f10 == '\x01') {
          uVar3 = DAT_05ab0fe4._4_4_;
        }
        else {
          DAT_05ab0f10 = '\x01';
          DAT_05ab0ff4 = 0xffffffffffffffff;
          uVar3 = 0xffffffff;
          DAT_05ab0f14 = 0xffffffffffffffff;
          DAT_05ab0f1c = 0xffffffffffffffff;
          DAT_05ab0ffc = 0xffffffff;
          DAT_05ab0f24 = 0xffffffffffffffff;
          DAT_05ab0f2c = 0xffffffffffffffff;
          DAT_05ab0f34 = 0xffffffffffffffff;
          DAT_05ab0f3c = 0xffffffffffffffff;
          DAT_05ab0f44 = 0xffffffffffffffff;
          DAT_05ab0f4c = 0xffffffffffffffff;
          DAT_05ab0f54 = 0xffffffffffffffff;
          DAT_05ab0f5c = 0xffffffffffffffff;
          DAT_05ab0f64 = 0xffffffffffffffff;
          DAT_05ab0f6c = 0xffffffffffffffff;
          DAT_05ab0f74 = 0xffffffffffffffff;
          DAT_05ab0f7c = 0xffffffffffffffff;
          DAT_05ab0f84 = 0xffffffffffffffff;
          DAT_05ab0f8c = 0xffffffffffffffff;
          DAT_05ab0f94 = 0xffffffffffffffff;
          DAT_05ab0f9c = 0xffffffffffffffff;
          DAT_05ab0fa4 = 0xffffffffffffffff;
          DAT_05ab0fac = 0xffffffffffffffff;
          DAT_05ab0fb4 = 0xffffffffffffffff;
          DAT_05ab0fbc = 0xffffffffffffffff;
          DAT_05ab0fc4 = 0xffffffffffffffff;
          DAT_05ab0fcc = 0xffffffffffffffff;
          DAT_05ab0fd4 = 0xffffffffffffffff;
          DAT_05ab0fdc = 0xffffffffffffffff;
          DAT_05ab0fe4 = 0xffffffffffffffff;
          DAT_05ab0fec = 0xffffffffffffffff;
        }
        while( true ) {
          if (-1 < (int)uVar3) goto LAB_036a3824;
          if (uVar3 != 0xffffffff) goto LAB_036a3804;
          puVar10 = (uint *)(ulong)*puVar9;
          iVar8 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) goto LAB_036a3804;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          DAT_05ab0fe4 = CONCAT44(0xfffffffe,(uint)DAT_05ab0fe4);
          if (uVar11 == 0) goto LAB_036a3804;
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x59694d11) {
            iVar8 = 0;
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_036a3808;
          }
          iVar8 = 0;
          uVar3 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar3 = *puVar10;
          }
          DAT_05ab0fe4 = CONCAT44(uVar3,(uint)DAT_05ab0fe4);
          if (*puVar9 == 0) break;
        }
      }
      goto LAB_036a3808;
    case 3:
      puVar9 = *(uint **)(param_1 + 8);
      uVar7 = 0;
      uVar3 = *puVar9;
      if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar10 != 0) {
          uVar3 = puVar10[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar7 = 0;
              if ((ulong)uVar3 != 0) {
                uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
              }
              if (*puVar10 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_05ab1150) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05ab1158 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
              goto LAB_036a294c;
            }
          }
          uVar7 = 0;
        }
      }
LAB_036a294c:
      *param_4 = uVar7;
      puVar9 = *(uint **)(param_1 + 8);
      iVar8 = 0;
      if (*puVar9 != 0) {
        if (DAT_05ab0f10 == '\x01') {
          uVar3 = (uint)DAT_05ab0fec;
        }
        else {
          DAT_05ab0f10 = '\x01';
          DAT_05ab0ff4 = 0xffffffffffffffff;
          uVar3 = 0xffffffff;
          DAT_05ab0f14 = 0xffffffffffffffff;
          DAT_05ab0f1c = 0xffffffffffffffff;
          DAT_05ab0ffc = 0xffffffff;
          DAT_05ab0f24 = 0xffffffffffffffff;
          DAT_05ab0f2c = 0xffffffffffffffff;
          DAT_05ab0f34 = 0xffffffffffffffff;
          DAT_05ab0f3c = 0xffffffffffffffff;
          DAT_05ab0f44 = 0xffffffffffffffff;
          DAT_05ab0f4c = 0xffffffffffffffff;
          DAT_05ab0f54 = 0xffffffffffffffff;
          DAT_05ab0f5c = 0xffffffffffffffff;
          DAT_05ab0f64 = 0xffffffffffffffff;
          DAT_05ab0f6c = 0xffffffffffffffff;
          DAT_05ab0f74 = 0xffffffffffffffff;
          DAT_05ab0f7c = 0xffffffffffffffff;
          DAT_05ab0f84 = 0xffffffffffffffff;
          DAT_05ab0f8c = 0xffffffffffffffff;
          DAT_05ab0f94 = 0xffffffffffffffff;
          DAT_05ab0f9c = 0xffffffffffffffff;
          DAT_05ab0fa4 = 0xffffffffffffffff;
          DAT_05ab0fac = 0xffffffffffffffff;
          DAT_05ab0fb4 = 0xffffffffffffffff;
          DAT_05ab0fbc = 0xffffffffffffffff;
          DAT_05ab0fc4 = 0xffffffffffffffff;
          DAT_05ab0fcc = 0xffffffffffffffff;
          DAT_05ab0fd4 = 0xffffffffffffffff;
          DAT_05ab0fdc = 0xffffffffffffffff;
          DAT_05ab0fe4 = 0xffffffffffffffff;
          DAT_05ab0fec = 0xffffffffffffffff;
        }
        while( true ) {
          if (-1 < (int)uVar3) goto LAB_036a3824;
          if (uVar3 != 0xffffffff) goto LAB_036a3804;
          puVar10 = (uint *)(ulong)*puVar9;
          iVar8 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) goto LAB_036a3804;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          DAT_05ab0fec = CONCAT44(DAT_05ab0fec._4_4_,0xfffffffe);
          if (uVar11 == 0) goto LAB_036a3804;
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xe1d52a74) {
            iVar8 = 0;
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_036a3808;
          }
          iVar8 = 0;
          uVar3 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar3 = *puVar10;
          }
          DAT_05ab0fec = CONCAT44(DAT_05ab0fec._4_4_,uVar3);
          if (*puVar9 == 0) break;
        }
      }
      goto LAB_036a3808;
    }
    goto switchD_036a2678_default;
  }
  if (param_2 != 1) {
    if (param_2 != 0) {
      switch(param_3) {
      case 0:
        goto switchD_036a2678_caseD_0;
      case 1:
        puVar9 = *(uint **)(param_1 + 8);
        uVar7 = 0;
        uVar3 = *puVar9;
        if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
          uVar7 = 0;
          if (*puVar10 != 0) {
            uVar3 = puVar10[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar1 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
                }
                if (*puVar10 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05ab1170) &&
                   (uVar7 = (uint)*(ushort *)(DAT_05ab1178 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
                goto LAB_036a2a08;
              }
            }
            uVar7 = 0;
          }
        }
LAB_036a2a08:
        *param_4 = uVar7;
        puVar9 = *(uint **)(param_1 + 8);
        iVar8 = 0;
        if (*puVar9 != 0) {
          if (DAT_05ab0f10 == '\x01') {
            uVar3 = (uint)DAT_05ab0ff4;
          }
          else {
            DAT_05ab0f10 = '\x01';
            DAT_05ab0ff4 = 0xffffffffffffffff;
            uVar3 = 0xffffffff;
            DAT_05ab0f14 = 0xffffffffffffffff;
            DAT_05ab0f1c = 0xffffffffffffffff;
            DAT_05ab0ffc = 0xffffffff;
            DAT_05ab0f24 = 0xffffffffffffffff;
            DAT_05ab0f2c = 0xffffffffffffffff;
            DAT_05ab0f34 = 0xffffffffffffffff;
            DAT_05ab0f3c = 0xffffffffffffffff;
            DAT_05ab0f44 = 0xffffffffffffffff;
            DAT_05ab0f4c = 0xffffffffffffffff;
            DAT_05ab0f54 = 0xffffffffffffffff;
            DAT_05ab0f5c = 0xffffffffffffffff;
            DAT_05ab0f64 = 0xffffffffffffffff;
            DAT_05ab0f6c = 0xffffffffffffffff;
            DAT_05ab0f74 = 0xffffffffffffffff;
            DAT_05ab0f7c = 0xffffffffffffffff;
            DAT_05ab0f84 = 0xffffffffffffffff;
            DAT_05ab0f8c = 0xffffffffffffffff;
            DAT_05ab0f94 = 0xffffffffffffffff;
            DAT_05ab0f9c = 0xffffffffffffffff;
            DAT_05ab0fa4 = 0xffffffffffffffff;
            DAT_05ab0fac = 0xffffffffffffffff;
            DAT_05ab0fb4 = 0xffffffffffffffff;
            DAT_05ab0fbc = 0xffffffffffffffff;
            DAT_05ab0fc4 = 0xffffffffffffffff;
            DAT_05ab0fcc = 0xffffffffffffffff;
            DAT_05ab0fd4 = 0xffffffffffffffff;
            DAT_05ab0fdc = 0xffffffffffffffff;
            DAT_05ab0fe4 = 0xffffffffffffffff;
            DAT_05ab0fec = 0xffffffffffffffff;
          }
          while( true ) {
            if (-1 < (int)uVar3) goto LAB_036a3824;
            if (uVar3 != 0xffffffff) goto LAB_036a3804;
            puVar10 = (uint *)(ulong)*puVar9;
            iVar8 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
            lVar1 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
            if (lVar1 == 0) goto LAB_036a3804;
            uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            DAT_05ab0ff4 = CONCAT44(DAT_05ab0ff4._4_4_,0xfffffffe);
            if (uVar11 == 0) goto LAB_036a3804;
            puVar10 = (uint *)(lVar1 + 4);
            while (puVar10[-1] != 0x8080315a) {
              iVar8 = 0;
              puVar10 = puVar10 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_036a3808;
            }
            iVar8 = 0;
            uVar3 = 0;
            if (*puVar10 != 0xffffffff) {
              uVar3 = *puVar10;
            }
            DAT_05ab0ff4 = CONCAT44(DAT_05ab0ff4._4_4_,uVar3);
            if (*puVar9 == 0) break;
          }
        }
        goto LAB_036a3808;
      case 2:
        puVar9 = *(uint **)(param_1 + 8);
        uVar7 = 0;
        uVar3 = *puVar9;
        if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
          uVar7 = 0;
          if (*puVar10 != 0) {
            uVar3 = puVar10[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar1 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
                }
                if (*puVar10 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05ab1180) &&
                   (uVar7 = (uint)*(ushort *)(DAT_05ab1188 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
                goto LAB_036a2ac4;
              }
            }
            uVar7 = 0;
          }
        }
LAB_036a2ac4:
        *param_4 = uVar7;
        puVar9 = *(uint **)(param_1 + 8);
        iVar8 = 0;
        if (*puVar9 != 0) {
          if (DAT_05ab0f10 == '\x01') {
            uVar3 = DAT_05ab0ff4._4_4_;
          }
          else {
            DAT_05ab0f10 = '\x01';
            DAT_05ab0ff4 = 0xffffffffffffffff;
            uVar3 = 0xffffffff;
            DAT_05ab0f14 = 0xffffffffffffffff;
            DAT_05ab0f1c = 0xffffffffffffffff;
            DAT_05ab0ffc = 0xffffffff;
            DAT_05ab0f24 = 0xffffffffffffffff;
            DAT_05ab0f2c = 0xffffffffffffffff;
            DAT_05ab0f34 = 0xffffffffffffffff;
            DAT_05ab0f3c = 0xffffffffffffffff;
            DAT_05ab0f44 = 0xffffffffffffffff;
            DAT_05ab0f4c = 0xffffffffffffffff;
            DAT_05ab0f54 = 0xffffffffffffffff;
            DAT_05ab0f5c = 0xffffffffffffffff;
            DAT_05ab0f64 = 0xffffffffffffffff;
            DAT_05ab0f6c = 0xffffffffffffffff;
            DAT_05ab0f74 = 0xffffffffffffffff;
            DAT_05ab0f7c = 0xffffffffffffffff;
            DAT_05ab0f84 = 0xffffffffffffffff;
            DAT_05ab0f8c = 0xffffffffffffffff;
            DAT_05ab0f94 = 0xffffffffffffffff;
            DAT_05ab0f9c = 0xffffffffffffffff;
            DAT_05ab0fa4 = 0xffffffffffffffff;
            DAT_05ab0fac = 0xffffffffffffffff;
            DAT_05ab0fb4 = 0xffffffffffffffff;
            DAT_05ab0fbc = 0xffffffffffffffff;
            DAT_05ab0fc4 = 0xffffffffffffffff;
            DAT_05ab0fcc = 0xffffffffffffffff;
            DAT_05ab0fd4 = 0xffffffffffffffff;
            DAT_05ab0fdc = 0xffffffffffffffff;
            DAT_05ab0fe4 = 0xffffffffffffffff;
            DAT_05ab0fec = 0xffffffffffffffff;
          }
          while( true ) {
            if (-1 < (int)uVar3) goto LAB_036a3824;
            if (uVar3 != 0xffffffff) goto LAB_036a3804;
            puVar10 = (uint *)(ulong)*puVar9;
            iVar8 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
            lVar1 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
            if (lVar1 == 0) goto LAB_036a3804;
            uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            DAT_05ab0ff4 = CONCAT44(0xfffffffe,(uint)DAT_05ab0ff4);
            if (uVar11 == 0) goto LAB_036a3804;
            puVar10 = (uint *)(lVar1 + 4);
            while (puVar10[-1] != 0x92359eb4) {
              iVar8 = 0;
              puVar10 = puVar10 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_036a3808;
            }
            iVar8 = 0;
            uVar3 = 0;
            if (*puVar10 != 0xffffffff) {
              uVar3 = *puVar10;
            }
            DAT_05ab0ff4 = CONCAT44(uVar3,(uint)DAT_05ab0ff4);
            if (*puVar9 == 0) break;
          }
        }
        goto LAB_036a3808;
      case 3:
        puVar9 = *(uint **)(param_1 + 8);
        uVar7 = 0;
        uVar3 = *puVar9;
        if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
          uVar7 = 0;
          if (*puVar10 != 0) {
            uVar3 = puVar10[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar1 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
                }
                if (*puVar10 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05ab1190) &&
                   (uVar7 = (uint)*(ushort *)(DAT_05ab1198 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
                goto LAB_036a2b80;
              }
            }
            uVar7 = 0;
          }
        }
LAB_036a2b80:
        *param_4 = uVar7;
        puVar9 = *(uint **)(param_1 + 8);
        iVar8 = 0;
        if (*puVar9 != 0) {
          if (DAT_05ab0f10 != '\x01') {
            DAT_05ab0f10 = '\x01';
            DAT_05ab0ff4 = 0xffffffffffffffff;
            DAT_05ab0f14 = 0xffffffffffffffff;
            DAT_05ab0f1c = 0xffffffffffffffff;
            DAT_05ab0ffc = 0xffffffff;
            DAT_05ab0f24 = 0xffffffffffffffff;
            DAT_05ab0f2c = 0xffffffffffffffff;
            DAT_05ab0f34 = 0xffffffffffffffff;
            DAT_05ab0f3c = 0xffffffffffffffff;
            DAT_05ab0f44 = 0xffffffffffffffff;
            DAT_05ab0f4c = 0xffffffffffffffff;
            DAT_05ab0f54 = 0xffffffffffffffff;
            DAT_05ab0f5c = 0xffffffffffffffff;
            DAT_05ab0f64 = 0xffffffffffffffff;
            DAT_05ab0f6c = 0xffffffffffffffff;
            DAT_05ab0f74 = 0xffffffffffffffff;
            DAT_05ab0f7c = 0xffffffffffffffff;
            DAT_05ab0f84 = 0xffffffffffffffff;
            DAT_05ab0f8c = 0xffffffffffffffff;
            DAT_05ab0f94 = 0xffffffffffffffff;
            DAT_05ab0f9c = 0xffffffffffffffff;
            DAT_05ab0fa4 = 0xffffffffffffffff;
            DAT_05ab0fac = 0xffffffffffffffff;
            DAT_05ab0fb4 = 0xffffffffffffffff;
            DAT_05ab0fbc = 0xffffffffffffffff;
            DAT_05ab0fc4 = 0xffffffffffffffff;
            DAT_05ab0fcc = 0xffffffffffffffff;
            DAT_05ab0fd4 = 0xffffffffffffffff;
            DAT_05ab0fdc = 0xffffffffffffffff;
            DAT_05ab0fe4 = 0xffffffffffffffff;
            DAT_05ab0fec = 0xffffffffffffffff;
          }
          while( true ) {
            uVar3 = DAT_05ab0ffc;
            if (-1 < (int)DAT_05ab0ffc) goto LAB_036a3824;
            if (DAT_05ab0ffc != 0xffffffff) goto LAB_036a3804;
            puVar10 = (uint *)(ulong)*puVar9;
            iVar8 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
            lVar1 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
            if (lVar1 == 0) goto LAB_036a3804;
            uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            DAT_05ab0ffc = 0xfffffffe;
            if (uVar11 == 0) goto LAB_036a3804;
            puVar10 = (uint *)(lVar1 + 4);
            while (puVar10[-1] != 0x2a89f9d1) {
              iVar8 = 0;
              puVar10 = puVar10 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_036a3808;
            }
            iVar8 = 0;
            DAT_05ab0ffc = 0;
            if (*puVar10 != 0xffffffff) {
              DAT_05ab0ffc = *puVar10;
            }
            if (*puVar9 == 0) break;
          }
        }
        goto LAB_036a3808;
      default:
        goto switchD_036a2678_default;
      }
    }
    switch(param_3) {
    case 0:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1000 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1008 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x21;
      uVar6 = 0xbea82491;
      break;
    case 1:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1010 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1018 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x22;
      uVar6 = 0x61443f4;
      break;
    case 2:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1020 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1028 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x23;
      uVar6 = 0x14a1ec1a;
      break;
    case 3:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1030 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1038 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x24;
      uVar6 = 0xac1d8b7f;
      break;
    case 4:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1040 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1048 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x25;
      uVar6 = 0x31cab3c6;
      break;
    case 5:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1050 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1058 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x26;
      uVar6 = 0x8976d4a3;
      break;
    case 6:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1060 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1068 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x27;
      uVar6 = 0x9bc37b4d;
      break;
    case 7:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1070 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1078 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x28;
      uVar6 = 0x237f1c28;
      break;
    default:
      uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
      if ((DAT_05ab1080 <= uVar3) ||
         (uVar2 = *(ushort *)(DAT_05ab1088 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2,
         0x3c < uVar2)) {
        uVar3 = 0;
      }
      *param_4 = uVar3;
      uVar5 = 0x29;
      uVar6 = 0x7b1c0c7e;
    }
    goto LAB_036a3034;
  }
  switch(param_3) {
  case 0:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab1090 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab1098 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2a;
    uVar6 = 0x75f4f734;
    break;
  case 1:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10a0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10a8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2b;
    uVar6 = 0xcd489051;
    break;
  case 2:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10b0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10b8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2c;
    uVar6 = 0xdffd3fbf;
    break;
  case 3:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10c0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10c8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2d;
    uVar6 = 0x674158da;
    break;
  case 4:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10d0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10d8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2e;
    uVar6 = 0xfa966063;
    break;
  case 5:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10e0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10e8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x2f;
    uVar6 = 0x422a0706;
    break;
  case 6:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab10f0 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab10f8 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    pcVar4 = (char *)FUN_036a3b80(*(undefined8 *)(param_1 + 8),0x30,0x509fa8e8);
    goto joined_r0x036a2fe8;
  case 7:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab1100 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab1108 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x31;
    uVar6 = 0xe823cf8d;
    break;
  default:
    uVar3 = FUN_03853b94(*(undefined8 *)(param_1 + 8));
    if ((DAT_05ab1110 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05ab1118 + (long)(int)uVar3 * 2), uVar3 = (uint)uVar2, 0x3c < uVar2)
       ) {
      uVar3 = 0;
    }
    *param_4 = uVar3;
    uVar5 = 0x32;
    uVar6 = 0xb040dfdb;
  }
LAB_036a3034:
  pcVar4 = (char *)FUN_036a3b80(*(undefined8 *)(param_1 + 8),uVar5,uVar6);
joined_r0x036a2fe8:
  if (pcVar4 == (char *)0x0) {
LAB_036a3804:
    iVar8 = 0;
  }
  else {
    iVar8 = (int)*pcVar4;
  }
LAB_036a3808:
  *param_5 = iVar8;
  return param_2 < 4;
switchD_036a2678_caseD_0:
  puVar9 = *(uint **)(param_1 + 8);
  uVar7 = 0;
  uVar3 = *puVar9;
  if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
    uVar7 = 0;
    if (*puVar10 != 0) {
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar7 = 0;
          if ((ulong)uVar3 != 0) {
            uVar7 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_05ab1160) &&
             (uVar7 = (uint)*(ushort *)(DAT_05ab1168 + (long)(int)uVar7 * 2), uVar7 < 0x3d))
          goto LAB_036a270c;
        }
      }
      uVar7 = 0;
    }
  }
LAB_036a270c:
  *param_4 = uVar7;
  puVar9 = *(uint **)(param_1 + 8);
  iVar8 = 0;
  if (*puVar9 != 0) {
    if (DAT_05ab0f10 == '\x01') {
      uVar3 = DAT_05ab0fec._4_4_;
    }
    else {
      DAT_05ab0f10 = '\x01';
      DAT_05ab0ff4 = 0xffffffffffffffff;
      uVar3 = 0xffffffff;
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
    }
    while( true ) {
      if (-1 < (int)uVar3) goto LAB_036a3824;
      if (uVar3 != 0xffffffff) goto LAB_036a3804;
      puVar10 = (uint *)(ulong)*puVar9;
      iVar8 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar10)) break;
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) goto LAB_036a3804;
      uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
      DAT_05ab0fec = CONCAT44(0xfffffffe,(uint)DAT_05ab0fec);
      if (uVar11 == 0) goto LAB_036a3804;
      puVar10 = (uint *)(lVar1 + 4);
      while (puVar10[-1] != 0x383c563f) {
        iVar8 = 0;
        puVar10 = puVar10 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_036a3808;
      }
      iVar8 = 0;
      uVar3 = 0;
      if (*puVar10 != 0xffffffff) {
        uVar3 = *puVar10;
      }
      DAT_05ab0fec = CONCAT44(uVar3,(uint)DAT_05ab0fec);
      if (*puVar9 == 0) break;
    }
  }
  goto LAB_036a3808;
LAB_036a3824:
  iVar8 = 0;
  if ((char *)((long)puVar9 + (ulong)uVar3) != (char *)0x0) {
    iVar8 = (int)*(char *)((long)puVar9 + (ulong)uVar3);
  }
  goto LAB_036a3808;
}

