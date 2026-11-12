
void FUN_007cf5c0(int *param_1,int *param_2,byte *param_3,int *param_4,int *param_5,long param_6,
                 int *param_7)

{
  undefined *puVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  ushort uVar15;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  uint *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  iVar10 = 1;
  if ((uint)param_2[0x42] < 0xfffffffe) {
    iVar10 = param_2[0x42] + 1;
  }
  *(undefined2 *)(param_2 + 0x41) = 0x100;
  param_2[0x42] = iVar10;
  param_2[0x40] = iVar10;
  param_2[0x43] = iVar10;
  if ((char)param_2[0x45] != '\0') {
    *(undefined1 *)(param_2 + 0x45) = 0;
  }
  puVar7 = PTR_DAT_04bb43c0;
  if (((DAT_0537d558 == (long *)0x0) || ((int)DAT_0537d558[0x10] != 3)) ||
     (lVar13 = *DAT_0537d558, *(byte *)(lVar13 + 0x476) < 2)) {
    *(undefined2 *)(param_2 + 0x41) = 1;
    goto LAB_007cf7f8;
  }
  if (*param_3 < 8) {
    bVar6 = *(byte *)(lVar13 + 0x473);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
      if (7 < bVar6) {
        pbVar2 = (byte *)(lVar13 + 0x48);
      }
      if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar13 + 0x472) != bVar6)) {
        local_90._0_5_ = CONCAT14(*param_3,(undefined4)local_90);
        local_80 = (uint *)(PTR_DAT_04bb2010 + 0x10);
        local_88 = *param_4;
        local_78 = *(undefined4 *)(param_6 + 8);
        uStack_74 = *(undefined4 *)(param_6 + 0xc);
        iStack_84 = *param_7;
        local_70 = FUN_0277d6c4(param_5);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
        local_68 = 0;
        local_62 = 0;
        local_64 = 0xff01;
        if (-1 < DAT_04cadf30) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cadf30,&local_68,&local_90,0x28,0);
        }
        if ((char)param_2[0x45] == '\0') {
          *(undefined1 *)(param_2 + 0x45) = 1;
        }
        iVar10 = param_2[0x43];
        param_2[0x44] = 0;
        goto LAB_007cf7f8;
      }
    }
    if ((*param_2 == 0) || (*param_2 != *param_4)) {
LAB_007cf960:
      puVar7 = PTR_DAT_04bb43c0;
      if ((param_2[8] != 0) && (param_2[8] == *param_4)) {
        local_80 = (uint *)0x0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_88 = param_2[0xe];
        iStack_84 = param_2[0xf];
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar7 == 0) {
LAB_007cfabc:
          uVar15 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cfabc;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_2 + 0xe);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar9) goto LAB_007cfabc;
          uVar15 = 0;
          puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
          if (((puVar12 != (uint *)0x0) && (uVar9 = *puVar12, uVar9 != 0)) &&
             (puVar12 != (uint *)(ulong)uVar9)) {
            puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar4 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar9);
                }
                if (*puVar14 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326e80) &&
                   (uVar15 = *(ushort *)(DAT_05326e88 + (long)(int)uVar4 * 2), uVar15 < 6))
                goto LAB_007cfac0;
              }
            }
            goto LAB_007cfabc;
          }
        }
LAB_007cfac0:
        local_88 = *param_5;
        iStack_84 = param_5[1];
        lVar13 = *(long *)puVar7;
        local_80 = (uint *)0x0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 == 0) {
LAB_007cfb50:
          if (local_80 != (uint *)0x0) goto LAB_007cfb58;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cfb50;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_5);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007cfb50;
          local_80 = puVar12;
LAB_007cfb58:
          puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
          if ((((*local_80 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
             ((uVar9 = puVar12[1], uVar9 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)local_80 - lVar13) / (ulong)uVar9);
              }
              if (*puVar12 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2),
                 uVar5 < 6)) {
                if ((uVar15 == 5) == (uVar5 == 5)) goto LAB_007d0568;
                goto LAB_007cfbfc;
              }
            }
          }
        }
        if (uVar15 != 5) goto LAB_007d0568;
      }
LAB_007cfbfc:
      puVar7 = PTR_DAT_04bb43c0;
      if ((param_2[0x10] != 0) && (param_2[0x10] == *param_4)) {
        local_80 = (uint *)0x0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_88 = param_2[0x16];
        iStack_84 = param_2[0x17];
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar7 == 0) {
LAB_007cfd58:
          uVar15 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cfd58;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_2 + 0x16);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar9) goto LAB_007cfd58;
          uVar15 = 0;
          puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
          if (((puVar12 != (uint *)0x0) && (uVar9 = *puVar12, uVar9 != 0)) &&
             (puVar12 != (uint *)(ulong)uVar9)) {
            puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar4 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar9);
                }
                if (*puVar14 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326e80) &&
                   (uVar15 = *(ushort *)(DAT_05326e88 + (long)(int)uVar4 * 2), uVar15 < 6))
                goto LAB_007cfd5c;
              }
            }
            goto LAB_007cfd58;
          }
        }
LAB_007cfd5c:
        local_88 = *param_5;
        iStack_84 = param_5[1];
        lVar13 = *(long *)puVar7;
        local_80 = (uint *)0x0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 == 0) {
LAB_007cfdec:
          if (local_80 != (uint *)0x0) goto LAB_007cfdf4;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cfdec;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_5);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007cfdec;
          local_80 = puVar12;
LAB_007cfdf4:
          puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
          if ((((*local_80 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
             ((uVar9 = puVar12[1], uVar9 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)local_80 - lVar13) / (ulong)uVar9);
              }
              if (*puVar12 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2),
                 uVar5 < 6)) {
                if ((uVar15 == 5) == (uVar5 == 5)) goto LAB_007d0568;
                goto LAB_007cfe98;
              }
            }
          }
        }
        if (uVar15 != 5) goto LAB_007d0568;
      }
LAB_007cfe98:
      puVar7 = PTR_DAT_04bb43c0;
      if ((param_2[0x18] != 0) && (param_2[0x18] == *param_4)) {
        local_80 = (uint *)0x0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_88 = param_2[0x1e];
        iStack_84 = param_2[0x1f];
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar7 == 0) {
LAB_007cffe4:
          uVar15 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cffe4;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_2 + 0x1e);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007cffe4;
          uVar9 = *puVar12;
          uVar15 = 0;
          if ((uVar9 != 0) && (puVar12 != (uint *)(ulong)uVar9)) {
            puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            if ((*puVar14 != 0) &&
               ((uVar9 = puVar14[1], uVar9 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar4 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar9);
                }
                if (*puVar14 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326e80) &&
                   (uVar15 = *(ushort *)(DAT_05326e88 + (long)(int)uVar4 * 2), uVar15 < 6))
                goto LAB_007cffe8;
              }
            }
            goto LAB_007cffe4;
          }
        }
LAB_007cffe8:
        local_88 = *param_5;
        iStack_84 = param_5[1];
        local_80 = (uint *)0x0;
        lVar13 = *(long *)puVar7;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 == 0) {
LAB_007d010c:
          if (local_80 != (uint *)0x0) goto LAB_007d0114;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007d010c;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_5);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007d010c;
          local_80 = puVar12;
LAB_007d0114:
          puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
          if ((((*local_80 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
             ((uVar9 = puVar12[1], uVar9 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)local_80 - lVar13) / (ulong)uVar9);
              }
              if (*puVar12 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2),
                 uVar5 < 6)) {
                if ((uVar15 == 5) == (uVar5 == 5)) goto LAB_007d0568;
                goto LAB_007d01b8;
              }
            }
          }
        }
        if (uVar15 != 5) goto LAB_007d0568;
      }
LAB_007d01b8:
      puVar7 = PTR_DAT_04bb43c0;
      if ((param_2[0x20] != 0) && (param_2[0x20] == *param_4)) {
        local_80 = (uint *)0x0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_88 = param_2[0x26];
        iStack_84 = param_2[0x27];
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar7 == 0) {
LAB_007d0304:
          uVar15 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007d0304;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_2 + 0x26);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007d0304;
          uVar9 = *puVar12;
          uVar15 = 0;
          if ((uVar9 != 0) && (puVar12 != (uint *)(ulong)uVar9)) {
            puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            if ((*puVar14 != 0) &&
               ((uVar9 = puVar14[1], uVar9 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar4 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar9);
                }
                if (*puVar14 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326e80) &&
                   (uVar15 = *(ushort *)(DAT_05326e88 + (long)(int)uVar4 * 2), uVar15 < 6))
                goto LAB_007d0308;
              }
            }
            goto LAB_007d0304;
          }
        }
LAB_007d0308:
        local_88 = *param_5;
        iStack_84 = param_5[1];
        local_80 = (uint *)0x0;
        lVar13 = *(long *)puVar7;
        local_90 = puVar1;
        uVar9 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 == 0) {
LAB_007d039c:
          if (local_80 != (uint *)0x0) goto LAB_007d03a4;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007d039c;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_5);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_007d039c;
          local_80 = puVar12;
LAB_007d03a4:
          puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
          if ((((*local_80 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
             ((uVar9 = puVar12[1], uVar9 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)local_80 - lVar13) / (ulong)uVar9);
              }
              if (*puVar12 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2),
                 uVar5 < 6)) {
                if ((uVar15 == 5) == (uVar5 == 5)) goto LAB_007d0568;
                goto LAB_007d0448;
              }
            }
          }
        }
        if (uVar15 != 5) goto LAB_007d0568;
      }
LAB_007d0448:
      if ((param_2[0x28] != 0) && (param_2[0x28] == *param_4)) {
        FUN_01ad5d04(&local_90,param_2 + 0x2e);
        iVar10 = FUN_01aee7b8(&local_90);
        FUN_01ad5d04(&local_90,param_5);
        iVar11 = FUN_01aee7b8(&local_90);
        if ((iVar10 == 5) == (iVar11 == 5)) goto LAB_007d0568;
      }
      if ((param_2[0x30] != 0) && (param_2[0x30] == *param_4)) {
        FUN_01ad5d04(&local_90,param_2 + 0x36);
        iVar10 = FUN_01aee7b8(&local_90);
        FUN_01ad5d04(&local_90,param_5);
        iVar11 = FUN_01aee7b8(&local_90);
        if ((iVar10 == 5) == (iVar11 == 5)) goto LAB_007d0568;
      }
      if ((param_2[0x38] != 0) && (param_2[0x38] == *param_4)) {
        FUN_01ad5d04(&local_90,param_2 + 0x3e);
        iVar10 = FUN_01aee7b8(&local_90);
        FUN_01ad5d04(&local_90,param_5);
        iVar11 = FUN_01aee7b8(&local_90);
        if ((iVar10 == 5) == (iVar11 == 5)) goto LAB_007d0568;
      }
      bVar6 = *param_3;
      bVar8 = 7 < bVar6;
      if (bVar8) {
        bVar6 = 0xff;
      }
      piVar3 = param_2 + ((long)(char)bVar6 & 0xffffffffU) * 8;
      if (bVar8) {
        piVar3 = param_2;
      }
      if (*piVar3 == 0) {
        local_90._0_5_ = CONCAT14(bVar6,(undefined4)local_90);
        local_80 = (uint *)(PTR_DAT_04bb2010 + 0x10);
        local_88 = *param_4;
        local_78 = *(undefined4 *)(param_6 + 8);
        uStack_74 = *(undefined4 *)(param_6 + 0xc);
        iStack_84 = *param_7;
        local_70 = FUN_0277d6c4(param_5);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
        FUN_01de7124(&DAT_04cadf28,&local_90,0x28);
        bVar6 = *param_3;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        piVar3 = param_2 + ((long)(char)bVar6 & 0xffffffffU) * 8;
        if (bVar8) {
          piVar3 = param_2;
        }
        *piVar3 = *param_4;
        bVar6 = *param_3;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        piVar3 = param_2 + ((long)(char)bVar6 & 0xffffffffU) * 8;
        if (bVar8) {
          piVar3 = param_2;
        }
        piVar3[4] = *(int *)(param_6 + 8);
        piVar3[5] = *(int *)(param_6 + 0xc);
        bVar6 = *param_3;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        piVar3 = param_2 + ((long)(char)bVar6 & 0xffffffffU) * 8;
        if (bVar8) {
          piVar3 = param_2;
        }
        piVar3[1] = *param_7;
        bVar6 = *param_3;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        piVar3 = param_2 + ((long)(char)bVar6 & 0xffffffffU) * 8;
        if (bVar8) {
          piVar3 = param_2;
        }
        *(short *)(piVar3 + 6) = (short)*param_5;
        *(undefined1 *)((long)piVar3 + 0x1a) = *(undefined1 *)((long)param_5 + 2);
        *(undefined1 *)((long)piVar3 + 0x1b) = *(undefined1 *)((long)param_5 + 3);
        piVar3[7] = param_5[1];
        iVar10 = param_2[0x43];
        if (iVar10 == param_2[0x40]) {
          *(undefined2 *)(param_2 + 0x41) = 1;
        }
        goto LAB_007cf7f8;
      }
    }
    else {
      local_80 = (uint *)0x0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_88 = param_2[6];
      iStack_84 = param_2[7];
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      local_90 = puVar1;
      uVar9 = FUN_0277d6c4();
      if (*(long *)puVar7 == 0) {
LAB_007cf820:
        uVar15 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cf820;
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_2 + 6);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (*(uint *)(lVar13 + 0x1d8) <= uVar9) goto LAB_007cf820;
        uVar15 = 0;
        puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
        if (((puVar12 != (uint *)0x0) && (uVar9 = *puVar12, uVar9 != 0)) &&
           (puVar12 != (uint *)(ulong)uVar9)) {
          puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
          if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
             ((ulong)(ushort)puVar14[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar9);
              }
              if (*puVar14 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < DAT_05326e80) &&
                 (uVar15 = *(ushort *)(DAT_05326e88 + (long)(int)uVar4 * 2), uVar15 < 6))
              goto LAB_007cf824;
            }
          }
          goto LAB_007cf820;
        }
      }
LAB_007cf824:
      local_88 = *param_5;
      iStack_84 = param_5[1];
      lVar13 = *(long *)puVar7;
      local_80 = (uint *)0x0;
      local_90 = puVar1;
      uVar9 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar7 == 0) {
LAB_007cf8b4:
        if (local_80 != (uint *)0x0) goto LAB_007cf8bc;
LAB_007cf958:
        if (uVar15 == 5) goto LAB_007cf960;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cf8b4;
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_5);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
           (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar12 == (uint *)0x0)) goto LAB_007cf8b4;
        local_80 = puVar12;
LAB_007cf8bc:
        puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
        if ((((*local_80 == 0) || (puVar12 == (uint *)0x0)) || (*puVar12 == 0)) ||
           ((uVar9 = puVar12[1], uVar9 == 0 || ((ulong)(ushort)puVar12[2] == 0))))
        goto LAB_007cf958;
        lVar13 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar13 == 0) goto LAB_007cf958;
        uVar4 = 0;
        if ((ulong)uVar9 != 0) {
          uVar4 = (uint)((ulong)((long)local_80 - lVar13) / (ulong)uVar9);
        }
        if (*puVar12 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar4) ||
           (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2), 5 < uVar5))
        goto LAB_007cf958;
        if ((uVar15 == 5) != (uVar5 == 5)) goto LAB_007cf960;
      }
    }
LAB_007d0568:
    iVar10 = param_2[0x43];
    if (iVar10 != param_2[0x40]) goto LAB_007cf7f8;
  }
  *(undefined2 *)(param_2 + 0x41) = 0;
LAB_007cf7f8:
  *param_1 = iVar10;
  return;
}

