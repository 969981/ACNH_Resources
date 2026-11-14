
undefined1 FUN_01ddcc6c(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  void *__dest;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  long lVar17;
  ushort *puVar18;
  long lVar19;
  undefined1 uVar20;
  long lVar21;
  byte local_64 [4];
  undefined *local_60;
  char *pcStack_58;
  
  lVar21 = *(long *)(*(long *)(param_2 + 2) + 0x378);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) ||
     (*(char *)(*(long *)(param_2 + 2) + 0x5c) != '\0')) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01ddccd4:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar10 = FUN_02640eb0();
  puVar7 = PTR_DAT_04bb2020;
  if ((uVar10 & 1) == 0) goto LAB_01ddccd4;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "IllegalReportCount";
  iVar8 = FUN_0274f6e0(&local_60);
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
LAB_01ddcda4:
    if (*pbVar16 < 8) goto LAB_01ddce1c;
LAB_01ddcdb0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01ddce14:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_01ddce1c;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar17 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar16 = (byte *)(lVar17 + 0x471);
      }
    }
    local_64[0] = *pbVar16;
    if (7 < local_64[0]) goto LAB_01ddce14;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ddcda4;
      }
      goto LAB_01ddcdb0;
    }
LAB_01ddce1c:
    local_64[0] = *pbVar16;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  local_60 = puVar7 + 0x10;
  pcStack_58 = "IllegalReportCount";
  iVar9 = FUN_0274bce0(local_64,&local_60);
  if (iVar9 < iVar8) {
    uVar20 = 0;
    if ((*(long *)(param_2 + 4) != 0) && (*(long *)(param_2 + 6) != 0)) {
      __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                                 ((long *)*param_1,*(long *)(param_2 + 6),0xfffffff8);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,*(void **)(param_2 + 4),*(size_t *)(param_2 + 6));
      puVar7 = PTR_DAT_04bb2698;
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        puVar13 = malloc(0x4f0);
      }
      else {
        plVar11 = (long *)param_1[1];
        if (plVar11 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar17 + 8);
          if (lVar12 != 0) {
            plVar11 = (long *)(lVar12 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          puVar13 = (undefined8 *)0x0;
          if (plVar11 == (long *)0x0) goto LAB_01ddcef8;
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x4f0,8);
      }
LAB_01ddcef8:
      if (lVar21 == 0) {
        *(undefined1 *)((long)puVar13 + 0x4d4) = 0;
        *puVar13 = 0;
        puVar13[1] = 0x700000000;
        *(undefined1 *)((long)puVar13 + 0x24) = 0;
        *(undefined4 *)(puVar13 + 4) = 0x4b1;
        puVar1 = PTR_DAT_04bb2b70 + 0x10;
        puVar13[0x9b] = 0;
        puVar13[0x9c] = 0;
        puVar13[0x9d] = 0;
        puVar13[2] = puVar1;
        puVar13[3] = (undefined1 *)((long)puVar13 + 0x24);
        param_1[0xc] = puVar13;
        *puVar13 = *(undefined8 *)(*(long *)(param_2 + 2) + 0x380);
        *(undefined4 *)(param_1[0xc] + 8) = 7;
        *(undefined4 *)(param_1[0xc] + 0xc) = *param_2;
        *(void **)(param_1[0xc] + 0x4d8) = __dest;
        *(undefined8 *)(param_1[0xc] + 0x4e0) = *(undefined8 *)(param_2 + 6);
        lVar17 = param_1[0xc];
        (**(code **)(*(long *)(lVar17 + 0x10) + 0x18))((long *)(lVar17 + 0x10));
        lVar12 = *(long *)(lVar17 + 0x18);
        uVar4 = *(uint *)(lVar17 + 0x20);
        (**(code **)(*(long *)(param_2 + 8) + 0x18))(param_2 + 8);
        if (uVar4 != 0) {
          uVar14 = 0;
          lVar17 = 0x7fffffff;
          puVar18 = *(ushort **)(param_2 + 10);
          do {
            pbVar16 = (byte *)(lVar12 + (ulong)uVar14);
            if (lVar17 == 0) goto LAB_01ddd26c;
            uVar5 = *puVar18;
            if (uVar5 == 0) goto LAB_01ddd26c;
            bVar6 = (byte)uVar5;
            if (uVar5 < 0x80) {
              *pbVar16 = bVar6;
              iVar8 = 1;
            }
            else if (uVar5 < 0x800) {
              if (uVar4 <= uVar14 + 1) break;
              *pbVar16 = (byte)(uVar5 >> 6) | 0xc0;
              pbVar16[1] = bVar6 & 0x3f | 0x80;
              iVar8 = 2;
            }
            else {
              if (uVar4 <= uVar14 + 2) break;
              *pbVar16 = (byte)(uVar5 >> 0xc) | 0xe0;
              pbVar16[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
              pbVar16[2] = bVar6 & 0x3f | 0x80;
              iVar8 = 3;
            }
            uVar14 = iVar8 + uVar14;
            lVar17 = lVar17 + -1;
            puVar18 = puVar18 + 1;
          } while (uVar14 < uVar4);
          pbVar16 = (byte *)(lVar12 + (ulong)(uVar14 - 1));
LAB_01ddd26c:
          *pbVar16 = 0;
        }
      }
      else {
        *(undefined1 *)((long)puVar13 + 0x4cc) = 0;
        *(undefined4 *)((long)puVar13 + 4) = 7;
        *(undefined4 *)(puVar13 + 3) = 0x4b1;
        *(undefined1 *)((long)puVar13 + 0x1c) = 0;
        puVar1 = PTR_DAT_04bb2b70;
        puVar13[0x9a] = 0;
        puVar13[0x9b] = 0;
        puVar13[0x9c] = 0;
        puVar13[0x9d] = 0;
        puVar13[1] = puVar1 + 0x10;
        puVar13[2] = (undefined1 *)((long)puVar13 + 0x1c);
        param_1[0xb] = puVar13;
        *(undefined4 *)puVar13 = 6;
        *(undefined4 *)(param_1[0xb] + 4) = *param_2;
        *(void **)(param_1[0xb] + 0x4d0) = __dest;
        *(undefined8 *)(param_1[0xb] + 0x4d8) = *(undefined8 *)(param_2 + 6);
        lVar17 = param_1[0xb];
        (**(code **)(*(long *)(lVar17 + 8) + 0x18))((long *)(lVar17 + 8));
        lVar12 = *(long *)(lVar17 + 0x10);
        uVar4 = *(uint *)(lVar17 + 0x18);
        (**(code **)(*(long *)(param_2 + 8) + 0x18))(param_2 + 8);
        if (uVar4 != 0) {
          uVar14 = 0;
          lVar17 = 0x7fffffff;
          puVar18 = *(ushort **)(param_2 + 10);
          do {
            pbVar16 = (byte *)(lVar12 + (ulong)uVar14);
            if (lVar17 == 0) goto LAB_01ddd1a0;
            uVar5 = *puVar18;
            if (uVar5 == 0) goto LAB_01ddd1a0;
            bVar6 = (byte)uVar5;
            if (uVar5 < 0x80) {
              *pbVar16 = bVar6;
              iVar8 = 1;
            }
            else if (uVar5 < 0x800) {
              if (uVar4 <= uVar14 + 1) break;
              *pbVar16 = (byte)(uVar5 >> 6) | 0xc0;
              pbVar16[1] = bVar6 & 0x3f | 0x80;
              iVar8 = 2;
            }
            else {
              if (uVar4 <= uVar14 + 2) break;
              *pbVar16 = (byte)(uVar5 >> 0xc) | 0xe0;
              pbVar16[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
              pbVar16[2] = bVar6 & 0x3f | 0x80;
              iVar8 = 3;
            }
            uVar14 = iVar8 + uVar14;
            lVar17 = lVar17 + -1;
            puVar18 = puVar18 + 1;
          } while (uVar14 < uVar4);
          pbVar16 = (byte *)(lVar12 + (ulong)(uVar14 - 1));
LAB_01ddd1a0:
          *pbVar16 = 0;
        }
        lVar17 = *(long *)puVar7;
        if (lVar17 == 0) {
          plVar11 = malloc(0x40);
        }
        else {
          plVar11 = (long *)param_1[1];
          if (plVar11 == (long *)0x0) {
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar11 = (long *)(lVar17 + 8);
            if (lVar12 != 0) {
              plVar11 = (long *)(lVar12 + 0xa8);
            }
            plVar11 = (long *)*plVar11;
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
        }
        plVar11[7] = 0;
        *(undefined4 *)(plVar11 + 6) = 0;
        *(undefined4 *)(plVar11 + 1) = 6;
        plVar11[2] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        *plVar11 = (long)(PTR_DAT_04bb2b30 + 0x10);
        *(long **)(param_1[0xb] + 0x4e0) = plVar11;
        plVar11[2] = lVar21;
        *(undefined8 *)((long)plVar11 + 0x2c) = *(undefined8 *)(*(long *)(param_2 + 2) + 0x390);
        plVar11[7] = *(long *)(*(long *)(param_2 + 2) + 0x398);
        lVar17 = *(long *)(param_2 + 2);
        lVar12 = *(long *)(lVar17 + 0x3a0);
        lVar19 = *(long *)(lVar17 + 0x3a8);
        *(undefined4 *)(plVar11 + 5) = *(undefined4 *)(lVar17 + 0x3b0);
        plVar11[3] = lVar12;
        plVar11[4] = lVar19;
      }
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
        plVar11 = malloc(0xc0);
      }
      else {
        plVar11 = (long *)param_1[1];
        if (plVar11 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar17 + 8);
          if (lVar12 != 0) {
            plVar11 = (long *)(lVar12 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0xc0,8);
      }
      *(undefined1 *)((long)plVar11 + 99) = 0;
      uVar15 = 6;
      if (lVar21 == 0) {
        uVar15 = 7;
      }
      *(undefined4 *)(plVar11 + 1) = uVar15;
      *(undefined4 *)((long)plVar11 + 0xc) = 5;
      *(undefined4 *)(plVar11 + 4) = 0x40;
      *(undefined1 *)((long)plVar11 + 0x24) = 0;
      puVar7 = PTR_DAT_04bb2bc0;
      *(undefined4 *)(plVar11 + 0xf) = 0x40;
      *(undefined1 *)((long)plVar11 + 0xbb) = 0;
      plVar11[2] = (long)(puVar7 + 0x10);
      plVar11[3] = (long)plVar11 + 0x24;
      *(undefined1 *)((long)plVar11 + 0x7c) = 0;
      plVar11[0xd] = (long)(puVar7 + 0x10);
      plVar11[0xe] = (long)plVar11 + 0x7c;
      *plVar11 = (long)(PTR_DAT_04bb2b88 + 0x10);
      plVar3 = param_1 + 0xc;
      if (lVar21 != 0) {
        plVar3 = param_1 + 0xb;
      }
      *(long **)(*plVar3 + 0x4e8) = plVar11;
      lVar21 = *(long *)(param_2 + 2) + 4;
      if (*(char *)(*(long *)(param_2 + 2) + 0x5c) != '\0') {
        lVar21 = 0;
      }
      FUN_01ddd380(plVar11,lVar21);
      if ((param_3 & 1) == 0) {
        FUN_03ebb160(param_1 + 2,1);
        return 1;
      }
      FUN_01ddd784(param_1);
      return 1;
    }
  }
  else {
    uVar20 = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = uVar20;
  return uVar20;
}

