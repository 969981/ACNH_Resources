
undefined8 FUN_008a42e0(long param_1,int param_2,uint param_3,byte *param_4,byte param_5)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long *plVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_78 [4];
  int local_74;
  undefined8 local_70;
  uint local_68;
  byte local_64;
  undefined1 local_63;
  ulong local_38;
  
  puVar3 = PTR_DAT_04bb27d0;
  cVar2 = *(char *)(param_1 + 0x28);
  bVar14 = (byte)param_3;
  if ((cVar2 != -1) && (cVar2 <= param_2)) {
    return 0;
  }
  plVar13 = *(long **)PTR_DAT_04bb27d0;
  local_74 = param_2;
  if (((plVar13[2] != 0) && ((*(uint *)(plVar13 + 0x10) & 0xfffffffe) == 2)) &&
     (*(int *)(plVar13[2] + 0x3e4) != 1)) {
    local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
    local_70 = CONCAT26(local_70._6_2_,0xff0100000000);
    puVar11 = (undefined1 *)(param_1 + 0x54);
    *puVar11 = (char)param_2;
    *(byte *)(param_1 + 0x55) = bVar14;
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(byte *)(param_1 + 0x5c) = param_5 & 1;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x20);
    iVar7 = *(int *)(*(long *)(param_1 + 0x60) + 8);
    if (-1 < iVar7) {
      FUN_01db1df0(*plVar13 + 0x480,iVar7,&local_70,puVar11,0xc,0);
    }
    *puVar11 = 0xff;
    return 1;
  }
  bVar18 = *param_4;
  if (7 < bVar18) {
    lVar16 = *(long *)PTR_DAT_04bb39b0;
    if (lVar16 == 0) {
      bVar18 = *PTR_DAT_04bb32e0;
joined_r0x008a43cc:
      if (7 < bVar18) {
LAB_008a43d0:
        lVar16 = *plVar13;
        bVar18 = *(byte *)(lVar16 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar18 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
          if (7 < bVar18) {
            puVar1 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar16 + 0x471);
          }
        }
        bVar18 = *pbVar15;
        if ((7 < bVar18) && (bVar18 = *PTR_DAT_04bb5038, 7 < bVar18)) {
          return 0;
        }
      }
    }
    else {
      pbVar15 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar16 + 0x15c) != 0) {
        pbVar15 = (byte *)(lVar16 + 0x158);
      }
      bVar18 = *pbVar15;
      if (7 < bVar18) {
        if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar18 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto joined_r0x008a43cc;
        }
        goto LAB_008a43d0;
      }
    }
  }
  if (cVar2 == -1) {
LAB_008a44c8:
    if (*(int *)(param_1 + 0x78) == 0) goto LAB_008a4558;
  }
  else {
    FUN_008a3a50(param_1,8);
    plVar13 = *(long **)puVar3;
    if (*(char *)(param_1 + 0x28) == -1) goto LAB_008a44c8;
  }
  lVar16 = *plVar13;
  if (*(byte *)(lVar16 + 0x476) < 2) {
    *(undefined4 *)(param_1 + 0x78) = 0;
LAB_008a4558:
    *(byte *)(param_1 + 0x31) = bVar14;
    *(byte *)(param_1 + 0x34) = bVar18;
    *(char *)(param_1 + 0x28) = (char)local_74;
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x1a));
    *(ushort *)(param_1 + 0x32) =
         (-((ushort)(param_3 >> 7) & 1) & 0xc000 | (ushort)((param_3 & 0xff) << 6)) +
         (char)bVar14 * -4;
    *(byte *)(param_1 + 0x35) =
         *(byte *)(param_1 + 0x35) & 0xfa | (*(float *)(param_1 + 0x20) == 0.0) << 2 | param_5 & 1;
    fVar19 = *(float *)(param_1 + 0x20) + fVar19 / 30.0;
    if (fVar19 <= 1.0) {
      fVar19 = 1.0;
    }
    fVar21 = fVar19;
    if (1 < *(uint *)(plVar13 + 0x10)) {
      iVar7 = FUN_01df8c90();
      fVar20 = (float)iVar7 / 1000.0;
      fVar21 = fVar20 + fVar20;
      if (fVar20 + fVar20 <= fVar19) {
        fVar21 = fVar19 + fVar20 * 0.5;
      }
    }
    puVar4 = PTR_DAT_04bb32e8;
    uVar8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_38 = uVar8;
    if ((uVar8 & 0xffff) != 0) {
      fVar19 = 0.5;
      if (fVar21 < 0.0) {
        fVar19 = -0.5;
      }
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_70 = lVar16 + (int)(fVar21 + fVar19);
      uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    }
    *(ulong *)(param_1 + 0x29) = uVar8;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar1 = (uint *)(param_1 + 0x24);
    FUN_02507c6c(&local_70,7,1,0,0);
    puVar5 = PTR_DAT_04bb5038;
    uVar12 = (uint)(byte)local_70._0_1_;
    if ((byte)local_70._0_1_ < 8) {
      while( true ) {
        uVar8 = (ulong)uVar12;
        *puVar1 = *puVar1 | 1 << (ulong)(uVar12 & 0x1f);
        do {
          if (uVar8 == 7) goto LAB_008a4664;
          uVar8 = uVar8 + 1;
          uVar10 = FUN_02507924(&local_70,puVar5 + uVar8);
        } while ((uVar10 & 1) == 0);
        bVar14 = puVar5[uVar8];
        uVar12 = (uint)bVar14;
        if (7 < uVar12) break;
        local_70 = CONCAT71(local_70._1_7_,bVar14);
      }
    }
LAB_008a4664:
    local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
    local_70._0_6_ = 0xff0000000000;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x24);
    iVar7 = *(int *)(*(long *)(param_1 + 0x38) + 8);
    if (-1 < iVar7) {
      FUN_01db1df0(**(long **)puVar3 + 0x480,iVar7,&local_70,puVar1,0x14,0);
    }
    if ((*(byte *)(param_1 + 0x35) >> 2 & 1) == 0) {
      local_64 = 0;
      bVar14 = *(byte *)(param_1 + 0x34);
      local_68 = *(undefined4 *)(param_1 + 0x24);
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_70._0_5_ = CONCAT14(bVar14,(int)*(char *)(param_1 + 0x28));
      local_70 = CONCAT35(CONCAT21(local_70._6_2_,*(undefined1 *)(param_1 + 0x31)),
                          (undefined5)local_70);
      local_38 = *(ulong *)(param_1 + 0x29);
      iVar7 = FUN_00a8255c(&local_38,*(long *)puVar4 + 0x4060);
      iVar7 = iVar7 + (uint)*(ushort *)(param_1 + 0x1a) + -0x1e;
      local_70 = CONCAT26((ushort)iVar7 & ((ushort)(iVar7 >> 0x1f) ^ 0xffff),(undefined6)local_70);
      FUN_008a3cc4(param_1);
      *(undefined2 *)(param_1 + 0x1c) = 0x101;
      lVar16 = *(long *)(param_1 + 0x90);
      while (lVar16 != param_1 + 0x88) {
        lVar17 = *(long *)(lVar16 + 8);
        puVar9 = (undefined8 *)(*(long *)(lVar16 + 0x10) + 0x40);
        (**(code **)*puVar9)(puVar9,&local_70);
        lVar16 = lVar17;
      }
    }
    else {
      local_64 = *(byte *)(param_1 + 0x35) & 1;
      bVar14 = *(byte *)(param_1 + 0x34);
      *(undefined2 *)(param_1 + 0x1c) = 0x100;
      local_63 = 0;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_70._0_5_ = CONCAT14(bVar14,(int)*(char *)(param_1 + 0x28));
      local_70._0_6_ = CONCAT15(*(undefined1 *)(param_1 + 0x31),(undefined5)local_70);
      local_68 = *(undefined4 *)(param_1 + 0x24);
      lVar16 = *(long *)(param_1 + 0xb0);
      while (lVar16 != param_1 + 0xa8) {
        lVar17 = *(long *)(lVar16 + 8);
        puVar9 = (undefined8 *)(*(long *)(lVar16 + 0x10) + 0x40);
        (**(code **)*puVar9)(puVar9,&local_70);
        lVar16 = lVar17;
      }
    }
    return 1;
  }
  local_70._0_3_ = (uint3)bVar14 << 8;
  local_68 = CONCAT31(local_68._1_3_,param_5) & 0xffffff01;
  local_70 = CONCAT71(local_70._1_7_,(char)local_74);
  local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x20),(undefined4)local_70);
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if (lVar17 == 0) {
    bVar14 = *PTR_DAT_04bb32e0;
LAB_008a4824:
    if (7 < bVar14) {
LAB_008a482c:
      bVar14 = *(byte *)(lVar16 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar14 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
        if (7 < bVar14) {
          puVar1 = (uint *)(lVar16 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar15 = (byte *)(lVar16 + 0x471);
        }
      }
      bVar14 = *pbVar15;
      bVar6 = 7 < bVar14;
      if (bVar6) {
        bVar14 = 0xff;
      }
      local_38 = CONCAT71(local_38._1_7_,bVar14);
      if (!bVar6) goto LAB_008a4898;
      bVar14 = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar17 + 0x158);
    }
    bVar14 = *pbVar15;
    if (7 < bVar14) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar14 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008a4824;
      }
      goto LAB_008a482c;
    }
  }
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar14);
LAB_008a4898:
  puVar11 = (undefined1 *)FUN_02582a24(&local_38,1);
  local_78[0] = *puVar11;
  FUN_008a2fc8(param_1,local_78,&local_70,0xc);
  return 1;
}

