
byte FUN_01b168d0(uint param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  int local_24;
  undefined *local_20;
  char *pcStack_18;
  
  puVar4 = PTR_DAT_04bbfec8;
  puVar3 = PTR_DAT_04bbfec0;
  if ((int)*(uint *)(DAT_0532a780 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a780 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(DAT_0532a780 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a780 + 200) <= param_1 ||
         (*(char *)(*(long *)(DAT_0532a780 + 0xd0) + (long)(int)param_1) != '\0')))) &&
       (((param_1 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * param_1 + (uint)(ushort)puVar8[2] * 8 + iVar6) +
                       (long)puVar8);
      goto joined_r0x01b16a54;
    }
  }
  else if (param_1 < *(uint *)(DAT_0532a780 + 0x1c0)) {
    uVar1 = param_1;
    if (*(uint *)(DAT_0532a780 + 0x1b0) <= param_1) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a780 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x01b16a54:
    if (puVar8 != (uint *)0x0) {
      bVar5 = 0;
      if (*puVar8 != 0) {
        cVar9 = *PTR_DAT_04bbfec0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 8);
            if (-1 < (int)uVar1) {
              bVar5 = 0;
              if (((char *)((ulong)uVar1 + (long)puVar8) == (char *)0x0) ||
                 (bVar5 = 0, *(char *)((ulong)uVar1 + (long)puVar8) == '\0')) break;
              if (param_1 == 0x114) goto switchD_01b16ae0_caseD_10a;
              local_24 = param_2;
              if (param_1 == 0x111) {
                local_20 = PTR_DAT_04bb2020 + 0x10;
                pcStack_18 = "BCAT_EventFlag_008";
                bVar5 = FUN_0273f0a0(&local_20);
                break;
              }
              if (param_2 == -1) {
                if (param_1 != 0x10a) {
                  if (param_1 == 0x112) goto switchD_01b16ae0_caseD_112;
                  if (param_1 == 0x113) {
switchD_01b16ae0_caseD_113:
                    pcStack_18 = "UnlockSplatoonCollabo";
                    goto LAB_01b16b90;
                  }
                  goto LAB_01b16a58;
                }
switchD_01b16ae0_caseD_10a:
                bVar5 = 1;
              }
              else {
                bVar5 = 0;
                switch(param_1) {
                case 0x10a:
                  goto switchD_01b16ae0_caseD_10a;
                case 0x10b:
                  pcStack_18 = "UnlockSanrioCollabo";
                  break;
                case 0x10c:
                  pcStack_18 = "UnlockSanrioCollabo2";
                  break;
                case 0x10d:
                  pcStack_18 = "UnlockSanrioCollabo3";
                  break;
                case 0x10e:
                  pcStack_18 = "UnlockSanrioCollabo4";
                  break;
                case 0x10f:
                  pcStack_18 = "UnlockSanrioCollabo5";
                  break;
                case 0x110:
                  pcStack_18 = "UnlockSanrioCollabo6";
                  break;
                default:
                  goto switchD_01b16ae0_caseD_111;
                case 0x112:
switchD_01b16ae0_caseD_112:
                  pcStack_18 = "UnlockZeldaCollabo";
                  break;
                case 0x113:
                  goto switchD_01b16ae0_caseD_113;
                case 0x117:
                  pcStack_18 = "AOC_EventFlag_002";
                }
LAB_01b16b90:
                local_20 = PTR_DAT_04bb2020 + 0x10;
                iVar6 = FUN_0274ce10(&local_24,&local_20);
                bVar5 = iVar6 != 0;
              }
              break;
            }
            if (uVar1 != 0xffffffff) goto LAB_01b16a58;
          }
          puVar10 = (uint *)(ulong)*puVar8;
          bVar5 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar10)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar8 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) goto LAB_01b16a58;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
          bVar5 = 0;
          if (uVar7 == 0) break;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != 0x8f225c6) {
            piVar11 = piVar11 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              bVar5 = 0;
              goto switchD_01b16ae0_caseD_111;
            }
          }
          bVar5 = 0;
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar4 + 8) = iVar6;
          if (*puVar8 == 0) break;
        } while( true );
      }
      goto switchD_01b16ae0_caseD_111;
    }
  }
LAB_01b16a58:
  bVar5 = 0;
switchD_01b16ae0_caseD_111:
  return bVar5 & 1;
}

