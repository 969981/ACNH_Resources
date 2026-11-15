
void FUN_01e30a70(long param_1,uint param_2)

{
  CalendarTime *pCVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  PosixTime PVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  int local_70;
  uint local_6c;
  ulong local_68;
  
  puVar6 = PTR_DAT_04bb32e8;
  bVar11 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar11 < 5) {
    local_6c = 5;
  }
  else if (bVar11 < 8) {
    local_6c = 0;
  }
  else if (bVar11 < 0xc) {
    local_6c = 1;
  }
  else if (bVar11 < 0x10) {
    local_6c = 2;
  }
  else {
    local_6c = 3;
    if (0x12 < bVar11) {
      local_6c = 4;
    }
  }
  pCVar1 = (CalendarTime *)(param_1 + 0x55c);
  if (*(uint *)(param_1 + 0x564) != local_6c) {
    puVar19 = &DAT_0538de58 + (ulong)local_6c * 2;
    if (5 < local_6c) {
      puVar19 = &DAT_0538de58;
    }
    if (*(char *)puVar19[1] != '\0') {
      FUN_02507c6c(&local_98,1,1,0,0);
      puVar8 = PTR_DAT_04bb5038;
      puVar7 = PTR_DAT_04bb39d8;
      if ((byte)local_98._0_1_ < 8) {
        bVar10 = false;
        do {
          local_70 = FUN_0274bce0(&local_98,puVar19);
          if (0x1b < local_70) {
            *(int *)(param_1 + 0x420) = local_70;
            uVar4 = *(undefined4 *)puVar7;
            *(undefined8 *)pCVar1 = *(undefined8 *)(*(long *)puVar6 + 0x4060);
            puVar14 = (uint *)nn::os::GetTlsValue(uVar4);
            uVar13 = *puVar14 ^ *puVar14 << 0xb;
            uVar3 = puVar14[3];
            *puVar14 = puVar14[1];
            puVar14[1] = puVar14[2];
            uVar13 = uVar13 >> 8 ^ uVar3 >> 0x13 ^ uVar13 ^ uVar3;
            puVar14[2] = uVar3;
            puVar14[3] = uVar13;
            if (*(short *)(param_1 + 0x55c) != 0) {
              lVar15 = nn::time::ToPosixTimeFromUtc(pCVar1);
              lVar18 = 0;
              if (0x8421084 < uVar13) {
                lVar18 = ((ulong)uVar13 * 0x1f >> 0x20) * 0x3c;
              }
              local_68 = lVar15 + lVar18;
              uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
              *(undefined8 *)pCVar1 = uVar16;
            }
            bVar10 = true;
            *(uint *)(param_1 + 0x564) = local_6c;
          }
          PVar9 = local_98._0_1_;
          uVar22 = (ulong)local_98 & 0xff;
          if ((7 < (byte)local_98._0_1_) || (uVar22 + 1 == 8)) goto LAB_01e30d34;
          pbVar21 = puVar8 + uVar22 + 1;
          uVar17 = FUN_02507924(&local_98,pbVar21);
          if ((uVar17 & 1) == 0) {
            if (uVar22 + 2 == 8) goto LAB_01e30d34;
            pbVar21 = puVar8 + uVar22 + 2;
            uVar17 = FUN_02507924(&local_98,pbVar21);
            if ((uVar17 & 1) == 0) {
              if (uVar22 + 3 == 8) goto LAB_01e30d34;
              pbVar21 = puVar8 + uVar22 + 3;
              uVar17 = FUN_02507924(&local_98,pbVar21);
              if ((uVar17 & 1) == 0) {
                if (uVar22 + 4 == 8) goto LAB_01e30d34;
                pbVar21 = puVar8 + uVar22 + 4;
                uVar17 = FUN_02507924(&local_98,pbVar21);
                if ((uVar17 & 1) == 0) {
                  if (uVar22 + 5 == 8) goto LAB_01e30d34;
                  pbVar21 = puVar8 + uVar22 + 5;
                  uVar17 = FUN_02507924(&local_98,pbVar21);
                  if ((uVar17 & 1) == 0) {
                    if (uVar22 + 6 == 8) goto LAB_01e30d34;
                    pbVar21 = puVar8 + uVar22 + 6;
                    uVar17 = FUN_02507924(&local_98,pbVar21);
                    if ((uVar17 & 1) == 0) {
                      if (uVar22 + 7 == 8) goto LAB_01e30d34;
                      pbVar21 = puVar8 + uVar22 + 7;
                      uVar17 = FUN_02507924(&local_98,pbVar21);
                      if ((uVar17 & 1) == 0) {
                        if (PVar9 == (PosixTime)0x0) goto LAB_01e30d34;
                        pbVar21 = puVar8 + uVar22 + 8;
                        FUN_02507924(&local_98,pbVar21);
                      }
                    }
                  }
                }
              }
            }
          }
          if (7 < *pbVar21) goto LAB_01e30d34;
          local_98 = (undefined *)CONCAT71(local_98._1_7_,*pbVar21);
        } while( true );
      }
    }
    goto LAB_01e30d38;
  }
LAB_01e30d4c:
  puVar7 = PTR_DAT_04bb38d0;
  bVar11 = 0;
  piVar2 = (int *)(param_1 + 0x420);
  if ((*(int *)(param_1 + 0x420) == 0x1e) && (*(short *)(param_1 + 0x55c) != 0)) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 != -1) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 1 & 1) != 0) {
        local_98 = (undefined *)
                   (CONCAT44(local_98._4_4_,(uint)(**(byte **)PTR_DAT_04bb38d0 >> 2)) &
                   0xffffffff0000000f);
        bVar11 = (uint)local_98 != 0;
        goto LAB_01e30e64;
      }
    }
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 == 0) {
LAB_01e30e60:
      bVar11 = 0;
    }
    else {
      puVar19 = *(undefined8 **)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
        lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
        if (lVar18 == 0) goto LAB_01e30e60;
        lVar18 = lVar18 + 0x70;
      }
      else if (((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0)) ||
              (lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar18 == 0))
      goto LAB_01e30e60;
      if ((*(long **)(lVar18 + 0x1bf260) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x1bf260), puVar19 == (undefined8 *)0x0)) {
        uVar13 = 1;
      }
      else {
        uVar13 = (**(code **)*puVar19)();
        uVar13 = uVar13 ^ 1;
      }
      bVar11 = FUN_028d53e4(*(long *)(lVar18 + 0x1bf248) + *(long *)(lVar18 + 0x1bf240));
      if ((((uVar13 & 1) == 0) && (*(long *)(lVar18 + 0x1bf260) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x1bf260) + 8), puVar19 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar19)();
      }
    }
  }
LAB_01e30e64:
  local_98 = (undefined *)
             (CONCAT44(local_98._4_4_,(uint)(**(byte **)puVar7 >> 2)) & 0xffffffff0000000f);
  sVar5 = *(short *)pCVar1;
  bVar10 = (uint)local_98 < 4;
  if (*piVar2 == 0x31) {
    if (sVar5 == 0) {
      return;
    }
    local_88 = 0;
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_90 = PTR_DAT_04bb2010 + 0x10;
    uStack_78 = 0;
    local_80 = puStack_90;
    iVar12 = FUN_0118be74();
    if (iVar12 != 0x7e3d1e46) {
      uVar13 = FUN_0118ad90(&local_98,iVar12);
      sVar5 = *(short *)pCVar1;
      goto joined_r0x01e30efc;
    }
    sVar5 = *(short *)pCVar1;
  }
  uVar13 = 0;
joined_r0x01e30efc:
  if (sVar5 != 0) {
    lVar20 = *(long *)puVar6;
    bVar11 = bVar11 & bVar10;
    lVar18 = nn::time::ToPosixTimeFromUtc(pCVar1);
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar20 + 0x4060));
    if (lVar15 < lVar18) {
      bVar10 = false;
    }
    else {
      lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar20 + 0x4060));
      bVar10 = lVar15 != lVar18;
    }
    if (bVar11 != 0 || (bVar10 || (param_2 & 1) != 0)) {
      if ((bVar11 == 0 && ((uVar13 | param_2) & 1) == 0) ||
         (uVar22 = FUN_01e34dac(param_1,piVar2,1), (uVar22 & 1) == 0)) {
        if (*(short *)(param_1 + 0x568) == 0) {
          return;
        }
        local_68 = *(ulong *)(param_1 + 0x568);
        if ((local_68 & 0xffff) != 0) {
          lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_98 = (undefined *)(lVar18 + 0x3c);
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
        }
        lVar20 = *(long *)puVar6;
        lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar20 + 0x4060));
        if (lVar15 < lVar18) {
          return;
        }
        lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar20 + 0x4060));
        if (lVar15 == lVar18) {
          return;
        }
        uVar22 = FUN_01e34dac(param_1,piVar2,0);
        if ((uVar22 & 1) == 0) {
          return;
        }
        param_2 = 0;
      }
      else {
        param_2 = param_2 & 1;
      }
      FUN_01e34f90(param_1,piVar2,param_2);
    }
  }
  return;
LAB_01e30d34:
  if (!bVar10) {
LAB_01e30d38:
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined1 **)pCVar1 = &LAB_01010000;
    *(uint *)(param_1 + 0x564) = local_6c;
  }
  goto LAB_01e30d4c;
}

