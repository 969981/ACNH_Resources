
void FUN_01b1c5e0(int *param_1,byte *param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  char *pcVar27;
  byte bVar28;
  PosixTime PVar29;
  short sVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong *puVar35;
  char *pcVar36;
  int *piVar37;
  long lVar38;
  char cVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  uint *puVar44;
  ulong uVar45;
  uint local_16c;
  uint local_154;
  uint local_120;
  uint local_11c;
  undefined *local_108;
  char *pcStack_100;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  char *local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  ulong uStack_90;
  uint local_88;
  byte local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  uint local_7c;
  undefined4 local_78;
  byte local_70 [4];
  undefined4 local_6c [3];
  
  puVar2 = PTR_DAT_04bb46b0;
  *param_1 = 0;
  lVar14 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar2 + 0x10) + 0x38))();
  if (lVar14 == 0) {
    return;
  }
  plVar1 = (long *)(lVar14 + 0xe7660);
  if ((*(long **)(lVar14 + 0xe7680) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar14 + 0xe7680), puVar15 == (undefined8 *)0x0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)*puVar15)();
    uVar16 = uVar16 & 0xffffffff;
  }
  puVar11 = PTR_DAT_04bb4f78;
  puVar3 = PTR_DAT_04bb2208;
  lVar21 = *(long *)PTR_DAT_04bb2208;
  local_70[0] = *param_2;
  if (7 < local_70[0]) {
    local_70[0] = 0xff;
  }
  lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_70,1);
  if (lVar17 == 0) goto LAB_01b1eb30;
  if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar15 == (undefined8 *)0x0)) {
    local_11c = 0;
  }
  else {
    local_11c = (**(code **)*puVar15)();
  }
  lVar32 = lVar17 + 0x194b0;
  if (*(long *)(lVar17 + 0x194b8) == 0) {
    lVar32 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if ((*(long **)(lVar32 + 0x28) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar32 + 0x28), puVar15 == (undefined8 *)0x0)) {
    local_120 = 0;
  }
  else {
    local_120 = (**(code **)*puVar15)();
  }
  lVar22 = *(long *)puVar3;
  lVar5 = *(long *)(lVar17 + 8);
  lVar38 = *(long *)(lVar17 + 0x10);
  puVar18 = (undefined *)FUN_0266c700(param_2);
  lVar33 = *(long *)PTR_DAT_04bb39b0;
  pbVar23 = PTR_DAT_04bb32e0;
  if (lVar33 == 0) {
LAB_01b1c788:
    if (*pbVar23 < 8) goto LAB_01b1c804;
LAB_01b1c794:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01b1c7fc:
      pbVar23 = PTR_DAT_04bb5038;
      goto LAB_01b1c804;
    }
    lVar33 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar33 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar20 = (uint *)(lVar33 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar20 = (uint *)(lVar33 + 0x48);
      }
      if ((*puVar20 & 8) != 0) {
        pbVar23 = (byte *)(lVar33 + 0x471);
      }
    }
    bVar7 = *pbVar23;
    bVar28 = bVar7;
    if (7 < bVar7) {
      bVar28 = 0xff;
    }
    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,bVar28);
    if (7 < bVar7) goto LAB_01b1c7fc;
LAB_01b1c820:
    uVar12 = FUN_02582d8c(&local_d8,1);
    if (((uVar12 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d6) != '\0')) {
      PVar29 = local_d8._0_1_;
      if (7 < (byte)local_d8._0_1_) {
        PVar29 = (PosixTime)0xff;
      }
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,PVar29);
      lVar33 = FUN_02583354(*(undefined8 *)puVar11,&local_c8,1);
      if (lVar33 != 0) {
        lVar34 = lVar33 + 0x194b0;
        if (*(long *)(lVar33 + 0x194b8) == 0) {
          lVar34 = *(long *)(*(long *)puVar2 + 0x20);
        }
        lVar38 = lVar38 + lVar5;
        if ((*(long **)(lVar34 + 0x1090) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar34 + 0x1090), puVar15 == (undefined8 *)0x0)) {
          local_16c = 0;
        }
        else {
          local_16c = (**(code **)*puVar15)();
        }
        puVar11 = PTR_DAT_04bb2020;
        lVar5 = lVar38 + 0xc170;
        if (*(char *)(*(long *)PTR_DAT_04bb4508 + 8) == '\0') {
          local_154 = 0;
        }
        else {
          local_c8 = PTR_DAT_04bb2020 + 0x10;
          local_c0 = "WHEREAREN_PlayedContentsBefore";
          iVar13 = FUN_0274bbb0(lVar5,&local_c8);
          local_154 = (uint)(iVar13 != 0);
        }
        if (((DAT_0532c550 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0532c550), iVar13 != 0))
        {
          DAT_0532c540 = puVar11 + 0x10;
          DAT_0532c548 = "otg";
          __cxa_guard_release(&DAT_0532c550);
        }
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        uVar19 = FUN_02b5e950(&local_d8,0);
        if ((uVar19 & 1) == 0) {
LAB_01b1c9b4:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1c9a8:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1c9b8;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1c9b8;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1c9a8;
            }
            goto LAB_01b1c9b4;
          }
        }
LAB_01b1c9b8:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        uVar19 = FUN_02b5e950(&local_d8,1);
        if ((uVar19 & 1) == 0) {
LAB_01b1ca34:
          lVar24 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar25 = *(long *)puVar2;
          lVar24 = 0;
          if (lVar25 != 0) {
            puVar15 = *(undefined8 **)(lVar25 + 0x10);
            if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
              lVar25 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar25 != 0) {
                lVar25 = lVar25 + 0x70;
LAB_01b1ca28:
                if ((uint)local_c8 < 8) {
                  lVar24 = lVar25 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar24 = lVar25 + 0x119228;
                  }
                  goto LAB_01b1ca38;
                }
              }
            }
            else {
              lVar24 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1ca38;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar25 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar25 != 0))
              goto LAB_01b1ca28;
            }
            goto LAB_01b1ca34;
          }
        }
LAB_01b1ca38:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        uVar12 = (uint)(lVar33 != 0);
        if (lVar24 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,2);
        if ((uVar19 & 1) == 0) {
LAB_01b1cab4:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1caa8:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1cab8;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1cab8;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1caa8;
            }
            goto LAB_01b1cab4;
          }
        }
LAB_01b1cab8:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,3);
        if ((uVar19 & 1) == 0) {
LAB_01b1cb34:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1cb28:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1cb38;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1cb38;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1cb28;
            }
            goto LAB_01b1cb34;
          }
        }
LAB_01b1cb38:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,4);
        if ((uVar19 & 1) == 0) {
LAB_01b1cbb4:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1cba8:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1cbb8;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1cbb8;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1cba8;
            }
            goto LAB_01b1cbb4;
          }
        }
LAB_01b1cbb8:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,5);
        if ((uVar19 & 1) == 0) {
LAB_01b1cc3c:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1cc30:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1cc40;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1cc40;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1cc30;
            }
            goto LAB_01b1cc3c;
          }
        }
LAB_01b1cc40:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,6);
        if ((uVar19 & 1) == 0) {
LAB_01b1ccbc:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1ccb0:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1ccc0;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1ccc0;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1ccb0;
            }
            goto LAB_01b1ccbc;
          }
        }
LAB_01b1ccc0:
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar19 = FUN_02b5e950(&local_d8,7);
        if ((uVar19 & 1) == 0) {
LAB_01b1cd40:
          lVar33 = 0;
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_d8);
          lVar24 = *(long *)puVar2;
          lVar33 = 0;
          if (lVar24 != 0) {
            puVar15 = *(undefined8 **)(lVar24 + 0x10);
            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar24 != 0) {
                lVar24 = lVar24 + 0x70;
LAB_01b1cd34:
                if ((uint)local_c8 < 8) {
                  lVar33 = lVar24 + 0x119228 + ((ulong)local_c8 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_c8) {
                    lVar33 = lVar24 + 0x119228;
                  }
                  goto LAB_01b1cd44;
                }
              }
            }
            else {
              lVar33 = 0;
              if (puVar15 == (undefined8 *)0x0) goto LAB_01b1cd44;
              if (((long *)puVar15[0x26] != (long *)0x0) &&
                 (lVar24 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar24 != 0))
              goto LAB_01b1cd34;
            }
            goto LAB_01b1cd40;
          }
        }
LAB_01b1cd44:
        puVar11 = PTR_DAT_04bb32e8;
        puVar2 = PTR_DAT_04bb2020;
        local_c8 = puVar18;
        if (lVar33 != 0) {
          uVar12 = uVar12 + 1;
        }
        local_c0 = (char *)(*(long *)(lVar14 + 0xe7668) + *plVar1);
        lStack_b8 = lVar5;
        local_b0 = *(long *)(lVar32 + 0x10) + *(long *)(lVar32 + 8);
        lStack_a8 = lVar38 + 0xd170;
        lVar33 = *(long *)PTR_DAT_04bb32e8;
        local_a0 = *(long *)(lVar32 + 0x10) + *(long *)(lVar32 + 8) + 0x11d58;
        if (*(short *)(lVar33 + 0x4068) == 0) {
          local_e8 = *(undefined **)(lVar33 + 0x4060);
          if ((char)((ulong)local_e8 >> 0x20) < '\x05') {
            lVar33 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e8);
            local_d8 = (undefined *)(lVar33 - 0x15180);
            local_e8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d8);
            lVar33 = *(long *)puVar11;
            sVar30 = *(short *)(lVar33 + 0x4068);
          }
          else {
            sVar30 = 0;
          }
          uVar19 = (ulong)local_e8;
          local_e8._0_6_ = CONCAT24(5,(undefined4)local_e8);
          uStack_90 = *(ulong *)(lVar33 + 0x4060);
          local_e8._7_1_ = SUB81(uVar19,7);
          local_e8._0_7_ = (uint7)(uint6)local_e8;
          local_98 = local_e8;
          if (sVar30 == 0) {
            local_e8 = (undefined *)uStack_90;
            if ((char)(uStack_90 >> 0x20) < '\x05') {
              lVar33 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e8);
              local_d8 = (undefined *)(lVar33 - 0x15180);
              local_e8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d8);
            }
            uVar19 = (ulong)local_e8;
            puVar35 = &local_e8;
            local_e8._0_6_ = CONCAT24(5,(undefined4)local_e8);
            local_e8._7_1_ = SUB81(uVar19,7);
            local_e8._0_7_ = (uint7)(uint6)local_e8;
          }
          else {
            puVar35 = (ulong *)(lVar33 + 0x4068);
          }
        }
        else {
          puVar35 = (ulong *)(lVar33 + 0x4068);
          local_98 = *(undefined **)(lVar33 + 0x4068);
          uStack_90 = *(ulong *)(lVar33 + 0x4060);
        }
        uVar19 = *puVar35 >> 0x10 & 0xff;
        local_88 = (uint)uVar19;
        if (local_88 < 0xd) {
          uVar31 = (uint)(*puVar35 >> 0x18) & 0xff;
          switch(uVar19) {
          case 1:
            local_88 = (uint)(0x13 < uVar31);
            break;
          case 2:
            local_88 = 1;
            if (0x12 < uVar31) {
              local_88 = 2;
            }
            break;
          case 3:
            local_88 = 2;
            if (0x14 < uVar31) {
              local_88 = 3;
            }
            break;
          case 4:
            local_88 = 3;
            if (0x13 < uVar31) {
              local_88 = 4;
            }
            break;
          case 5:
            local_88 = 4;
            if (0x14 < uVar31) {
              local_88 = 5;
            }
            break;
          case 6:
            local_88 = 5;
            if (0x15 < uVar31) {
              local_88 = 6;
            }
            break;
          case 7:
            local_88 = 6;
            if (0x16 < uVar31) {
              local_88 = 7;
            }
            break;
          case 8:
            local_88 = 7;
            if (0x16 < uVar31) {
              local_88 = 8;
            }
            break;
          case 9:
            local_88 = 8;
            if (0x16 < uVar31) {
              local_88 = 9;
            }
            break;
          case 10:
            local_88 = 9;
            if (0x17 < uVar31) {
              local_88 = 10;
            }
            break;
          case 0xb:
            local_88 = 10;
            if (0x16 < uVar31) {
              local_88 = 0xb;
            }
            break;
          case 0xc:
            if (0x15 < uVar31) goto LAB_01b1cf4c;
            local_88 = 0xb;
          }
        }
        else {
LAB_01b1cf4c:
          local_88 = 0;
        }
        local_84 = FUN_00a8f7a0(*(undefined8 *)PTR_DAT_04bb30a0);
        local_84 = local_84 & 1;
        puVar2 = puVar2 + 0x10;
        local_d0 = "ObjRcoMachineCheck1st";
        local_d8 = puVar2;
        iVar13 = FUN_0274bbb0(lVar5,&local_d8);
        local_83 = 0 < iVar13;
        pcStack_e0 = "Museum2Built";
        local_e8 = puVar2;
        iVar13 = FUN_0273ec70(*(long *)(lVar14 + 0xe7668) + *plVar1,&local_e8);
        local_82 = 0 < iVar13;
        pcStack_f0 = "Market2Built";
        local_f8 = puVar2;
        iVar13 = FUN_0273ec70(*(long *)(lVar14 + 0xe7668) + *plVar1,&local_f8);
        local_81 = 0 < iVar13;
        pcStack_100 = "TailorBuilt";
        local_108 = puVar2;
        iVar13 = FUN_0273ec70(*(long *)(lVar14 + 0xe7668) + *plVar1,&local_108);
        local_80 = 0 < iVar13;
        lVar33 = *(long *)puVar3;
        local_7c = uVar12;
        local_6c[0] = FUN_006bd550("VisitKappeiTour",0);
        puVar20 = (uint *)FUN_01b1ee90(lVar33 + 0x1b80,local_6c);
        puVar3 = PTR_DAT_04bb6448;
        puVar2 = PTR_DAT_04bb6440;
        if (puVar20 == (uint *)0x0) {
          local_78 = 0;
        }
        else {
          uVar12 = *puVar20;
          if (uVar12 != 0) {
            cVar39 = *PTR_DAT_04bb6440;
            do {
              if (cVar39 == '\0') {
                cVar39 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *puVar2 = 1;
                *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                uVar12 = *puVar20;
              }
              else {
                uVar31 = *(uint *)(puVar3 + 0x3c);
                if (-1 < (int)uVar31) {
                  if ((ushort *)((ulong)uVar31 + (long)puVar20) != (ushort *)0x0) {
                    uVar8 = *(ushort *)((ulong)uVar31 + (long)puVar20);
                    puVar26 = (undefined4 *)(lVar38 + 0xe008);
                    if (uVar8 < 0x200) {
                      puVar26 = puVar26 + uVar8;
                    }
                    goto LAB_01b1d260;
                  }
                  break;
                }
                if (uVar31 != 0xffffffff) break;
              }
              puVar44 = (uint *)(ulong)uVar12;
              if ((puVar44 == (uint *)0x0) || (puVar20 == puVar44)) break;
              lVar33 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar44)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar20 + (lVar33 - (long)puVar44);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar44));
              *(undefined4 *)(puVar3 + 0x3c) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar37 = (int *)(lVar33 + 4);
              while (piVar37[-1] != 0x54706054) {
                piVar37 = piVar37 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01b1d258;
              }
              iVar13 = 0;
              if (*piVar37 != -1) {
                iVar13 = *piVar37;
              }
              *(int *)(puVar3 + 0x3c) = iVar13;
              uVar12 = *puVar20;
              if (uVar12 == 0) break;
            } while( true );
          }
LAB_01b1d258:
          puVar26 = (undefined4 *)(lVar38 + 0xe008);
LAB_01b1d260:
          local_78 = *puVar26;
        }
        puVar2 = PTR_DAT_04bc0530;
        lVar38 = *(long *)PTR_DAT_04bb4998;
        if (*(int *)(lVar38 + 0x1e8) != 0) {
          puVar3 = PTR_DAT_04bb2020 + 0x10;
          puVar15 = *(undefined8 **)(lVar38 + 0x1f0);
          puVar4 = puVar15 + *(int *)(lVar38 + 0x1e8);
          pcVar27 = PTR_DAT_04bc0528;
LAB_01b1d2f0:
          uVar12 = *(uint *)*puVar15;
          if ((int)*(uint *)(lVar38 + 0x1c0) < 1) {
            if ((((*(long *)(lVar38 + 0xb0) == 0) ||
                 (puVar20 = *(uint **)(*(long *)(lVar38 + 0xb0) + 8), puVar20 == (uint *)0x0)) ||
                ((uVar12 < *(uint *)(lVar38 + 200) &&
                 (*(char *)(*(long *)(lVar38 + 0xd0) + (long)(int)uVar12) == '\0')))) ||
               (((*puVar20 <= uVar12 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))
            goto LAB_01b1d390;
            iVar13 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar20 = (uint *)((ulong)(puVar20[1] * uVar12 + (uint)(ushort)puVar20[2] * 8 + iVar13)
                              + (long)puVar20);
          }
          else if (uVar12 < *(uint *)(lVar38 + 0x1c0)) {
            if (*(uint *)(lVar38 + 0x1b0) <= uVar12) {
              uVar12 = 0;
            }
            puVar20 = *(uint **)(*(long *)(lVar38 + 0x1b8) + (ulong)uVar12 * 8);
          }
          else {
LAB_01b1d390:
            puVar20 = (uint *)0x0;
          }
          uVar12 = *puVar20;
          if ((param_3 & 1) != 0) {
joined_r0x01b1d39c:
            if (uVar12 != 0) {
              cVar39 = *pcVar27;
              do {
                if (cVar39 == '\0') {
                  cVar39 = '\x01';
                  *pcVar27 = '\x01';
                  *(undefined8 *)puVar2 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar12 = *(uint *)(puVar2 + 0x1c);
                  if (-1 < (int)uVar12) {
                    pcVar36 = (char *)((ulong)uVar12 + (long)puVar20);
                    goto LAB_01b1d448;
                  }
                  if (uVar12 != 0xffffffff) break;
                }
                puVar44 = (uint *)(ulong)*puVar20;
                pcVar36 = (char *)0x0;
                if ((*puVar20 == 0) || (puVar20 == puVar44)) goto LAB_01b1d448;
                lVar33 = 0xc;
                if (*(char *)((long)puVar20 + (10 - (long)puVar44)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar20 + (lVar33 - (long)puVar44);
                if (lVar33 == 0) break;
                uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar44));
                *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
                pcVar36 = (char *)0x0;
                if (uVar19 == 0) goto LAB_01b1d448;
                piVar37 = (int *)(lVar33 + 4);
                while (piVar37[-1] != -0x553b6ded) {
                  piVar37 = piVar37 + 2;
                  uVar19 = uVar19 - 1;
                  if (uVar19 == 0) {
                    pcVar36 = (char *)0x0;
                    goto LAB_01b1d448;
                  }
                }
                iVar13 = 0;
                if (*piVar37 != -1) {
                  iVar13 = *piVar37;
                }
                *(int *)(puVar2 + 0x1c) = iVar13;
              } while (*puVar20 != 0);
            }
            pcVar36 = (char *)0x0;
LAB_01b1d448:
            local_d0 = *(char **)PTR_PTR_04bc0538;
            if (pcVar36 != (char *)0x0) {
              local_d0 = pcVar36;
            }
            local_d8 = puVar3;
            (**(code **)(DAT_0532c540 + 0x18))(&DAT_0532c540);
            (**(code **)(DAT_0532c540 + 0x18))(&DAT_0532c540);
            pcVar36 = DAT_0532c548;
            (**(code **)(local_d8 + 0x18))(&local_d8);
            pcVar27 = PTR_DAT_04bc0528;
            if (pcVar36 == local_d0) {
              uVar12 = 1;
LAB_01b1d69c:
              if ((local_154 | uVar12 ^ 1) != 1) goto LAB_01b1d2e0;
            }
            else if (*DAT_0532c548 == *local_d0) {
              if (*DAT_0532c548 == '\0') {
                uVar12 = 1;
              }
              else {
                uVar19 = 0;
                pcVar36 = local_d0 + 1;
                do {
                  if (DAT_0532c548[uVar19 + 1] != pcVar36[uVar19]) {
                    pcVar36 = (char *)0x0;
                    goto LAB_01b1d690;
                  }
                  if (DAT_0532c548[uVar19 + 1] == '\0') {
                    pcVar36 = (char *)0x1;
                    goto LAB_01b1d690;
                  }
                  if (DAT_0532c548[uVar19 + 2] != pcVar36[uVar19 + 1]) {
                    pcVar36 = (char *)0x0;
                    uVar19 = uVar19 + 1;
                    goto LAB_01b1d690;
                  }
                  if (DAT_0532c548[uVar19 + 2] == '\0') {
                    uVar19 = uVar19 + 1;
                    pcVar36 = (char *)0x1;
                    goto LAB_01b1d690;
                  }
                  if (uVar19 == 0x7fffe) {
                    uVar19 = 0x80000;
                    goto LAB_01b1d690;
                  }
                  lVar33 = uVar19 + 3;
                  uVar40 = uVar19 + 2;
                  if (DAT_0532c548[lVar33] != pcVar36[uVar19 + 2]) {
                    pcVar36 = (char *)0x0;
                    goto LAB_01b1d68c;
                  }
                  uVar19 = uVar19 + 3;
                } while (DAT_0532c548[lVar33] != '\0');
                pcVar36 = (char *)0x1;
LAB_01b1d68c:
                uVar19 = uVar40;
LAB_01b1d690:
                uVar12 = (uint)(uVar19 < 0x80000) & (uint)pcVar36;
              }
              goto LAB_01b1d69c;
            }
            if (*puVar20 == 0) {
LAB_01b1d790:
              uVar12 = 0;
            }
            else {
              cVar39 = *PTR_DAT_04bc0528;
              do {
                if (cVar39 == '\0') {
                  cVar39 = '\x01';
                  *pcVar27 = 1;
                  *(undefined8 *)puVar2 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar12 = *(uint *)(puVar2 + 0x14);
                  if (-1 < (int)uVar12) {
                    if ((ushort *)((ulong)uVar12 + (long)puVar20) == (ushort *)0x0)
                    goto LAB_01b1d790;
                    uVar12 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar20);
                    goto LAB_01b1d794;
                  }
                  if (uVar12 != 0xffffffff) goto LAB_01b1d790;
                }
                puVar44 = (uint *)(ulong)*puVar20;
                uVar12 = 0;
                if ((*puVar20 == 0) || (puVar20 == puVar44)) goto LAB_01b1d794;
                lVar33 = 0xc;
                if (*(char *)((long)puVar20 + (10 - (long)puVar44)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar20 + (lVar33 - (long)puVar44);
                if (lVar33 == 0) goto LAB_01b1d790;
                uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar44));
                *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
                uVar12 = 0;
                if (uVar19 == 0) goto LAB_01b1d794;
                piVar37 = (int *)(lVar33 + 4);
                while (piVar37[-1] != 0x54706054) {
                  piVar37 = piVar37 + 2;
                  uVar19 = uVar19 - 1;
                  if (uVar19 == 0) {
                    uVar12 = 0;
                    goto LAB_01b1d794;
                  }
                }
                iVar13 = 0;
                if (*piVar37 != -1) {
                  iVar13 = *piVar37;
                }
                *(int *)(puVar2 + 0x14) = iVar13;
              } while (*puVar20 != 0);
              uVar12 = 0;
            }
LAB_01b1d794:
            lVar33 = 0;
            do {
              lVar24 = (long)&DAT_04a36cd0 + lVar33;
              if (*(uint *)((long)&DAT_04a36cd0 + lVar33) == uVar12) {
LAB_01b1d828:
                if (*(code **)(lVar24 + 8) != (code *)0x0) {
                  uVar19 = (**(code **)(lVar24 + 8))(&local_c8);
                  pcVar27 = PTR_DAT_04bc0528;
                  if ((uVar19 & 1) != 0) goto LAB_01b1d918;
                  bVar10 = true;
                  uVar12 = *puVar20;
                  goto joined_r0x01b1d860;
                }
                break;
              }
              if (*(uint *)((long)&DAT_04a36ce8 + lVar33) == uVar12) {
                lVar24 = (long)&DAT_04a36ce8 + lVar33;
                goto LAB_01b1d828;
              }
              if (*(uint *)((long)&DAT_04a36d00 + lVar33) == uVar12) {
                lVar24 = (long)&DAT_04a36d00 + lVar33;
                goto LAB_01b1d828;
              }
              if (*(uint *)((long)&DAT_04a36d18 + lVar33) == uVar12) {
                lVar24 = (long)&DAT_04a36d18 + lVar33;
                goto LAB_01b1d828;
              }
              if (*(uint *)((long)&DAT_04a36d30 + lVar33) == uVar12) {
                lVar24 = (long)&DAT_04a36d30 + lVar33;
                goto LAB_01b1d828;
              }
              if (*(uint *)((long)&DAT_04a36d48 + lVar33) == uVar12) {
                lVar24 = (long)&DAT_04a36d48 + lVar33;
                goto LAB_01b1d828;
              }
              lVar33 = lVar33 + 0x90;
            } while (lVar33 != 0xcf0);
            bVar10 = false;
            uVar12 = *puVar20;
joined_r0x01b1d860:
            if (uVar12 != 0) {
              cVar39 = *pcVar27;
              do {
                if (cVar39 != '\0') {
                  uVar12 = *(uint *)(puVar2 + 0x10);
                  if ((int)uVar12 < 0) {
                    if (uVar12 == 0xffffffff) goto LAB_01b1d8a4;
                  }
                  else if ((uint *)((ulong)uVar12 + (long)puVar20) != (uint *)0x0) {
                    uVar12 = *(uint *)((ulong)uVar12 + (long)puVar20);
                    goto LAB_01b1d9dc;
                  }
LAB_01b1d9d8:
                  uVar12 = 0xffffffff;
LAB_01b1d9dc:
                  uVar31 = *puVar20;
                  if (uVar31 == 0) goto LAB_01b1da74;
                  uVar19 = (ulong)*(uint *)(puVar2 + 0xc);
                  goto LAB_01b1d9e8;
                }
                cVar39 = '\x01';
                *pcVar27 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
LAB_01b1d8a4:
                lVar33 = (long)puVar20 - (ulong)*puVar20;
                if (*puVar20 == 0) goto LAB_01b1d9d8;
                uVar12 = 0xffffffff;
                if (lVar33 == 0) goto LAB_01b1d9dc;
                lVar24 = 0xc;
                if (*(char *)(lVar33 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                if (lVar24 + lVar33 == 0) goto LAB_01b1d9d8;
                uVar19 = (ulong)*(ushort *)(lVar33 + 8);
                *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
                if (uVar19 == 0) goto LAB_01b1d9d8;
                piVar37 = (int *)(lVar24 + lVar33 + 4);
                while (piVar37[-1] != 0xf6d306e) {
                  piVar37 = piVar37 + 2;
                  uVar19 = uVar19 - 1;
                  if (uVar19 == 0) goto LAB_01b1d9d8;
                }
                iVar13 = 0;
                if (*piVar37 != -1) {
                  iVar13 = *piVar37;
                }
                *(int *)(puVar2 + 0x10) = iVar13;
              } while (*puVar20 != 0);
            }
            if (bVar10) goto LAB_01b1d2e0;
            goto LAB_01b1d918;
          }
          if (uVar12 != 0) {
            cVar39 = *pcVar27;
            do {
              if (cVar39 == '\0') {
                cVar39 = '\x01';
                *pcVar27 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar12 = *(uint *)(puVar2 + 0x18);
                if (-1 < (int)uVar12) {
                  if (((char *)((ulong)uVar12 + (long)puVar20) != (char *)0x0) &&
                     (*(char *)((ulong)uVar12 + (long)puVar20) != '\0')) {
                    uVar12 = *puVar20;
                    goto joined_r0x01b1d39c;
                  }
                  break;
                }
                if (uVar12 != 0xffffffff) break;
              }
              lVar33 = (long)puVar20 - (ulong)*puVar20;
              if ((*puVar20 == 0) || (lVar33 == 0)) break;
              lVar24 = 0xc;
              if (*(char *)(lVar33 + 10) != '\0') {
                lVar24 = 0x1c;
              }
              if (lVar24 + lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)(lVar33 + 8);
              *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar37 = (int *)(lVar24 + lVar33 + 4);
              while (piVar37[-1] != -0x2c6875b7) {
                piVar37 = piVar37 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01b1d2e0;
              }
              iVar13 = 0;
              if (*piVar37 != -1) {
                iVar13 = *piVar37;
              }
              *(int *)(puVar2 + 0x18) = iVar13;
              if (*puVar20 == 0) break;
            } while( true );
          }
          goto LAB_01b1d2e0;
        }
LAB_01b1eab8:
        if ((((local_16c & 1) != 0) && (*(long *)(lVar34 + 0x1090) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar34 + 0x1090) + 8), puVar15 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar15)();
        }
      }
    }
  }
  else {
    if (*(int *)(lVar33 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar33 + 0x158);
    }
    if (7 < *pbVar23) {
      if ((*(int *)(lVar33 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01b1c788;
      }
      goto LAB_01b1c794;
    }
LAB_01b1c804:
    bVar7 = *pbVar23;
    bVar28 = bVar7;
    if (7 < bVar7) {
      bVar28 = 0xff;
    }
    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,bVar28);
    if (bVar7 < 8) goto LAB_01b1c820;
  }
  if ((((local_120 & 1) != 0) && (*(long *)(lVar32 + 0x28) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar32 + 0x28) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  if ((((local_11c & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
LAB_01b1eb30:
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar14 + 0xe7680) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0xe7680) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return;
LAB_01b1d9e8:
  if ((int)uVar19 < 0) {
    if ((uVar19 != 0xffffffff) || (lVar33 = (long)puVar20 - (ulong)uVar31, lVar33 == 0))
    goto LAB_01b1da74;
    lVar24 = 0xc;
    if (*(char *)(lVar33 + 10) != '\0') {
      lVar24 = 0x1c;
    }
    if (lVar24 + lVar33 == 0) goto LAB_01b1da74;
    uVar19 = (ulong)*(ushort *)(lVar33 + 8);
    *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
    if (uVar19 == 0) goto LAB_01b1da74;
    puVar44 = (uint *)(lVar24 + lVar33 + 4);
    while (puVar44[-1] != 0xcf30f72d) {
      puVar44 = puVar44 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_01b1da74;
    }
    uVar19 = 0;
    if (*puVar44 != 0xffffffff) {
      uVar19 = (ulong)*puVar44;
    }
    *(int *)(puVar2 + 0xc) = (int)uVar19;
    uVar31 = *puVar20;
    if (uVar31 == 0) goto LAB_01b1da74;
    goto LAB_01b1d9e8;
  }
  if ((uint *)(uVar19 + (long)puVar20) != (uint *)0x0) {
    uVar31 = *(uint *)(uVar19 + (long)puVar20);
    goto LAB_01b1da7c;
  }
LAB_01b1da74:
  uVar31 = 0xffffffff;
LAB_01b1da7c:
  bVar9 = false;
  if ((int)(uVar31 & uVar12) < 0) {
    bVar9 = bVar10;
  }
  if (bVar9) goto LAB_01b1d2e0;
  if (-1 < (int)uVar12) {
    uVar41 = *(uint *)(lVar22 + 0x1c0);
    uVar19 = (ulong)uVar41;
    if ((int)uVar41 < 1) {
      if (*(long *)(lVar22 + 0xb0) == 0) goto LAB_01b1d2e0;
      puVar44 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8);
      if (puVar44 == (uint *)0x0) goto LAB_01b1d2e0;
      uVar42 = *puVar44;
      uVar19 = (ulong)uVar42;
      if ((int)uVar42 < 1) goto LAB_01b1d2e0;
    }
    uVar40 = 0;
    cVar39 = *PTR_DAT_04bb6340;
    do {
      if ((int)uVar41 < 1) {
        if ((((*(long *)(lVar22 + 0xb0) != 0) &&
             (puVar44 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar44 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 200) <= uVar40 ||
             (*(char *)(*(long *)(lVar22 + 0xd0) + uVar40) != '\0')))) &&
           (((uVar40 < *puVar44 && (puVar44[1] != 0)) && ((ushort)puVar44[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar44 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar44 = (uint *)((ulong)(puVar44[1] * (int)uVar40 + (uint)(ushort)puVar44[2] * 8 +
                                    iVar13) + (long)puVar44);
          goto joined_r0x01b1dc50;
        }
      }
      else if (uVar40 < uVar41) {
        uVar45 = uVar40 & 0xffffffff;
        if (*(uint *)(lVar22 + 0x1b0) <= uVar40) {
          uVar45 = 0;
        }
        puVar44 = *(uint **)(*(long *)(lVar22 + 0x1b8) + uVar45 * 8);
joined_r0x01b1dc50:
        if (puVar44 != (uint *)0x0) {
          uVar42 = 0;
          if (*puVar44 != 0) {
            do {
              if (cVar39 != '\0') {
                uVar6 = *(uint *)(PTR_DAT_04bb6348 + 8);
                if ((int)uVar6 < 0) {
                  if (uVar6 == 0xffffffff) {
                    uVar6 = *puVar44;
                    if (uVar6 != 0) goto LAB_01b1db74;
                    uVar42 = 0;
                  }
                  else {
LAB_01b1dad0:
                    uVar42 = 0;
                  }
                }
                else {
                  uVar42 = 0;
                  if ((ushort *)((ulong)uVar6 + (long)puVar44) != (ushort *)0x0) {
                    uVar42 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar44);
                  }
                }
                goto LAB_01b1dad4;
              }
              cVar39 = '\x01';
              *PTR_DAT_04bb6340 = 1;
              puVar11 = PTR_DAT_04bb6348;
              *(undefined8 *)PTR_DAT_04bb6348 = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
              uVar6 = *puVar44;
              uVar42 = 0;
              if (uVar6 == 0) goto LAB_01b1dad4;
LAB_01b1db74:
              puVar43 = (uint *)(ulong)uVar6;
              if (puVar44 == puVar43) goto LAB_01b1dad0;
              lVar33 = 0xc;
              if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
              if (lVar33 == 0) goto LAB_01b1dad0;
              uVar45 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
              *(undefined4 *)(PTR_DAT_04bb6348 + 8) = 0xfffffffe;
              uVar42 = 0;
              if (uVar45 == 0) goto LAB_01b1dad4;
              piVar37 = (int *)(lVar33 + 4);
              while (piVar37[-1] != 0x54706054) {
                piVar37 = piVar37 + 2;
                uVar45 = uVar45 - 1;
                if (uVar45 == 0) {
                  uVar42 = 0;
                  goto LAB_01b1dad4;
                }
              }
              iVar13 = 0;
              if (*piVar37 != -1) {
                iVar13 = *piVar37;
              }
              *(int *)(PTR_DAT_04bb6348 + 8) = iVar13;
            } while (*puVar44 != 0);
            uVar42 = 0;
          }
LAB_01b1dad4:
          if (uVar12 == uVar42) {
            uVar12 = *puVar44;
            goto joined_r0x01b1dc70;
          }
        }
      }
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar19);
    goto LAB_01b1d2e0;
  }
  goto LAB_01b1dd94;
joined_r0x01b1dc70:
  if (uVar12 == 0) goto LAB_01b1dd44;
  if (cVar39 == '\0') {
    cVar39 = '\x01';
    *PTR_DAT_04bb6340 = 1;
    puVar11 = PTR_DAT_04bb6348;
    *(undefined8 *)PTR_DAT_04bb6348 = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_04bb6348 + 0x1c);
    if (-1 < (int)uVar12) {
      pcVar27 = (char *)((ulong)uVar12 + (long)puVar44);
      goto LAB_01b1dd48;
    }
    if (uVar12 != 0xffffffff) goto LAB_01b1dd44;
  }
  puVar43 = (uint *)(ulong)*puVar44;
  pcVar27 = (char *)0x0;
  if ((*puVar44 == 0) || (puVar44 == puVar43)) goto LAB_01b1dd48;
  lVar33 = 0xc;
  if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
    lVar33 = 0x1c;
  }
  lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
  if (lVar33 == 0) goto LAB_01b1dd44;
  uVar19 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
  *(undefined4 *)(PTR_DAT_04bb6348 + 0x1c) = 0xfffffffe;
  pcVar27 = (char *)0x0;
  if (uVar19 == 0) goto LAB_01b1dd48;
  piVar37 = (int *)(lVar33 + 4);
  while (piVar37[-1] != 0x45f320f2) {
    piVar37 = piVar37 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) {
      pcVar27 = (char *)0x0;
      goto LAB_01b1dd48;
    }
  }
  iVar13 = 0;
  if (*piVar37 != -1) {
    iVar13 = *piVar37;
  }
  *(int *)(PTR_DAT_04bb6348 + 0x1c) = iVar13;
  uVar12 = *puVar44;
  goto joined_r0x01b1dc70;
LAB_01b1dd44:
  pcVar27 = (char *)0x0;
LAB_01b1dd48:
  local_d0 = *(char **)PTR_PTR_04bb6338;
  if (pcVar27 != (char *)0x0) {
    local_d0 = pcVar27;
  }
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  iVar13 = FUN_0274bbb0(lVar5,&local_d8);
  pcVar27 = PTR_DAT_04bc0528;
  if (iVar13 == 0) goto LAB_01b1d2e0;
LAB_01b1dd94:
  if (-1 < (int)uVar31) {
    uVar12 = *(uint *)(lVar21 + 0xa40);
    uVar19 = (ulong)uVar12;
    if ((int)uVar12 < 1) {
      if (*(long *)(lVar21 + 0x930) == 0) goto LAB_01b1d2e0;
      puVar44 = *(uint **)(*(long *)(lVar21 + 0x930) + 8);
      if (puVar44 == (uint *)0x0) goto LAB_01b1d2e0;
      uVar41 = *puVar44;
      uVar19 = (ulong)uVar41;
      if ((int)uVar41 < 1) goto LAB_01b1d2e0;
    }
    uVar40 = 0;
    cVar39 = *PTR_DAT_04bb5808;
    do {
      if ((int)uVar12 < 1) {
        if ((((*(long *)(lVar21 + 0x930) != 0) &&
             (puVar44 = *(uint **)(*(long *)(lVar21 + 0x930) + 8), puVar44 != (uint *)0x0)) &&
            ((*(uint *)(lVar21 + 0x948) <= uVar40 ||
             (*(char *)(*(long *)(lVar21 + 0x950) + uVar40) != '\0')))) &&
           (((uVar40 < *puVar44 && (puVar44[1] != 0)) && ((ushort)puVar44[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar44 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar44 = (uint *)((ulong)(puVar44[1] * (int)uVar40 + (uint)(ushort)puVar44[2] * 8 +
                                    iVar13) + (long)puVar44);
          goto joined_r0x01b1df6c;
        }
      }
      else if (uVar40 < uVar12) {
        uVar45 = uVar40 & 0xffffffff;
        if (*(uint *)(lVar21 + 0xa30) <= uVar40) {
          uVar45 = 0;
        }
        puVar44 = *(uint **)(*(long *)(lVar21 + 0xa38) + uVar45 * 8);
joined_r0x01b1df6c:
        if (puVar44 != (uint *)0x0) {
          uVar41 = 0;
          if (*puVar44 != 0) {
            do {
              if (cVar39 != '\0') {
                uVar42 = *(uint *)(PTR_DAT_04bb5810 + 0x14);
                if ((int)uVar42 < 0) {
                  if (uVar42 == 0xffffffff) goto LAB_01b1de7c;
LAB_01b1dde4:
                  uVar41 = 0;
                }
                else {
                  uVar41 = 0;
                  if ((ushort *)((ulong)uVar42 + (long)puVar44) != (ushort *)0x0) {
                    uVar41 = (uint)*(ushort *)((ulong)uVar42 + (long)puVar44);
                  }
                }
                goto LAB_01b1dde8;
              }
              cVar39 = '\x01';
              *PTR_DAT_04bb5808 = 1;
              puVar11 = PTR_DAT_04bb5810;
              *(undefined8 *)PTR_DAT_04bb5810 = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
LAB_01b1de7c:
              puVar43 = (uint *)(ulong)*puVar44;
              uVar41 = 0;
              if (*puVar44 == 0) goto LAB_01b1dde8;
              if (puVar44 == puVar43) goto LAB_01b1dde4;
              lVar33 = 0xc;
              if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
              if (lVar33 == 0) goto LAB_01b1dde4;
              uVar45 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
              *(undefined4 *)(PTR_DAT_04bb5810 + 0x14) = 0xfffffffe;
              uVar41 = 0;
              if (uVar45 == 0) goto LAB_01b1dde8;
              piVar37 = (int *)(lVar33 + 4);
              while (piVar37[-1] != 0x54706054) {
                piVar37 = piVar37 + 2;
                uVar45 = uVar45 - 1;
                if (uVar45 == 0) {
                  uVar41 = 0;
                  goto LAB_01b1dde8;
                }
              }
              iVar13 = 0;
              if (*piVar37 != -1) {
                iVar13 = *piVar37;
              }
              *(int *)(PTR_DAT_04bb5810 + 0x14) = iVar13;
            } while (*puVar44 != 0);
            uVar41 = 0;
          }
LAB_01b1dde8:
          if (uVar31 == uVar41) {
            uVar12 = *puVar44;
            lVar33 = *plVar1;
            lVar24 = *(long *)(lVar14 + 0xe7668);
            goto joined_r0x01b1e26c;
          }
        }
      }
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar19);
    goto LAB_01b1d2e0;
  }
LAB_01b1d918:
  if (*puVar20 == 0) {
LAB_01b1df94:
    uVar12 = 0;
  }
  else {
    cVar39 = *pcVar27;
    do {
      if (cVar39 == '\0') {
        cVar39 = '\x01';
        *pcVar27 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(uint *)(puVar2 + 0x14);
        if (-1 < (int)uVar12) {
          if ((ushort *)((ulong)uVar12 + (long)puVar20) == (ushort *)0x0) goto LAB_01b1df94;
          uVar12 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar20);
          goto LAB_01b1df98;
        }
        if (uVar12 != 0xffffffff) goto LAB_01b1df94;
      }
      puVar44 = (uint *)(ulong)*puVar20;
      uVar12 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar44)) goto LAB_01b1df98;
      lVar33 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar44)) != '\0') {
        lVar33 = 0x1c;
      }
      lVar33 = (long)puVar20 + (lVar33 - (long)puVar44);
      if (lVar33 == 0) goto LAB_01b1df94;
      uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar44));
      *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
      uVar12 = 0;
      if (uVar19 == 0) goto LAB_01b1df98;
      piVar37 = (int *)(lVar33 + 4);
      while (piVar37[-1] != 0x54706054) {
        piVar37 = piVar37 + 2;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) {
          uVar12 = 0;
          goto LAB_01b1df98;
        }
      }
      iVar13 = 0;
      if (*piVar37 != -1) {
        iVar13 = *piVar37;
      }
      *(int *)(puVar2 + 0x14) = iVar13;
    } while (*puVar20 != 0);
    uVar12 = 0;
  }
LAB_01b1df98:
  lVar33 = 0;
  do {
    lVar24 = (long)&DAT_04a36cd0 + lVar33;
    if (*(uint *)((long)&DAT_04a36cd0 + lVar33) == uVar12) {
LAB_01b1e028:
      if (*(code **)(lVar24 + 0x10) != (code *)0x0) {
        uVar19 = (**(code **)(lVar24 + 0x10))(&local_c8);
        pcVar27 = PTR_DAT_04bc0528;
        if ((uVar19 & 1) != 0) goto LAB_01b1d2e0;
      }
      break;
    }
    if (*(uint *)((long)&DAT_04a36ce8 + lVar33) == uVar12) {
      lVar24 = (long)&DAT_04a36ce8 + lVar33;
      goto LAB_01b1e028;
    }
    if (*(uint *)((long)&DAT_04a36d00 + lVar33) == uVar12) {
      lVar24 = (long)&DAT_04a36d00 + lVar33;
      goto LAB_01b1e028;
    }
    if (*(uint *)((long)&DAT_04a36d18 + lVar33) == uVar12) {
      lVar24 = (long)&DAT_04a36d18 + lVar33;
      goto LAB_01b1e028;
    }
    if (*(uint *)((long)&DAT_04a36d30 + lVar33) == uVar12) {
      lVar24 = (long)&DAT_04a36d30 + lVar33;
      goto LAB_01b1e028;
    }
    if (*(uint *)((long)&DAT_04a36d48 + lVar33) == uVar12) {
      lVar24 = (long)&DAT_04a36d48 + lVar33;
      goto LAB_01b1e028;
    }
    lVar33 = lVar33 + 0x90;
  } while (lVar33 != 0xcf0);
  uVar12 = *puVar20;
  if (uVar12 != 0) {
    cVar39 = *pcVar27;
    do {
      if (cVar39 != '\0') {
        uVar31 = *(uint *)puVar2;
        if ((int)uVar31 < 0) {
          if (uVar31 == 0xffffffff) goto LAB_01b1e08c;
        }
        else if ((uint *)((ulong)uVar31 + (long)puVar20) != (uint *)0x0) {
          uVar12 = *(uint *)((ulong)uVar31 + (long)puVar20);
          if (-1 < (int)uVar12) {
            local_d8._0_4_ = uVar12 & 0xffff;
            local_d8 = (undefined *)(ulong)(uint)local_d8;
            FUN_0277d4ac(&local_d8);
            lVar33 = *(long *)PTR_DAT_04bb43c0;
            uVar12 = FUN_0277d6c4(&local_d8);
            if (*(long *)PTR_DAT_04bb43c0 != 0) {
              lVar33 = *(long *)(lVar33 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if (((uVar12 < *(uint *)(lVar33 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
                 (uVar19 = FUN_0277a1f4(*(long *)(lVar34 + 0x1078) + *(long *)(lVar34 + 0x1070),
                                        &local_d8), (uVar19 & 1) == 0)) {
                pcVar27 = PTR_DAT_04bc0528;
                goto LAB_01b1e1b0;
              }
            }
            pcVar27 = PTR_DAT_04bc0528;
            goto LAB_01b1d2e0;
          }
        }
LAB_01b1e1b0:
        if (*puVar20 != 0) {
          cVar39 = *pcVar27;
          goto LAB_01b1e1bc;
        }
        break;
      }
      cVar39 = '\x01';
      *pcVar27 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      uVar12 = *puVar20;
LAB_01b1e08c:
      lVar33 = (long)puVar20 - (ulong)uVar12;
      if (((ulong)uVar12 == 0) || (lVar33 == 0)) goto LAB_01b1e1b0;
      lVar24 = 0xc;
      if (*(char *)(lVar33 + 10) != '\0') {
        lVar24 = 0x1c;
      }
      if (lVar24 + lVar33 == 0) goto LAB_01b1e1b0;
      uVar19 = (ulong)*(ushort *)(lVar33 + 8);
      *(undefined4 *)puVar2 = 0xfffffffe;
      if (uVar19 == 0) goto LAB_01b1e1b0;
      piVar37 = (int *)(lVar24 + lVar33 + 4);
      while (piVar37[-1] != 0x5f4976ac) {
        piVar37 = piVar37 + 2;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) goto LAB_01b1e1b0;
      }
      iVar13 = 0;
      if (*piVar37 != -1) {
        iVar13 = *piVar37;
      }
      *(int *)puVar2 = iVar13;
      uVar12 = *puVar20;
    } while (uVar12 != 0);
  }
  goto LAB_01b1ea70;
joined_r0x01b1e26c:
  if (uVar12 == 0) goto LAB_01b1e340;
  if (cVar39 == '\0') {
    cVar39 = '\x01';
    *PTR_DAT_04bb5808 = 1;
    puVar11 = PTR_DAT_04bb5810;
    *(undefined8 *)PTR_DAT_04bb5810 = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_04bb5810 + 0x18);
    if (-1 < (int)uVar12) {
      pcVar27 = (char *)((ulong)uVar12 + (long)puVar44);
      goto LAB_01b1e344;
    }
    if (uVar12 != 0xffffffff) goto LAB_01b1e340;
  }
  puVar43 = (uint *)(ulong)*puVar44;
  pcVar27 = (char *)0x0;
  if ((*puVar44 == 0) || (puVar44 == puVar43)) goto LAB_01b1e344;
  lVar25 = 0xc;
  if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
    lVar25 = 0x1c;
  }
  lVar25 = (long)puVar44 + (lVar25 - (long)puVar43);
  if (lVar25 == 0) goto LAB_01b1e340;
  uVar19 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
  *(undefined4 *)(PTR_DAT_04bb5810 + 0x18) = 0xfffffffe;
  pcVar27 = (char *)0x0;
  if (uVar19 == 0) goto LAB_01b1e344;
  piVar37 = (int *)(lVar25 + 4);
  while (piVar37[-1] != 0x45f320f2) {
    piVar37 = piVar37 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) {
      pcVar27 = (char *)0x0;
      goto LAB_01b1e344;
    }
  }
  iVar13 = 0;
  if (*piVar37 != -1) {
    iVar13 = *piVar37;
  }
  *(int *)(PTR_DAT_04bb5810 + 0x18) = iVar13;
  uVar12 = *puVar44;
  goto joined_r0x01b1e26c;
LAB_01b1e340:
  pcVar27 = (char *)0x0;
LAB_01b1e344:
  local_d0 = *(char **)PTR_PTR_04bb5800;
  if (pcVar27 != (char *)0x0) {
    local_d0 = pcVar27;
  }
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  iVar13 = FUN_0273ec70(lVar24 + lVar33,&local_d8);
  pcVar27 = PTR_DAT_04bc0528;
  if (iVar13 == 0) goto LAB_01b1d2e0;
  goto LAB_01b1d918;
LAB_01b1e1bc:
  do {
    if (cVar39 != '\0') {
      uVar12 = *(uint *)(puVar2 + 8);
      if ((int)uVar12 < 0) {
        if (uVar12 == 0xffffffff) goto LAB_01b1e1e8;
      }
      else if ((uint *)((ulong)uVar12 + (long)puVar20) != (uint *)0x0) {
        uVar12 = *(uint *)((ulong)uVar12 + (long)puVar20);
        goto LAB_01b1e3a4;
      }
LAB_01b1e3a0:
      uVar12 = 0xffffffff;
LAB_01b1e3a4:
      uVar31 = *puVar20;
      if (uVar31 == 0) goto LAB_01b1e440;
      uVar19 = (ulong)*(uint *)(puVar2 + 4);
      goto LAB_01b1e3b0;
    }
    cVar39 = '\x01';
    *pcVar27 = '\x01';
    *(undefined8 *)puVar2 = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
LAB_01b1e1e8:
    lVar33 = (long)puVar20 - (ulong)*puVar20;
    if (*puVar20 == 0) goto LAB_01b1e3a0;
    uVar12 = 0xffffffff;
    if (lVar33 == 0) goto LAB_01b1e3a4;
    lVar24 = 0xc;
    if (*(char *)(lVar33 + 10) != '\0') {
      lVar24 = 0x1c;
    }
    if (lVar24 + lVar33 == 0) goto LAB_01b1e3a0;
    uVar19 = (ulong)*(ushort *)(lVar33 + 8);
    *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
    if (uVar19 == 0) goto LAB_01b1e3a0;
    piVar37 = (int *)(lVar24 + lVar33 + 4);
    while (piVar37[-1] != -0x41611a08) {
      piVar37 = piVar37 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_01b1e3a0;
    }
    iVar13 = 0;
    if (*piVar37 != -1) {
      iVar13 = *piVar37;
    }
    *(int *)(puVar2 + 8) = iVar13;
  } while (*puVar20 != 0);
  goto LAB_01b1ea70;
LAB_01b1e3b0:
  if ((int)uVar19 < 0) {
    if ((uVar19 != 0xffffffff) || (lVar33 = (long)puVar20 - (ulong)uVar31, lVar33 == 0))
    goto LAB_01b1e440;
    lVar24 = 0xc;
    if (*(char *)(lVar33 + 10) != '\0') {
      lVar24 = 0x1c;
    }
    if (lVar24 + lVar33 == 0) goto LAB_01b1e440;
    uVar19 = (ulong)*(ushort *)(lVar33 + 8);
    *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
    if (uVar19 == 0) goto LAB_01b1e440;
    puVar44 = (uint *)(lVar24 + lVar33 + 4);
    while (puVar44[-1] != 0x912ca5f0) {
      puVar44 = puVar44 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_01b1e440;
    }
    uVar19 = 0;
    if (*puVar44 != 0xffffffff) {
      uVar19 = (ulong)*puVar44;
    }
    *(int *)(puVar2 + 4) = (int)uVar19;
    uVar31 = *puVar20;
    if (uVar31 == 0) goto LAB_01b1e440;
    goto LAB_01b1e3b0;
  }
  if ((uint *)(uVar19 + (long)puVar20) != (uint *)0x0) {
    uVar31 = *(uint *)(uVar19 + (long)puVar20);
    goto LAB_01b1e448;
  }
LAB_01b1e440:
  uVar31 = 0xffffffff;
LAB_01b1e448:
  if (-1 < (int)uVar12) {
    uVar41 = *(uint *)(lVar22 + 0x1c0);
    uVar19 = (ulong)uVar41;
    if ((int)uVar41 < 1) {
      if (*(long *)(lVar22 + 0xb0) == 0) goto LAB_01b1d2e0;
      puVar44 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8);
      if (puVar44 == (uint *)0x0) goto LAB_01b1d2e0;
      uVar42 = *puVar44;
      uVar19 = (ulong)uVar42;
      if ((int)uVar42 < 1) goto LAB_01b1d2e0;
    }
    uVar40 = 0;
    cVar39 = *PTR_DAT_04bb6340;
    do {
      if ((int)uVar41 < 1) {
        if ((((*(long *)(lVar22 + 0xb0) != 0) &&
             (puVar44 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar44 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 200) <= uVar40 ||
             (*(char *)(*(long *)(lVar22 + 0xd0) + uVar40) != '\0')))) &&
           (((uVar40 < *puVar44 && (puVar44[1] != 0)) && ((ushort)puVar44[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar44 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar44 = (uint *)((ulong)(puVar44[1] * (int)uVar40 + (uint)(ushort)puVar44[2] * 8 +
                                    iVar13) + (long)puVar44);
          goto joined_r0x01b1e604;
        }
      }
      else if (uVar40 < uVar41) {
        uVar45 = uVar40 & 0xffffffff;
        if (*(uint *)(lVar22 + 0x1b0) <= uVar40) {
          uVar45 = 0;
        }
        puVar44 = *(uint **)(*(long *)(lVar22 + 0x1b8) + uVar45 * 8);
joined_r0x01b1e604:
        if (puVar44 != (uint *)0x0) {
          uVar42 = 0;
          if (*puVar44 != 0) {
            do {
              if (cVar39 != '\0') {
                uVar6 = *(uint *)(PTR_DAT_04bb6348 + 8);
                if ((int)uVar6 < 0) {
                  if (uVar6 == 0xffffffff) goto LAB_01b1e524;
LAB_01b1e490:
                  uVar42 = 0;
                }
                else {
                  uVar42 = 0;
                  if ((ushort *)((ulong)uVar6 + (long)puVar44) != (ushort *)0x0) {
                    uVar42 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar44);
                  }
                }
                goto LAB_01b1e494;
              }
              cVar39 = '\x01';
              *PTR_DAT_04bb6340 = 1;
              puVar11 = PTR_DAT_04bb6348;
              *(undefined8 *)PTR_DAT_04bb6348 = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
LAB_01b1e524:
              puVar43 = (uint *)(ulong)*puVar44;
              uVar42 = 0;
              if (*puVar44 == 0) goto LAB_01b1e494;
              if (puVar44 == puVar43) goto LAB_01b1e490;
              lVar33 = 0xc;
              if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
              if (lVar33 == 0) goto LAB_01b1e490;
              uVar45 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
              *(undefined4 *)(PTR_DAT_04bb6348 + 8) = 0xfffffffe;
              uVar42 = 0;
              if (uVar45 == 0) goto LAB_01b1e494;
              piVar37 = (int *)(lVar33 + 4);
              while (piVar37[-1] != 0x54706054) {
                piVar37 = piVar37 + 2;
                uVar45 = uVar45 - 1;
                if (uVar45 == 0) {
                  uVar42 = 0;
                  goto LAB_01b1e494;
                }
              }
              iVar13 = 0;
              if (*piVar37 != -1) {
                iVar13 = *piVar37;
              }
              *(int *)(PTR_DAT_04bb6348 + 8) = iVar13;
            } while (*puVar44 != 0);
            uVar42 = 0;
          }
LAB_01b1e494:
          if (uVar12 == uVar42) {
            uVar12 = *puVar44;
            goto joined_r0x01b1e620;
          }
        }
      }
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar19);
    goto LAB_01b1d2e0;
  }
LAB_01b1e750:
  if (-1 < (int)uVar31) goto LAB_01b1e754;
  goto LAB_01b1ea70;
joined_r0x01b1e620:
  if (uVar12 == 0) goto LAB_01b1e6f4;
  if (cVar39 == '\0') {
    cVar39 = '\x01';
    *PTR_DAT_04bb6340 = 1;
    puVar11 = PTR_DAT_04bb6348;
    *(undefined8 *)PTR_DAT_04bb6348 = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_04bb6348 + 0x1c);
    if (-1 < (int)uVar12) {
      pcVar27 = (char *)((ulong)uVar12 + (long)puVar44);
      goto LAB_01b1e6f8;
    }
    if (uVar12 != 0xffffffff) goto LAB_01b1e6f4;
  }
  puVar43 = (uint *)(ulong)*puVar44;
  pcVar27 = (char *)0x0;
  if ((*puVar44 == 0) || (puVar44 == puVar43)) goto LAB_01b1e6f8;
  lVar33 = 0xc;
  if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
    lVar33 = 0x1c;
  }
  lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
  if (lVar33 == 0) goto LAB_01b1e6f4;
  uVar19 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
  *(undefined4 *)(PTR_DAT_04bb6348 + 0x1c) = 0xfffffffe;
  pcVar27 = (char *)0x0;
  if (uVar19 == 0) goto LAB_01b1e6f8;
  piVar37 = (int *)(lVar33 + 4);
  while (piVar37[-1] != 0x45f320f2) {
    piVar37 = piVar37 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) {
      pcVar27 = (char *)0x0;
      goto LAB_01b1e6f8;
    }
  }
  iVar13 = 0;
  if (*piVar37 != -1) {
    iVar13 = *piVar37;
  }
  *(int *)(PTR_DAT_04bb6348 + 0x1c) = iVar13;
  uVar12 = *puVar44;
  goto joined_r0x01b1e620;
LAB_01b1e6f4:
  pcVar27 = (char *)0x0;
LAB_01b1e6f8:
  local_d0 = *(char **)PTR_PTR_04bb6338;
  if (pcVar27 != (char *)0x0) {
    local_d0 = pcVar27;
  }
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  iVar13 = FUN_0274bbb0(lVar5,&local_d8);
  pcVar27 = PTR_DAT_04bc0528;
  if (iVar13 == 0) goto LAB_01b1e750;
  if ((int)uVar31 < 0) goto LAB_01b1d2e0;
LAB_01b1e754:
  uVar12 = *(uint *)(lVar21 + 0xa40);
  uVar19 = (ulong)uVar12;
  if ((int)uVar12 < 1) {
    if (*(long *)(lVar21 + 0x930) == 0) goto LAB_01b1d2e0;
    puVar44 = *(uint **)(*(long *)(lVar21 + 0x930) + 8);
    if ((puVar44 == (uint *)0x0) || (uVar41 = *puVar44, uVar19 = (ulong)uVar41, (int)uVar41 < 1))
    goto LAB_01b1d2e0;
  }
  uVar40 = 0;
  cVar39 = *PTR_DAT_04bb5808;
  do {
    if ((int)uVar12 < 1) {
      if ((((*(long *)(lVar21 + 0x930) != 0) &&
           (puVar44 = *(uint **)(*(long *)(lVar21 + 0x930) + 8), puVar44 != (uint *)0x0)) &&
          ((*(uint *)(lVar21 + 0x948) <= uVar40 ||
           (*(char *)(*(long *)(lVar21 + 0x950) + uVar40) != '\0')))) &&
         (((uVar40 < *puVar44 && (puVar44[1] != 0)) && ((ushort)puVar44[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar44 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar44 = (uint *)((ulong)(puVar44[1] * (int)uVar40 + (uint)(ushort)puVar44[2] * 8 + iVar13)
                          + (long)puVar44);
        goto joined_r0x01b1e92c;
      }
    }
    else if (uVar40 < uVar12) {
      uVar45 = uVar40 & 0xffffffff;
      if (*(uint *)(lVar21 + 0xa30) <= uVar40) {
        uVar45 = 0;
      }
      puVar44 = *(uint **)(*(long *)(lVar21 + 0xa38) + uVar45 * 8);
joined_r0x01b1e92c:
      if (puVar44 != (uint *)0x0) {
        uVar41 = 0;
        if (*puVar44 != 0) {
          do {
            if (cVar39 != '\0') {
              uVar42 = *(uint *)(PTR_DAT_04bb5810 + 0x14);
              if ((int)uVar42 < 0) {
                if (uVar42 == 0xffffffff) goto LAB_01b1e838;
LAB_01b1e7a0:
                uVar41 = 0;
              }
              else {
                uVar41 = 0;
                if ((ushort *)((ulong)uVar42 + (long)puVar44) != (ushort *)0x0) {
                  uVar41 = (uint)*(ushort *)((ulong)uVar42 + (long)puVar44);
                }
              }
              goto LAB_01b1e7a4;
            }
            cVar39 = '\x01';
            *PTR_DAT_04bb5808 = 1;
            puVar11 = PTR_DAT_04bb5810;
            *(undefined8 *)PTR_DAT_04bb5810 = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
LAB_01b1e838:
            puVar43 = (uint *)(ulong)*puVar44;
            uVar41 = 0;
            if (*puVar44 == 0) goto LAB_01b1e7a4;
            if (puVar44 == puVar43) goto LAB_01b1e7a0;
            lVar33 = 0xc;
            if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar44 + (lVar33 - (long)puVar43);
            if (lVar33 == 0) goto LAB_01b1e7a0;
            uVar45 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
            *(undefined4 *)(PTR_DAT_04bb5810 + 0x14) = 0xfffffffe;
            uVar41 = 0;
            if (uVar45 == 0) goto LAB_01b1e7a4;
            piVar37 = (int *)(lVar33 + 4);
            while (piVar37[-1] != 0x54706054) {
              piVar37 = piVar37 + 2;
              uVar45 = uVar45 - 1;
              if (uVar45 == 0) {
                uVar41 = 0;
                goto LAB_01b1e7a4;
              }
            }
            iVar13 = 0;
            if (*piVar37 != -1) {
              iVar13 = *piVar37;
            }
            *(int *)(PTR_DAT_04bb5810 + 0x14) = iVar13;
          } while (*puVar44 != 0);
          uVar41 = 0;
        }
LAB_01b1e7a4:
        if (uVar31 == uVar41) {
          uVar12 = *puVar44;
          lVar33 = *plVar1;
          lVar24 = *(long *)(lVar14 + 0xe7668);
          goto joined_r0x01b1e950;
        }
      }
    }
    uVar40 = uVar40 + 1;
  } while (uVar40 != uVar19);
  goto LAB_01b1d2e0;
joined_r0x01b1e950:
  if (uVar12 == 0) goto LAB_01b1ea24;
  if (cVar39 == '\0') {
    cVar39 = '\x01';
    *PTR_DAT_04bb5808 = 1;
    puVar11 = PTR_DAT_04bb5810;
    *(undefined8 *)PTR_DAT_04bb5810 = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_04bb5810 + 0x18);
    if (-1 < (int)uVar12) {
      pcVar27 = (char *)((ulong)uVar12 + (long)puVar44);
      goto LAB_01b1ea28;
    }
    if (uVar12 != 0xffffffff) goto LAB_01b1ea24;
  }
  puVar43 = (uint *)(ulong)*puVar44;
  pcVar27 = (char *)0x0;
  if ((*puVar44 == 0) || (puVar44 == puVar43)) goto LAB_01b1ea28;
  lVar25 = 0xc;
  if (*(char *)((long)puVar44 + (10 - (long)puVar43)) != '\0') {
    lVar25 = 0x1c;
  }
  lVar25 = (long)puVar44 + (lVar25 - (long)puVar43);
  if (lVar25 == 0) goto LAB_01b1ea24;
  uVar19 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar43));
  *(undefined4 *)(PTR_DAT_04bb5810 + 0x18) = 0xfffffffe;
  pcVar27 = (char *)0x0;
  if (uVar19 == 0) goto LAB_01b1ea28;
  piVar37 = (int *)(lVar25 + 4);
  while (piVar37[-1] != 0x45f320f2) {
    piVar37 = piVar37 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) {
      pcVar27 = (char *)0x0;
      goto LAB_01b1ea28;
    }
  }
  iVar13 = 0;
  if (*piVar37 != -1) {
    iVar13 = *piVar37;
  }
  *(int *)(PTR_DAT_04bb5810 + 0x18) = iVar13;
  uVar12 = *puVar44;
  goto joined_r0x01b1e950;
LAB_01b1ea24:
  pcVar27 = (char *)0x0;
LAB_01b1ea28:
  local_d0 = *(char **)PTR_PTR_04bb5800;
  if (pcVar27 != (char *)0x0) {
    local_d0 = pcVar27;
  }
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  iVar13 = FUN_0273ec70(lVar24 + lVar33,&local_d8);
  pcVar27 = PTR_DAT_04bc0528;
  if (iVar13 != 0) goto LAB_01b1d2e0;
LAB_01b1ea70:
  if (*param_1 < param_1[1]) {
    *(uint **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar20;
    *param_1 = *param_1 + 1;
  }
LAB_01b1d2e0:
  puVar15 = puVar15 + 1;
  if (puVar15 == puVar4) goto LAB_01b1eab8;
  goto LAB_01b1d2f0;
}

