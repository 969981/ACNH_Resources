
uint FUN_022b4660(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  int local_d8;
  int iStack_d4;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined2 local_b4;
  short local_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 local_a4;
  undefined2 local_9c;
  undefined1 local_9a;
  byte local_99;
  byte local_97;
  byte local_93;
  undefined1 local_92;
  undefined4 local_90;
  undefined2 local_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  
  puVar9 = PTR_DAT_04bb27c8;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(int *)(param_2 + 2);
  iVar20 = *(int *)((long)param_2 + 0x14);
  uVar8 = param_2[2];
  iVar1 = iVar5 + 1;
  iVar2 = iVar20 + 1;
  iVar17 = iVar20 + 2;
  puVar4 = PTR_DAT_04bbc1a0 + 0x10;
  iVar12 = iVar20;
  iVar18 = iVar5;
  do {
    local_b0 = (short)puVar3;
    uStack_ae = (undefined2)((ulong)puVar3 >> 0x10);
    uStack_ac = (undefined4)((ulong)puVar3 >> 0x20);
    local_f0 = (undefined *)CONCAT44(iVar12,iVar18);
    local_e0 = (undefined *)CONCAT44(iVar12,iVar18);
    if ((*(long *)puVar9 == 0) || (lVar14 = *(long *)(*(long *)puVar9 + 0xa8), lVar14 == 0))
    goto LAB_022b4acc;
    local_100 = puVar4;
    local_f8 = puVar3;
    local_e8 = puVar3;
    local_a8 = iVar18;
    local_a4 = iVar12;
    uVar15 = FUN_00971f80(lVar14,&local_100,0);
    if (((uVar15 & 1) == 0) || (uVar15 = FUN_00975dc0(&local_b0), (uVar15 & 1) == 0))
    goto LAB_022b4acc;
    if (iVar18 < iVar1) {
      iVar18 = iVar18 + 1;
    }
    else {
      iVar12 = iVar12 + 1;
      iVar18 = iVar5;
    }
  } while ((iVar5 != iVar18) || (iVar17 != iVar12));
  local_78 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar12 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar19 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  iVar12 = iVar5;
  do {
    local_f8 = (undefined *)CONCAT44(iVar20,iVar12);
    local_100 = puVar3;
    FUN_01a5033c(&local_b0,&local_80,*(undefined4 *)((long)param_2 + 0x2c),&local_100,0);
    puVar4 = PTR_DAT_04bb43c0;
    if (local_b0 != -2) goto LAB_022b4acc;
    if (iVar12 < iVar1) {
      iVar12 = iVar12 + 1;
    }
    else {
      iVar20 = iVar20 + 1;
      iVar12 = iVar5;
    }
  } while ((iVar5 != iVar12) || (iVar17 != iVar20));
  local_88 = *(undefined2 *)param_2;
  uStack_86 = *(undefined1 *)((long)param_2 + 2);
  uStack_85 = *(undefined1 *)((long)param_2 + 3);
  uStack_84 = *(undefined4 *)((long)param_2 + 4);
  uVar7 = *param_2;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_88);
  lVar21 = *(long *)puVar4;
  if (lVar21 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      local_100 = PTR_DAT_04bc0510 + 0x10;
      local_f0 = (undefined *)0x0;
      local_f8 = (undefined *)uVar7;
      uVar13 = FUN_0277d6c4(&local_f8);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar14 = *(long *)(lVar21 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar13 = FUN_0277d6c4(&local_88);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar13 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar13 * 8);
            if (lVar14 != 0) {
              local_f0 = (undefined *)lVar14;
            }
          }
        }
      }
      uVar15 = FUN_01ae5f4c(&local_100);
      if ((uVar15 & 1) != 0) {
        FUN_01afa2dc(&local_100,*(undefined4 *)(param_2 + 5));
        local_88 = SUB82(local_f8,0);
        uStack_86 = (undefined1)((ulong)local_f8 >> 0x10);
        uStack_85 = (undefined1)((ulong)local_f8 >> 0x18);
        uStack_84 = local_f8._4_4_;
      }
    }
  }
  local_90 = 0;
  local_9a = 0x23;
  uStack_ac = CONCAT13(uStack_85,CONCAT12(uStack_86,local_88));
  local_b0 = 0;
  uStack_ae = 0;
  local_92 = 0;
  local_99 = *(byte *)(param_1 + 0x10);
  local_9c = *(undefined2 *)PTR_DAT_04bb6298;
  local_a8 = uStack_84;
  if (7 < local_99) {
    local_99 = 0xff;
  }
  local_100 = (undefined *)CONCAT62(local_100._2_6_,local_9c);
  local_ce = 0;
  local_ca = 0;
  local_c0 = 0;
  local_f8 = PTR_DAT_04bbc1a0 + 0x10;
  local_f0 = PTR_DAT_04bb2010 + 0x10;
  local_97 = (byte)*(undefined4 *)((long)param_2 + 0x2c) & 7;
  local_a4._0_2_ = (short)*(undefined4 *)(param_2 + 2);
  local_a4._2_2_ = (short)*(undefined4 *)((long)param_2 + 0x14);
  cVar16 = (char)*(undefined4 *)(param_2 + 4) - (char)*(undefined4 *)(param_2 + 2);
  local_c8 = 0xffffffffffffffff;
  local_bc = 0x41200000;
  local_d0 = 0xff00;
  local_b4 = 0xff00;
  iVar17 = (int)(char)((char)*(undefined4 *)((long)param_2 + 0x24) -
                      (char)*(undefined4 *)((long)param_2 + 0x14));
  if (cVar16 < -7) {
    cVar16 = -8;
  }
  if ('\x06' < cVar16) {
    cVar16 = '\a';
  }
  if (iVar17 < -7) {
    iVar17 = -8;
  }
  if (6 < iVar17) {
    iVar17 = 7;
  }
  local_93 = (cVar16 + 8U | (byte)(iVar17 << 4)) ^ 0x80;
  local_e8 = (undefined *)uVar8;
  local_e0 = local_f0;
  local_d8 = iVar1;
  iStack_d4 = iVar2;
  uVar13 = FUN_022ab010(param_1,&local_100,&local_b0);
  if ((uVar13 & 1) != 0) {
    local_108 = 0xfffe;
    FUN_0277d4ac(&local_108);
    sVar11 = local_a4._2_2_;
    sVar10 = (short)local_a4;
    local_108._0_4_ = uStack_ac;
    local_108._4_4_ = local_a8;
    uVar6 = *(undefined4 *)((long)param_2 + 0x2c);
    puVar19 = (undefined8 *)(param_1 + 0x14);
    *puVar19 = 0xfffe;
    FUN_0277d4ac(puVar19);
    *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0x23;
    *(int *)(param_1 + 0x48) = (int)sVar10;
    *(int *)(param_1 + 0x4c) = (int)sVar11;
    *(undefined4 *)(param_1 + 0x50) = uVar6;
    *(undefined4 *)puVar19 = (undefined4)local_108;
    *(undefined4 *)(param_1 + 0x18) = local_108._4_4_;
  }
LAB_022b4ad0:
  return uVar13 & 1;
LAB_022b4acc:
  uVar13 = 0;
  goto LAB_022b4ad0;
}

