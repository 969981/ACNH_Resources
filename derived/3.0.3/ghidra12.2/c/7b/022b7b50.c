
bool FUN_022b7b50(undefined4 param_1,long param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 *param_5,short param_6,long param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  int iVar22;
  char cVar23;
  short sVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong local_148;
  undefined *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  int local_108;
  int iStack_104;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined1 local_ea;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined2 local_90;
  undefined2 local_8e;
  short local_88;
  undefined1 local_86;
  byte local_85;
  undefined1 local_83;
  byte local_7f;
  undefined1 local_7e;
  undefined4 local_7c;
  
  local_86 = 0x1b;
  local_85 = *(byte *)(param_2 + 0x10);
  local_7c = 0;
  local_83 = 0;
  if (7 < local_85) {
    local_85 = 0xff;
  }
  bVar12 = (param_8 & 1) == 0;
  local_98 = *param_5;
  uVar20 = 0xfffffffc;
  if (bVar12) {
    uVar20 = 0;
  }
  puVar5 = (undefined4 *)&DAT_04057a80;
  if (bVar12) {
    puVar5 = &DAT_04058640;
  }
  local_9c = param_4;
  local_88 = param_6;
  local_7e = param_3;
  if (((DAT_0547a4a8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_0547a4a8), iVar15 != 0)) {
    DAT_0547a4a0 = 0;
    __cxa_guard_release(&DAT_0547a4a8);
  }
  if (((DAT_0547a4b8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_0547a4b8), iVar15 != 0)) {
    DAT_0547a4b0 = 0;
    __cxa_guard_release(&DAT_0547a4b8);
  }
  puVar10 = PTR_DAT_04bb6268;
  DAT_0547a4a0 = 0;
  DAT_0547a4b0 = 0;
  sVar24 = *(short *)PTR_DAT_04bb6298;
  if (sVar24 != -1) {
    local_120 = (undefined *)CONCAT44(local_120._4_4_,0x11);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar24 * 8);
    if (0xff < (uint)(int)sVar24) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x11 & 1) != 0) {
      local_148 = 0;
      bVar12 = true;
      goto LAB_022b7d58;
    }
  }
  bVar12 = DAT_055c1b60 == &DAT_055c1b58;
  puVar17 = DAT_055c1b60 + -8;
  if ((param_6 != 0) && (puVar17 != &DAT_055c1b18)) {
    puVar17 = DAT_055c1b60;
    sVar24 = param_6;
    do {
      puVar17 = (undefined8 *)puVar17[1];
      sVar24 = sVar24 + -1;
      bVar12 = puVar17 == &DAT_055c1b58;
    } while (!bVar12 && sVar24 != 0);
    puVar17 = puVar17 + -8;
  }
  puVar21 = &DAT_055c04a0;
  if (!bVar12) {
    puVar21 = puVar17;
  }
  local_148 = 0;
  do {
    uVar25 = (uint)local_148;
    piVar7 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + local_148 * 4);
    if (0x38 < uVar25) {
      piVar7 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar7 == *(int *)(puVar21 + 7)) goto LAB_022b7d4c;
    uVar26 = 0x39;
    if ((int)uVar25 < 0x39) {
      uVar26 = uVar25 + 1;
    }
    local_148 = (ulong)uVar26;
  } while (uVar26 != 0x39);
  local_148 = 0;
LAB_022b7d4c:
  bVar12 = false;
LAB_022b7d58:
  puVar17 = DAT_055c1b60 + -8;
  if (puVar17 != &DAT_055c1b18) {
    sVar24 = 0;
    puVar21 = DAT_055c1b60;
    do {
      if (*(int *)(puVar17 + 7) == 0x6622bd46) goto LAB_022b7d98;
      puVar21 = (undefined8 *)puVar21[1];
      sVar24 = sVar24 + 1;
      puVar17 = puVar21 + -8;
    } while (puVar21 != &DAT_055c1b58);
  }
  sVar24 = -1;
LAB_022b7d98:
  uVar27 = 0;
  bVar11 = true;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + local_148 * 4);
  if (0x38 < (uint)local_148) {
    puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    iVar9 = puVar5[uVar27];
    iVar22 = (&DAT_040584c0)[uVar27];
    iVar15 = iVar9 + *(int *)(param_7 + 8);
    iVar4 = iVar22 + *(int *)(param_7 + 0xc);
    local_b0 = puVar1;
    local_a8 = iVar15;
    iStack_a4 = iVar4;
    uVar16 = FUN_022aa8c0(param_1,&local_b0,sVar24 == param_6);
    if ((uVar16 & 1) != 0) {
      if (bVar12) {
        local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
        lVar19 = *(long *)PTR_DAT_04bb2720;
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x330) == 0)) {
          puVar17 = &DAT_055c04a0;
        }
        else {
          puVar17 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar14 = FUN_006bd550(*puVar17,0);
          puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar17 = &DAT_055c04a0;
          }
        }
        local_118 = (undefined *)CONCAT44(*(undefined4 *)(puVar17 + 7),(undefined4)local_118);
        uVar13 = FUN_017baf44();
        ppuVar18 = &local_c0;
        uVar16 = CONCAT71(local_110._1_7_,uVar13);
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = iVar15;
        iStack_b4 = iVar4;
        puVar3 = puVar10;
      }
      else {
        local_118 = (undefined *)CONCAT44(*puVar8,(uint)local_148);
        uVar13 = FUN_017baf44();
        ppuVar18 = &local_d0;
        uVar16 = CONCAT71(local_110._1_7_,uVar13);
        local_d0 = PTR_DAT_04bb2010 + 0x10;
        local_c8 = iVar15;
        iStack_c4 = iVar4;
        puVar3 = PTR_DAT_04bb6268;
      }
      local_120 = puVar3 + 0x10;
      local_110 = (undefined *)(uVar16 & 0xffffffffffffff01);
      uVar16 = FUN_022aa4c0(&local_120,ppuVar18,iVar9,iVar22,uVar20);
      if ((uVar16 & 1) != 0) {
        iVar22 = (int)(char)iVar22;
        local_90 = (undefined2)*(undefined4 *)(param_7 + 8);
        local_8e = (undefined2)*(undefined4 *)(param_7 + 0xc);
        local_f0 = 0xff00;
        cVar23 = (char)iVar9;
        local_e0 = 0;
        local_120 = (undefined *)CONCAT62(local_120._2_6_,param_6);
        if (cVar23 < -7) {
          cVar23 = -8;
        }
        if ('\x06' < cVar23) {
          cVar23 = '\a';
        }
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        local_ee = 0;
        local_ea = 0;
        local_e8 = 0xffffffffffffffff;
        if (iVar22 < -7) {
          iVar22 = -8;
        }
        local_dc = 0x41200000;
        if (6 < iVar22) {
          iVar22 = 7;
        }
        iStack_f4 = iVar4 + 1;
        local_7f = (cVar23 + 8U | (byte)(iVar22 << 4)) ^ 0x80;
        local_d8 = 0;
        local_d4 = 0;
        local_d3 = 0xff;
        local_f8 = iVar15 + 1;
        local_118 = puVar2;
        local_110 = puVar3;
        local_108 = iVar15;
        iStack_104 = iVar4;
        local_100 = puVar3;
        uVar16 = FUN_022ab010(param_2,&local_120,&local_9c);
        if ((uVar16 & 1) != 0) {
          return bVar11;
        }
        local_128 = *(undefined4 *)(param_7 + 8);
        uStack_124 = *(undefined4 *)(param_7 + 0xc);
        local_130 = puVar3;
        FUN_022ab224(param_2,local_86,param_5,&local_130,0);
      }
    }
    bVar11 = uVar27 < 7;
    uVar27 = uVar27 + 1;
    if (uVar27 == 8) {
      return bVar11;
    }
  } while( true );
}

