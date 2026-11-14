
undefined1 FUN_01de0264(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  void *__dest;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  undefined1 uVar21;
  long *plVar22;
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined1 auStack_a6 [6];
  undefined4 local_a0 [2];
  long local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (((((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) ||
      (*(long *)(param_2 + 2) == 0)) || (*(long *)(param_2 + 4) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) == 0) &&
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0 ||
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) == 0)))) {
    uVar10 = FUN_02640eb0();
    puVar1 = PTR_DAT_04bb2020;
    if ((uVar10 & 1) != 0) {
      local_1b0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1a8 = "IllegalReportCount";
      iVar8 = FUN_0274f6e0(&local_1b0);
      lVar20 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = PTR_DAT_04bb32e0;
      if (lVar20 == 0) {
LAB_01de03cc:
        if (*pbVar16 < 8) goto LAB_01de0444;
LAB_01de03d8:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01de043c:
          pbVar16 = PTR_DAT_04bb5038;
          goto LAB_01de0444;
        }
        lVar20 = **(long **)PTR_DAT_04bb27d0;
        bVar19 = *(byte *)(lVar20 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar19 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
          if (7 < bVar19) {
            puVar2 = (uint *)(lVar20 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar16 = (byte *)(lVar20 + 0x471);
          }
        }
        bVar19 = *pbVar16;
        bVar7 = 7 < bVar19;
        if (bVar7) {
          bVar19 = 0xff;
        }
        local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar19);
        if (bVar7) goto LAB_01de043c;
      }
      else {
        if (*(int *)(lVar20 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar20 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01de03cc;
          }
          goto LAB_01de03d8;
        }
LAB_01de0444:
        bVar19 = *pbVar16;
        if (7 < bVar19) {
          bVar19 = 0xff;
        }
        local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar19);
      }
      local_1b0 = puVar1 + 0x10;
      pcStack_1a8 = "IllegalReportCount";
      iVar9 = FUN_0274bce0(&local_90,&local_1b0);
      if (iVar9 < iVar8) {
        uVar21 = 0;
        if ((*(long *)(param_2 + 8) != 0) && (*(long *)(param_2 + 10) != 0)) {
          __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                                     ((long *)*param_1,*(long *)(param_2 + 10),0xfffffff8);
          if (__dest == (void *)0x0) {
            return 0;
          }
          memcpy(__dest,*(void **)(param_2 + 8),*(size_t *)(param_2 + 10));
          puVar1 = PTR_DAT_04bb2698;
          lVar20 = *(long *)PTR_DAT_04bb2698;
          if (lVar20 == 0) {
            puVar13 = malloc(0x4f0);
          }
          else {
            plVar11 = (long *)param_1[1];
            if (plVar11 == (long *)0x0) {
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar11 = (long *)(lVar20 + 8);
              if (lVar12 != 0) {
                plVar11 = (long *)(lVar12 + 0xa8);
              }
              plVar11 = (long *)*plVar11;
            }
            puVar13 = (undefined4 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x4f0,8);
          }
          *(undefined1 *)(puVar13 + 0x133) = 0;
          puVar13[1] = 7;
          *(undefined1 *)(puVar13 + 7) = 0;
          puVar13[6] = 0x4b1;
          puVar6 = PTR_DAT_04bb2b70;
          *(undefined8 *)(puVar13 + 0x134) = 0;
          *(undefined8 *)(puVar13 + 0x136) = 0;
          *(undefined8 *)(puVar13 + 0x138) = 0;
          *(undefined8 *)(puVar13 + 0x13a) = 0;
          *(undefined **)(puVar13 + 2) = puVar6 + 0x10;
          *(undefined4 **)(puVar13 + 4) = puVar13 + 7;
          param_1[0xb] = puVar13;
          *puVar13 = 10;
          *(undefined4 *)(param_1[0xb] + 4) = *param_2;
          *(void **)(param_1[0xb] + 0x4d0) = __dest;
          *(undefined8 *)(param_1[0xb] + 0x4d8) = *(undefined8 *)(param_2 + 10);
          lVar20 = param_1[0xb];
          (**(code **)(*(long *)(lVar20 + 8) + 0x18))((long *)(lVar20 + 8));
          lVar12 = *(long *)(lVar20 + 0x10);
          uVar4 = *(uint *)(lVar20 + 0x18);
          (**(code **)(*(long *)(param_2 + 0xc) + 0x18))(param_2 + 0xc);
          if (uVar4 != 0) {
            uVar15 = 0;
            lVar20 = 0x7fffffff;
            puVar14 = *(ushort **)(param_2 + 0xe);
            do {
              pbVar16 = (byte *)(lVar12 + (ulong)uVar15);
              if (lVar20 == 0) goto LAB_01de0668;
              uVar5 = *puVar14;
              if (uVar5 == 0) goto LAB_01de0668;
              bVar19 = (byte)uVar5;
              if (uVar5 < 0x80) {
                *pbVar16 = bVar19;
                iVar8 = 1;
              }
              else if (uVar5 < 0x800) {
                if (uVar4 <= uVar15 + 1) break;
                *pbVar16 = (byte)(uVar5 >> 6) | 0xc0;
                pbVar16[1] = bVar19 & 0x3f | 0x80;
                iVar8 = 2;
              }
              else {
                if (uVar4 <= uVar15 + 2) break;
                *pbVar16 = (byte)(uVar5 >> 0xc) | 0xe0;
                pbVar16[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
                pbVar16[2] = bVar19 & 0x3f | 0x80;
                iVar8 = 3;
              }
              uVar15 = iVar8 + uVar15;
              lVar20 = lVar20 + -1;
              puVar14 = puVar14 + 1;
            } while (uVar15 < uVar4);
            pbVar16 = (byte *)(lVar12 + (ulong)(uVar15 - 1));
LAB_01de0668:
            *pbVar16 = 0;
          }
          lVar20 = *(long *)puVar1;
          if (lVar20 == 0) {
            plVar11 = malloc(0x40);
          }
          else {
            plVar11 = (long *)param_1[1];
            if (plVar11 == (long *)0x0) {
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar11 = (long *)(lVar20 + 8);
              if (lVar12 != 0) {
                plVar11 = (long *)(lVar12 + 0xa8);
              }
              plVar11 = (long *)*plVar11;
            }
            plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
          }
          *(undefined4 *)(plVar11 + 1) = 10;
          plVar11[7] = 0;
          *(undefined4 *)(plVar11 + 6) = 0;
          plVar11[2] = 0;
          plVar11[3] = 0;
          plVar11[4] = 0;
          plVar11[5] = 0;
          *plVar11 = (long)(PTR_DAT_04bb2b40 + 0x10);
          if (*(long *)(param_2 + 4) != 0) {
            *(long **)(param_1[0xb] + 0x4e0) = plVar11;
            plVar11[2] = **(long **)(param_2 + 4);
            lVar17 = *(long *)(param_2 + 4);
            lVar20 = *(long *)(lVar17 + 0xa0);
            lVar12 = *(long *)(lVar17 + 0xa8);
            *(undefined4 *)(plVar11 + 5) = *(undefined4 *)(lVar17 + 0xb0);
            plVar11[3] = lVar20;
            plVar11[4] = lVar12;
            plVar11[7] = *(long *)(*(long *)(param_2 + 4) + 0x50);
            *(undefined8 *)((long)plVar11 + 0x2c) = *(undefined8 *)(param_2 + 6);
          }
          lVar20 = *(long *)puVar1;
          if (lVar20 == 0) {
            plVar11 = malloc(0x138);
          }
          else {
            plVar11 = (long *)param_1[1];
            if (plVar11 == (long *)0x0) {
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar11 = (long *)(lVar20 + 8);
              if (lVar12 != 0) {
                plVar11 = (long *)(lVar12 + 0xa8);
              }
              plVar11 = (long *)*plVar11;
            }
            plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x138,8);
          }
          *(undefined4 *)(plVar11 + 4) = 0x40;
          *(undefined1 *)((long)plVar11 + 0x24) = 0;
          puVar1 = PTR_DAT_04bb2bc0;
          *(undefined1 *)((long)plVar11 + 99) = 0;
          puVar1 = puVar1 + 0x10;
          *(undefined1 *)((long)plVar11 + 0x7c) = 0;
          puVar6 = PTR_DAT_04bb2b60;
          plVar11[2] = (long)puVar1;
          plVar11[3] = (long)plVar11 + 0x24;
          plVar22 = plVar11 + 0x18;
          *plVar22 = (long)(puVar6 + 0x10);
          puVar6 = PTR_DAT_04bb2b98;
          *(undefined4 *)(plVar11 + 0xf) = 0x40;
          *(undefined1 *)((long)plVar11 + 0xbb) = 0;
          plVar11[0xd] = (long)puVar1;
          plVar11[0xe] = (long)plVar11 + 0x7c;
          *(undefined1 *)((long)plVar11 + 0x134) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          plVar11[1] = 0x70000000a;
          *(undefined1 *)((long)plVar11 + 0xd4) = 0;
          plVar11[0x19] = (long)plVar11 + 0xd4;
          *(undefined4 *)(plVar11 + 0x1a) = 0x61;
          *(long **)(param_1[0xb] + 0x4e8) = plVar11;
          FUN_01ddd380(plVar11,*(long *)(param_2 + 2) + 0x30);
          local_170 = 0x40;
          local_1a0 = 0x15;
          puStack_178 = local_16c;
          local_12d = 0;
          puStack_120 = local_114;
          local_118 = 0x40;
          local_d5 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_1b0 = PTR_DAT_04bc0ce8 + 0x10;
          local_d0 = 0;
          uStack_c8 = 0;
          puVar3 = auStack_a6;
          if (auStack_a6 <= (undefined1 *)((long)&local_d0 + 2U)) {
            puVar3 = (undefined1 *)((long)&local_d0 + 2U);
          }
          local_c0 = 0;
          uStack_b8 = 0;
          pcStack_1a8 = (char *)&local_d0;
          local_180 = puVar1;
          local_128 = puVar1;
          memset(&local_d0,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1b0)) & 0xfffffffffffffff8 | 2);
          local_a0[0] = 0x14;
          local_98 = *(long *)(param_2 + 2) + 8;
          memset(&local_d0,0,(ulong)(puVar3 + ~(ulong)&local_d0) & 0xfffffffffffffff8 | 2);
          local_19c = 0;
          local_198 = 0xffffffff;
          uStack_190 = 0xffffffff00000000;
          local_188 = 0xffffffff;
          local_16c[0] = 0;
          local_114[0] = 0;
          local_80 = 0;
          local_68 = 1;
          local_64 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_90 = PTR_DAT_04bc0cd8 + 0x10;
          uStack_88 = 0;
          FUN_02906b00(&local_90,&local_1b0,local_a0);
          puVar14 = (ushort *)(**(code **)(local_1b0 + 0x18))(&local_1b0);
          (**(code **)(*plVar22 + 0x18))(plVar22);
          uVar4 = *(uint *)(plVar11 + 0x1a);
          if (uVar4 != 0) {
            lVar20 = plVar11[0x19];
            uVar15 = 0;
            lVar12 = 0x7fffffff;
            do {
              pbVar16 = (byte *)(lVar20 + (ulong)uVar15);
              if (lVar12 == 0) goto LAB_01de09f4;
              uVar5 = *puVar14;
              if (uVar5 == 0) goto LAB_01de09f4;
              bVar19 = (byte)uVar5;
              if (uVar5 < 0x80) {
                *pbVar16 = bVar19;
                iVar8 = 1;
              }
              else if (uVar5 < 0x800) {
                if (uVar4 <= uVar15 + 1) break;
                *pbVar16 = (byte)(uVar5 >> 6) | 0xc0;
                pbVar16[1] = bVar19 & 0x3f | 0x80;
                iVar8 = 2;
              }
              else {
                if (uVar4 <= uVar15 + 2) break;
                *pbVar16 = (byte)(uVar5 >> 0xc) | 0xe0;
                pbVar16[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
                pbVar16[2] = bVar19 & 0x3f | 0x80;
                iVar8 = 3;
              }
              uVar15 = iVar8 + uVar15;
              lVar12 = lVar12 + -1;
              puVar14 = puVar14 + 1;
            } while (uVar15 < uVar4);
            pbVar16 = (byte *)(lVar20 + (ulong)(uVar15 - 1));
LAB_01de09f4:
            *pbVar16 = 0;
          }
          uVar18 = **(undefined8 **)(param_2 + 4);
          param_1[0xd] = &PTR_LAB_04a5bbb8;
          param_1[0xe] = uVar18;
          if ((param_3 & 1) == 0) {
            FUN_03ebb160(param_1 + 2,1);
            return 1;
          }
          FUN_01ddd784(param_1);
          return 1;
        }
      }
      else {
        uVar21 = 1;
      }
      goto LAB_01de02c8;
    }
  }
  uVar21 = 0;
LAB_01de02c8:
  local_1b0 = (undefined *)**(long **)(param_2 + 4);
  if ((local_1b0 != (undefined *)0x0) && (*(long *)(*(long *)PTR_DAT_04bb4ca8 + 0x120) != 0)) {
    FUN_01d6c790(*(long *)(*(long *)PTR_DAT_04bb4ca8 + 0x120),&local_1b0);
  }
  *(undefined1 *)(param_1 + 0x11) = uVar21;
  return uVar21;
}

