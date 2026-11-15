
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f69f70(long param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  short *psVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  byte *pbVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 local_a8;
  float *pfStack_a0;
  byte *local_98;
  long lStack_90;
  float local_88;
  byte local_84 [4];
  undefined4 local_80;
  undefined2 local_7c;
  byte local_7a;
  int local_78;
  byte local_74;
  
  puVar5 = PTR_DAT_04bb32e0;
  local_80 = 0xffffffff;
  piVar1 = (int *)(param_1 + 0x136b8);
  lVar17 = *(long *)(param_1 + 0x18);
  *piVar1 = 0;
  local_84[0] = *puVar5;
  uVar2 = *(undefined4 *)(lVar17 + 0x298);
  uVar24 = *(undefined4 *)(lVar17 + 0x29c);
  local_7c = 0;
  local_88 = 3.4028235e+38;
  if (7 < local_84[0]) {
    local_84[0] = 0xff;
  }
  bVar8 = (param_2 & 1) == 0;
  uVar21 = 0x20000000;
  if (bVar8) {
    uVar21 = uVar2;
  }
  *(undefined4 *)(lVar17 + 0x298) = uVar21;
  uVar21 = 0x41f00000;
  if (bVar8) {
    uVar21 = 0x42700000;
  }
  *(undefined4 *)(lVar17 + 0x29c) = uVar21;
  local_7a = param_2;
  FUN_02507c6c(&local_a8,7,1,1,0);
  puVar7 = PTR_DAT_04bb5038;
  puVar6 = PTR_DAT_04bb4718;
  puVar4 = PTR_DAT_04bb3238;
  uVar13 = (uint)(byte)local_a8;
  if (7 < (byte)local_a8) {
LAB_01f6a02c:
    lVar14 = *(long *)PTR_DAT_04bb3968;
    if (lVar14 != 0) {
      pfStack_a0 = &local_88;
      local_a8 = &PTR_FUN_04a67830;
      local_98 = local_84;
      lStack_90 = param_1;
      if (*(int *)(lVar14 + 0xb88) != 0) {
        lVar19 = (long)*(int *)(lVar14 + 0xb88) << 3;
        puVar18 = *(undefined8 **)(lVar14 + 0xb90);
        do {
          (*(code *)*local_a8)(&local_a8,*puVar18);
          lVar19 = lVar19 + -8;
          puVar18 = puVar18 + 1;
        } while (lVar19 != 0);
      }
    }
    *(undefined4 *)(lVar17 + 0x29c) = uVar24;
    *(undefined4 *)(lVar17 + 0x298) = uVar2;
    iVar9 = *piVar1;
    bVar8 = (char)local_7c != '\0';
    if (iVar9 != 0 && bVar8) {
      lVar14 = lVar17 + 0x10 + (ulong)*(uint *)(lVar17 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar17 + 0x294)) {
        lVar14 = lVar17 + 0x10;
      }
      if (*(int *)(lVar14 + 8) != iVar9) {
        FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar9,PTR_DAT_04bb6928,0);
        uVar10 = (ulong)local_a8 >> 0x30;
        local_78 = (uint)CONCAT11((char)local_80,local_7c._1_1_) << 0x10;
        local_78 = CONCAT31(local_78._1_3_,(char)*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
        local_74 = local_84[0];
        if (7 < local_84[0]) {
          local_74 = 0xff;
        }
        local_a8 = (undefined **)CONCAT26((ushort)uVar10 & 0xff00,0xff0000000000);
        if (-1 < DAT_053d11c0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d11c0,&local_a8,&local_78,5,0);
        }
      }
    }
    return iVar9 != 0 && bVar8;
  }
  fVar25 = 3.4028235e+38;
  do {
    bVar3 = *puVar5;
    if (7 < bVar3 || bVar3 != uVar13) {
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) {
        psVar15 = &DAT_054f0c08;
        if ((DAT_054f0c70 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_054f0c70);
          if (iVar9 == 0) {
            psVar15 = &DAT_054f0c08;
          }
          else {
            DAT_054f0c6c = 0;
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
            _DAT_054f0c44 = 0;
            DAT_054f0c34._0_4_ = 0;
            DAT_054f0c34._4_4_ = 0;
            DAT_054f0c3c._0_4_ = 0;
            DAT_054f0c3c._4_4_ = 0;
            _DAT_054f0c08 = 0;
            _DAT_054f0c10 = 1;
            DAT_054f0c14._0_4_ = 0;
            DAT_054f0c14._4_4_ = 0;
            DAT_054f0c48 = 0;
            DAT_054f0c50 = 0;
            DAT_054f0c58 = 0;
            DAT_054f0c60 = 0;
            __cxa_guard_release(&DAT_054f0c70);
            psVar15 = &DAT_054f0c08;
          }
        }
      }
      else {
        psVar15 = (short *)(lVar14 + (ulong)uVar13 * 0xd0 +
                            (ulong)(*(uint *)(lVar14 + (ulong)uVar13 * 4 + 0xd68) & 1) * 0x68 +
                           0x6e8);
      }
      if (((char)psVar15[0x32] != '\0') && (*psVar15 == *(short *)PTR_DAT_04bb6298)) {
        if (!(0x148 < *(uint *)(psVar15 + 2) || 4 < *(uint *)(psVar15 + 2) - 0xf))
        goto LAB_01f6a2f0;
      }
      piVar16 = (int *)puVar4;
      if ((((ulong)local_a8 & 0xff) < 8) && (*(long *)puVar6 != 0)) {
        piVar16 = (int *)(*(long *)puVar6 + ((ulong)local_a8 & 0xff) * 4 + 0xde8);
      }
      local_78 = *piVar16;
      uVar10 = FUN_02087ce0(lVar17,&local_78,0);
      if ((uVar10 & 1) != 0) {
        pfVar11 = (float *)FUN_0251b3b0(&local_a8,0);
        if (pfVar11 != (float *)0x0) {
          lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x68);
          fVar22 = *(float *)(lVar14 + 0x278) - *pfVar11;
          fVar23 = *(float *)(lVar14 + 0x280) - pfVar11[2];
          fVar22 = fVar23 * fVar23 + fVar22 * fVar22;
          if (fVar22 < fVar25) {
            if (((ulong)local_a8 & 0xff) < 8) {
              local_84[0] = (byte)local_a8;
              if (*(long *)puVar6 == 0) goto LAB_01f6a2d0;
              piVar16 = (int *)(*(long *)puVar6 + ((ulong)local_a8 & 0xff) * 4 + 0xde8);
            }
            else {
              local_84[0] = 0xff;
LAB_01f6a2d0:
              piVar16 = (int *)puVar4;
            }
            *piVar1 = *piVar16;
            local_7c = 0x101;
            fVar25 = fVar22;
            local_88 = fVar22;
          }
        }
      }
    }
LAB_01f6a2f0:
    bVar3 = (byte)local_a8;
    uVar10 = (ulong)local_a8 & 0xff;
    if ((7 < (byte)local_a8) || (uVar10 + 1 == 8)) goto LAB_01f6a02c;
    pbVar20 = puVar7 + uVar10 + 1;
    uVar12 = FUN_02507924(&local_a8,pbVar20);
    if ((uVar12 & 1) == 0) {
      if (uVar10 + 2 == 8) goto LAB_01f6a02c;
      pbVar20 = puVar7 + uVar10 + 2;
      uVar12 = FUN_02507924(&local_a8,pbVar20);
      if ((uVar12 & 1) == 0) {
        if (uVar10 + 3 == 8) goto LAB_01f6a02c;
        pbVar20 = puVar7 + uVar10 + 3;
        uVar12 = FUN_02507924(&local_a8,pbVar20);
        if ((uVar12 & 1) == 0) {
          if (uVar10 + 4 == 8) goto LAB_01f6a02c;
          pbVar20 = puVar7 + uVar10 + 4;
          uVar12 = FUN_02507924(&local_a8,pbVar20);
          if ((uVar12 & 1) == 0) {
            if (uVar10 + 5 == 8) goto LAB_01f6a02c;
            pbVar20 = puVar7 + uVar10 + 5;
            uVar12 = FUN_02507924(&local_a8,pbVar20);
            if ((uVar12 & 1) == 0) {
              if (uVar10 + 6 == 8) goto LAB_01f6a02c;
              pbVar20 = puVar7 + uVar10 + 6;
              uVar12 = FUN_02507924(&local_a8,pbVar20);
              if ((uVar12 & 1) == 0) {
                if (uVar10 + 7 == 8) goto LAB_01f6a02c;
                pbVar20 = puVar7 + uVar10 + 7;
                uVar12 = FUN_02507924(&local_a8,pbVar20);
                if ((uVar12 & 1) == 0) {
                  if (bVar3 == 0) goto LAB_01f6a02c;
                  pbVar20 = puVar7 + uVar10 + 8;
                  FUN_02507924(&local_a8,pbVar20);
                }
              }
            }
          }
        }
      }
    }
    uVar13 = (uint)*pbVar20;
    if (7 < uVar13) goto LAB_01f6a02c;
    local_a8 = (undefined **)CONCAT71(local_a8._1_7_,*pbVar20);
  } while( true );
}

