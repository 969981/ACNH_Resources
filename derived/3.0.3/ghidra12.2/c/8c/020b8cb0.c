
void FUN_020b8cb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_68;
  
  uVar12 = FUN_020b89e0();
  puVar9 = PTR_DAT_04bc2220;
  puVar8 = PTR_DAT_04bb37d0;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  if (((uVar12 & 1) != 0) && (*(int *)(param_1 + 0xb88) != 0)) {
    lVar19 = (long)*(int *)(param_1 + 0xb88) << 3;
    puVar1 = PTR_DAT_04bb6b68 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar17 = *(undefined8 **)(param_1 + 0xb90);
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bb3750 + 0x10;
    do {
      local_70 = (long *)0x0;
      local_68 = 0x100;
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) {
LAB_020b8e60:
        local_68._0_2_ = (ushort)(byte)local_68;
      }
      else {
        uVar5 = *(uint *)*puVar17;
        if ((((uVar5 == 0) ||
             (local_70 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                   ((ulong)(uVar5 >> 0x11) & 0x7ff8)), local_70 == (long *)0x0)) ||
            ((*(uint *)(local_70 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(local_70 + 0x46) != uVar5))
        {
          local_70 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar14 = *(long *)puVar6;
          iVar11 = (**(code **)(*plVar13 + 0x60))();
          if ((0x10 < iVar11) &&
             (uVar5 = *(uint *)(lVar14 + 0x5e8),
             4 < uVar5 || (1 << (ulong)(uVar5 & 0x1f) & 0x1aU) == 0)) goto LAB_020b8e10;
        }
        else {
LAB_020b8e10:
          local_68._0_2_ = (ushort)(byte)local_68;
        }
        uVar5 = local_68;
        plVar13 = local_70;
        if (local_70 != (long *)0x0) {
          local_68 = CONCAT31(local_68._1_3_,(int)local_70[0x2a] == 1);
          uVar10 = local_68;
          local_68._3_1_ = SUB41(uVar5,3);
          local_68._0_2_ = (ushort)uVar10;
          local_68 = CONCAT13(local_68._3_1_,
                              CONCAT12((char)(*(uint *)(local_70 + 0x49) >> 4),(ushort)local_68)) &
                     0xff01ffff;
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar11 != 0)) {
            *(undefined **)puVar8 = puVar4;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar12 = (**(code **)(*plVar13 + 0x20))(plVar13,puVar8);
          if ((uVar12 & 1) == 0) goto LAB_020b8e60;
        }
      }
      if (((local_70 != (long *)0x0) && ((byte)local_68 != '\0')) && (local_68._1_1_ != '\0')) {
        puVar18 = (undefined8 *)local_70[0x77];
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          *(undefined **)PTR_DAT_04bc2218 = puVar1;
          __cxa_guard_release(puVar9);
        }
        if ((puVar18 != (undefined8 *)0x0) &&
           (uVar12 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc2218), (uVar12 & 1) != 0)) {
          if (*(char *)((long)puVar18 + 0x143d4) == '\0') {
            FUN_01f1d930(puVar18);
          }
          else {
            local_88 = 0;
            uStack_78 = 0;
            local_98 = puVar2;
            puStack_90 = puVar3;
            local_80 = puVar3;
            FUN_01811430(&local_98);
            uVar12 = FUN_03722940(*(undefined8 *)PTR_DAT_04bb4e28,&local_70,&local_98);
            if (((uVar12 & 1) != 0) && (*(int *)(puVar18[1] + 0x750) != 0)) {
              puVar18[0x15ab] = puVar18[0x15ab] & 0xffffffffffffefff;
              *(undefined1 *)(puVar18[2] + 0x5a0) = 1;
              lVar14 = puVar18[1];
              if (lVar14 != 0) {
                uVar5 = *(uint *)(lVar14 + 0x508);
                if (uVar5 == 0xffffffff) {
                  uVar5 = *(uint *)(lVar14 + 0x50c);
                  if (uVar5 != 0xffffffff) {
                    pcVar16 = &DAT_05454358 + (ulong)uVar5 * 0x2d8;
                    if (0x10 < uVar5) {
                      pcVar16 = &DAT_05454358;
                    }
                    if ((*pcVar16 != '\0') && (pcVar16[0x110] != '\0')) {
                      pcVar16 = pcVar16 + 0x110;
                      goto LAB_020b8f54;
                    }
                  }
                }
                else {
                  puVar15 = &DAT_053fe348 + (ulong)uVar5 * 0xba0;
                  if (9 < uVar5) {
                    puVar15 = &DAT_053fe348;
                  }
                  if (puVar15[0x6d8] != '\0') {
                    pcVar16 = puVar15 + 0x6d8;
LAB_020b8f54:
                    *pcVar16 = '\0';
                  }
                }
              }
            }
            if (*(char *)((long)puVar18 + 0x143d4) != '\0') {
              FUN_01f40300(puVar18,0x48,0,0);
            }
          }
        }
      }
      puVar17 = puVar17 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  return;
}

