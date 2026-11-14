
undefined1 FUN_01dde7d0(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte bVar20;
  long lVar21;
  ushort *puVar22;
  int iVar23;
  undefined *local_228;
  ushort *local_220;
  undefined *local_218;
  ushort *local_210;
  undefined4 local_208;
  undefined2 local_204;
  byte abStack_202 [98];
  undefined *local_1a0;
  undefined1 *local_198;
  uint local_190;
  undefined1 local_18c [96];
  undefined1 local_12c;
  undefined *local_128;
  undefined1 *local_120;
  uint local_118;
  undefined1 local_114 [96];
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 uStack_9c;
  ushort uStack_9a;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01dde820:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar12 = FUN_02640eb0();
  puVar1 = PTR_DAT_04bb2020;
  if ((uVar12 & 1) == 0) goto LAB_01dde820;
  local_218 = PTR_DAT_04bb2020 + 0x10;
  local_210 = (ushort *)0x40ff370;
  iVar10 = FUN_0274f6e0(&local_218);
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  pbVar18 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
LAB_01dde8d4:
    if (*pbVar18 < 8) goto LAB_01dde94c;
LAB_01dde8e0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dde944:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_01dde94c;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar3 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar18 = (byte *)(lVar21 + 0x471);
      }
    }
    bVar20 = *pbVar18;
    bVar8 = 7 < bVar20;
    if (bVar8) {
      bVar20 = 0xff;
    }
    local_b0 = CONCAT71(local_b0._1_7_,bVar20);
    if (bVar8) goto LAB_01dde944;
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dde8d4;
      }
      goto LAB_01dde8e0;
    }
LAB_01dde94c:
    bVar20 = *pbVar18;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_b0 = CONCAT71(local_b0._1_7_,bVar20);
  }
  local_218 = puVar1 + 0x10;
  local_210 = (ushort *)0x40ff370;
  iVar11 = FUN_0274bce0(&local_b0,&local_218);
  if (iVar11 < iVar10) {
    uVar9 = 0;
    if ((*(long *)(param_2 + 2) != 0) && (*(long *)(param_2 + 4) != 0)) {
      pvVar13 = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                                  ((long *)*param_1,*(long *)(param_2 + 4),0xfffffff8);
      if (pvVar13 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar13,*(void **)(param_2 + 2),*(size_t *)(param_2 + 4));
      puVar2 = PTR_DAT_04bb5030;
      puVar1 = PTR_DAT_04bb2698;
      iVar10 = param_2[1];
      if ((iVar10 < 0) || (lVar21 = *(long *)PTR_DAT_04bb5030, *(int *)(lVar21 + 0xb0) <= iVar10)) {
        return 0;
      }
      uStack_9c = 0;
      uStack_86 = 0;
      iVar10 = *(int *)(lVar21 + 0xac) + iVar10;
      iVar11 = 0;
      if (*(int *)(lVar21 + 0xa8) <= iVar10) {
        iVar11 = *(int *)(lVar21 + 0xa8);
      }
      iVar10 = *(int *)(lVar21 + 0x94) +
               *(int *)(*(long *)(lVar21 + 0xa0) + (long)(iVar10 - iVar11) * 4);
      iVar11 = 0;
      if (*(int *)(lVar21 + 0x90) <= iVar10) {
        iVar11 = *(int *)(lVar21 + 0x90);
      }
      puVar19 = (undefined8 *)(*(long *)(lVar21 + 0x88) + (long)(iVar10 - iVar11) * 200);
      local_a0 = *(undefined4 *)((long)puVar19 + 0x36);
      uStack_a8 = *(undefined8 *)((long)puVar19 + 0x2e);
      local_b0 = *(undefined8 *)((long)puVar19 + 0x26);
      local_8a = (undefined2)*(undefined4 *)(puVar19 + 4);
      uStack_88 = (undefined2)((uint)*(undefined4 *)(puVar19 + 4) >> 0x10);
      uStack_9a = (ushort)puVar19[2];
      local_98 = (undefined6)((ulong)puVar19[2] >> 0x10);
      uStack_92 = (undefined2)puVar19[3];
      uStack_90 = (undefined6)((ulong)puVar19[3] >> 0x10);
      local_78 = *puVar19;
      local_70 = puVar19[1];
      uStack_84 = *(undefined4 *)(puVar19 + 0x18);
      local_80 = (ulong)*(byte *)((long)puVar19 + 0xc4);
      lVar21 = *(long *)PTR_DAT_04bb2698;
      if (lVar21 == 0) {
        puVar19 = malloc(0x4f0);
      }
      else {
        plVar14 = (long *)param_1[1];
        if (plVar14 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar21 + 8);
          if (lVar15 != 0) {
            plVar14 = (long *)(lVar15 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
        }
        puVar19 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x4f0,8);
      }
      *(undefined1 *)((long)puVar19 + 0x4d4) = 0;
      *(undefined1 *)((long)puVar19 + 0x24) = 0;
      puVar19[3] = (undefined1 *)((long)puVar19 + 0x24);
      *(undefined4 *)(puVar19 + 4) = 0x4b1;
      puVar6 = PTR_DAT_04bb2b70;
      puVar19[0x9b] = 0;
      puVar19[0x9c] = 0;
      puVar19[0x9d] = 0;
      puVar19[1] = 0x700000000;
      puVar19[2] = puVar6 + 0x10;
      param_1[0xc] = puVar19;
      *puVar19 = local_78;
      *(undefined4 *)(param_1[0xc] + 8) = 5;
      *(undefined4 *)(param_1[0xc] + 0xc) = *param_2;
      *(void **)(param_1[0xc] + 0x4d8) = pvVar13;
      *(undefined8 *)(param_1[0xc] + 0x4e0) = *(undefined8 *)(param_2 + 4);
      lVar21 = param_1[0xc];
      (**(code **)(*(long *)(lVar21 + 0x10) + 0x18))((long *)(lVar21 + 0x10));
      lVar15 = *(long *)(lVar21 + 0x18);
      uVar17 = *(uint *)(lVar21 + 0x20);
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(param_2 + 6);
      if (uVar17 != 0) {
        uVar16 = 0;
        lVar21 = 0x7fffffff;
        puVar22 = *(ushort **)(param_2 + 8);
        do {
          pbVar18 = (byte *)(lVar15 + (ulong)uVar16);
          if (lVar21 == 0) goto LAB_01ddec50;
          uVar5 = *puVar22;
          if (uVar5 == 0) goto LAB_01ddec50;
          bVar20 = (byte)uVar5;
          if (uVar5 < 0x80) {
            *pbVar18 = bVar20;
            iVar10 = 1;
          }
          else if (uVar5 < 0x800) {
            if (uVar17 <= uVar16 + 1) break;
            *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
            pbVar18[1] = bVar20 & 0x3f | 0x80;
            iVar10 = 2;
          }
          else {
            if (uVar17 <= uVar16 + 2) break;
            *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
            pbVar18[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
            pbVar18[2] = bVar20 & 0x3f | 0x80;
            iVar10 = 3;
          }
          uVar16 = iVar10 + uVar16;
          lVar21 = lVar21 + -1;
          puVar22 = puVar22 + 1;
        } while (uVar16 < uVar17);
        pbVar18 = (byte *)(lVar15 + (ulong)(uVar16 - 1));
LAB_01ddec50:
        *pbVar18 = 0;
      }
      lVar21 = *(long *)puVar1;
      if (lVar21 == 0) {
        pvVar13 = malloc(0x8d68);
      }
      else {
        plVar14 = (long *)param_1[1];
        if (plVar14 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar21 + 8);
          if (lVar15 != 0) {
            plVar14 = (long *)(lVar15 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            pvVar13 = (void *)0x0;
            goto LAB_01ddecb8;
          }
        }
        pvVar13 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x8d68,8);
      }
LAB_01ddecb8:
      FUN_006e3180(pvVar13);
      puVar1 = PTR_DAT_04bb8610;
      *(void **)(param_1[0xc] + 0x4e8) = pvVar13;
      local_210 = (ushort *)&local_b0;
      local_218 = puVar1 + 0x10;
      (**(code **)(*(long *)((long)pvVar13 + 0x10) + 0x18))((long *)((long)pvVar13 + 0x10));
      lVar21 = *(long *)((long)pvVar13 + 0x18);
      uVar17 = *(uint *)((long)pvVar13 + 0x20);
      (**(code **)(local_218 + 0x18))(&local_218);
      if (uVar17 != 0) {
        uVar16 = 0;
        lVar15 = 0x7fffffff;
        do {
          pbVar18 = (byte *)(lVar21 + (ulong)uVar16);
          if (lVar15 == 0) goto LAB_01ddedc0;
          uVar5 = *local_210;
          if (uVar5 == 0) goto LAB_01ddedc0;
          bVar20 = (byte)uVar5;
          if (uVar5 < 0x80) {
            *pbVar18 = bVar20;
            iVar10 = 1;
          }
          else if (uVar5 < 0x800) {
            if (uVar17 <= uVar16 + 1) break;
            *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
            pbVar18[1] = bVar20 & 0x3f | 0x80;
            iVar10 = 2;
          }
          else {
            if (uVar17 <= uVar16 + 2) break;
            *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
            pbVar18[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
            pbVar18[2] = bVar20 & 0x3f | 0x80;
            iVar10 = 3;
          }
          uVar16 = iVar10 + uVar16;
          lVar15 = lVar15 + -1;
          local_210 = local_210 + 1;
        } while (uVar16 < uVar17);
        pbVar18 = (byte *)(lVar21 + (ulong)(uVar16 - 1));
LAB_01ddedc0:
        *pbVar18 = 0;
      }
      local_218 = puVar1 + 0x10;
      local_210 = &uStack_9a;
      (**(code **)(*(long *)((long)pvVar13 + 0x68) + 0x18))((long *)((long)pvVar13 + 0x68));
      lVar21 = *(long *)((long)pvVar13 + 0x70);
      uVar17 = *(uint *)((long)pvVar13 + 0x78);
      (**(code **)(local_218 + 0x18))(&local_218);
      if (uVar17 != 0) {
        uVar16 = 0;
        lVar15 = 0x7fffffff;
        puVar22 = local_210;
        do {
          pbVar18 = (byte *)(lVar21 + (ulong)uVar16);
          if (lVar15 == 0) goto LAB_01ddeeac;
          uVar5 = *puVar22;
          if (uVar5 == 0) goto LAB_01ddeeac;
          bVar20 = (byte)uVar5;
          if (uVar5 < 0x80) {
            *pbVar18 = bVar20;
            iVar10 = 1;
          }
          else if (uVar5 < 0x800) {
            if (uVar17 <= uVar16 + 1) break;
            *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
            pbVar18[1] = bVar20 & 0x3f | 0x80;
            iVar10 = 2;
          }
          else {
            if (uVar17 <= uVar16 + 2) break;
            *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
            pbVar18[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
            pbVar18[2] = bVar20 & 0x3f | 0x80;
            iVar10 = 3;
          }
          uVar16 = iVar10 + uVar16;
          lVar15 = lVar15 + -1;
          puVar22 = puVar22 + 1;
        } while (uVar16 < uVar17);
        pbVar18 = (byte *)(lVar21 + (ulong)(uVar16 - 1));
LAB_01ddeeac:
        *pbVar18 = 0;
      }
      lVar21 = *(long *)puVar2;
      iVar10 = *(int *)(lVar21 + 0x98);
      if (iVar10 != 0) {
        iVar11 = 0;
        puVar3 = (uint *)((long)pvVar13 + 0x8d60);
        puVar1 = PTR_DAT_04bb2b60 + 0x10;
        puVar2 = PTR_DAT_04bb8610 + 0x10;
        do {
          local_12c = 0;
          local_118 = 0x61;
          uVar17 = 0;
          local_b4 = 0;
          local_114[0] = 0;
          local_190 = 0x61;
          local_18c[0] = 0;
          local_208 = 0x61;
          local_204._0_1_ = 0;
          abStack_202[0x5e] = 0;
          iVar23 = 0;
          if (*(int *)(lVar21 + 0x90) <= *(int *)(lVar21 + 0x94) + iVar11) {
            iVar23 = *(int *)(lVar21 + 0x90);
          }
          lVar15 = 0x7fffffff;
          puVar22 = (ushort *)
                    (*(long *)(lVar21 + 0x88) +
                     (((long)*(int *)(lVar21 + 0x94) + (long)iVar11) - (long)iVar23) * 200 + 0x26);
          do {
            uVar12 = (ulong)uVar17;
            pbVar18 = (byte *)((long)&local_204 + uVar12);
            if (lVar15 == 0) goto LAB_01ddf040;
            uVar5 = *puVar22;
            if (uVar5 == 0) goto LAB_01ddf040;
            bVar20 = (byte)uVar5;
            if (uVar5 < 0x80) {
              *pbVar18 = bVar20;
              iVar23 = 1;
            }
            else if (uVar5 < 0x800) {
              if (0x5f < uVar17) break;
              *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
              abStack_202[uVar12 - 1] = bVar20 & 0x3f | 0x80;
              iVar23 = 2;
            }
            else {
              if (0x60 < uVar17 + 2) break;
              *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
              abStack_202[uVar12 - 1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
              abStack_202[uVar12] = bVar20 & 0x3f | 0x80;
              iVar23 = 3;
            }
            uVar17 = iVar23 + uVar17;
            lVar15 = lVar15 + -1;
            puVar22 = puVar22 + 1;
          } while (uVar17 < 0x61);
          pbVar18 = (byte *)((long)&local_204 + (ulong)(uVar17 - 1));
LAB_01ddf040:
          local_1a0 = puVar1;
          local_198 = local_18c;
          local_128 = puVar1;
          local_120 = local_114;
          *pbVar18 = 0;
          iVar23 = *(int *)(lVar21 + 0x94) + iVar11;
          iVar4 = 0;
          if (*(int *)(lVar21 + 0x90) <= iVar23) {
            iVar4 = *(int *)(lVar21 + 0x90);
          }
          local_220 = (ushort *)(*(long *)(lVar21 + 0x88) + (long)(iVar23 - iVar4) * 200 + 0x10);
          local_228 = puVar2;
          local_218 = puVar1;
          local_210 = &local_204;
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          uVar17 = local_190;
          puVar7 = local_198;
          (**(code **)(local_228 + 0x18))(&local_228);
          if (uVar17 != 0) {
            uVar16 = 0;
            lVar15 = 0x7fffffff;
            do {
              pbVar18 = puVar7 + uVar16;
              if (lVar15 == 0) goto LAB_01ddf154;
              uVar5 = *local_220;
              if (uVar5 == 0) goto LAB_01ddf154;
              bVar20 = (byte)uVar5;
              if (uVar5 < 0x80) {
                *pbVar18 = bVar20;
                iVar23 = 1;
              }
              else if (uVar5 < 0x800) {
                if (uVar17 <= uVar16 + 1) break;
                *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
                pbVar18[1] = bVar20 & 0x3f | 0x80;
                iVar23 = 2;
              }
              else {
                if (uVar17 <= uVar16 + 2) break;
                *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
                pbVar18[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
                pbVar18[2] = bVar20 & 0x3f | 0x80;
                iVar23 = 3;
              }
              uVar16 = iVar23 + uVar16;
              lVar15 = lVar15 + -1;
              local_220 = local_220 + 1;
            } while (uVar16 < uVar17);
            pbVar18 = puVar7 + (uVar16 - 1);
LAB_01ddf154:
            *pbVar18 = 0;
          }
          iVar23 = *(int *)(lVar21 + 0x94) + iVar11;
          iVar4 = 0;
          if (*(int *)(lVar21 + 0x90) <= iVar23) {
            iVar4 = *(int *)(lVar21 + 0x90);
          }
          local_220 = (ushort *)(*(long *)(lVar21 + 0x88) + (long)(iVar23 - iVar4) * 200 + 0x3c);
          local_228 = PTR_DAT_04bb8610 + 0x10;
          (**(code **)(local_128 + 0x18))(&local_128);
          uVar17 = local_118;
          puVar7 = local_120;
          (**(code **)(local_228 + 0x18))(&local_228);
          if (uVar17 != 0) {
            uVar16 = 0;
            lVar15 = 0x7fffffff;
            puVar22 = local_220;
            do {
              pbVar18 = puVar7 + uVar16;
              if (lVar15 == 0) goto LAB_01ddf274;
              uVar5 = *puVar22;
              if (uVar5 == 0) goto LAB_01ddf274;
              bVar20 = (byte)uVar5;
              if (uVar5 < 0x80) {
                *pbVar18 = bVar20;
                iVar23 = 1;
              }
              else if (uVar5 < 0x800) {
                if (uVar17 <= uVar16 + 1) break;
                *pbVar18 = (byte)(uVar5 >> 6) | 0xc0;
                pbVar18[1] = bVar20 & 0x3f | 0x80;
                iVar23 = 2;
              }
              else {
                if (uVar17 <= uVar16 + 2) break;
                *pbVar18 = (byte)(uVar5 >> 0xc) | 0xe0;
                pbVar18[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
                pbVar18[2] = bVar20 & 0x3f | 0x80;
                iVar23 = 3;
              }
              uVar16 = iVar23 + uVar16;
              lVar15 = lVar15 + -1;
              puVar22 = puVar22 + 1;
            } while (uVar16 < uVar17);
            pbVar18 = puVar7 + (uVar16 - 1);
LAB_01ddf274:
            *pbVar18 = 0;
          }
          uVar17 = *puVar3;
          if ((int)uVar17 < 100) {
            lVar15 = (long)pvVar13 + 0xc0 + (ulong)uVar17 * 0x168;
            if (99 < uVar17) {
              lVar15 = (long)pvVar13 + 0xc0;
            }
            FUN_006e32e0(lVar15,&local_218);
            *puVar3 = *puVar3 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar10 != iVar11);
      }
      if ((param_3 & 1) == 0) {
        FUN_03ebb160(param_1 + 2,1);
      }
      else {
        FUN_01ddd784(param_1);
      }
      return 1;
    }
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = uVar9;
  return uVar9;
}

