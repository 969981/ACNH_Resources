
void FUN_03641170(long param_1,byte param_2,long param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  uint uVar31;
  long lVar32;
  code *pcVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  bool bVar37;
  ulong uVar38;
  
  uVar36 = *(uint *)(param_3 + 0x48);
  uVar31 = 2 - *(int *)(param_3 + 0x4c);
  uVar34 = 0;
  if (uVar36 != 0) {
    uVar34 = uVar31 / uVar36;
  }
  iVar28 = (**(code **)(param_3 + 0x68))
                     (param_3,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c));
  uVar36 = *(uint *)(param_3 + 0x48);
  uVar31 = 3 - *(int *)(param_3 + 0x4c);
  uVar34 = 0;
  if (uVar36 != 0) {
    uVar34 = uVar31 / uVar36;
  }
  iVar29 = (**(code **)(param_3 + 0x68))
                     (param_3,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c));
  uVar36 = iVar28 + iVar29 * 0x100;
  if (uVar36 >> 0xd == 2) {
    uVar31 = 2;
    if (0x802 < uVar36 >> 3) {
      uVar31 = 3;
    }
  }
  else {
    uVar31 = *(uint *)(&DAT_04057d60 + (ulong)(uVar36 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar31 * 0x28;
  uVar31 = *(uint *)(lVar32 + 0x48);
  uVar34 = uVar36 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar31 != 0) {
    uVar6 = uVar34 / uVar31;
  }
  bVar7 = (**(code **)(lVar32 + 0x68))(param_3,(uVar34 - uVar6 * uVar31) + *(int *)(lVar32 + 0x4c));
  uVar31 = uVar36 + 1;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar8 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c));
  uVar31 = uVar36 + 2;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar9 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c));
  uVar31 = uVar36 + 3;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar10 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 4;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar11 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 5;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar12 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 6;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar13 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 7;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar14 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 8;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar15 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 9;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar16 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 10;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar17 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0xb;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar18 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0xc;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar19 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0xd;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar20 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0xe;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar21 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0xf;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar22 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0x10;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar23 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0x11;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar24 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar31 = uVar36 + 0x12;
  if (uVar31 >> 0xd == 2) {
    uVar34 = 2;
    if (0x802 < uVar31 >> 3) {
      uVar34 = 3;
    }
  }
  else {
    uVar34 = *(uint *)(&DAT_04057d60 + (ulong)(uVar31 >> 0xd) * 4);
  }
  lVar32 = param_3 + (ulong)uVar34 * 0x28;
  uVar34 = *(uint *)(lVar32 + 0x48);
  uVar31 = uVar31 - *(int *)(lVar32 + 0x4c);
  uVar6 = 0;
  if (uVar34 != 0) {
    uVar6 = uVar31 / uVar34;
  }
  bVar25 = (**(code **)(lVar32 + 0x68))(param_3,(uVar31 - uVar6 * uVar34) + *(int *)(lVar32 + 0x4c))
  ;
  uVar36 = uVar36 + 0x13;
  if (uVar36 >> 0xd == 2) {
    uVar31 = 2;
    if (0x802 < uVar36 >> 3) {
      uVar31 = 3;
    }
  }
  else {
    uVar31 = *(uint *)(&DAT_04057d60 + (ulong)(uVar36 >> 0xd) * 4);
  }
  puVar35 = (uint *)(param_3 + 0x48 + (ulong)uVar31 * 0x28);
  uVar31 = *puVar35;
  uVar36 = uVar36 - puVar35[1];
  uVar34 = 0;
  if (uVar31 != 0) {
    uVar34 = uVar36 / uVar31;
  }
  bVar26 = (**(code **)(puVar35 + 8))(param_3,(uVar36 - uVar34 * uVar31) + puVar35[1]);
  uVar36 = *(uint *)(param_3 + 0x48);
  uVar31 = 8 - *(int *)(param_3 + 0x4c);
  uVar34 = 0;
  if (uVar36 != 0) {
    uVar34 = uVar31 / uVar36;
  }
  bVar27 = (**(code **)(param_3 + 0x68))
                     (param_3,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c));
  if (param_2 == 0) {
    return;
  }
  uVar38 = 0;
  do {
    iVar28 = *(int *)(param_1 + 0x20);
    while (iVar28 != 1) {
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      bVar2 = *(byte *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c));
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      if (bVar7 == 0xff) {
        if (bVar27 < bVar2) goto LAB_03641ad8;
LAB_03641a64:
        uVar36 = *(uint *)(param_3 + 0x48);
        uVar31 = 0xe - *(int *)(param_3 + 0x4c);
        uVar34 = 0;
        if (uVar36 != 0) {
          uVar34 = uVar31 / uVar36;
        }
        iVar28 = (**(code **)(param_3 + 0x68))
                           (param_3,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c));
        pcVar33 = *(code **)(param_3 + 0x58);
        plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x60) >> 1));
        if ((*(ulong *)(param_3 + 0x60) & 1) != 0) {
          pcVar33 = *(code **)(pcVar33 + *plVar1);
        }
        uVar36 = *(uint *)(param_3 + 0x48);
        uVar31 = 0xe - *(int *)(param_3 + 0x4c);
        uVar34 = 0;
        if (uVar36 != 0) {
          uVar34 = uVar31 / uVar36;
        }
        (*pcVar33)(plVar1,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c),iVar28 + 1);
        uVar30 = 0;
        bVar37 = true;
      }
      else {
        if (bVar2 == bVar7) goto LAB_03641a64;
        if (bVar8 != 0xff) {
          if (bVar2 == bVar8) goto LAB_03641a64;
          if (bVar9 != 0xff) {
            if (bVar2 == bVar9) goto LAB_03641a64;
            if (bVar10 != 0xff) {
              if (bVar2 == bVar10) goto LAB_03641a64;
              if (bVar11 != 0xff) {
                if (bVar2 == bVar11) goto LAB_03641a64;
                if (bVar12 != 0xff) {
                  if (bVar2 == bVar12) goto LAB_03641a64;
                  if (bVar13 != 0xff) {
                    if (bVar2 == bVar13) goto LAB_03641a64;
                    if (bVar14 != 0xff) {
                      if (bVar2 == bVar14) goto LAB_03641a64;
                      if (bVar15 != 0xff) {
                        if (bVar2 == bVar15) goto LAB_03641a64;
                        if (bVar16 != 0xff) {
                          if (bVar2 == bVar16) goto LAB_03641a64;
                          if (bVar17 != 0xff) {
                            if (bVar2 == bVar17) goto LAB_03641a64;
                            if (bVar18 != 0xff) {
                              if (bVar2 == bVar18) goto LAB_03641a64;
                              if (bVar19 != 0xff) {
                                if (bVar2 == bVar19) goto LAB_03641a64;
                                if (bVar20 != 0xff) {
                                  if (bVar2 == bVar20) goto LAB_03641a64;
                                  if (bVar21 != 0xff) {
                                    if (bVar2 == bVar21) goto LAB_03641a64;
                                    if (bVar22 != 0xff) {
                                      if (bVar2 == bVar22) goto LAB_03641a64;
                                      if (bVar23 != 0xff) {
                                        if (bVar2 == bVar23) goto LAB_03641a64;
                                        if (bVar24 != 0xff) {
                                          if (bVar2 == bVar24) goto LAB_03641a64;
                                          if (bVar25 != 0xff) {
                                            if ((bVar2 == bVar25) ||
                                               (bVar26 != 0xff && bVar2 == bVar26))
                                            goto LAB_03641a64;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03641ad8:
        bVar37 = false;
        uVar30 = 0xff;
      }
      pcVar33 = *(code **)(param_3 + 0x58);
      plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x60) >> 1));
      uVar36 = *(uint *)(param_3 + 0x48);
      if ((*(ulong *)(param_3 + 0x60) & 1) != 0) {
        pcVar33 = *(code **)(pcVar33 + *plVar1);
      }
      uVar31 = 9 - *(int *)(param_3 + 0x4c);
      uVar34 = 0;
      if (uVar36 != 0) {
        uVar34 = uVar31 / uVar36;
      }
      (*pcVar33)(plVar1,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x4c),uVar30);
      uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c));
      FUN_03640e48(param_1);
      uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c));
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      FUN_03640e48(param_1);
      cVar5 = *(char *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c));
      do {
        FUN_03640e48(param_1);
        iVar28 = *(int *)(param_1 + 0x20);
      } while (iVar28 == 4);
      while (iVar28 == 1) {
        FUN_03640e48(param_1);
        iVar28 = *(int *)(param_1 + 0x20);
      }
      FUN_03640e48(param_1);
      if (bVar37) {
        if (cVar5 == '\0') {
          iVar28 = *(int *)(param_1 + 0x20);
          if (iVar28 == 3) {
            uVar36 = (uint)CONCAT11(uVar4,uVar3);
            do {
              if (uVar36 >> 0xd == 2) {
                uVar31 = 2;
                if (0x802 < uVar36 >> 3) {
                  uVar31 = 3;
                }
              }
              else {
                uVar31 = *(uint *)(&DAT_04057d60 + (ulong)(uVar36 >> 0xd) * 4);
              }
              lVar32 = param_3 + (ulong)uVar31 * 0x28;
              pcVar33 = *(code **)(lVar32 + 0x58);
              plVar1 = (long *)(param_3 + ((long)*(ulong *)(lVar32 + 0x60) >> 1));
              if ((*(ulong *)(lVar32 + 0x60) & 1) != 0) {
                pcVar33 = *(code **)(pcVar33 + *plVar1);
              }
              uVar31 = *(uint *)(lVar32 + 0x48);
              uVar34 = uVar36 - *(int *)(lVar32 + 0x4c);
              uVar6 = 0;
              if (uVar31 != 0) {
                uVar6 = uVar34 / uVar31;
              }
              (*pcVar33)(plVar1,(uVar34 - uVar6 * uVar31) + *(int *)(lVar32 + 0x4c),
                         *(undefined1 *)
                          (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c)));
              FUN_03640e48(param_1);
              iVar28 = *(int *)(param_1 + 0x20);
              uVar36 = uVar36 + 1;
            } while (iVar28 == 3);
          }
        }
        else {
          pcVar33 = *(code **)(param_3 + 0x80);
          plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x88) >> 1));
          if ((*(ulong *)(param_3 + 0x88) & 1) != 0) {
            pcVar33 = *(code **)(pcVar33 + *plVar1);
          }
          uVar36 = *(uint *)(param_3 + 0x70);
          uVar31 = 0x2001 - *(int *)(param_3 + 0x74);
          uVar34 = 0;
          if (uVar36 != 0) {
            uVar34 = uVar31 / uVar36;
          }
          (*pcVar33)(plVar1,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x74),6);
          pcVar33 = *(code **)(param_3 + 0x80);
          plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x88) >> 1));
          if ((*(ulong *)(param_3 + 0x88) & 1) != 0) {
            pcVar33 = *(code **)(pcVar33 + *plVar1);
          }
          uVar36 = *(uint *)(param_3 + 0x70);
          uVar31 = 0x2006 - *(int *)(param_3 + 0x74);
          uVar34 = 0;
          if (uVar36 != 0) {
            uVar34 = uVar31 / uVar36;
          }
          (*pcVar33)(plVar1,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x74),uVar4);
          pcVar33 = *(code **)(param_3 + 0x80);
          plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x88) >> 1));
          uVar36 = *(uint *)(param_3 + 0x70);
          if ((*(ulong *)(param_3 + 0x88) & 1) != 0) {
            pcVar33 = *(code **)(pcVar33 + *plVar1);
          }
          uVar31 = 0x2006 - *(int *)(param_3 + 0x74);
          uVar34 = 0;
          if (uVar36 != 0) {
            uVar34 = uVar31 / uVar36;
          }
          (*pcVar33)(plVar1,(uVar31 - uVar34 * uVar36) + *(int *)(param_3 + 0x74),uVar3);
          *(undefined1 *)(param_4 + 0x58) = 0;
          *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_4 + 0x4c);
          while (iVar28 = *(int *)(param_1 + 0x20), iVar28 == 3) {
            FUN_036486a4(param_4,*(undefined1 *)
                                  (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x2c)));
            FUN_03640e48(param_1);
          }
        }
      }
      else {
        while (iVar28 = *(int *)(param_1 + 0x20), iVar28 == 3) {
          FUN_03640e48(param_1);
        }
      }
      while (iVar28 == 4) {
        FUN_03640e48(param_1);
        iVar28 = *(int *)(param_1 + 0x20);
      }
      uVar38 = uVar38 + 1;
      if (uVar38 == param_2) {
        return;
      }
    }
    FUN_03640e48(param_1);
  } while( true );
}

