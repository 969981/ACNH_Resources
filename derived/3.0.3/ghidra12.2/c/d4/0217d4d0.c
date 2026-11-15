
bool FUN_0217d4d0(long param_1,long param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *__dest;
  uint uVar19;
  uint uVar20;
  int local_9c;
  undefined *local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_84 [3];
  undefined1 local_65;
  
  puVar5 = PTR_DAT_04bb2028;
  uVar20 = *(uint *)(param_1 + 0x5e0);
  if (((int)uVar20 < 1) &&
     (((*(long *)(param_1 + 0x4d0) == 0 ||
       (puVar18 = *(uint **)(*(long *)(param_1 + 0x4d0) + 8), puVar18 == (uint *)0x0)) ||
      (uVar20 = *puVar18, uVar20 == 0)))) {
    return false;
  }
  local_9c = 0;
  uVar19 = 0;
  bVar6 = true;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  do {
    if ((int)*(uint *)(param_1 + 0x5e0) < 1) {
      if (((((*(long *)(param_1 + 0x4d0) != 0) &&
            (puVar18 = *(uint **)(*(long *)(param_1 + 0x4d0) + 8), puVar18 != (uint *)0x0)) &&
           ((*(uint *)(param_1 + 0x4e8) <= uVar19 ||
            (*(char *)(*(long *)(param_1 + 0x4f0) + (long)(int)uVar19) != '\0')))) &&
          ((uVar19 < *puVar18 && (puVar18[1] != 0)))) && ((ushort)puVar18[2] != 0)) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar18 = (uint *)((ulong)(puVar18[1] * uVar19 + (uint)(ushort)puVar18[2] * 8 + iVar8) +
                          (long)puVar18);
        goto joined_r0x0217d628;
      }
    }
    else if (uVar19 < *(uint *)(param_1 + 0x5e0)) {
      uVar3 = uVar19;
      if (*(uint *)(param_1 + 0x5d0) <= uVar19) {
        uVar3 = 0;
      }
      puVar18 = *(uint **)(*(long *)(param_1 + 0x5d8) + (ulong)uVar3 * 8);
joined_r0x0217d628:
      if (puVar18 != (uint *)0x0) {
        puVar15 = (uint *)(ulong)*puVar18;
        if (*puVar18 == 0) {
LAB_0217d65c:
          puVar11 = (undefined8 *)0x0;
        }
        else {
          if ((DAT_053faf98 & 1) == 0) {
            DAT_053faf98 = 1;
            uVar17 = 0xffffffff;
            DAT_053faf9c = 0xffffffffffffffff;
            DAT_053fafa4 = -1;
            DAT_053fafac = 0xffffffffffffffff;
            DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217d650:
            if (puVar18 == puVar15) goto LAB_0217d65c;
            do {
              if (uVar17 != 0xffffffff) goto LAB_0217d65c;
              lVar9 = 0xc;
              if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
              if (lVar9 == 0) goto LAB_0217d65c;
              uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
              DAT_053fafac = CONCAT44(DAT_053fafac._4_4_,0xfffffffe);
              if (uVar17 == 0) goto LAB_0217d65c;
              puVar16 = (uint *)(lVar9 + 4);
              while (puVar16[-1] != 0x87bf00e8) {
                puVar16 = puVar16 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0217d65c;
              }
              uVar17 = (ulong)*puVar16;
              uVar14 = 0;
              if (*puVar16 != 0xffffffff) {
                uVar14 = uVar17;
              }
              DAT_053fafac = CONCAT44(DAT_053fafac._4_4_,(int)uVar14);
            } while ((int)uVar14 < 0);
          }
          else {
            uVar14 = DAT_053fafac & 0xffffffff;
            uVar17 = uVar14;
            if ((int)DAT_053fafac < 0) goto LAB_0217d650;
          }
          puVar11 = (undefined8 *)(uVar14 + (long)puVar18);
        }
        puVar10 = &DAT_0407ebb1;
        if (puVar11 != (undefined8 *)0x0) {
          puVar10 = puVar11;
        }
        local_65 = 0;
        local_88 = 0x20;
        local_90 = local_84;
        if (local_84 != puVar10) {
          lVar9 = 0;
          do {
            if (*(char *)((long)puVar10 + lVar9) == '\0') {
LAB_0217d74c:
              iVar8 = (int)lVar9;
joined_r0x0217d750:
              if (0x1f < iVar8) {
                iVar8 = 0x1f;
              }
              goto LAB_0217d758;
            }
            if (*(char *)((long)puVar10 + lVar9 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_0217d74c;
            }
            if (*(char *)((long)puVar10 + lVar9 + 2) == '\0') {
              iVar8 = (int)lVar9 + 2;
              goto joined_r0x0217d750;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          iVar8 = 0;
LAB_0217d758:
          local_98 = puVar1;
          memcpy(local_84,puVar10,(long)iVar8);
          *(undefined1 *)((long)local_84 + (long)iVar8) = 0;
        }
        *(undefined1 *)((long)local_90 + (long)local_88 + -1) = 0;
        local_98 = puVar2;
        (**(code **)(puVar5 + 0x28))(&local_98);
        puVar11 = local_90;
        (**(code **)(*param_3 + 0x18))(param_3);
        puVar10 = (undefined8 *)param_3[1];
        if (puVar11 == puVar10) {
LAB_0217d840:
          if (local_9c == param_4) {
            puVar15 = (uint *)(ulong)*puVar18;
            if (*puVar18 == 0) break;
            if ((DAT_053faf98 & 1) == 0) {
              DAT_053faf98 = 1;
              DAT_053fafa4._0_4_ = 0xffffffff;
              DAT_053faf9c = 0xffffffffffffffff;
              DAT_053fafa4 = -1;
              DAT_053fafac = 0xffffffffffffffff;
              DAT_053fafb4 = 0xffffffffffffffff;
            }
            else {
              uVar20 = (uint)DAT_053fafa4;
              if (-1 < (int)(uint)DAT_053fafa4) goto LAB_0217d8c4;
            }
            uVar19 = (uint)DAT_053fafa4;
            if (puVar18 != puVar15) goto LAB_0217d96c;
            break;
          }
          local_9c = local_9c + 1;
        }
        else {
          uVar17 = 0;
          bVar7 = true;
          do {
            if (*(char *)((long)local_90 + uVar17) != *(char *)((long)puVar10 + uVar17)) break;
            if (*(char *)((long)local_90 + uVar17) == '\0') {
              if (bVar7) goto LAB_0217d840;
              break;
            }
            cVar4 = *(char *)((long)local_90 + uVar17 + 1);
            if (cVar4 != *(char *)((long)puVar10 + uVar17 + 1)) break;
            if (cVar4 == '\0') goto LAB_0217d840;
            cVar4 = *(char *)((long)local_90 + uVar17 + 2);
            if (cVar4 != *(char *)((long)puVar10 + uVar17 + 2)) break;
            if (cVar4 == '\0') goto LAB_0217d840;
            bVar7 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
        }
      }
    }
    uVar19 = uVar19 + 1;
    bVar6 = uVar19 < uVar20;
    if (uVar19 == uVar20) {
      return bVar6;
    }
  } while( true );
LAB_0217d8fc:
  puVar11 = (undefined8 *)0x0;
  goto LAB_0217d900;
  while( true ) {
    lVar9 = 0xc;
    if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
    if (lVar9 == 0) goto LAB_0217d8fc;
    uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
    DAT_053fafa4 = CONCAT44(DAT_053fafa4._4_4_,0xfffffffe);
    if (uVar17 == 0) goto LAB_0217d8fc;
    puVar16 = (uint *)(lVar9 + 4);
    while (puVar16[-1] != 0x9bee16d1) {
      puVar16 = puVar16 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_0217d8fc;
    }
    uVar19 = *puVar16;
    uVar20 = 0;
    if (uVar19 != 0xffffffff) {
      uVar20 = uVar19;
    }
    DAT_053fafa4 = CONCAT44(DAT_053fafa4._4_4_,uVar20);
    if (-1 < (int)uVar20) break;
LAB_0217d96c:
    if (uVar19 != 0xffffffff) goto LAB_0217d8fc;
  }
LAB_0217d8c4:
  puVar11 = (undefined8 *)((long)puVar18 + (ulong)uVar20);
LAB_0217d900:
  __dest = *(undefined8 **)(param_2 + 8);
  puVar10 = &DAT_0407ebb1;
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = puVar11;
  }
  if (__dest != puVar10) {
    lVar9 = 0;
    do {
      if (*(char *)((long)puVar10 + lVar9) == '\0') goto LAB_0217d9e4;
      if (*(char *)((long)puVar10 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0217d9e4;
      }
      if (*(char *)((long)puVar10 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0217d9e4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0217d9e4:
    iVar8 = (int)lVar9;
    if (*(int *)(param_2 + 0x10) <= (int)lVar9) {
      iVar8 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,puVar10,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
  puVar15 = (uint *)(ulong)*puVar18;
  if (*puVar18 != 0) {
    if ((DAT_053faf98 & 1) == 0) {
      DAT_053faf98 = 1;
      DAT_053fafb4._0_4_ = 0xffffffff;
      DAT_053faf9c = 0xffffffffffffffff;
      DAT_053fafa4 = -1;
      DAT_053fafac = 0xffffffffffffffff;
      DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217da54:
      uVar20 = (uint)DAT_053fafb4;
      if (puVar18 == puVar15) {
LAB_0217da5c:
        puVar15 = (uint *)0x0;
      }
      else {
        do {
          if (uVar20 != 0xffffffff) goto LAB_0217da5c;
          lVar9 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
          if (lVar9 == 0) goto LAB_0217da5c;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
          DAT_053fafb4 = CONCAT44(DAT_053fafb4._4_4_,0xfffffffe);
          if (uVar17 == 0) goto LAB_0217da5c;
          puVar16 = (uint *)(lVar9 + 4);
          while (puVar16[-1] != 0x8ae48661) {
            puVar16 = puVar16 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_0217da5c;
          }
          uVar20 = *puVar16;
          uVar19 = 0;
          if (uVar20 != 0xffffffff) {
            uVar19 = uVar20;
          }
          DAT_053fafb4 = CONCAT44(DAT_053fafb4._4_4_,uVar19);
        } while ((int)uVar19 < 0);
        pbVar13 = (byte *)((long)puVar18 + (ulong)uVar19);
        if (pbVar13 != (byte *)0x0) goto LAB_0217da2c;
        puVar15 = (uint *)0x0;
      }
    }
    else {
      if ((int)(uint)DAT_053fafb4 < 0) goto LAB_0217da54;
      pbVar13 = (byte *)((long)puVar18 + (DAT_053fafb4 & 0xffffffff));
      puVar15 = (uint *)0x0;
      if (pbVar13 == (byte *)0x0) goto LAB_0217da60;
LAB_0217da2c:
      puVar15 = (uint *)(ulong)*pbVar13;
    }
  }
LAB_0217da60:
  *(char *)(param_2 + 0x38) = (char)puVar15;
  puVar15 = (uint *)(ulong)*puVar18;
  if (*puVar18 != 0) {
    if ((DAT_053faf98 & 1) == 0) {
      DAT_053faf98 = 1;
      DAT_053fafa4._4_4_ = 0xffffffff;
      DAT_053faf9c = 0xffffffffffffffff;
      DAT_053fafa4 = -1;
      DAT_053fafac = 0xffffffffffffffff;
      DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217dab0:
      uVar20 = DAT_053fafa4._4_4_;
      if (puVar18 == puVar15) {
LAB_0217dab8:
        puVar15 = (uint *)0x0;
      }
      else {
        do {
          if (uVar20 != 0xffffffff) goto LAB_0217dab8;
          lVar9 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
          if (lVar9 == 0) goto LAB_0217dab8;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
          DAT_053fafa4 = CONCAT44(0xfffffffe,(uint)DAT_053fafa4);
          if (uVar17 == 0) goto LAB_0217dab8;
          puVar16 = (uint *)(lVar9 + 4);
          while (puVar16[-1] != 0x675ca211) {
            puVar16 = puVar16 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_0217dab8;
          }
          uVar20 = *puVar16;
          uVar19 = 0;
          if (uVar20 != 0xffffffff) {
            uVar19 = uVar20;
          }
          DAT_053fafa4 = CONCAT44(uVar19,(uint)DAT_053fafa4);
        } while ((int)uVar19 < 0);
        pbVar13 = (byte *)((long)puVar18 + (ulong)uVar19);
        if (pbVar13 != (byte *)0x0) goto LAB_0217da88;
        puVar15 = (uint *)0x0;
      }
    }
    else {
      if (DAT_053fafa4 < 0) goto LAB_0217dab0;
      pbVar13 = (byte *)((long)puVar18 + (ulong)DAT_053fafa4._4_4_);
      puVar15 = (uint *)0x0;
      if (pbVar13 == (byte *)0x0) goto LAB_0217dabc;
LAB_0217da88:
      puVar15 = (uint *)(ulong)*pbVar13;
    }
  }
LAB_0217dabc:
  *(char *)(param_2 + 0x39) = (char)puVar15;
  puVar15 = (uint *)(ulong)*puVar18;
  if (*puVar18 != 0) {
    if ((DAT_053faf98 & 1) == 0) {
      DAT_053faf98 = 1;
      DAT_053faf9c._0_4_ = 0xffffffff;
      DAT_053faf9c = 0xffffffffffffffff;
      DAT_053fafa4 = -1;
      DAT_053fafac = 0xffffffffffffffff;
      DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217db0c:
      uVar20 = (uint)DAT_053faf9c;
      if (puVar18 == puVar15) {
LAB_0217db14:
        puVar15 = (uint *)0x0;
      }
      else {
        do {
          if (uVar20 != 0xffffffff) goto LAB_0217db14;
          lVar9 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
          if (lVar9 == 0) goto LAB_0217db14;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
          DAT_053faf9c = CONCAT44(DAT_053faf9c._4_4_,0xfffffffe);
          if (uVar17 == 0) goto LAB_0217db14;
          puVar16 = (uint *)(lVar9 + 4);
          while (puVar16[-1] != 0x1abe6e96) {
            puVar16 = puVar16 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_0217db14;
          }
          uVar20 = *puVar16;
          uVar19 = 0;
          if (uVar20 != 0xffffffff) {
            uVar19 = uVar20;
          }
          DAT_053faf9c = CONCAT44(DAT_053faf9c._4_4_,uVar19);
        } while ((int)uVar19 < 0);
        puVar12 = (ushort *)((long)puVar18 + (ulong)uVar19);
        if (puVar12 != (ushort *)0x0) goto LAB_0217dae4;
        puVar15 = (uint *)0x0;
      }
    }
    else {
      if ((int)(uint)DAT_053faf9c < 0) goto LAB_0217db0c;
      puVar12 = (ushort *)((long)puVar18 + (DAT_053faf9c & 0xffffffff));
      puVar15 = (uint *)0x0;
      if (puVar12 == (ushort *)0x0) goto LAB_0217db18;
LAB_0217dae4:
      puVar15 = (uint *)(ulong)*puVar12;
    }
  }
LAB_0217db18:
  *(short *)(param_2 + 0x3a) = (short)puVar15;
  puVar15 = (uint *)(ulong)*puVar18;
  if (*puVar18 != 0) {
    if ((DAT_053faf98 & 1) == 0) {
      DAT_053faf98 = 1;
      DAT_053fafac._4_4_ = 0xffffffff;
      DAT_053faf9c = 0xffffffffffffffff;
      DAT_053fafa4 = -1;
      DAT_053fafac = 0xffffffffffffffff;
      DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217db68:
      uVar20 = DAT_053fafac._4_4_;
      if (puVar18 == puVar15) {
LAB_0217db70:
        puVar15 = (uint *)0x0;
      }
      else {
        do {
          if (uVar20 != 0xffffffff) goto LAB_0217db70;
          lVar9 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
          if (lVar9 == 0) goto LAB_0217db70;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
          DAT_053fafac = CONCAT44(0xfffffffe,(int)DAT_053fafac);
          if (uVar17 == 0) goto LAB_0217db70;
          puVar16 = (uint *)(lVar9 + 4);
          while (puVar16[-1] != 0x1e7ef977) {
            puVar16 = puVar16 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_0217db70;
          }
          uVar20 = *puVar16;
          uVar19 = 0;
          if (uVar20 != 0xffffffff) {
            uVar19 = uVar20;
          }
          DAT_053fafac = CONCAT44(uVar19,(int)DAT_053fafac);
        } while ((int)uVar19 < 0);
        pbVar13 = (byte *)((long)puVar18 + (ulong)uVar19);
        if (pbVar13 != (byte *)0x0) goto LAB_0217db40;
        puVar15 = (uint *)0x0;
      }
    }
    else {
      if ((long)DAT_053fafac < 0) goto LAB_0217db68;
      pbVar13 = (byte *)((long)puVar18 + (ulong)DAT_053fafac._4_4_);
      puVar15 = (uint *)0x0;
      if (pbVar13 == (byte *)0x0) goto LAB_0217db74;
LAB_0217db40:
      puVar15 = (uint *)(ulong)*pbVar13;
    }
  }
LAB_0217db74:
  *(char *)(param_2 + 0x3c) = (char)puVar15;
  puVar15 = (uint *)(ulong)*puVar18;
  uVar20 = 0;
  if (*puVar18 == 0) goto LAB_0217dba0;
  if ((DAT_053faf98 & 1) == 0) {
    DAT_053faf98 = 1;
    DAT_053fafb4._4_4_ = 0xffffffff;
    DAT_053faf9c = 0xffffffffffffffff;
    DAT_053fafa4 = -1;
    DAT_053fafac = 0xffffffffffffffff;
    DAT_053fafb4 = 0xffffffffffffffff;
LAB_0217dbc8:
    uVar20 = DAT_053fafb4._4_4_;
    if (puVar18 == puVar15) {
LAB_0217dbd0:
      *(undefined4 *)(param_2 + 0x40) = 0;
      return bVar6;
    }
    do {
      if (uVar20 != 0xffffffff) goto LAB_0217dbd0;
      lVar9 = 0xc;
      if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar18 + (lVar9 - (long)puVar15);
      if (lVar9 == 0) goto LAB_0217dbd0;
      uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
      DAT_053fafb4 = CONCAT44(0xfffffffe,(uint)DAT_053fafb4);
      if (uVar17 == 0) goto LAB_0217dbd0;
      puVar16 = (uint *)(lVar9 + 4);
      while (puVar16[-1] != 0xd1f6dae0) {
        puVar16 = puVar16 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_0217dbd0;
      }
      uVar20 = *puVar16;
      uVar19 = 0;
      if (uVar20 != 0xffffffff) {
        uVar19 = uVar20;
      }
      DAT_053fafb4 = CONCAT44(uVar19,(uint)DAT_053fafb4);
    } while ((int)uVar19 < 0);
    pbVar13 = (byte *)((long)puVar18 + (ulong)uVar19);
    if (pbVar13 == (byte *)0x0) {
      uVar20 = 0;
      goto LAB_0217dba0;
    }
  }
  else {
    if ((long)DAT_053fafb4 < 0) goto LAB_0217dbc8;
    pbVar13 = (byte *)((long)puVar18 + (ulong)DAT_053fafb4._4_4_);
    uVar20 = 0;
    if (pbVar13 == (byte *)0x0) goto LAB_0217dba0;
  }
  uVar20 = (uint)*pbVar13;
LAB_0217dba0:
  *(uint *)(param_2 + 0x40) = uVar20;
  return bVar6;
}

