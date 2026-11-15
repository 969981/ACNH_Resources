
void FUN_0214fcb0(long param_1,uint param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  long *plVar12;
  int *piVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  undefined8 local_58;
  char *local_50;
  ulong local_48;
  uint local_28;
  int local_24;
  
  uVar24 = (ulong)param_2;
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  puVar1 = PTR_DAT_04bb27d0;
  lVar19 = **(long **)PTR_DAT_04bb27d0;
  bVar7 = *(byte *)(lVar19 + 0x473);
  local_28 = param_2;
  if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_0214fd2c:
    iVar23 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
    if ((*(int *)(param_1 + 0x1fc) == 0x19) || (*(int *)(param_1 + 0x1fc) == 0x16)) {
      if ((iVar23 != 10) && (iVar23 != 0xc)) {
        if (iVar23 != 0x1b) goto LAB_0214fe24;
        if (((*(long *)PTR_DAT_04bb3968 != 0) &&
            (local_58 = (undefined *)((ulong)local_58._4_4_ << 0x20), param_2 < 10)) &&
           ((&DAT_053fee41)[uVar24 * 0xba0] != '\0')) {
          lVar21 = *(long *)PTR_DAT_04bb3968 + 0xda0;
          puVar14 = &DAT_053fe348 + uVar24 * 0xba0;
          bVar7 = 1;
          goto LAB_0214fe10;
        }
        goto LAB_0214ff10;
      }
LAB_0214fdc0:
      if ((*(long *)PTR_DAT_04bb3968 != 0) &&
         ((local_58 = (undefined *)CONCAT44(local_58._4_4_,1), param_2 < 10 &&
          ((&DAT_053fee41)[uVar24 * 0xba0] != '\0')))) {
        lVar21 = *(long *)PTR_DAT_04bb3968 + 0xda0;
        puVar14 = &DAT_053fe348 + uVar24 * 0xba0;
        bVar7 = 0;
LAB_0214fe10:
        FUN_01e2caf8(lVar21,puVar14 + 0x508,bVar7,&local_58,0,0);
      }
    }
    else {
      if ((iVar23 == 0xc) || (iVar23 == 10)) goto LAB_0214fdc0;
LAB_0214fe24:
      if (((*(char *)(param_1 + 0x235) == '\0') && (*(char *)(param_1 + 0x234) != '\0')) &&
         (lVar21 = *(long *)PTR_DAT_04bb3968, lVar21 != 0)) {
        lVar22 = *(long *)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
        if (0x6c < param_2) {
          lVar22 = *(long *)PTR_DAT_04bb4760;
        }
        uVar9 = (uint)*(byte *)(lVar22 + 4) | (*(byte *)(lVar22 + 5) & 3) << 8;
        if (0x1ff < uVar9) {
          uVar9 = uVar9 | 0xfffffc00;
        }
        if (*(byte *)(lVar19 + 0x476) < 2) {
          bVar7 = (uint)*(ushort *)PTR_DAT_04bb6298 == (uVar9 & 0xffff);
        }
        else {
          local_58._0_4_ = param_2;
          bVar7 = FUN_01d69340((*(long **)PTR_DAT_04bb27d0)[2],uVar9,0);
        }
        local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
        if ((9 < param_2) || ((&DAT_053fee41)[uVar24 * 0xba0] == '\0')) goto LAB_0214ff10;
        lVar21 = lVar21 + 0xda0;
        bVar7 = param_2 != 0xffffffff & (bVar7 ^ 1);
        puVar14 = &DAT_053fe348 + uVar24 * 0xba0;
        goto LAB_0214fe10;
      }
    }
LAB_0214ff10:
    puVar15 = *(undefined1 **)(param_1 + 0x1f0);
    if (puVar15 != (undefined1 *)0x0) {
      uVar20 = (ulong)local_58 >> 0x30;
      local_58 = (undefined *)CONCAT26((ushort)uVar20 & 0xff00,0xff0000000000);
      local_24 = CONCAT13(puVar15 == (undefined1 *)(param_1 + 0x1e0),
                          CONCAT12(*puVar15,CONCAT11((char)*(undefined4 *)(puVar15 + 4),
                                                     (char)param_2)));
      if (-1 < DAT_053d0dd0) {
        FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0dd0,&local_58,&local_24,4,0);
      }
    }
    bVar6 = true;
    lVar19 = *(long *)(param_1 + 0x208);
  }
  else {
    pbVar17 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar17 = (byte *)(lVar19 + 0x48);
    }
    if (((*pbVar17 >> 3 & 1) == 0) || (*(byte *)(lVar19 + 0x472) == bVar7)) goto LAB_0214fd2c;
    bVar6 = false;
    lVar19 = *(long *)(param_1 + 0x208);
  }
  if ((lVar19 != 0) && (*(long *)(param_1 + 0x1f0) != 0)) {
    local_58._4_4_ = (uint)((ulong)local_58 >> 0x20);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4))
    ;
    pcVar16 = *(code **)(param_1 + 0x210);
    uVar20 = *(ulong *)(param_1 + 0x218) & 1;
    if (uVar20 != 0 || pcVar16 != (code *)0x0) {
      plVar12 = (long *)(lVar19 + ((long)*(ulong *)(param_1 + 0x218) >> 1));
      if (uVar20 != 0) {
        pcVar16 = *(code **)(pcVar16 + *plVar12);
      }
      (*pcVar16)(plVar12,param_1 + 0x1fc,&local_58);
    }
  }
  pbVar17 = *(byte **)(param_1 + 0x1f0);
  if (((pbVar17 != (byte *)0x0) && (local_24 = *(int *)(pbVar17 + 4), local_24 == 7)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    lVar22 = *(long *)(param_1 + 8);
    lVar21 = 0;
    lVar19 = 0;
    if (lVar22 != 0) {
      lVar19 = lVar22 + -0x10;
    }
    if (*(int *)(param_1 + 0x10) != 1) {
      lVar21 = *(long *)(lVar22 + 8);
    }
    pbVar2 = (byte *)0x0;
    if (lVar21 != 0) {
      pbVar2 = (byte *)(lVar21 + -0x10);
    }
    if ((lVar19 != 0) && (pbVar2 != (byte *)0x0)) {
      bVar3 = *(byte *)(lVar19 + 2);
      bVar7 = bVar3 + 0x18;
      if (4 < bVar3) {
        bVar7 = bVar3;
      }
      bVar4 = *pbVar2;
      bVar3 = bVar4 + 0x18;
      if (4 < bVar4) {
        bVar3 = bVar4;
      }
      if ((bVar3 < *pbVar17) || ((*pbVar17 == bVar3 && (pbVar2[1] < pbVar17[1])))) {
        local_58 = PTR_DAT_04bb2020 + 0x10;
        local_50 = "EarlyOrLate";
        FUN_027494ac(uVar24,&local_58,4);
      }
      else {
        bVar3 = pbVar17[2];
        if ((bVar3 < bVar7) || ((bVar3 == bVar7 && (pbVar17[3] < *(byte *)(lVar19 + 3))))) {
          *(byte *)(lVar19 + 2) = bVar3;
          *(byte *)(lVar19 + 3) = pbVar17[3];
        }
      }
    }
  }
  uVar9 = local_28;
  switch(*(undefined4 *)(param_1 + 0x1fc)) {
  case 5:
  case 6:
    uVar9 = 1;
    goto LAB_021500e8;
  case 7:
    if (!bVar6) {
      return;
    }
    lVar19 = *(long *)PTR_DAT_04bb46b0;
    if (lVar19 == 0) {
      return;
    }
    puVar18 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar19 == 0) {
        return;
      }
      lVar19 = lVar19 + 0x70;
    }
    else {
      if (puVar18 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar18[0x26] == (long *)0x0) {
        return;
      }
      lVar19 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      if (lVar19 == 0) {
        return;
      }
    }
    pcVar11 = (char *)FUN_0265c2a0(local_28);
    if (pcVar11 != (char *)0x0) {
      local_48 = CONCAT71(local_48._1_7_,1);
      local_50 = pcVar11;
      if (*(long **)(pcVar11 + 0x28) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar18 = (undefined8 *)**(long **)(pcVar11 + 0x28);
        uVar8 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar18)();
        }
      }
      local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar8,(undefined1)local_48)) & 0xffffffffffff01ff;
      local_58 = PTR_DAT_04bb67a0 + 0x10;
      local_24 = *(int *)(*(long *)(pcVar11 + 0x10) + *(long *)(pcVar11 + 8) + 0x10764);
      FUN_021dafb0(&local_28,&local_24,0,0,0,1);
      FUN_02640184(&local_58);
    }
    lVar21 = *(long *)(lVar19 + 0xd0);
    if (lVar21 == 0) {
      FUN_027ddea0(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0),1);
      return;
    }
    if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
LAB_021505d4:
      plVar12 = *(long **)(lVar21 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_58 = *(undefined **)(lVar19 + 0xb0);
        local_50 = *(char **)(lVar19 + 0xb8);
        local_48 = 0x1e3388;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
      }
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      lVar21 = *(long *)(lVar19 + 0xd0);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar21 != 0) goto LAB_021505d4;
    }
    FUN_027ddea0(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0),1);
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar19 + 0xd0) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0xd0) + 0x18), puVar18 != (undefined8 *)0x0))
    {
      (**(code **)*puVar18)();
    }
    break;
  case 0xe:
    if (!bVar6) {
      return;
    }
    lVar19 = *(long *)PTR_DAT_04bb46b0;
    if (lVar19 == 0) {
LAB_02150380:
      iVar23 = -1;
    }
    else {
      puVar18 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar18 + 0x38))();
        if (lVar19 == 0) goto LAB_02150380;
        lVar19 = lVar19 + 0x70;
      }
      else if (((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0)) ||
              (lVar19 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar19 == 0))
      goto LAB_02150380;
      lVar21 = *(long *)(lVar19 + 0xd0);
      if (lVar21 == 0) {
        iVar23 = (int)*(char *)(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0) + 0x1e335c);
      }
      else {
        if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
          uVar9 = 1;
LAB_0215056c:
          plVar12 = *(long **)(lVar21 + 0x20);
          if (plVar12 != (long *)0x0) {
            local_58 = *(undefined **)(lVar19 + 0xb0);
            local_50 = *(char **)(lVar19 + 0xb8);
            local_48 = 0x1e3388;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
          }
        }
        else {
          uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          lVar21 = *(long *)(lVar19 + 0xd0);
          uVar9 = uVar9 ^ 1;
          if (lVar21 != 0) goto LAB_0215056c;
        }
        iVar23 = (int)*(char *)(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0) + 0x1e335c);
        if ((((uVar9 & 1) == 0) && (*(long *)(lVar19 + 0xd0) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0xd0) + 0x18),
           puVar18 != (undefined8 *)0x0)) {
          (**(code **)*puVar18)();
        }
      }
    }
    uVar9 = local_28;
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
    uVar24 = FUN_02b67a30(&local_58,local_28);
    if (((uVar24 & 1) != 0) && (iVar23 == (uint)local_58)) {
      FUN_020ef5f4();
      return;
    }
    local_24 = 1;
    lVar19 = *(long *)PTR_DAT_04bb3968;
    if (9 < uVar9) {
      return;
    }
    if ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] == '\0') {
      return;
    }
    piVar13 = &local_24;
    goto LAB_021503f4;
  case 0xf:
    if (!bVar6) {
      return;
    }
    lVar19 = *(long *)PTR_DAT_04bb3968;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    if (9 < local_28) {
      return;
    }
    if ((&DAT_053fee41)[(ulong)local_28 * 0xba0] == '\0') {
      return;
    }
    piVar13 = (int *)&local_58;
LAB_021503f4:
    FUN_01e2caf8(lVar19 + 0xda0,&DAT_053fe850 + (ulong)uVar9 * 0xba0,1,piVar13,0,0);
    break;
  case 0x10:
  case 0x11:
    *(undefined2 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0x22001d0005;
    if (!bVar6) {
      return;
    }
    if (*(long *)(param_1 + 0x1f0) == 0) {
      return;
    }
    if ((*(uint *)(*(long *)(param_1 + 0x1f0) + 4) & 0xfffffffe) != 0x1e) {
      return;
    }
    uVar9 = FUN_021b8c00(&DAT_053fe348,&local_28);
    uVar9 = uVar9 & 1;
LAB_021500e8:
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar9);
    FUN_021dafb0(&local_28,&local_58,0,0,0,1);
    break;
  case 0x13:
    if (!bVar6) {
      return;
    }
    lVar19 = *(long *)PTR_DAT_04bb46b0;
    if (lVar19 != 0) {
      puVar18 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar18 + 0x38))();
        if (lVar19 != 0) {
          lVar19 = lVar19 + 0x70;
LAB_02150428:
          if ((*(long **)(lVar19 + 0xe6dc0) == (long *)0x0) ||
             (puVar18 = (undefined8 *)**(long **)(lVar19 + 0xe6dc0), puVar18 == (undefined8 *)0x0))
          {
            uVar9 = 1;
          }
          else {
            uVar9 = (**(code **)*puVar18)();
            uVar9 = uVar9 ^ 1;
          }
          lVar21 = *(long *)(lVar19 + 0xe6da8) + *(long *)(lVar19 + 0xe6da0);
          if ((*(char *)(lVar21 + 0x2f) == '\x02') &&
             (uVar24 = FUN_02849e60(lVar21), (uVar24 & 1) != 0)) {
            cVar5 = *(char *)(lVar21 + 0x2c);
            pcVar11 = (char *)FUN_0265c2a0((int)cVar5);
            if (pcVar11 != (char *)0x0) {
              local_48 = CONCAT71(local_48._1_7_,1);
              local_50 = pcVar11;
              if (*(long **)(pcVar11 + 0x28) == (long *)0x0) {
                uVar8 = 0;
              }
              else {
                puVar18 = (undefined8 *)**(long **)(pcVar11 + 0x28);
                uVar8 = 0;
                if (puVar18 != (undefined8 *)0x0) {
                  uVar8 = (**(code **)*puVar18)();
                }
              }
              local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar8,(undefined1)local_48)) &
                         0xffffffffffff01ff;
              local_58 = PTR_DAT_04bb67a0 + 0x10;
              uVar10 = FUN_026b318c(*(long *)(pcVar11 + 0x10) + *(long *)(pcVar11 + 8),lVar21);
              FUN_02640184(&local_58);
              FUN_021d7650((int)cVar5,uVar10,0xfffffffd,1);
            }
          }
          if ((((uVar9 & 1) == 0) && (*(long *)(lVar19 + 0xe6dc0) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0xe6dc0) + 8),
             puVar18 != (undefined8 *)0x0)) {
            (**(code **)*puVar18)();
          }
        }
      }
      else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
              (lVar19 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar19 != 0))
      goto LAB_02150428;
    }
    uVar24 = (ulong)local_28;
    if (((local_28 < 10) && ((&DAT_053fee41)[uVar24 * 0xba0] != '\0')) &&
       ((&DAT_053feddc)[uVar24 * 0x2e8] == 0x13)) {
      FUN_02150b74(&DAT_053febf8 + uVar24 * 0xba0,uVar24,1);
    }
    break;
  case 0x21:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "MuseumCafeExitTime";
    local_58 = puVar1;
    FUN_027490f0(local_28,&local_58);
    uVar24 = FUN_021c7440();
    if ((uVar24 & 1) != 0) {
      local_50 = "MuseumCafeExitTime";
      local_58 = puVar1;
      FUN_027494ac(uVar9,&local_58,1);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x244) = 0;
    }
    if (*(int *)(param_1 + 0x1e4) == 0x21) {
      *(undefined2 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)(param_1 + 0x1ea) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0x22001d0005;
    }
  }
  return;
}

