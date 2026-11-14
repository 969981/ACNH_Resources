
undefined1 FUN_01dde250(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  void *__dest;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  undefined1 uVar18;
  long lVar19;
  undefined *local_60;
  char *pcStack_58;
  byte local_34 [4];
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) ||
     (*(long *)(param_2 + 2) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01dde2a4:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar9 = FUN_02640eb0();
  puVar5 = PTR_DAT_04bb2020;
  if ((uVar9 & 1) == 0) goto LAB_01dde2a4;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "IllegalReportCount";
  iVar7 = FUN_0274f6e0(&local_60);
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_01dde37c:
    if (7 < *pbVar14) {
LAB_01dde388:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar16 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar16 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar14 = (byte *)(lVar16 + 0x471);
          }
        }
        local_34[0] = *pbVar14;
        if (local_34[0] < 8) goto LAB_01dde408;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dde37c;
      }
      goto LAB_01dde388;
    }
  }
  local_34[0] = *pbVar14;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01dde408:
  local_60 = puVar5 + 0x10;
  pcStack_58 = "IllegalReportCount";
  iVar8 = FUN_0274bce0(local_34,&local_60);
  if (iVar8 < iVar7) {
    uVar18 = 0;
    if ((*(long *)(param_2 + 4) != 0) && (*(long *)(param_2 + 6) != 0)) {
      __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                                 ((long *)*param_1,*(long *)(param_2 + 6),0xfffffff8);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,*(void **)(param_2 + 4),*(size_t *)(param_2 + 6));
      puVar5 = PTR_DAT_04bb2698;
      lVar16 = *(long *)PTR_DAT_04bb2698;
      if (lVar16 == 0) {
        puVar12 = malloc(0x4f0);
      }
      else {
        plVar10 = (long *)param_1[1];
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar16 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
        }
        puVar12 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x4f0,8);
      }
      *(undefined1 *)(puVar12 + 0x133) = 0;
      puVar12[1] = 7;
      puVar12[6] = 0x4b1;
      *(undefined1 *)(puVar12 + 7) = 0;
      puVar6 = PTR_DAT_04bb2b70;
      *(undefined8 *)(puVar12 + 0x134) = 0;
      *(undefined8 *)(puVar12 + 0x136) = 0;
      *(undefined8 *)(puVar12 + 0x138) = 0;
      *(undefined8 *)(puVar12 + 0x13a) = 0;
      *(undefined **)(puVar12 + 2) = puVar6 + 0x10;
      *(undefined4 **)(puVar12 + 4) = puVar12 + 7;
      param_1[0xb] = puVar12;
      *puVar12 = 3;
      *(undefined4 *)(param_1[0xb] + 4) = *param_2;
      *(void **)(param_1[0xb] + 0x4d0) = __dest;
      *(undefined8 *)(param_1[0xb] + 0x4d8) = *(undefined8 *)(param_2 + 6);
      lVar16 = param_1[0xb];
      (**(code **)(*(long *)(lVar16 + 8) + 0x18))((long *)(lVar16 + 8));
      lVar11 = *(long *)(lVar16 + 0x10);
      uVar2 = *(uint *)(lVar16 + 0x18);
      (**(code **)(*(long *)(param_2 + 8) + 0x18))(param_2 + 8);
      if (uVar2 != 0) {
        uVar13 = 0;
        lVar16 = 0x7fffffff;
        puVar17 = *(ushort **)(param_2 + 10);
        do {
          pbVar14 = (byte *)(lVar11 + (ulong)uVar13);
          if (lVar16 == 0) goto LAB_01dde61c;
          uVar3 = *puVar17;
          if (uVar3 == 0) goto LAB_01dde61c;
          bVar4 = (byte)uVar3;
          if (uVar3 < 0x80) {
            *pbVar14 = bVar4;
            iVar7 = 1;
          }
          else if (uVar3 < 0x800) {
            if (uVar2 <= uVar13 + 1) break;
            *pbVar14 = (byte)(uVar3 >> 6) | 0xc0;
            pbVar14[1] = bVar4 & 0x3f | 0x80;
            iVar7 = 2;
          }
          else {
            if (uVar2 <= uVar13 + 2) break;
            *pbVar14 = (byte)(uVar3 >> 0xc) | 0xe0;
            pbVar14[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            pbVar14[2] = bVar4 & 0x3f | 0x80;
            iVar7 = 3;
          }
          uVar13 = iVar7 + uVar13;
          lVar16 = lVar16 + -1;
          puVar17 = puVar17 + 1;
        } while (uVar13 < uVar2);
        pbVar14 = (byte *)(lVar11 + (ulong)(uVar13 - 1));
LAB_01dde61c:
        *pbVar14 = 0;
      }
      lVar16 = *(long *)puVar5;
      if (lVar16 == 0) {
        plVar10 = malloc(0x40);
      }
      else {
        plVar10 = (long *)param_1[1];
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar16 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x40,8);
      }
      puVar6 = PTR_DAT_04bb2b38;
      plVar10[7] = 0;
      plVar10[2] = 0;
      plVar10[3] = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      *(undefined4 *)(plVar10 + 6) = 0;
      *(undefined4 *)(plVar10 + 1) = 3;
      *plVar10 = (long)(puVar6 + 0x10);
      lVar19 = *(long *)puVar5;
      *(long **)(param_1[0xb] + 0x4e0) = plVar10;
      lVar15 = *(long *)(param_2 + 2);
      plVar10[2] = *(long *)(lVar15 + 0x230d8);
      *(undefined8 *)((long)plVar10 + 0x2c) = *(undefined8 *)(*(long *)(param_2 + 2) + 0x23108);
      plVar10[7] = *(long *)(lVar15 + 0x230f8);
      lVar16 = *(long *)(lVar15 + 0x230e0);
      lVar11 = *(long *)(lVar15 + 0x230e8);
      *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(lVar15 + 0x230f0);
      plVar10[3] = lVar16;
      plVar10[4] = lVar11;
      if (lVar19 == 0) {
        plVar10 = malloc(0xc0);
      }
      else {
        plVar10 = (long *)param_1[1];
        if (plVar10 == (long *)0x0) {
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar19 + 8);
          if (lVar16 != 0) {
            plVar10 = (long *)(lVar16 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xc0,8);
      }
      *(undefined4 *)(plVar10 + 4) = 0x40;
      *(undefined1 *)((long)plVar10 + 0x24) = 0;
      puVar6 = PTR_DAT_04bb2bc0;
      *(undefined1 *)((long)plVar10 + 0x7c) = 0;
      *(undefined1 *)((long)plVar10 + 99) = 0;
      *(undefined4 *)(plVar10 + 0xf) = 0x40;
      *(undefined1 *)((long)plVar10 + 0xbb) = 0;
      plVar10[2] = (long)(puVar6 + 0x10);
      plVar10[3] = (long)plVar10 + 0x24;
      puVar5 = PTR_DAT_04bb2ba0;
      plVar10[0xd] = (long)(puVar6 + 0x10);
      plVar10[0xe] = (long)plVar10 + 0x7c;
      *plVar10 = (long)(puVar5 + 0x10);
      plVar10[1] = 0x200000003;
      *(long **)(param_1[0xb] + 0x4e8) = plVar10;
      FUN_01ddd380(plVar10,*(long *)(param_2 + 2) + 0x23020);
      if ((param_3 & 1) == 0) {
        FUN_03ebb160(param_1 + 2,1);
        return 1;
      }
      FUN_01ddd784(param_1);
      return 1;
    }
  }
  else {
    uVar18 = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = uVar18;
  return uVar18;
}

