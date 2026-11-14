
void FUN_017e3150(long param_1,ulong param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint local_34;
  
  *(undefined4 *)(param_1 + 0xa8) = 6;
  puVar3 = PTR_DAT_04bb6298;
  *(undefined4 *)(param_1 + 0x148) = 0;
  uVar2 = *(ushort *)puVar3;
  uVar11 = (ulong)(short)uVar2;
  if (uVar11 == 0xffffffffffffffff) {
LAB_017e3438:
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar13,0);
        iVar5 = 0;
        if ((iVar8 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
          iVar5 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_0529240c == iVar5) {
LAB_017e34bc:
      uVar7 = 0x14;
      goto LAB_017e3fcc;
    }
    uVar11 = FUN_0180b3e0();
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_0180b660();
      if ((uVar11 & 1) != 0) goto LAB_017e34bc;
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0x14;
      bVar4 = FUN_03772f40();
      *(byte *)(param_1 + 0x1be) = bVar4 & 1;
    }
    goto switchD_017e3ee4_default;
  }
  local_34 = 6;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
  if (0xff < (uint)(int)(short)uVar2) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 6 & 1) == 0) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && (local_34 = 0, (*puVar1 & 1) != 0)) goto LAB_017e31c8;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      local_34 = 7;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) == 0) goto LAB_017e3368;
      if (DAT_05aed670 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar13,0);
          puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar13 = &DAT_055c04a0;
          }
        }
      }
      local_34 = FUN_017e4f94(*(undefined4 *)(puVar13 + 7));
      *(uint *)(param_1 + 0x138) = local_34;
      lVar9 = *(long *)PTR_DAT_04bb46b0;
      if (lVar9 == 0) {
LAB_017e386c:
        uVar7 = 2;
        goto LAB_017e3fcc;
      }
      puVar13 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) != 0) {
        if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
           (lVar9 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar9 != 0)) goto LAB_017e3860;
        goto LAB_017e386c;
      }
      lVar9 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar9 == 0) goto LAB_017e386c;
      lVar9 = lVar9 + 0x70;
LAB_017e3860:
      if (9 < local_34) goto LAB_017e386c;
      lVar12 = lVar9 + 0x1962d8 + (ulong)local_34 * 0x10d8;
      if (9 < local_34) {
        lVar12 = lVar9 + 0x1962d8;
      }
      *(undefined4 *)(param_1 + 0xa8) = 2;
      if (*(long **)(lVar12 + 0x28) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar12 + 0x28);
        uVar11 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar13)();
        }
      }
      uVar7 = *(uint *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
      if (2 < uVar7) {
        uVar7 = 0;
      }
      if (uVar7 - 1 < 2) {
        *(uint *)(param_1 + 0xa8) = uVar7;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      goto switchD_017e3ee4_default;
    }
LAB_017e3368:
    local_34 = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) {
      local_34 = 0x19;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x19 & 1) == 0) || (local_34 = 7, (*puVar1 >> 7 & 1) == 0))
      goto LAB_017e3438;
      *(undefined4 *)(param_1 + 0xa8) = 0x14;
      bVar4 = FUN_03772b50();
      *(byte *)(param_1 + 0x1bd) = bVar4 & 1;
      goto switchD_017e3ee4_default;
    }
    uVar11 = FUN_01810f30();
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0xc;
      *(undefined1 *)(param_1 + 0x1bc) = 1;
      goto switchD_017e3ee4_default;
    }
    switch(*(undefined4 *)(param_1 + 0x128)) {
    case 0:
switchD_017e3f7c_caseD_0:
      uVar7 = 0xb;
      break;
    case 1:
      uVar7 = 0xc;
      break;
    case 2:
      uVar7 = 0xd;
      break;
    case 3:
      uVar7 = 0xe;
      break;
    case 4:
      uVar7 = 0xf;
      break;
    case 5:
      uVar7 = 0x10;
      break;
    default:
      goto switchD_017e3ee4_default;
    }
    goto LAB_017e3fcc;
  }
LAB_017e31c8:
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar13 + 7);
  if (iVar5 < 0x2922957e) {
    if (((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) && (iVar5 != 0x1490248c)) goto LAB_017e37cc;
LAB_017e3570:
    lVar9 = FUN_02642ea0();
    if (lVar9 == 0) {
      uVar6 = 8;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar6 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar6) {
        uVar6 = 0;
      }
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar6 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar6) {
        uVar6 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    local_34 = uVar6;
  }
  else {
    if (((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) || (iVar5 == 0x51b9e069))
    goto LAB_017e3570;
LAB_017e37cc:
    local_34 = 0;
    uVar11 = FUN_02b5f400(&local_34);
    uVar6 = 0;
    if ((uVar11 & 1) != 0) {
      uVar6 = FUN_0266ca90(local_34);
    }
  }
  uVar7 = 1;
  if (uVar6 == 1) goto LAB_017e3fcc;
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar13 + 7);
  if (iVar5 < 0x2922957e) {
    if ((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) {
      iVar8 = 0x1490248c;
      goto LAB_017e36e4;
    }
LAB_017e36ec:
    lVar9 = FUN_02642ea0();
    if (lVar9 == 0) {
      uVar7 = 8;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    local_34 = uVar7;
  }
  else {
    if ((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) goto LAB_017e36ec;
    iVar8 = 0x51b9e069;
LAB_017e36e4:
    if (iVar5 == iVar8) goto LAB_017e36ec;
    local_34 = 0;
    uVar11 = FUN_02b5f400(&local_34);
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      uVar7 = FUN_0266ca90(local_34);
    }
  }
  if (uVar7 == 2) goto LAB_017e3fcc;
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar13 + 7);
  if (iVar5 < 0x2922957e) {
    if ((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) {
      iVar8 = 0x1490248c;
      goto LAB_017e38dc;
    }
LAB_017e38e4:
    lVar9 = FUN_02642ea0();
    if (lVar9 == 0) {
      uVar7 = 8;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    local_34 = uVar7;
  }
  else {
    if ((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) goto LAB_017e38e4;
    iVar8 = 0x51b9e069;
LAB_017e38dc:
    if (iVar5 == iVar8) goto LAB_017e38e4;
    local_34 = 0;
    uVar11 = FUN_02b5f400(&local_34);
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      uVar7 = FUN_0266ca90(local_34);
    }
  }
  if (uVar7 == 3) {
    uVar7 = 6;
    goto LAB_017e3fcc;
  }
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar13 + 7);
  if (iVar5 < 0x2922957e) {
    if ((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) {
      iVar8 = 0x1490248c;
      goto LAB_017e3aa0;
    }
LAB_017e3aa8:
    lVar9 = FUN_02642ea0();
    if (lVar9 == 0) {
      uVar7 = 8;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    local_34 = uVar7;
  }
  else {
    if ((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) goto LAB_017e3aa8;
    iVar8 = 0x51b9e069;
LAB_017e3aa0:
    if (iVar5 == iVar8) goto LAB_017e3aa8;
    local_34 = 0;
    uVar11 = FUN_02b5f400(&local_34);
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      uVar7 = FUN_0266ca90(local_34);
    }
  }
  if (uVar7 == 4) {
    if (*(int *)(param_1 + 0x128) == 1) goto switchD_017e3ee4_caseD_1;
    if (*(int *)(param_1 + 0x128) == 0) {
      uVar7 = 7;
      goto LAB_017e3fcc;
    }
    goto switchD_017e3ee4_default;
  }
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar13 + 7);
  if (iVar5 < 0x2922957e) {
    if ((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) {
      iVar8 = 0x1490248c;
      goto LAB_017e3c58;
    }
LAB_017e3c60:
    lVar9 = FUN_02642ea0();
    if (lVar9 == 0) {
      uVar7 = 8;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if (8 < uVar7) {
        uVar7 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    local_34 = uVar7;
  }
  else {
    if ((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) goto LAB_017e3c60;
    iVar8 = 0x51b9e069;
LAB_017e3c58:
    if (iVar5 == iVar8) goto LAB_017e3c60;
    local_34 = 0;
    uVar11 = FUN_02b5f400(&local_34);
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      uVar7 = FUN_0266ca90(local_34);
    }
  }
  if (uVar7 == 5) {
    iVar5 = *(int *)(param_1 + 0x128);
    if (iVar5 != 2) {
      if (iVar5 == 1) goto switchD_017e3ee4_caseD_1;
      if (iVar5 == 0) {
        uVar7 = 8;
        goto LAB_017e3fcc;
      }
      goto switchD_017e3ee4_default;
    }
switchD_017e3ee4_caseD_2:
    uVar7 = 4;
LAB_017e3fcc:
    *(uint *)(param_1 + 0xa8) = uVar7;
  }
  else {
    if (DAT_05aed670 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    iVar5 = *(int *)(puVar13 + 7);
    if (iVar5 < 0x2922957e) {
      if ((iVar5 != 0x80e20d8) && (iVar5 != 0xb6a5301)) {
        iVar8 = 0x1490248c;
        goto LAB_017e3e38;
      }
LAB_017e3e40:
      lVar9 = FUN_02642ea0();
      if (lVar9 == 0) {
        uVar7 = 8;
      }
      else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
              (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
        uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        if (8 < uVar7) {
          uVar7 = 0;
        }
      }
      else {
        uVar11 = (**(code **)*puVar13)();
        uVar7 = *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        if (8 < uVar7) {
          uVar7 = 0;
        }
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar13 != (undefined8 *)0x0))
        {
          (**(code **)*puVar13)();
        }
      }
      local_34 = uVar7;
    }
    else {
      if ((iVar5 == 0x2922957e) || (iVar5 == 0x7a616e2f)) goto LAB_017e3e40;
      iVar8 = 0x51b9e069;
LAB_017e3e38:
      if (iVar5 == iVar8) goto LAB_017e3e40;
      local_34 = 0;
      uVar11 = FUN_02b5f400(&local_34);
      uVar7 = 0;
      if ((uVar11 & 1) != 0) {
        uVar7 = FUN_0266ca90(local_34);
      }
    }
    if (uVar7 == 6) {
      switch(*(undefined4 *)(param_1 + 0x128)) {
      case 0:
        uVar7 = 9;
        break;
      case 1:
switchD_017e3ee4_caseD_1:
        uVar7 = 3;
        break;
      case 2:
        goto switchD_017e3ee4_caseD_2;
      case 3:
switchD_017e3ee4_caseD_3:
        uVar7 = 5;
        break;
      default:
        goto switchD_017e3ee4_default;
      }
      goto LAB_017e3fcc;
    }
    iVar5 = FUN_017e4de8();
    if (iVar5 == 7) {
      switch(*(undefined4 *)(param_1 + 0x128)) {
      case 0:
        uVar7 = 10;
        break;
      case 1:
        goto switchD_017e3ee4_caseD_1;
      case 2:
        goto switchD_017e3ee4_caseD_2;
      case 3:
        goto switchD_017e3ee4_caseD_3;
      case 4:
switchD_017e3f1c_caseD_4:
        uVar7 = 0x11;
        break;
      default:
        goto switchD_017e3ee4_default;
      }
      goto LAB_017e3fcc;
    }
    iVar5 = FUN_017e4de8();
    if (iVar5 == 8) {
      switch(*(undefined4 *)(param_1 + 0x128)) {
      case 0:
        goto switchD_017e3f7c_caseD_0;
      case 1:
        goto switchD_017e3ee4_caseD_1;
      case 2:
        goto switchD_017e3ee4_caseD_2;
      case 3:
        goto switchD_017e3ee4_caseD_3;
      case 4:
        goto switchD_017e3f1c_caseD_4;
      case 5:
        uVar7 = 0x12;
        goto LAB_017e3fcc;
      }
    }
  }
switchD_017e3ee4_default:
  if ((param_2 & 1) == 0) goto LAB_017e4c18;
  uVar2 = *(ushort *)puVar3;
  uVar11 = (ulong)(short)uVar2;
  lVar9 = DAT_05aed670;
  if (uVar11 != 0xffffffffffffffff) {
    local_34 = 6;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
    if (0xff < (uint)(int)(short)uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      local_34 = 0x20;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((puVar1[1] & 1) == 0) || (local_34 = 0, (*puVar1 & 1) == 0)) {
        if (*(char *)(param_1 + 0x1bc) == '\0') {
          local_34 = 0x19;
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
          if (0xff < uVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar1 >> 0x19 & 1) == 0) || (local_34 = 7, (*puVar1 >> 7 & 1) == 0))
          goto LAB_017e42f0;
          if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
            puVar13 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar5 = FUN_006bd550(*puVar13,0);
            if ((((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
                (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
               (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0)) goto LAB_017e4c18;
          }
          FUN_02917780(0);
          uVar11 = FUN_03772b50();
          if ((uVar11 & 1) == 0) {
            FUN_02917690(1);
            goto LAB_017e4c18;
          }
          uVar10 = 1;
          goto LAB_017e4488;
        }
        goto switchD_017e4084_caseD_1;
      }
    }
    if (*(int *)(param_1 + 0x128) != 0) goto LAB_017e4c18;
    local_34 = 6;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      local_34 = 0x20;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((puVar1[1] & 1) == 0) || (local_34 = 0, (*puVar1 & 1) == 0)) goto LAB_017e4c18;
    }
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    default:
      goto switchD_017e4084_caseD_1;
    case 7:
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 != 0x758f7eaf) goto LAB_017e435c;
        if (DAT_05aed670 == 0) goto LAB_017e4c18;
        lVar12 = *(long *)(DAT_05aed670 + 0x330);
        if (((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) &&
           ((lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8), lVar12 != 0 && (lVar12 != 0x40)))) {
          *(undefined1 *)(lVar12 + -4) = 0;
        }
      }
      goto LAB_017e4360;
    case 8:
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 == 0x758f7eaf) {
          if (DAT_05aed670 == 0) goto LAB_017e4c18;
          lVar12 = *(long *)(DAT_05aed670 + 0x330);
          if ((((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) &&
              (lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8), lVar12 != 0)) && (lVar12 != 0x40)) {
            *(undefined1 *)(lVar12 + -4) = 0;
          }
        }
        else if (DAT_05aed670 == 0) goto LAB_017e4c18;
      }
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 != 0x758f7eaf) goto LAB_017e4734;
        if (DAT_05aed670 == 0) goto LAB_017e4c18;
        lVar12 = *(long *)(DAT_05aed670 + 0x330);
        if (((lVar12 != 0) && (2 < *(uint *)(lVar12 + 0x260))) &&
           ((lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8), lVar12 != 0 &&
            (lVar12 != 0x40)))) {
          *(undefined1 *)(lVar12 + -4) = 0;
        }
      }
      goto LAB_017e4738;
    case 9:
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 == 0x758f7eaf) {
          if (DAT_05aed670 == 0) goto LAB_017e4c18;
          lVar12 = *(long *)(DAT_05aed670 + 0x330);
          if ((((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) &&
              (lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8), lVar12 != 0)) && (lVar12 != 0x40)) {
            *(undefined1 *)(lVar12 + -4) = 0;
          }
        }
        else if (DAT_05aed670 == 0) goto LAB_017e4c18;
      }
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 == 0x758f7eaf) {
          if (DAT_05aed670 == 0) goto LAB_017e4c18;
          lVar12 = *(long *)(DAT_05aed670 + 0x330);
          if (((lVar12 != 0) && (2 < *(uint *)(lVar12 + 0x260))) &&
             ((lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8), lVar12 != 0 &&
              (lVar12 != 0x40)))) {
            *(undefined1 *)(lVar12 + -4) = 0;
          }
        }
        else if (DAT_05aed670 == 0) goto LAB_017e4c18;
      }
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        lVar9 = DAT_05aed670;
        if (iVar5 != 0x758f7eaf) goto LAB_017e4998;
        if (DAT_05aed670 == 0) goto LAB_017e4c18;
        lVar12 = *(long *)(DAT_05aed670 + 0x330);
        if (((lVar12 != 0) && (3 < *(uint *)(lVar12 + 0x260))) &&
           ((lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8),
            lVar12 != 0 && (lVar12 != 0x40)))) {
          *(undefined1 *)(lVar12 + -4) = 0;
        }
      }
      goto LAB_017e499c;
    case 10:
      goto switchD_017e4084_caseD_a;
    case 0xb:
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar13,0);
          lVar9 = DAT_05aed670;
          if (iVar5 == 0x758f7eaf) {
            if (DAT_05aed670 == 0) goto LAB_017e4c18;
            lVar12 = *(long *)(DAT_05aed670 + 0x330);
            if (((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) &&
               ((lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8), lVar12 != 0 && (lVar12 != 0x40))))
            {
              *(undefined1 *)(lVar12 + -4) = 0;
            }
          }
          else if (DAT_05aed670 == 0) goto LAB_017e4c18;
        }
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar13,0);
          lVar9 = DAT_05aed670;
          if (iVar5 == 0x758f7eaf) {
            if (DAT_05aed670 == 0) goto LAB_017e4c18;
            lVar12 = *(long *)(DAT_05aed670 + 0x330);
            if ((((lVar12 != 0) && (2 < *(uint *)(lVar12 + 0x260))) &&
                (lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8), lVar12 != 0)) &&
               (lVar12 != 0x40)) {
              *(undefined1 *)(lVar12 + -4) = 0;
            }
          }
          else if (DAT_05aed670 == 0) goto LAB_017e4c18;
        }
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar13,0);
          lVar9 = DAT_05aed670;
          if (iVar5 == 0x758f7eaf) {
            if (DAT_05aed670 == 0) goto LAB_017e4c18;
            lVar12 = *(long *)(DAT_05aed670 + 0x330);
            if (((lVar12 != 0) && (3 < *(uint *)(lVar12 + 0x260))) &&
               ((lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8),
                lVar12 != 0 && (lVar12 != 0x40)))) {
              *(undefined1 *)(lVar12 + -4) = 0;
            }
          }
          else if (DAT_05aed670 == 0) goto LAB_017e4c18;
        }
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar13,0);
          lVar9 = DAT_05aed670;
          if (iVar5 == 0x758f7eaf) {
            if (DAT_05aed670 == 0) goto LAB_017e4c18;
            lVar12 = *(long *)(DAT_05aed670 + 0x330);
            if (((lVar12 != 0) && (4 < *(uint *)(lVar12 + 0x260))) &&
               ((lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8)
                                             + 8) + 8), lVar12 != 0 && (lVar12 != 0x40)))) {
              *(undefined1 *)(lVar12 + -4) = 0;
            }
          }
          else if (DAT_05aed670 == 0) goto LAB_017e4c18;
        }
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar13,0);
          if (((((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
               (lVar9 = *(long *)(DAT_05aed670 + 0x330), lVar9 != 0)) &&
              ((5 < *(uint *)(lVar9 + 0x260) &&
               (lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 600) + 8
                                                                         ) + 8) + 8) + 8) + 8),
               lVar9 != 0)))) && (lVar9 != 0x40)) {
            *(undefined1 *)(lVar9 + -4) = 0;
          }
        }
      }
      goto LAB_017e4c18;
    }
  }
  if (*(char *)(param_1 + 0x1bc) == '\0') {
LAB_017e42f0:
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar13,0);
        iVar5 = 0;
        if ((iVar8 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
          iVar5 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_05292410 == iVar5) {
      FUN_017e5198();
      goto LAB_017e4c18;
    }
    uVar11 = FUN_0180c830();
    if ((uVar11 & 1) != 0) {
      FUN_017e5388();
      goto LAB_017e4c18;
    }
    uVar11 = FUN_0180c8d0();
    if ((uVar11 & 1) != 0) {
      FUN_017e5588();
      goto LAB_017e4c18;
    }
    uVar11 = FUN_0180b660();
    if ((uVar11 & 1) == 0) goto LAB_017e4c18;
    uVar10 = 0;
LAB_017e4488:
    FUN_02917780(uVar10);
    goto LAB_017e4c18;
  }
switchD_017e4084_caseD_1:
  if (DAT_05aed670 == 0) goto LAB_017e4c18;
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))
                        (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if ((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) {
        lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8);
        if ((lVar12 != 0) && (lVar12 != 0x40)) {
          *(undefined1 *)(lVar12 + -4) = 1;
        }
      }
    }
    else {
LAB_017e435c:
      lVar9 = DAT_05aed670;
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
    }
  }
LAB_017e4360:
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if ((lVar12 != 0) && (2 < *(uint *)(lVar12 + 0x260))) {
        lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8);
        if ((lVar12 != 0) && (lVar12 != 0x40)) {
          *(undefined1 *)(lVar12 + -4) = 1;
        }
      }
    }
    else {
LAB_017e4734:
      lVar9 = DAT_05aed670;
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
    }
  }
LAB_017e4738:
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if ((lVar12 != 0) && (3 < *(uint *)(lVar12 + 0x260))) {
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8);
        if ((lVar12 != 0) && (lVar12 != 0x40)) {
          *(undefined1 *)(lVar12 + -4) = 1;
        }
      }
    }
    else {
LAB_017e4998:
      lVar9 = DAT_05aed670;
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
    }
  }
LAB_017e499c:
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if ((lVar12 != 0) && (4 < *(uint *)(lVar12 + 0x260))) {
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8) + 8)
        ;
        if ((lVar12 != 0) && (lVar12 != 0x40)) {
          *(undefined1 *)(lVar12 + -4) = 1;
        }
      }
    }
    else {
LAB_017e4b94:
      lVar9 = DAT_05aed670;
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
    }
  }
LAB_017e4b98:
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    if (((((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
         (lVar9 = *(long *)(DAT_05aed670 + 0x330), lVar9 != 0)) &&
        ((5 < *(uint *)(lVar9 + 0x260) &&
         (lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 600) + 8) + 8)
                                               + 8) + 8) + 8), lVar9 != 0)))) && (lVar9 != 0x40)) {
      *(undefined1 *)(lVar9 + -4) = 1;
    }
  }
LAB_017e4c18:
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_017e5788(param_1);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  return;
switchD_017e4084_caseD_a:
  if (DAT_05aed670 == 0) goto LAB_017e4c18;
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))
                        (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if (((lVar12 != 0) && (1 < *(uint *)(lVar12 + 0x260))) &&
         ((lVar12 = *(long *)(*(long *)(lVar12 + 600) + 8), lVar12 != 0 && (lVar12 != 0x40)))) {
        *(undefined1 *)(lVar12 + -4) = 0;
      }
    }
    else if (DAT_05aed670 == 0) goto LAB_017e4c18;
  }
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if ((((lVar12 != 0) && (2 < *(uint *)(lVar12 + 0x260))) &&
          (lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8), lVar12 != 0)) &&
         (lVar12 != 0x40)) {
        *(undefined1 *)(lVar12 + -4) = 0;
      }
    }
    else if (DAT_05aed670 == 0) goto LAB_017e4c18;
  }
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e4c18;
      lVar12 = *(long *)(DAT_05aed670 + 0x330);
      if (((lVar12 != 0) && (3 < *(uint *)(lVar12 + 0x260))) &&
         ((lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8),
          lVar12 != 0 && (lVar12 != 0x40)))) {
        *(undefined1 *)(lVar12 + -4) = 0;
      }
    }
    else if (DAT_05aed670 == 0) goto LAB_017e4c18;
  }
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar13 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar13,0);
    lVar9 = DAT_05aed670;
    if (iVar5 != 0x758f7eaf) goto LAB_017e4b94;
    if (DAT_05aed670 == 0) goto LAB_017e4c18;
    lVar12 = *(long *)(DAT_05aed670 + 0x330);
    if (((lVar12 != 0) && (4 < *(uint *)(lVar12 + 0x260))) &&
       ((lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 600) + 8) + 8) + 8) + 8
                           ), lVar12 != 0 && (lVar12 != 0x40)))) {
      *(undefined1 *)(lVar12 + -4) = 0;
    }
  }
  goto LAB_017e4b98;
}

