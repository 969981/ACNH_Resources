
undefined8 FUN_00a7ad70(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar8 = PTR_DAT_04bb27d0;
  puVar7 = PTR_DAT_04bb27c0;
  if (*(short *)PTR_DAT_04bb6298 != (short)param_1[2]) {
    return 2;
  }
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar15 + 0x48);
    uVar16 = (long)(char)bVar6 & 0xffffffff;
    pbVar2 = pbVar1 + uVar16 * 0x80;
    if (7 < bVar6) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar15 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar3 = lVar15 + uVar16 * 0xc;
      if (0xb < bVar6) {
        lVar3 = lVar15;
      }
      if (*(char *)(lVar3 + 10) == '\0') {
        return 1;
      }
    }
  }
  if (-1 < (int)*(uint *)PTR_DAT_04bb6260) {
    uVar16 = 0;
    puVar17 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar4 = puVar17;
      if (999 < uVar16) {
        puVar4 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar4 != 0) && (*(long *)(puVar4 + 2) == *param_1)) {
        if ((uint)uVar16 != 0xffffffff) {
          if (999 < (uint)uVar16) {
            puVar17 = (uint *)PTR_DAT_04bb6258;
          }
          uVar13 = *puVar17;
          goto LAB_00a7ae74;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      puVar17 = puVar17 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar16);
  }
  uVar13 = 0;
LAB_00a7ae74:
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    uVar13 = 0;
  }
  else {
    if ((((uVar13 == 0) ||
         (plVar18 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                              (ulong)(uVar13 >> 0x14) * 8), plVar18 == (long *)0x0)) ||
        ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar13)) {
      plVar18 = (long *)0x0;
    }
    if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar15 = *(long *)puVar7;
      iVar9 = (**(code **)(*plVar10 + 0x60))();
      if (iVar9 < 0x11) {
        uVar12 = 1;
        uVar13 = 1;
      }
      else {
        uVar13 = *(uint *)(lVar15 + 0x5e8);
        if (4 < uVar13) goto LAB_00a7af30;
        uVar12 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
        uVar13 = (uint)(0x101000100 >> (((ulong)uVar13 & 7) << 3)) & 1;
      }
    }
    else {
LAB_00a7af30:
      uVar12 = 0;
      uVar13 = 0;
    }
    if (plVar18 != (long *)0x0) {
      uVar13 = uVar12 ^ 1;
      uVar14 = 1;
      if ((int)plVar18[0x2a] != 1) {
        uVar13 = 1;
      }
      if ((uVar13 == 0) && ((*(uint *)(plVar18 + 0x49) >> 4 & 1) != 0)) {
        cVar5 = *(char *)((long)param_1 + 0x12);
        if (cVar5 == '\x06') {
          *(undefined4 *)(plVar18 + 0x50) = 0x14;
          lVar15 = *plVar18;
          uVar11 = 0xd;
        }
        else if (cVar5 == '\x04') {
          lVar15 = *plVar18;
          uVar11 = 0xb;
        }
        else {
          if (cVar5 != '\x03') {
            return 0;
          }
          lVar15 = *plVar18;
          uVar11 = 10;
        }
        (**(code **)(lVar15 + 0x150))(plVar18,uVar11,PTR_DAT_04bb32e0,1);
        return 0;
      }
      goto LAB_00a7afa0;
    }
  }
  uVar14 = 0;
  uVar12 = (uint)(uVar13 != 0);
LAB_00a7afa0:
  if ((uVar12 & uVar14) != 0) {
    return 3;
  }
  if (*(char *)((long)param_1 + 0x12) != '\x03') {
    return 3;
  }
  lVar15 = **(long **)puVar8;
  bVar6 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar1 = (byte *)(lVar15 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar6)) {
      DAT_04da5788 = *param_1;
      DAT_04da5790 = param_1[1];
      DAT_04da5798 = (undefined2)param_1[2];
      local_38 = 0;
      local_32 = 0;
      DAT_04da579a = 2;
      local_34 = 0xff01;
      if (DAT_04da5760 < 0) {
        DAT_04da579a = 2;
        return 0;
      }
      FUN_01db1df0(**(long **)puVar8 + 0x480,DAT_04da5760,&local_38,&DAT_04da5788,0x18,0);
      return 0;
    }
  }
  FUN_00a7b0b4(3,param_1);
  return 0;
}

