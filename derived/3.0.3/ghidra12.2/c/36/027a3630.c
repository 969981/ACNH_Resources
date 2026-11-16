
void FUN_027a3630(ushort *param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  ushort uVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  ushort *puVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  uint *puVar20;
  int *piVar21;
  ushort uVar22;
  undefined8 local_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb27d0;
  puVar7 = PTR_DAT_04bb2208;
  lVar17 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
      if (0xff < (uint)(int)sVar6) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) {
        return;
      }
    }
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c ||
        (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
      lVar17 = *(long *)PTR_DAT_04bb2208;
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar8 = FUN_006bd550(param_3[1],0);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar8);
      lVar17 = FUN_00ad5fc0(lVar17 + 0x1960,&local_70);
      if (lVar17 != 0) {
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "PlayerSonkatsuQuestEnable";
        iVar9 = FUN_0274bce0(param_2,&local_70);
        if (iVar9 != 0) {
          lVar18 = *(long *)puVar7;
          (**(code **)(*param_3 + 0x18))(param_3);
          uVar8 = FUN_006bd550(param_3[1],0);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar8);
          puVar12 = (uint *)FUN_00ad5fc0(lVar18 + 0x1960,&local_70);
          puVar2 = PTR_DAT_04bb6428;
          puVar7 = PTR_DAT_04bb6420;
          if (puVar12 != (uint *)0x0) {
            puVar15 = param_1 + 0x200;
            if (*puVar12 != 0) {
              cVar19 = *PTR_DAT_04bb6420;
              do {
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *(undefined8 *)puVar2 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                  *puVar7 = 1;
                  *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                  uVar10 = *puVar12;
                }
                else {
                  uVar10 = *(uint *)(puVar2 + 0x20);
                  if (-1 < (int)uVar10) {
                    if (((ushort *)((ulong)uVar10 + (long)puVar12) != (ushort *)0x0) &&
                       (uVar4 = *(ushort *)((ulong)uVar10 + (long)puVar12), uVar4 < 0x200)) {
                      puVar15 = (ushort *)((long)puVar15 + (ulong)uVar4);
                    }
                    break;
                  }
                  if (uVar10 != 0xffffffff) break;
                  uVar10 = *puVar12;
                }
                if ((uVar10 == 0) || (puVar20 = (uint *)(ulong)uVar10, puVar12 == puVar20)) break;
                lVar18 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar20)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar12 + (lVar18 - (long)puVar20);
                if (lVar18 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar20));
                *(undefined4 *)(puVar2 + 0x20) = 0xfffffffe;
                if (uVar16 == 0) break;
                piVar21 = (int *)(lVar18 + 4);
                while (piVar21[-1] != 0x54706054) {
                  piVar21 = piVar21 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_027a38c4;
                }
                iVar9 = 0;
                if (*piVar21 != -1) {
                  iVar9 = *piVar21;
                }
                *(int *)(puVar2 + 0x20) = iVar9;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_027a38c4:
            if ((char)*puVar15 != '\0') {
              lVar18 = **(long **)puVar1;
              bVar5 = *(byte *)(lVar18 + 0x473);
              if ((long)(char)bVar5 != 0xffffffffffffffff) {
                pbVar3 = (byte *)(lVar18 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
                if (7 < bVar5) {
                  pbVar3 = (byte *)(lVar18 + 0x48);
                }
                if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar18 + 0x472) != bVar5)) {
                  pcVar13 = (char *)FUN_00abfe70(lVar17,0xc,0xafb1f366,0);
                  if (pcVar13 == (char *)0x0) {
                    return;
                  }
                  if (*pcVar13 == '\0') {
                    return;
                  }
                }
              }
              puVar7 = PTR_DAT_04bb64d0;
              puVar14 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)PTR_DAT_04bb64d0);
              puVar15 = param_1;
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x200)) {
                puVar15 = param_1 + *puVar14;
              }
              uVar4 = *puVar15;
              puVar15 = (ushort *)
                        FUN_00abfe70(lVar17,5,&LAB_0110b14c,*(undefined8 *)PTR_DAT_04bc3828);
              if (puVar15 == (ushort *)0x0) {
                uVar22 = 0;
              }
              else {
                uVar22 = *puVar15;
              }
              FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
              if (0xfffe < (int)param_4) {
                param_4 = 0xffff;
              }
              param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
              puVar15 = (ushort *)
                        FUN_00abfe70(lVar17,5,&LAB_0110b14c,*(undefined8 *)PTR_DAT_04bc3828);
              if (puVar15 == (ushort *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)*puVar15;
              }
              if ((int)uVar10 <= (int)param_4) {
                param_4 = uVar10;
              }
              puVar14 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
              puVar15 = param_1;
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x200)) {
                puVar15 = param_1 + *puVar14;
              }
              *puVar15 = (ushort)param_4;
              puVar2 = PTR_DAT_04bc3828;
              puVar1 = PTR_DAT_04bb2020;
              if (uVar4 < uVar22) {
                puVar14 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
                puVar15 = param_1;
                if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x200)) {
                  puVar15 = param_1 + *puVar14;
                }
                uVar4 = *puVar15;
                puVar15 = (ushort *)FUN_00abfe70(lVar17,5,&LAB_0110b14c,*(undefined8 *)puVar2);
                if ((puVar15 == (ushort *)0x0) || (*puVar15 <= uVar4)) {
                  pcVar13 = (char *)FUN_00abfe70(lVar17,0xf,0x45f320f2,
                                                 *(undefined8 *)PTR_DAT_04bb6410);
                  local_70 = puVar1 + 0x10;
                  pcStack_68 = *(char **)PTR_PTR_04bb6418;
                  if (pcVar13 != (char *)0x0) {
                    pcStack_68 = pcVar13;
                  }
                  FUN_027a3ce0(0,&local_70,param_2);
                }
              }
              puVar14 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
              puVar15 = param_1;
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x200)) {
                puVar15 = param_1 + *puVar14;
              }
              uVar4 = *puVar15;
              puVar15 = (ushort *)FUN_00abfe70(lVar17,5,&LAB_0110b14c,*(undefined8 *)puVar2);
              if ((puVar15 == (ushort *)0x0) || (*puVar15 <= uVar4)) {
                pcStack_68 = "TalkVillager";
                local_70 = puVar1 + 0x10;
                uVar16 = FUN_00710cb0(param_3,&local_70);
                if ((uVar16 & 1) != 0) {
                  pcStack_68 = "TalkVillagerClearToday";
                  local_70 = puVar1 + 0x10;
                  FUN_0274bfe8(param_2,&local_70,1);
                }
              }
              puVar14 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
              puVar15 = param_1;
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x200)) {
                puVar15 = param_1 + *puVar14;
              }
              uVar4 = *puVar15;
              puVar15 = (ushort *)FUN_00abfe70(lVar17,5,&LAB_0110b14c,*(undefined8 *)puVar2);
              if ((puVar15 == (ushort *)0x0) || (*puVar15 <= uVar4)) {
                param_1 = param_1 + 0x2a54;
                puVar15 = (ushort *)FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
                if ((puVar15 != (ushort *)0x0) && (*puVar15 < 0x200)) {
                  param_1 = (ushort *)((long)param_1 + (ulong)*puVar15);
                }
                if ((char)*param_1 != '\0') {
                  local_78 = FUN_00a82790(*(undefined8 *)PTR_DAT_04bb32e8);
                  puVar1 = puVar1 + 0x10;
                  pcStack_68 = "EarthDay";
                  local_70 = puVar1;
                  uVar10 = FUN_0087ce40(*(undefined8 *)PTR_DAT_04bb32f0,&local_70,&local_78);
                  if (uVar10 < 0x10) {
                    pcStack_68 = "EarthDayBonus";
                    local_70 = puVar1;
                    uVar11 = FUN_0274bce0(param_2,&local_70);
                    pcStack_68 = "EarthDayBonus";
                    local_70 = puVar1;
                    FUN_0274bfe8(param_2,&local_70,(uVar11 | 1 << (ulong)(uVar10 & 0x1f)) & 0xffff);
                  }
                }
              }
              FUN_00abfe70(lVar17,8,0x54706054,*(undefined8 *)puVar7);
            }
          }
        }
      }
    }
  }
  return;
}

