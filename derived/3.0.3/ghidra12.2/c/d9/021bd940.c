
void FUN_021bd940(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  char cVar20;
  ulong *puVar21;
  uint *puVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar10 = PTR_DAT_04bb32e8;
  puVar8 = PTR_DAT_04bb2020;
  lVar17 = **(long **)PTR_DAT_04bb27d0;
  bVar7 = *(byte *)(lVar17 + 0x473);
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar17 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar17 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar17 + 0x472) != bVar7)) {
      return;
    }
  }
  uVar24 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "HarvestFestival";
  puVar21 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar21 == 0) {
    local_80 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_80 >> 0x20) < '\x05') {
      local_78 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_78 = local_78 + -0x15180;
      local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    }
    puVar21 = &local_80;
    uVar16 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
    local_80 = CONCAT26((short)uVar16,(undefined6)local_80) & 0xff00ffffffffffff;
  }
  uVar16 = *puVar21;
  uVar16 = FUN_00879dd0(uVar24,&local_70,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
  puVar11 = PTR_DAT_04bb6380;
  puVar9 = PTR_DAT_04bb2208;
  if ((uVar16 & 1) != 0) {
    pcVar19 = (char *)(param_1 + 0x55e45);
    cVar20 = *(char *)(*(long *)puVar10 + 0x4064);
    cVar6 = *(char *)(*(long *)puVar10 + 0x4065);
    if (cVar20 < '\b') {
      bVar12 = false;
      bVar13 = false;
      if (cVar20 == '\0') {
        bVar13 = SBORROW4((int)cVar6,0x1e);
        bVar12 = cVar6 + -0x1e < 0;
      }
      if (bVar12 == bVar13) {
        lVar17 = 0;
        do {
          if (*(char *)(param_1 + lVar17 * 0xba0 + 0xaf9) != '\0') {
            lVar18 = *(long *)puVar9;
            uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
            local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
            puVar15 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_70);
            if (puVar15 != (uint *)0x0) {
              pcVar19 = (char *)(param_1 + lVar17 * 0xba0 + 0x818);
              if (*puVar15 != 0) {
                cVar20 = *PTR_DAT_04bb6378;
                do {
                  puVar10 = PTR_DAT_04bb6378;
                  if (cVar20 == '\0') {
                    cVar20 = '\x01';
                    *(undefined8 *)puVar11 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                    *puVar10 = 1;
                    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                    uVar3 = *puVar15;
                  }
                  else {
                    uVar3 = *(uint *)(puVar11 + 8);
                    if (-1 < (int)uVar3) {
                      if (((ushort *)((ulong)uVar3 + (long)puVar15) != (ushort *)0x0) &&
                         (uVar5 = *(ushort *)((ulong)uVar3 + (long)puVar15), uVar5 < 0x80)) {
                        pcVar19 = pcVar19 + uVar5;
                      }
                      break;
                    }
                    if (uVar3 != 0xffffffff) break;
                    uVar3 = *puVar15;
                  }
                  if ((uVar3 == 0) || (puVar22 = (uint *)(ulong)uVar3, puVar15 == puVar22)) break;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar15 + (10 - (long)puVar22)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar15 + (lVar18 - (long)puVar22);
                  if (lVar18 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar22));
                  *(undefined4 *)(puVar11 + 8) = 0xfffffffe;
                  if (uVar16 == 0) break;
                  piVar23 = (int *)(lVar18 + 4);
                  while (piVar23[-1] != 0x54706054) {
                    piVar23 = piVar23 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) goto LAB_021bdbf0;
                  }
                  iVar4 = 0;
                  if (*piVar23 != -1) {
                    iVar4 = *piVar23;
                  }
                  *(int *)(puVar11 + 8) = iVar4;
                  if (*puVar15 == 0) break;
                } while( true );
              }
LAB_021bdbf0:
              if (*pcVar19 != '\0') {
                local_78 = CONCAT44(local_78._4_4_,(int)lVar17);
                pcStack_68 = "GotoEventPlazaForCountdown";
                local_70 = puVar8 + 0x10;
                FUN_021be8c0(&local_78,&local_70,0);
                local_78._0_2_ = (ushort)(byte)lVar17;
                local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
                local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
                if (-1 < DAT_053d0e90) {
                  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_70,&local_78,
                               2,0);
                }
              }
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != 10);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x55e48);
        *(int *)(param_1 + 0x55e48) = iVar4 + 1;
        puVar9 = PTR_DAT_04bb6380;
        puVar10 = PTR_DAT_04bb2208;
        if (0x706 < iVar4) {
          lVar17 = 0;
          do {
            if (*(char *)(param_1 + lVar17 * 0xba0 + 0xaf9) != '\0') {
              lVar18 = *(long *)puVar10;
              uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
              local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
              puVar15 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_70);
              if (puVar15 != (uint *)0x0) {
                pcVar19 = (char *)(param_1 + lVar17 * 0xba0 + 0x818);
                if (*puVar15 != 0) {
                  cVar20 = *PTR_DAT_04bb6378;
                  do {
                    puVar11 = PTR_DAT_04bb6378;
                    if (cVar20 == '\0') {
                      cVar20 = '\x01';
                      *(undefined8 *)puVar9 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                      *puVar11 = 1;
                      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                      uVar3 = *puVar15;
                    }
                    else {
                      uVar3 = *(uint *)(puVar9 + 8);
                      if (-1 < (int)uVar3) {
                        if (((ushort *)((ulong)uVar3 + (long)puVar15) != (ushort *)0x0) &&
                           (uVar5 = *(ushort *)((ulong)uVar3 + (long)puVar15), uVar5 < 0x80)) {
                          pcVar19 = pcVar19 + uVar5;
                        }
                        break;
                      }
                      if (uVar3 != 0xffffffff) break;
                      uVar3 = *puVar15;
                    }
                    if ((uVar3 == 0) || (puVar22 = (uint *)(ulong)uVar3, puVar15 == puVar22)) break;
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar15 + (10 - (long)puVar22)) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar15 + (lVar18 - (long)puVar22);
                    if (lVar18 == 0) break;
                    uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar22));
                    *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                    if (uVar16 == 0) break;
                    piVar23 = (int *)(lVar18 + 4);
                    while (piVar23[-1] != 0x54706054) {
                      piVar23 = piVar23 + 2;
                      uVar16 = uVar16 - 1;
                      if (uVar16 == 0) goto LAB_021be000;
                    }
                    iVar4 = 0;
                    if (*piVar23 != -1) {
                      iVar4 = *piVar23;
                    }
                    *(int *)(puVar9 + 8) = iVar4;
                    if (*puVar15 == 0) break;
                  } while( true );
                }
LAB_021be000:
                if (*pcVar19 != '\0') {
                  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                  uVar3 = *puVar15 ^ *puVar15 << 0xb;
                  uVar2 = puVar15[3];
                  *puVar15 = puVar15[1];
                  puVar15[1] = puVar15[2];
                  uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
                  puVar15[2] = uVar2;
                  puVar15[3] = uVar3;
                  if ((uint)((ulong)uVar3 * 100 >> 0x20) < 0x14) {
                    local_78 = CONCAT44(local_78._4_4_,(int)lVar17);
                    pcStack_68 = "GotoEventPlazaForCountdown";
                    local_70 = puVar8 + 0x10;
                    FUN_021be8c0(&local_78,&local_70,0);
                    local_78._0_2_ = (ushort)(byte)lVar17;
                    local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
                    local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
                    if (-1 < DAT_053d0e90) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_70,
                                   &local_78,2,0);
                    }
                  }
                }
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 != 10);
          *(undefined4 *)(param_1 + 0x55e48) = 0;
        }
      }
    }
    else if (cVar20 == '\b') {
      if (cVar6 < '2') {
        if ('\x1d' < cVar6) {
          FUN_021befa0(param_1);
        }
      }
      else if (*pcVar19 == '\0') {
        *pcVar19 = '\x01';
        puVar9 = PTR_DAT_04bb6380;
        puVar10 = PTR_DAT_04bb2208;
        lVar17 = 0;
        do {
          if (*(char *)(param_1 + lVar17 * 0xba0 + 0xaf9) != '\0') {
            lVar18 = *(long *)puVar10;
            uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
            local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
            puVar15 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_70);
            if (puVar15 != (uint *)0x0) {
              pcVar19 = (char *)(param_1 + lVar17 * 0xba0 + 0x818);
              if (*puVar15 != 0) {
                cVar20 = *PTR_DAT_04bb6378;
                do {
                  puVar11 = PTR_DAT_04bb6378;
                  if (cVar20 == '\0') {
                    cVar20 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *puVar11 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    uVar3 = *puVar15;
                  }
                  else {
                    uVar3 = *(uint *)(puVar9 + 8);
                    if (-1 < (int)uVar3) {
                      if (((ushort *)((ulong)uVar3 + (long)puVar15) != (ushort *)0x0) &&
                         (uVar5 = *(ushort *)((ulong)uVar3 + (long)puVar15), uVar5 < 0x80)) {
                        pcVar19 = pcVar19 + uVar5;
                      }
                      break;
                    }
                    if (uVar3 != 0xffffffff) break;
                    uVar3 = *puVar15;
                  }
                  if ((uVar3 == 0) || (puVar22 = (uint *)(ulong)uVar3, puVar15 == puVar22)) break;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar15 + (10 - (long)puVar22)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar15 + (lVar18 - (long)puVar22);
                  if (lVar18 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar22));
                  *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                  if (uVar16 == 0) break;
                  piVar23 = (int *)(lVar18 + 4);
                  while (piVar23[-1] != 0x54706054) {
                    piVar23 = piVar23 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) goto LAB_021bdcc0;
                  }
                  iVar4 = 0;
                  if (*piVar23 != -1) {
                    iVar4 = *piVar23;
                  }
                  *(int *)(puVar9 + 8) = iVar4;
                  if (*puVar15 == 0) break;
                } while( true );
              }
LAB_021bdcc0:
              if (*pcVar19 != '\0') goto LAB_021bdcc8;
            }
            local_78 = CONCAT44(local_78._4_4_,(int)lVar17);
            pcStack_68 = "GotoEventPlazaForCountdown";
            local_70 = puVar8 + 0x10;
            FUN_021be8c0(&local_78,&local_70,1);
            local_78._0_2_ = CONCAT11(1,(char)lVar17);
            local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
            local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
            if (-1 < DAT_053d0e90) {
              FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_70,&local_78,2,0)
              ;
            }
          }
LAB_021bdcc8:
          lVar17 = lVar17 + 1;
        } while (lVar17 != 10);
      }
    }
    else if (*pcVar19 == '\0') {
      *pcVar19 = '\x01';
      puVar9 = PTR_DAT_04bb6380;
      puVar10 = PTR_DAT_04bb2208;
      lVar17 = 0;
      do {
        if (*(char *)(param_1 + lVar17 * 0xba0 + 0xaf9) != '\0') {
          lVar18 = *(long *)puVar10;
          uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
          puVar15 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_70);
          if (puVar15 != (uint *)0x0) {
            pcVar19 = (char *)(param_1 + lVar17 * 0xba0 + 0x818);
            if (*puVar15 != 0) {
              cVar20 = *PTR_DAT_04bb6378;
              do {
                puVar11 = PTR_DAT_04bb6378;
                if (cVar20 == '\0') {
                  cVar20 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar11 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  uVar3 = *puVar15;
                }
                else {
                  uVar3 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar3) {
                    if (((ushort *)((ulong)uVar3 + (long)puVar15) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar3 + (long)puVar15), uVar5 < 0x80)) {
                      pcVar19 = pcVar19 + uVar5;
                    }
                    break;
                  }
                  if (uVar3 != 0xffffffff) break;
                  uVar3 = *puVar15;
                }
                if ((uVar3 == 0) || (puVar22 = (uint *)(ulong)uVar3, puVar15 == puVar22)) break;
                lVar18 = 0xc;
                if (*(char *)((long)puVar15 + (10 - (long)puVar22)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar15 + (lVar18 - (long)puVar22);
                if (lVar18 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar22));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar16 == 0) break;
                piVar23 = (int *)(lVar18 + 4);
                while (piVar23[-1] != 0x54706054) {
                  piVar23 = piVar23 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_021be110;
                }
                iVar4 = 0;
                if (*piVar23 != -1) {
                  iVar4 = *piVar23;
                }
                *(int *)(puVar9 + 8) = iVar4;
                if (*puVar15 == 0) break;
              } while( true );
            }
LAB_021be110:
            if (*pcVar19 != '\0') goto LAB_021be118;
          }
          local_78 = CONCAT44(local_78._4_4_,(int)lVar17);
          pcStack_68 = "GotoEventPlazaForCountdown";
          local_70 = puVar8 + 0x10;
          FUN_021be8c0(&local_78,&local_70,1);
          local_78._0_2_ = CONCAT11(1,(char)lVar17);
          local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
          local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_70,&local_78,2,0);
          }
        }
LAB_021be118:
        lVar17 = lVar17 + 1;
      } while (lVar17 != 10);
    }
  }
  return;
}

