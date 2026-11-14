
undefined8 FUN_017081d0(long param_1,long *param_2,undefined4 param_3,ulong param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  char cVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  byte bVar20;
  char *pcVar21;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  char *local_78;
  undefined1 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  if (*(long *)(param_1 + 0x1138) == 0) {
    puVar12 = &DAT_04c931a0;
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
  }
  local_88 = FUN_006bd550(puVar12[1],0);
  puVar7 = (uint *)FUN_0171ec68(&local_88);
  (**(code **)(*param_2 + 0x18))(param_2);
  iVar6 = FUN_006bd550(param_2[1],0);
  puVar8 = (uint *)FUN_0171ee68(param_2);
  puVar5 = PTR_DAT_04bbde90;
  puVar4 = PTR_DAT_04bbde88;
  bVar20 = 0;
  if ((puVar7 != (uint *)0x0) && (puVar8 != (uint *)0x0)) {
    uVar14 = *puVar7;
    if ((uVar14 != 0) && (puVar7 != (uint *)(ulong)uVar14)) {
      puVar13 = (uint *)((long)puVar7 - (long)(ulong)uVar14);
      if (((*puVar13 != 0) && (uVar14 = puVar13[1], uVar14 != 0)) &&
         ((ulong)(ushort)puVar13[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar14 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar14);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bbdff8) {
            uVar14 = *puVar8;
            uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bbdff8 + 8) + (long)(int)uVar2 * 2);
            if (uVar14 != 0) {
              cVar16 = *PTR_DAT_04bbde88;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *(undefined8 *)puVar5 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                  uVar14 = *puVar8;
                }
                else if (*(int *)(puVar5 + 0x2c) != -1) break;
                puVar7 = (uint *)(ulong)uVar14;
                if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) break;
                lVar10 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                if (lVar10 == 0) break;
                uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                if (uVar17 == 0) break;
                piVar18 = (int *)(lVar10 + 4);
                while (piVar18[-1] != 0x42ad246a) {
                  piVar18 = piVar18 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_017083e4;
                }
                iVar1 = 0;
                if (*piVar18 != -1) {
                  iVar1 = *piVar18;
                }
                *(int *)(puVar5 + 0x2c) = iVar1;
                uVar14 = *puVar8;
                if (uVar14 == 0) break;
              } while( true );
            }
LAB_017083e4:
            puVar5 = PTR_DAT_04bbde90;
            puVar4 = PTR_DAT_04bbde88;
            if (uVar3 < 7) {
              switch(uVar3) {
              case 1:
                local_80 = (undefined *)CONCAT44(local_80._4_4_,2);
                uVar14 = *puVar8;
                if (uVar14 != 0) {
                  cVar16 = *PTR_DAT_04bbde88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      uVar14 = *puVar8;
                    }
                    else {
                      uVar2 = *(uint *)(puVar5 + 0x2c);
                      uVar17 = (ulong)uVar2;
                      if (-1 < (int)uVar2) goto LAB_01708944;
                      if (uVar2 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar14;
                    if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) break;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                    if (lVar10 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                    if (uVar17 == 0) break;
                    piVar18 = (int *)(lVar10 + 4);
                    while (piVar18[-1] != 0x42ad246a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto switchD_01708410_default;
                    }
                    iVar1 = 0;
                    if (*piVar18 != -1) {
                      iVar1 = *piVar18;
                    }
                    *(int *)(puVar5 + 0x2c) = iVar1;
                    uVar14 = *puVar8;
                    if (uVar14 == 0) break;
                  } while( true );
                }
                break;
              case 2:
                local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
                uVar14 = *puVar8;
                if (uVar14 != 0) {
                  cVar16 = *PTR_DAT_04bbde88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      uVar14 = *puVar8;
                    }
                    else {
                      uVar2 = *(uint *)(puVar5 + 0x2c);
                      uVar17 = (ulong)uVar2;
                      if (-1 < (int)uVar2) goto LAB_01708944;
                      if (uVar2 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar14;
                    if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) break;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                    if (lVar10 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                    if (uVar17 == 0) break;
                    piVar18 = (int *)(lVar10 + 4);
                    while (piVar18[-1] != 0x42ad246a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto switchD_01708410_default;
                    }
                    iVar1 = 0;
                    if (*piVar18 != -1) {
                      iVar1 = *piVar18;
                    }
                    *(int *)(puVar5 + 0x2c) = iVar1;
                    uVar14 = *puVar8;
                    if (uVar14 == 0) break;
                  } while( true );
                }
                break;
              case 3:
                local_80 = (undefined *)CONCAT44(local_80._4_4_,4);
                uVar14 = *puVar8;
                if (uVar14 != 0) {
                  cVar16 = *PTR_DAT_04bbde88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      uVar14 = *puVar8;
                    }
                    else {
                      uVar2 = *(uint *)(puVar5 + 0x2c);
                      uVar17 = (ulong)uVar2;
                      if (-1 < (int)uVar2) goto LAB_01708944;
                      if (uVar2 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar14;
                    if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) break;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                    if (lVar10 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                    if (uVar17 == 0) break;
                    piVar18 = (int *)(lVar10 + 4);
                    while (piVar18[-1] != 0x42ad246a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto switchD_01708410_default;
                    }
                    iVar1 = 0;
                    if (*piVar18 != -1) {
                      iVar1 = *piVar18;
                    }
                    *(int *)(puVar5 + 0x2c) = iVar1;
                    uVar14 = *puVar8;
                    if (uVar14 == 0) break;
                  } while( true );
                }
                break;
              case 4:
                local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
                uVar14 = *puVar8;
                if (uVar14 != 0) {
                  cVar16 = *PTR_DAT_04bbde88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      uVar14 = *puVar8;
                    }
                    else {
                      uVar2 = *(uint *)(puVar5 + 0x2c);
                      uVar17 = (ulong)uVar2;
                      if (-1 < (int)uVar2) goto LAB_01708944;
                      if (uVar2 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar14;
                    if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) break;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                    if (lVar10 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                    if (uVar17 == 0) break;
                    piVar18 = (int *)(lVar10 + 4);
                    while (piVar18[-1] != 0x42ad246a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto switchD_01708410_default;
                    }
                    iVar1 = 0;
                    if (*piVar18 != -1) {
                      iVar1 = *piVar18;
                    }
                    *(int *)(puVar5 + 0x2c) = iVar1;
                    uVar14 = *puVar8;
                    if (uVar14 == 0) break;
                  } while( true );
                }
                break;
              case 5:
                local_80 = (undefined *)CONCAT44(local_80._4_4_,0x15);
                uVar14 = *puVar8;
                if (uVar14 != 0) {
                  cVar16 = *PTR_DAT_04bbde88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      uVar14 = *puVar8;
                    }
                    else {
                      uVar2 = *(uint *)(puVar5 + 0x2c);
                      if (-1 < (int)uVar2) {
                        if ((ulong)uVar2 + (long)puVar8 != 0) {
                          bVar20 = *(byte *)((ulong)uVar2 + (long)puVar8 + 2) >> 5 & 1;
                          goto LAB_017089b4;
                        }
                        break;
                      }
                      if (uVar2 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar14;
                    bVar20 = 0;
                    if ((puVar7 == (uint *)0x0) || (puVar8 == puVar7)) goto LAB_017089b4;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
                    if (lVar10 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
                    if (uVar17 == 0) break;
                    piVar18 = (int *)(lVar10 + 4);
                    while (piVar18[-1] != 0x42ad246a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto switchD_01708410_default;
                    }
                    iVar1 = 0;
                    if (*piVar18 != -1) {
                      iVar1 = *piVar18;
                    }
                    *(int *)(puVar5 + 0x2c) = iVar1;
                    uVar14 = *puVar8;
                    if (uVar14 == 0) break;
                  } while( true );
                }
              }
            }
            goto switchD_01708410_default;
          }
        }
      }
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) goto switchD_01708410_default;
    cVar16 = *PTR_DAT_04bbde88;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        uVar14 = *puVar8;
      }
      else if (*(int *)(puVar5 + 0x2c) != -1) goto switchD_01708410_default;
      puVar7 = (uint *)(ulong)uVar14;
      bVar20 = 0;
      if ((puVar7 == (uint *)0x0) || (bVar20 = 0, puVar8 == puVar7)) break;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar7);
      if (lVar10 == 0) goto switchD_01708410_default;
      uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      if (uVar17 == 0) goto switchD_01708410_default;
      piVar18 = (int *)(lVar10 + 4);
      while (piVar18[-1] != 0x42ad246a) {
        piVar18 = piVar18 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto switchD_01708410_default;
      }
      bVar20 = 0;
      iVar1 = 0;
      if (*piVar18 != -1) {
        iVar1 = *piVar18;
      }
      *(int *)(puVar5 + 0x2c) = iVar1;
      uVar14 = *puVar8;
    } while (uVar14 != 0);
  }
LAB_017089b4:
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  if (*(long *)(param_1 + 0x1138) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x1138) + 0x88);
    plVar19 = (long *)(lVar10 + 0x60);
    (**(code **)(*plVar19 + 0x18))(plVar19);
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcVar21 = *(char **)(lVar10 + 0x68);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar15 = (char *)param_2[1];
    if (pcVar21 != pcVar15) {
      pcVar21 = *(char **)(lVar10 + 0x68);
      if (*pcVar21 != *pcVar15) goto LAB_01708b68;
      if (*pcVar21 != '\0') {
        uVar17 = 0;
        do {
          uVar11 = uVar17;
          if ((uVar11 == 0x80000) || (pcVar21[uVar11 + 1] != pcVar15[uVar11 + 1]))
          goto LAB_01708b68;
          if (pcVar21[uVar11 + 1] == '\0') goto LAB_01708a90;
          if (pcVar21[uVar11 + 2] != pcVar15[uVar11 + 2]) goto LAB_01708b68;
          uVar17 = uVar11 + 2;
        } while (pcVar21[uVar11 + 2] != '\0');
        uVar11 = uVar11 + 1;
LAB_01708a90:
        if (uVar11 >> 0x13 != 0) goto LAB_01708b68;
      }
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    lVar10 = *(long *)(param_1 + 0x1138);
    if (lVar10 == 0) {
      puVar12 = &DAT_04c931a0;
    }
    else {
      uVar14 = 0;
      if (*(long *)(lVar10 + 0x78) != 0) {
        uVar14 = *(uint *)(*(long *)(lVar10 + 0x78) + 0x18);
      }
      uVar14 = (uint)(1 < uVar14);
      if (*(uint *)(lVar10 + 0x80) <= uVar14) {
        uVar14 = 0;
      }
      puVar12 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (long)(int)uVar14 * 0xe8 + 0x60);
    }
    if (*(char *)puVar12[1] != '\0') {
      FUN_01707f58(param_1,param_3,1,0);
      local_80._0_5_ = CONCAT14(1,param_3);
      local_70 = 1;
      local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
      local_6a = PTR_DAT_04bb37e0[2];
      local_69 = PTR_DAT_04bb37e0[3];
      local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_78 = *(char **)PTR_DAT_04bb37e0;
      local_62 = 0;
      local_64 = 0x101;
      FUN_0170f380(param_1,&local_80);
      return 0;
    }
  }
LAB_01708b68:
  puVar4 = local_80;
  if (bVar20 != 0) {
    if ((param_4 & 1) != 0) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
      lVar10 = *(long *)(param_1 + 0x1138);
      if (lVar10 == 0) {
        puVar12 = &DAT_04c931a0;
      }
      else {
        uVar14 = 0;
        if (*(long *)(lVar10 + 0x78) != 0) {
          uVar14 = *(uint *)(*(long *)(lVar10 + 0x78) + 0x18);
        }
        uVar14 = (uint)(1 < uVar14);
        if (*(uint *)(lVar10 + 0x80) <= uVar14) {
          uVar14 = 0;
        }
        puVar12 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (long)(int)uVar14 * 0xe8 + 0x60);
      }
      if (iVar6 == *(int *)(puVar12 + 0xb)) {
        local_80._5_3_ = SUB83(puVar4,5);
        local_80._0_5_ = CONCAT14(1,param_3);
        local_70 = 1;
        local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
        local_6a = PTR_DAT_04bb37e0[2];
        local_69 = PTR_DAT_04bb37e0[3];
        local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_78 = *(char **)PTR_DAT_04bb37e0;
        local_62 = 0;
        local_64 = 0x101;
        FUN_0170f380(param_1,&local_80);
        FUN_01707750(param_1,param_2);
        return 1;
      }
    }
    FUN_01707310(param_1,param_2,param_3,1,param_5 & 1);
    local_80._0_5_ = CONCAT14(1,param_3);
    local_70 = 1;
    local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
    local_6a = PTR_DAT_04bb37e0[2];
    local_69 = PTR_DAT_04bb37e0[3];
    local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_78 = *(char **)PTR_DAT_04bb37e0;
    local_62 = 0;
    local_64 = 0x101;
    FUN_0170f380(param_1,&local_80);
    FUN_01707750(param_1,param_2);
    return 1;
  }
  if ((param_4 & 1) != 0) {
    local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
    if (*(long *)(param_1 + 0x1138) == 0) {
      puVar12 = &DAT_04c931a0;
    }
    else {
      puVar12 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
    }
    if (iVar6 == *(int *)(puVar12 + 0xb)) {
      puVar7 = (uint *)FUN_0171ee68(param_2);
      if (puVar7 != (uint *)0x0) {
        uVar14 = *puVar7;
        local_84 = 0;
        if ((uVar14 != 0) && (puVar7 != (uint *)(ulong)uVar14)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar14);
          local_84 = 0;
          if (*puVar8 != 0) {
            uVar14 = puVar8[1];
            if ((uVar14 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar10 != 0) {
                uVar2 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar14);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bbdff8) &&
                   (local_84 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbdff8 + 8) + (long)(int)uVar2 * 2),
                   local_84 < 7)) goto LAB_01708db8;
              }
            }
            local_84 = 0;
          }
        }
LAB_01708db8:
        if (local_84 - 1 < 6) {
          uVar9 = *(undefined4 *)(&DAT_04176c6c + (long)(int)(local_84 - 1) * 4);
        }
        else {
          uVar9 = 0;
        }
        *(undefined4 *)(param_1 + 0x5ee0) = uVar9;
        local_80 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "FastLowerBodyWaitAnimType";
        if (((*(long *)(param_1 + 0x1138) != 0) &&
            (lVar10 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar10 != 0)) &&
           (plVar19 = *(long **)(lVar10 + 0x48), plVar19 != (long *)0x0)) {
          (**(code **)(*plVar19 + 0x28))(plVar19,&local_80,*(undefined4 *)(param_1 + 0x5ee0));
        }
      }
      local_80._0_5_ = CONCAT14(1,param_3);
      local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
      local_6a = PTR_DAT_04bb37e0[2];
      local_69 = PTR_DAT_04bb37e0[3];
      local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_78 = *(char **)PTR_DAT_04bb37e0;
      goto LAB_01708ff0;
    }
  }
  FUN_01707f58(param_1,param_3,1,0);
  puVar7 = (uint *)FUN_0171ee68(param_2);
  if (puVar7 != (uint *)0x0) {
    uVar14 = *puVar7;
    local_84 = 0;
    if ((uVar14 != 0) && (puVar7 != (uint *)(ulong)uVar14)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar14);
      local_84 = 0;
      if (*puVar8 != 0) {
        uVar14 = puVar8[1];
        if ((uVar14 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar14 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar14);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bbdff8) &&
               (local_84 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbdff8 + 8) + (long)(int)uVar2 * 2)
               , local_84 < 7)) goto LAB_01708e8c;
          }
        }
        local_84 = 0;
      }
    }
LAB_01708e8c:
    if (local_84 - 1 < 6) {
      uVar9 = *(undefined4 *)(&DAT_04176c6c + (long)(int)(local_84 - 1) * 4);
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)(param_1 + 0x5ee0) = uVar9;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "FastLowerBodyWaitAnimType";
    if (((*(long *)(param_1 + 0x1138) != 0) &&
        (lVar10 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar10 != 0)) &&
       (plVar19 = *(long **)(lVar10 + 0x48), plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x28))(plVar19,&local_80,*(undefined4 *)(param_1 + 0x5ee0));
    }
  }
  FUN_01707310(param_1,param_2,param_3,0,param_5 & 1);
  local_80._0_5_ = CONCAT14(1,param_3);
  local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
  local_6a = PTR_DAT_04bb37e0[2];
  local_69 = PTR_DAT_04bb37e0[3];
  local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_78 = *(char **)PTR_DAT_04bb37e0;
LAB_01708ff0:
  local_70 = 1;
  local_62 = 0;
  local_64 = 0x101;
  FUN_0170f380(param_1,&local_80);
  FUN_01707750(param_1,param_2);
  return 0;
LAB_01708944:
  if (((byte *)(uVar17 + (long)puVar8) == (byte *)0x0) ||
     ((*(byte *)(uVar17 + (long)puVar8) >> ((ulong)local_80 & 0xffffffff) & 1) == 0)) {
switchD_01708410_default:
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  goto LAB_017089b4;
}

