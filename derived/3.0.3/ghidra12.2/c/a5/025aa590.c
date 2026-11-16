
void FUN_025aa590(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  char cVar14;
  undefined2 uVar15;
  uint *puVar16;
  int *piVar17;
  long lVar18;
  undefined *local_148;
  char *pcStack_140;
  uint local_ec;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 *******local_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******local_c8;
  undefined8 ******local_c0;
  undefined8 *****local_b8;
  undefined8 ****local_b0;
  undefined8 ***local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_e8 = 0;
  local_e0 = (undefined1 *)0x0;
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  local_d8 = &local_c8;
  local_a8 = &local_a0;
  local_a0 = &local_98;
  local_98 = &local_90;
  local_90 = 0;
  if (local_88 != (undefined1 *)0x0) {
    local_e8 = 0x800000000;
    local_e0 = local_88;
  }
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x10);
  pppppppuStack_d0 = local_d8;
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar11 == 0) {
      return;
    }
    lVar11 = lVar11 + 0x70;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    if (lVar11 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar11 + 0x1bf240);
  if ((*(long **)(lVar11 + 0x1bf260) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x1bf260), puVar12 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar12)();
    uVar8 = uVar8 & 0xffffffff;
  }
  local_ec = FUN_028d6b0c(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  if (local_ec == 0) goto LAB_025aa974;
  if (local_ec == 4) {
    if ((local_e8._4_4_ <= (int)local_e8) || (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 == 0))
    goto LAB_025aa974;
    uVar6 = FUN_006bd550(&DAT_04071901,0);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar6);
    puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
    puVar4 = PTR_DAT_04bb40a8;
    puVar3 = PTR_DAT_04bb40a0;
    if (puVar9 == (uint *)0x0) goto LAB_025aa974;
    if (*puVar9 == 0) goto LAB_025aa928;
    cVar14 = *PTR_DAT_04bb40a0;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar2) goto LAB_025aa918;
        if (uVar2 != 0xffffffff) goto LAB_025aa928;
      }
      puVar16 = (uint *)(ulong)*puVar9;
      uVar15 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025aa92c;
      lVar18 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
      if (lVar18 == 0) goto LAB_025aa928;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      uVar15 = 0;
      if (uVar10 == 0) goto LAB_025aa92c;
      piVar17 = (int *)(lVar18 + 4);
      while (piVar17[-1] != 0x54706054) {
        piVar17 = piVar17 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar15 = 0;
          goto LAB_025aa92c;
        }
      }
      iVar7 = 0;
      if (*piVar17 != -1) {
        iVar7 = *piVar17;
      }
      *(int *)(puVar4 + 0x40) = iVar7;
    } while (*puVar9 != 0);
    uVar15 = 0;
  }
  else {
    if (local_ec < 0xc) {
      puVar12 = *(undefined8 **)(PTR_DAT_04bbbac0 + (ulong)local_ec * 8 + 0x38);
    }
    else {
      puVar12 = &DAT_0407ebb1;
    }
    if ((local_e8._4_4_ <= (int)local_e8) || (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 == 0))
    goto LAB_025aa974;
    uVar6 = FUN_006bd550(puVar12,0);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar6);
    puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
    puVar4 = PTR_DAT_04bb40a8;
    puVar3 = PTR_DAT_04bb40a0;
    if (puVar9 == (uint *)0x0) goto LAB_025aa974;
    if (*puVar9 == 0) goto LAB_025aa928;
    cVar14 = *PTR_DAT_04bb40a0;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar2) goto LAB_025aa918;
        if (uVar2 != 0xffffffff) goto LAB_025aa928;
      }
      puVar16 = (uint *)(ulong)*puVar9;
      uVar15 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025aa92c;
      lVar18 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
      if (lVar18 == 0) goto LAB_025aa928;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      uVar15 = 0;
      if (uVar10 == 0) goto LAB_025aa92c;
      piVar17 = (int *)(lVar18 + 4);
      while (piVar17[-1] != 0x54706054) {
        piVar17 = piVar17 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar15 = 0;
          goto LAB_025aa92c;
        }
      }
      iVar7 = 0;
      if (*piVar17 != -1) {
        iVar7 = *piVar17;
      }
      *(int *)(puVar4 + 0x40) = iVar7;
    } while (*puVar9 != 0);
    uVar15 = 0;
  }
LAB_025aa92c:
  pppppppuVar5 = local_d8;
  if ((int)local_e8 < local_e8._4_4_) {
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    *(undefined2 *)pppppppuVar5 = 0;
    if ((int)local_e8 < local_e8._4_4_) {
      *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
      local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
    }
    *(undefined2 *)pppppppuVar5 = uVar15;
  }
LAB_025aa974:
  if ((local_ec != 4) &&
     (uVar10 = FUN_028d63bc(*(long *)(lVar11 + 0x1bf248) + *plVar1), (uVar10 & 1) != 0)) {
    if (((int)local_e8 < local_e8._4_4_) && (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 != 0)) {
      uVar6 = FUN_006bd550(&DAT_04071901,0);
      local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar6);
      puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
      pppppppuVar5 = local_d8;
      puVar4 = PTR_DAT_04bb40a8;
      puVar3 = PTR_DAT_04bb40a0;
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 == 0) {
LAB_025aaacc:
          uVar15 = 0;
        }
        else {
          cVar14 = *PTR_DAT_04bb40a0;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x40);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0)
                goto LAB_025aaacc;
                uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_025aaad0;
              }
              if (uVar2 != 0xffffffff) goto LAB_025aaacc;
            }
            puVar16 = (uint *)(ulong)*puVar9;
            uVar15 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025aaad0;
            lVar18 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) goto LAB_025aaacc;
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
            uVar15 = 0;
            if (uVar10 == 0) goto LAB_025aaad0;
            piVar17 = (int *)(lVar18 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar15 = 0;
                goto LAB_025aaad0;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar4 + 0x40) = iVar7;
          } while (*puVar9 != 0);
          uVar15 = 0;
        }
LAB_025aaad0:
        if ((int)local_e8 < local_e8._4_4_) {
          if (local_d8 != (undefined8 *******)0x0) {
            local_d8 = (undefined8 *******)*local_d8;
          }
          *(undefined2 *)pppppppuVar5 = 0;
          if ((int)local_e8 < local_e8._4_4_) {
            *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
            local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
          }
          *(undefined2 *)pppppppuVar5 = uVar15;
        }
      }
    }
  }
  puVar9 = (uint *)FUN_028d6104(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  if (((ulong)puVar9 & 1) != 0) {
    if (((int)local_e8 < local_e8._4_4_) && (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 != 0)) {
      uVar6 = FUN_006bd550(&DAT_0406c81e,0);
      local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar6);
      puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
      pppppppuVar5 = local_d8;
      puVar4 = PTR_DAT_04bb40a8;
      puVar3 = PTR_DAT_04bb40a0;
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 == 0) {
LAB_025aac68:
          uVar15 = 0;
        }
        else {
          cVar14 = *PTR_DAT_04bb40a0;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x40);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0)
                goto LAB_025aac68;
                uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_025aac6c;
              }
              if (uVar2 != 0xffffffff) goto LAB_025aac68;
            }
            puVar16 = (uint *)(ulong)*puVar9;
            uVar15 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025aac6c;
            lVar18 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) goto LAB_025aac68;
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
            uVar15 = 0;
            if (uVar10 == 0) goto LAB_025aac6c;
            piVar17 = (int *)(lVar18 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar15 = 0;
                goto LAB_025aac6c;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar4 + 0x40) = iVar7;
          } while (*puVar9 != 0);
          uVar15 = 0;
        }
LAB_025aac6c:
        if ((int)local_e8 < local_e8._4_4_) {
          if (local_d8 != (undefined8 *******)0x0) {
            local_d8 = (undefined8 *******)*local_d8;
          }
          *(undefined2 *)pppppppuVar5 = 0;
          if ((int)local_e8 < local_e8._4_4_) {
            *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
            local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
          }
          *(undefined2 *)pppppppuVar5 = uVar15;
        }
      }
    }
  }
  psVar13 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar13 == 0) {
    local_48 = *(uint **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_48 >> 0x20) < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_148 = (undefined *)(lVar18 + -0x15180);
      puVar9 = (uint *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_148);
      local_48 = puVar9;
    }
    psVar13 = (short *)&local_48;
    uVar10 = (ulong)local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = (uint *)(CONCAT26((short)uVar10,(undefined6)local_48) & 0xff00ffffffffffff);
  }
  local_148 = *(undefined **)psVar13;
  iVar7 = FUN_028d4550(puVar9,&local_148);
  local_148._0_4_ = iVar7;
  if (iVar7 != 0) {
    if (((int)local_e8 < local_e8._4_4_) && (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 != 0)) {
      local_148._0_4_ = FUN_006bd550(&DAT_04066e58,0);
      puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
      pppppppuVar5 = local_d8;
      puVar4 = PTR_DAT_04bb40a8;
      puVar3 = PTR_DAT_04bb40a0;
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 == 0) {
LAB_025aae6c:
          uVar15 = 0;
        }
        else {
          cVar14 = *PTR_DAT_04bb40a0;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x40);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0)
                goto LAB_025aae6c;
                uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_025aae70;
              }
              if (uVar2 != 0xffffffff) goto LAB_025aae6c;
            }
            puVar16 = (uint *)(ulong)*puVar9;
            uVar15 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025aae70;
            lVar18 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) goto LAB_025aae6c;
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
            uVar15 = 0;
            if (uVar10 == 0) goto LAB_025aae70;
            piVar17 = (int *)(lVar18 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar15 = 0;
                goto LAB_025aae70;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar4 + 0x40) = iVar7;
          } while (*puVar9 != 0);
          uVar15 = 0;
        }
LAB_025aae70:
        if ((int)local_e8 < local_e8._4_4_) {
          if (local_d8 != (undefined8 *******)0x0) {
            local_d8 = (undefined8 *******)*local_d8;
          }
          *(undefined2 *)pppppppuVar5 = 0;
          if ((int)local_e8 < local_e8._4_4_) {
            *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
            local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
          }
          *(undefined2 *)pppppppuVar5 = uVar15;
        }
      }
    }
  }
  uVar10 = FUN_028d4428(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  if ((uVar10 & 1) != 0) {
    if (((int)local_e8 < local_e8._4_4_) && (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 != 0)) {
      local_148._0_4_ = FUN_006bd550(&DAT_040eeb6e,0);
      puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
      pppppppuVar5 = local_d8;
      puVar4 = PTR_DAT_04bb40a8;
      puVar3 = PTR_DAT_04bb40a0;
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 == 0) {
LAB_025ab008:
          uVar15 = 0;
        }
        else {
          cVar14 = *PTR_DAT_04bb40a0;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x40);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0)
                goto LAB_025ab008;
                uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_025ab00c;
              }
              if (uVar2 != 0xffffffff) goto LAB_025ab008;
            }
            puVar16 = (uint *)(ulong)*puVar9;
            uVar15 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025ab00c;
            lVar18 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) goto LAB_025ab008;
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
            uVar15 = 0;
            if (uVar10 == 0) goto LAB_025ab00c;
            piVar17 = (int *)(lVar18 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar15 = 0;
                goto LAB_025ab00c;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar4 + 0x40) = iVar7;
          } while (*puVar9 != 0);
          uVar15 = 0;
        }
LAB_025ab00c:
        if ((int)local_e8 < local_e8._4_4_) {
          if (local_d8 != (undefined8 *******)0x0) {
            local_d8 = (undefined8 *******)*local_d8;
          }
          *(undefined2 *)pppppppuVar5 = 0;
          if ((int)local_e8 < local_e8._4_4_) {
            *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
            local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
          }
          *(undefined2 *)pppppppuVar5 = uVar15;
        }
      }
    }
  }
  uVar10 = FUN_028d6250(*(long *)(lVar11 + 0x1bf248) + *plVar1);
  if ((uVar10 & 1) != 0) {
    if (((int)local_e8 < local_e8._4_4_) && (lVar18 = *(long *)PTR_DAT_04bb4130, lVar18 != 0)) {
      uVar6 = FUN_006bd550(&DAT_0409b637,0);
      local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar6);
      puVar9 = (uint *)FUN_0079e4d0(lVar18,&local_148);
      pppppppuVar5 = local_d8;
      puVar4 = PTR_DAT_04bb40a8;
      puVar3 = PTR_DAT_04bb40a0;
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 == 0) {
LAB_025ab1a8:
          uVar15 = 0;
        }
        else {
          cVar14 = *PTR_DAT_04bb40a0;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x40);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0)
                goto LAB_025ab1a8;
                uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_025ab1ac;
              }
              if (uVar2 != 0xffffffff) goto LAB_025ab1a8;
            }
            puVar16 = (uint *)(ulong)*puVar9;
            uVar15 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_025ab1ac;
            lVar18 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar9 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) goto LAB_025ab1a8;
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
            uVar15 = 0;
            if (uVar10 == 0) goto LAB_025ab1ac;
            piVar17 = (int *)(lVar18 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar15 = 0;
                goto LAB_025ab1ac;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar4 + 0x40) = iVar7;
          } while (*puVar9 != 0);
          uVar15 = 0;
        }
LAB_025ab1ac:
        if ((int)local_e8 < local_e8._4_4_) {
          if (local_d8 != (undefined8 *******)0x0) {
            local_d8 = (undefined8 *******)*local_d8;
          }
          *(undefined2 *)pppppppuVar5 = 0;
          if ((int)local_e8 < local_e8._4_4_) {
            *(undefined8 ********)(local_e0 + (long)(int)local_e8 * 8) = pppppppuVar5;
            local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
          }
          *(undefined2 *)pppppppuVar5 = uVar15;
        }
      }
    }
  }
  local_148 = PTR_DAT_04bb2020 + 0x10;
  pcStack_140 = "VisitorSpNpcNum";
  iVar7 = (int)local_e8;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_148,(long)(int)local_e8);
    iVar7 = (int)local_e8;
  }
  if (0 < iVar7) {
    uVar10 = 0;
    do {
      FUN_0071b954(&local_148,"VisitorSpNpcID_%d",uVar10 & 0xffffffff);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_148,**(undefined2 **)(local_e0 + uVar10 * 8));
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)local_e8);
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x1bf260) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x1bf260) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
LAB_025aa918:
  if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0) {
LAB_025aa928:
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
  }
  goto LAB_025aa92c;
}

