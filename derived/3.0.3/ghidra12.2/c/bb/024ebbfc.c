
void FUN_024ebbfc(long param_1)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 *puVar12;
  byte bVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  undefined8 local_b0;
  char *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  short local_80;
  undefined2 local_7e;
  undefined1 auStack_78 [16];
  int local_68;
  int iStack_64;
  int local_58;
  int iStack_54;
  
  puVar5 = PTR_DAT_04bb6298;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x1912);
  if (*(uint *)(param_1 + 0x1c04) < 0x168) {
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
      pbVar3 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar3 = (byte *)(lVar9 + 0x158);
      }
      bVar11 = *(byte *)(param_1 + 0x1ee8);
      bVar13 = *pbVar3;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      if (bVar13 != bVar11) {
        local_b0._4_4_ = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
        local_b0._0_4_ = (float)*(int *)(param_1 + 0x190c) * 0.001;
        local_a8 = (char *)CONCAT44(local_a8._4_4_,(float)*piVar2 * 0.001);
        lVar9 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0'))
        {
          fVar16 = -491.0;
          fVar14 = (float)*piVar2 * 0.001;
        }
        else {
          fVar16 = (float)FUN_0093a950(lVar9 + 0x28,&local_b0,0);
          fVar16 = fVar16 + 9.0;
          fVar14 = local_a8._0_4_;
        }
        puVar12 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar12 = *(undefined8 **)(param_1 + 0x4c8);
        }
        *(float *)(puVar12 + 0x5d) = (float)local_b0;
        *(undefined1 *)((long)puVar12 + 0x2e4) = 1;
        *(float *)((long)puVar12 + 0x2ec) = fVar16;
        *(float *)(puVar12 + 0x5e) = fVar14;
        *(undefined2 *)((long)puVar12 + 0x2e5) = 0x101;
        *(undefined2 *)(param_1 + 0x1916) = 0;
        iVar18 = *piVar2;
        *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
        fVar14 = (float)*(int *)(param_1 + 0xd40) * 5.0 +
                 (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0;
        fVar16 = (float)*(int *)(param_1 + 0xd44) * 5.0 +
                 (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0;
        *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
        iVar8 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        *(short *)(param_1 + 0x1928) = (short)iVar8;
        goto LAB_024ebd38;
      }
    }
    uVar6 = *(ushort *)PTR_DAT_04bb6298;
    uVar10 = (ulong)(short)uVar6;
    if (uVar10 == 0xffffffffffffffff) {
LAB_024ec040:
      FUN_024e6504(param_1);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < (uint)(int)(short)uVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
      if (0xff < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x20);
        puVar4 = PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8;
        if (0xff < uVar6) {
          puVar4 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_024ec040;
      }
    }
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = "NpcVisitPlayerHouse";
    iVar8 = FUN_02743000(&local_b0);
    if (iVar8 == 0) {
      if (*(int *)(param_1 + 0x1c04) == 0) {
        *(undefined4 *)(param_1 + 0xd64) = 0;
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
        *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xffffffdf;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
      puVar1 = (uint *)(param_1 + 0xcf0);
      if ((*puVar1 >> 5 & 1) != 0) goto LAB_024ec34c;
      sVar7 = *(short *)puVar5;
      if (sVar7 == -1) {
LAB_024ec1dc:
        FUN_024e6830(param_1);
      }
      else {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x20);
        puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
        if (0xff < (uint)(int)sVar7) {
          puVar5 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar5 + 4) & 1) == 0) goto LAB_024ec1dc;
        FUN_024e8750(param_1);
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
      if ((*puVar1 >> 5 & 1) != 0) {
        local_b0 = (undefined *)0x35ff;
        FUN_0277d4ac(&local_b0);
        FUN_01a50900(auStack_78,&local_b0,param_1 + 0xd68);
        local_88 = *(int *)(param_1 + 0xd88);
        if (local_68 <= *(int *)(param_1 + 0xd88)) {
          local_88 = local_68;
        }
        iStack_84 = *(int *)(param_1 + 0xd8c);
        if (iStack_64 <= *(int *)(param_1 + 0xd8c)) {
          iStack_84 = iStack_64;
        }
        iVar8 = *(int *)(param_1 + 0xd98);
        if (*(int *)(param_1 + 0xd98) <= local_58) {
          iVar8 = local_58;
        }
        iVar18 = *(int *)(param_1 + 0xd9c);
        if (*(int *)(param_1 + 0xd9c) <= iStack_54) {
          iVar18 = iStack_54;
        }
        local_98 = local_88;
        if (iVar8 <= local_88) {
          local_98 = iVar8;
        }
        if (local_88 <= iVar8) {
          local_88 = iVar8;
        }
        iStack_94 = iStack_84;
        if (iVar18 <= iStack_84) {
          iStack_94 = iVar18;
        }
        if (iStack_84 <= iVar18) {
          iStack_84 = iVar18;
        }
        lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x740;
        if (7 < *(byte *)(param_1 + 0x1ee8)) {
          lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        *(undefined8 *)(lVar9 + 0x4e8) = 0x100000000;
        *(undefined4 *)(lVar9 + 0x588) = 0;
        local_a8 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_a0 = PTR_DAT_04bb2010 + 0x10;
        bVar13 = *(byte *)(param_1 + 0x1ee8);
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar13);
        if (DAT_055c1b60 != &DAT_055c1b58) {
          local_80 = 0;
          puVar12 = DAT_055c1b60;
          do {
            if (*(int *)(puVar12 + -1) == *(int *)(param_1 + 0xd60)) goto LAB_024ec328;
            puVar12 = (undefined8 *)puVar12[1];
            local_80 = local_80 + 1;
          } while (puVar12 != &DAT_055c1b58);
        }
        local_80 = -1;
LAB_024ec328:
        local_7e = 0x101;
        local_90 = puStack_a0;
        uVar10 = FUN_02300fa0(lVar9 + 0x590,&local_b0);
        if ((uVar10 & 1) != 0) goto LAB_024ec34c;
      }
      FUN_024e6504(param_1);
LAB_024ec34c:
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
      if ((*puVar1 >> 5 & 1) == 0) {
        return;
      }
      lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined4 *)(lVar9 + 0x4ec) = 2;
      iVar8 = FUN_01392d64(lVar9 + 0x590);
      *(int *)(lVar9 + 0x4e8) = iVar8;
      *(int *)(lVar9 + 0x588) = *(int *)(lVar9 + 0x588) + 1;
      if (iVar8 == 3) {
        return;
      }
      if (iVar8 != 1) {
        FUN_024e6504(param_1);
        return;
      }
      local_a8 = (char *)((ulong)local_a8 & 0xffffffff00000000);
      local_b0 = (undefined *)0x0;
      FUN_012e20a8(param_1 + 0xd78,&local_b0);
      iVar15 = *(int *)(param_1 + 0xd70);
      iVar17 = *(int *)(param_1 + 0xd74);
      iVar18 = FUN_016e7038();
      *(undefined2 *)(param_1 + 0x1928) = 0;
      *(undefined1 *)(param_1 + 0x1917) = 1;
      iVar8 = (int)(local_b0._4_4_ * 4.0);
      *(undefined2 *)(param_1 + 0x1922) = *(undefined2 *)(param_1 + 0xda2);
      *(bool *)(param_1 + 0x1916) = iVar18 != *(int *)(param_1 + 0xd60);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      *(int *)(param_1 + 0x1924) = (int)(((float)iVar15 * 5.0 + 5.0) * 999.99994);
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x191c) = (short)iVar8;
      *(int *)(param_1 + 0x1918) = (int)((float)local_b0 * 999.99994);
      *(int *)(param_1 + 0x191e) = (int)(local_a8._0_4_ * 999.99994);
      *(int *)(param_1 + 0x192a) = (int)(((float)iVar17 * 5.0 + 5.0) * 999.99994);
      FUN_024e6710(param_1,(undefined8 *)(param_1 + 0x1900));
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x1916) = 0;
  iVar18 = *piVar2;
  fVar14 = (float)*(int *)(param_1 + 0xd40) * 5.0 + (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0;
  fVar16 = (float)*(int *)(param_1 + 0xd44) * 5.0 + (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0;
  *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
  iVar8 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
  if (0x7ffe < iVar8) {
    iVar8 = 0x7fff;
  }
  if (iVar8 < -0x7fff) {
    iVar8 = -0x8000;
  }
  *(short *)(param_1 + 0x1928) = (short)iVar8;
  *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
LAB_024ebd38:
  *(int *)(param_1 + 0x191e) = (int)(fVar16 * 0.5 * 999.99994);
  *(int *)(param_1 + 0x1918) = (int)(fVar14 * 0.5 * 999.99994);
  *(int *)(param_1 + 0x192a) = (int)((float)iVar18 * 0.001 * 999.99994);
  *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
  *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x19ae) = 0;
  *(undefined8 *)(param_1 + 0x19b6) = 0;
  *(undefined8 *)(param_1 + 0x19be) = 0;
  *(undefined8 *)(param_1 + 0x19c6) = 0;
  *(undefined8 *)(param_1 + 0x19ce) = 0;
  *(undefined4 *)(param_1 + 0x19d6) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x129);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar9 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar9 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar9,0x129);
  return;
}

