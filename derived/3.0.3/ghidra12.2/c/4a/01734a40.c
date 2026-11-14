
void FUN_01734a40(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  byte *pbVar19;
  undefined8 local_90;
  undefined2 local_88;
  undefined2 local_70 [2];
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  puVar1 = PTR_DAT_04bb5dc0 + 8;
  memcpy(PTR_DAT_04bb5dc0 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcd38 + 8;
  memcpy(PTR_DAT_04bbcd38 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcd28 + 8;
  memcpy(PTR_DAT_04bbcd28 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcec0 + 8;
  memcpy(PTR_DAT_04bbcec0 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcc38 + 8;
  memcpy(PTR_DAT_04bbcc38 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcd30 + 8;
  memcpy(PTR_DAT_04bbcd30 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbe200 + 8;
  memcpy(PTR_DAT_04bbe200 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcc10 + 8;
  memcpy(PTR_DAT_04bbcc10 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbe210 + 8;
  memcpy(PTR_DAT_04bbe210 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbcbf0 + 8;
  memcpy(PTR_DAT_04bbcbf0 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  FUN_02507c6c(&local_90,7,1,1,0);
  puVar8 = PTR_DAT_04bb5038;
  puVar7 = PTR_DAT_04bb4718;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb27c0;
  local_68 = local_90._4_4_;
  local_6c[0] = 0xff;
  if ((byte)local_90 < 8) {
    local_6c[0] = (byte)local_90;
  }
  local_64 = local_88;
  if (7 < (byte)local_90) {
LAB_01734c64:
    local_88 = CONCAT11(local_88._1_1_,param_1) & 0xff01;
    local_90 = &PTR_FUN_049bfcf8;
    iVar10 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar10 != 0) {
      lVar15 = (long)iVar10 << 3;
      puVar14 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_90)(&local_90,*puVar14);
        lVar15 = lVar15 + -8;
        puVar14 = puVar14 + 1;
      } while (lVar15 != 0);
    }
    return;
  }
  puVar2 = PTR_DAT_04bb3290 + 0x10;
  do {
    puVar3 = (uint *)puVar5;
    if (*(long *)puVar7 != 0) {
      puVar3 = (uint *)(*(long *)puVar7 + (ulong)(byte)local_90 * 4 + 0xde8);
    }
    uVar16 = *puVar3;
    if ((uVar16 != 0) && (lVar15 = *(long *)puVar1, lVar15 != 0)) {
      plVar18 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                          ((ulong)(uVar16 >> 0x11) & 0x7ff8));
      if ((plVar18 == (long *)0x0) ||
         (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar16)))) {
        plVar18 = (long *)0x0;
      }
      if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
        plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
        lVar15 = *(long *)puVar1;
        iVar10 = (**(code **)(*plVar12 + 0x60))();
        if (iVar10 < 0x11) {
          uVar16 = 1;
        }
        else {
          uVar16 = *(uint *)(lVar15 + 0x5e8);
          if (4 < uVar16) goto LAB_01734db8;
          uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
        }
      }
      else {
LAB_01734db8:
        uVar16 = 0;
      }
      if (plVar18 != (long *)0x0) {
        lVar15 = plVar18[0x2a];
        uVar4 = *(uint *)(plVar18 + 0x49);
        if (((*PTR_DAT_04bb3760 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb3758 = puVar2;
          __cxa_guard_release(PTR_DAT_04bb3760);
        }
        uVar11 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3758);
        if ((((int)lVar15 == 1) && ((uVar11 & uVar16) != 0)) && ((uVar4 >> 4 & 1) != 0)) {
          if ((param_1 & 1) != 0) {
            plVar12 = (long *)plVar18[0xc];
            if ((plVar12 == (long *)0x0) && (plVar12 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
              iVar10 = __cxa_guard_acquire(&DAT_052461c0);
              if (iVar10 == 0) {
                plVar12 = &DAT_05240280;
              }
              else {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
                plVar12 = &DAT_05240280;
              }
            }
            uVar17 = (**(code **)(*plVar12 + 0x100))();
            if ((uVar17 & 1) == 0) goto LAB_01734e54;
          }
          local_70[0] = 0;
          FUN_016e1780(plVar18,local_70);
        }
      }
    }
LAB_01734e54:
    bVar9 = local_6c[0];
    uVar17 = (ulong)local_6c[0];
    if ((7 < local_6c[0]) || (uVar17 + 1 == 8)) goto LAB_01734c64;
    pbVar19 = puVar8 + uVar17 + 1;
    uVar13 = FUN_02507924(local_6c,pbVar19);
    if ((uVar13 & 1) == 0) {
      if (uVar17 + 2 == 8) goto LAB_01734c64;
      pbVar19 = puVar8 + uVar17 + 2;
      uVar13 = FUN_02507924(local_6c,pbVar19);
      if ((uVar13 & 1) == 0) {
        if (uVar17 + 3 == 8) goto LAB_01734c64;
        pbVar19 = puVar8 + uVar17 + 3;
        uVar13 = FUN_02507924(local_6c,pbVar19);
        if ((uVar13 & 1) == 0) {
          if (uVar17 + 4 == 8) goto LAB_01734c64;
          pbVar19 = puVar8 + uVar17 + 4;
          uVar13 = FUN_02507924(local_6c,pbVar19);
          if ((uVar13 & 1) == 0) {
            if (uVar17 + 5 == 8) goto LAB_01734c64;
            pbVar19 = puVar8 + uVar17 + 5;
            uVar13 = FUN_02507924(local_6c,pbVar19);
            if ((uVar13 & 1) == 0) {
              if (uVar17 + 6 == 8) goto LAB_01734c64;
              pbVar19 = puVar8 + uVar17 + 6;
              uVar13 = FUN_02507924(local_6c,pbVar19);
              if ((uVar13 & 1) == 0) {
                if (uVar17 + 7 == 8) goto LAB_01734c64;
                pbVar19 = puVar8 + uVar17 + 7;
                uVar13 = FUN_02507924(local_6c,pbVar19);
                if ((uVar13 & 1) == 0) {
                  if (bVar9 == 0) goto LAB_01734c64;
                  pbVar19 = puVar8 + uVar17 + 8;
                  FUN_02507924(local_6c,pbVar19);
                }
              }
            }
          }
        }
      }
    }
    local_90._0_1_ = *pbVar19;
    if (7 < (byte)local_90) goto LAB_01734c64;
    local_6c[0] = (byte)local_90;
  } while( true );
}

