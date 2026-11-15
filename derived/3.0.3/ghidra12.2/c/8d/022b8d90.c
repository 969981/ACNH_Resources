
bool FUN_022b8d90(undefined4 param_1,long param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 *param_5,short param_6,long param_7,ulong param_8,uint param_9,
                 byte param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  int iVar25;
  char cVar26;
  uint uVar27;
  short sVar28;
  uint uVar29;
  ulong local_150;
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
  undefined1 local_81;
  byte local_7f;
  undefined1 local_7e;
  undefined4 local_7c;
  
  local_85 = *(byte *)(param_2 + 0x10);
  local_98 = *param_5;
  local_86 = 0x19;
  if ((param_9 & 1) != 0) {
    local_86 = 0x1a;
  }
  local_7c = 0;
  uVar23 = -(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2;
  if (7 < local_85) {
    local_85 = 0xff;
  }
  local_83 = 0;
  iVar10 = *(int *)(&DAT_0417a29c + uVar23);
  iVar11 = *(int *)(&DAT_0417a2bc + uVar23);
  iVar8 = *(int *)(&DAT_04058940 + uVar23);
  iVar9 = *(int *)(&DAT_040584e0 + uVar23);
  local_81 = 0x40;
  if ((param_10 & 1) == 0) {
    local_81 = 0;
  }
  local_9c = param_4;
  local_88 = param_6;
  local_7e = param_3;
  if (((DAT_0547a4a8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0547a4a8), iVar18 != 0)) {
    DAT_0547a4a0 = 0;
    __cxa_guard_release(&DAT_0547a4a8);
  }
  if (((DAT_0547a4b8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0547a4b8), iVar18 != 0)) {
    DAT_0547a4b0 = 0;
    __cxa_guard_release(&DAT_0547a4b8);
  }
  puVar13 = PTR_DAT_04bb6268;
  DAT_0547a4a0 = 0;
  DAT_0547a4b0 = 0;
  sVar28 = *(short *)PTR_DAT_04bb6298;
  if (sVar28 != -1) {
    local_120 = (undefined *)CONCAT44(local_120._4_4_,0x11);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar28 * 8);
    if (0xff < (uint)(int)sVar28) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 0x11 & 1) != 0) {
      local_150 = 0;
      bVar15 = true;
      goto LAB_022b8fc8;
    }
  }
  bVar15 = DAT_055c1b60 == &DAT_055c1b58;
  puVar20 = DAT_055c1b60 + -8;
  if ((param_6 != 0) && (puVar20 != &DAT_055c1b18)) {
    puVar20 = DAT_055c1b60;
    sVar28 = param_6;
    do {
      puVar20 = (undefined8 *)puVar20[1];
      sVar28 = sVar28 + -1;
      bVar15 = puVar20 == &DAT_055c1b58;
    } while (!bVar15 && sVar28 != 0);
    puVar20 = puVar20 + -8;
  }
  puVar24 = &DAT_055c04a0;
  if (!bVar15) {
    puVar24 = puVar20;
  }
  local_150 = 0;
  do {
    uVar27 = (uint)local_150;
    piVar6 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + local_150 * 4);
    if (0x38 < uVar27) {
      piVar6 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar6 == *(int *)(puVar24 + 7)) goto LAB_022b8fbc;
    uVar29 = 0x39;
    if ((int)uVar27 < 0x39) {
      uVar29 = uVar27 + 1;
    }
    local_150 = (ulong)uVar29;
  } while (uVar29 != 0x39);
  local_150 = 0;
LAB_022b8fbc:
  bVar15 = false;
LAB_022b8fc8:
  puVar20 = DAT_055c1b60 + -8;
  if (puVar20 != &DAT_055c1b18) {
    sVar28 = 0;
    puVar24 = DAT_055c1b60;
    do {
      if (*(int *)(puVar20 + 7) == 0x6622bd46) goto LAB_022b9014;
      puVar24 = (undefined8 *)puVar24[1];
      sVar28 = sVar28 + 1;
      puVar20 = puVar24 + -8;
    } while (puVar24 != &DAT_055c1b58);
  }
  sVar28 = -1;
LAB_022b9014:
  uVar23 = 0;
  bVar14 = true;
  puVar7 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + local_150 * 4);
  if (0x38 < (uint)local_150) {
    puVar7 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    iVar12 = *(int *)(&DAT_0417a29c + uVar23 * 4 + (long)iVar10) * iVar8;
    iVar18 = iVar12 + *(int *)(param_7 + 8);
    iVar25 = *(int *)(&DAT_0417a2bc + uVar23 * 4 + (long)iVar11) * iVar9;
    iVar4 = iVar25 + *(int *)(param_7 + 0xc);
    local_b0 = puVar1;
    local_a8 = iVar18;
    iStack_a4 = iVar4;
    uVar19 = FUN_022aa8c0(param_1,&local_b0,sVar28 == param_6);
    if ((uVar19 & 1) != 0) {
      if (bVar15) {
        local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
        lVar22 = *(long *)PTR_DAT_04bb2720;
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x330) == 0)) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
          iVar17 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar17 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
        local_118 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_118);
        uVar16 = FUN_017baf44();
        ppuVar21 = &local_c0;
        uVar19 = CONCAT71(local_110._1_7_,uVar16);
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = iVar18;
        iStack_b4 = iVar4;
        puVar3 = puVar13;
      }
      else {
        local_118 = (undefined *)CONCAT44(*puVar7,(uint)local_150);
        uVar16 = FUN_017baf44();
        ppuVar21 = &local_d0;
        uVar19 = CONCAT71(local_110._1_7_,uVar16);
        local_d0 = PTR_DAT_04bb2010 + 0x10;
        local_c8 = iVar18;
        iStack_c4 = iVar4;
        puVar3 = PTR_DAT_04bb6268;
      }
      local_120 = puVar3 + 0x10;
      local_110 = (undefined *)(uVar19 & 0xffffffffffffff01);
      uVar19 = FUN_022aa4c0(&local_120,ppuVar21,iVar12,iVar25,0xfffffffe);
      if ((uVar19 & 1) != 0) {
        iVar25 = (int)(char)iVar25;
        local_90 = (undefined2)*(undefined4 *)(param_7 + 8);
        local_8e = (undefined2)*(undefined4 *)(param_7 + 0xc);
        local_f0 = 0xff00;
        cVar26 = (char)iVar12;
        local_e0 = 0;
        if (cVar26 < -7) {
          cVar26 = -8;
        }
        if ('\x06' < cVar26) {
          cVar26 = '\a';
        }
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        local_ee = 0;
        local_ea = 0;
        local_e8 = 0xffffffffffffffff;
        if (iVar25 < -7) {
          iVar25 = -8;
        }
        local_dc = 0x41200000;
        if (6 < iVar25) {
          iVar25 = 7;
        }
        iStack_f4 = iVar4 + 1;
        local_7f = (cVar26 + 8U | (byte)(iVar25 << 4)) ^ 0x80;
        local_d8 = 0;
        local_d4 = 0;
        local_d3 = 0xff;
        local_120 = (undefined *)CONCAT62(local_120._2_6_,param_6);
        local_f8 = iVar18 + 1;
        local_118 = puVar2;
        local_110 = puVar3;
        local_108 = iVar18;
        iStack_104 = iVar4;
        local_100 = puVar3;
        uVar19 = FUN_022ab010(param_2,&local_120,&local_9c);
        if ((uVar19 & 1) != 0) {
          local_128 = *(undefined4 *)(param_7 + 8);
          uStack_124 = *(undefined4 *)(param_7 + 0xc);
          local_130 = puVar3;
          FUN_022ab224(param_2,local_86,param_5,&local_130,0);
          return bVar14;
        }
      }
    }
    bVar14 = uVar23 < 7;
    uVar23 = uVar23 + 1;
    if (uVar23 == 8) {
      return bVar14;
    }
  } while( true );
}

