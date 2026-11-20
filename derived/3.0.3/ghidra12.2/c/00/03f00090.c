
void FUN_03f00090(long param_1,long *param_2,byte param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  char *pcVar20;
  undefined *local_110;
  ulong local_108;
  long local_100;
  char *local_f8;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_0074fda4(&local_100,&DAT_040e92be,param_2[1]);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar2 = uVar14;
      if (*(uint *)(param_1 + 0x10) <= uVar14) {
        uVar2 = 0;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x48);
      uVar2 = *(uint *)(lVar9 + 0x48);
      if (0 < (int)uVar2) {
        uVar18 = 0;
        do {
          lVar16 = *(long *)(*(long *)(lVar9 + 0x40) + uVar18 * 8);
          uVar4 = *(uint *)(lVar16 + 0x170);
          if (0 < (int)uVar4) {
            uVar17 = 0;
            do {
              lVar10 = *(long *)(*(long *)(lVar16 + 0x168) + uVar17 * 8);
              if ((lVar10 == 0) ||
                 (uVar15 = *(ulong *)(lVar10 + 0x90) & 0xfffffffffffffffe, uVar15 == 0))
              goto LAB_03f001b4;
              local_110 = puVar1;
              local_108 = uVar15;
              (**(code **)(*param_2 + 0x18))(param_2);
              uVar11 = param_2[1];
              if (uVar11 == uVar15) {
LAB_03f00174:
                *(byte *)(*(long *)(*(long *)(lVar16 + 0x168) + uVar17 * 8) + 0x9f) = param_3 & 1;
                break;
              }
              uVar15 = 0;
              bVar6 = true;
              do {
                lVar10 = local_108 + 2 + uVar15;
                cVar5 = *(char *)(lVar10 + -2);
                if (cVar5 != *(char *)(uVar11 + uVar15)) break;
                if (cVar5 == '\0') {
                  if (bVar6) goto LAB_03f00174;
                  break;
                }
                cVar5 = *(char *)(lVar10 + -1);
                if (cVar5 != *(char *)(uVar11 + uVar15 + 1)) break;
                if (cVar5 == '\0') goto LAB_03f00174;
                cVar5 = *(char *)(local_108 + 2 + uVar15);
                if (cVar5 != *(char *)(uVar11 + uVar15 + 2)) break;
                if (cVar5 == '\0') goto LAB_03f00174;
                bVar6 = uVar15 < 0x7fffe;
                uVar15 = uVar15 + 3;
              } while (uVar15 != 0x80001);
              (**(code **)(local_100 + 0x18))(&local_100);
              pcVar20 = local_f8;
              uVar15 = local_108;
              lVar10 = 0;
              while (local_f8[lVar10] != '\0') {
                if (local_f8[lVar10 + 1] == '\0') {
                  lVar10 = lVar10 + 1;
                  break;
                }
                if (local_f8[lVar10 + 2] == '\0') {
                  lVar10 = lVar10 + 2;
                  iVar19 = (int)lVar10;
                  goto joined_r0x03f002cc;
                }
                lVar10 = lVar10 + 3;
                if (lVar10 == 0x80001) goto LAB_03f00174;
              }
              iVar19 = (int)lVar10;
joined_r0x03f002cc:
              if (iVar19 == 0) goto LAB_03f00174;
              (**(code **)(local_110 + 0x18))(&local_110);
              lVar12 = 0;
              do {
                iVar19 = (int)lVar10;
                if (*(char *)(local_108 + lVar12) == '\0') {
LAB_03f0032c:
                  iVar7 = (int)lVar12 - iVar19;
                  if (iVar19 <= (int)lVar12) goto LAB_03f00334;
                  goto LAB_03f001b4;
                }
                if (*(char *)(local_108 + lVar12 + 1) == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_03f0032c;
                }
                if (*(char *)(local_108 + lVar12 + 2) == '\0') {
                  iVar8 = (int)lVar12 + 2;
                  iVar7 = iVar8 - iVar19;
                  if (iVar8 < iVar19) goto LAB_03f001b4;
                  goto LAB_03f00334;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              iVar7 = -iVar19;
              if (iVar19 < 1) {
LAB_03f00334:
                if (iVar19 < 1) goto LAB_03f00174;
                pcVar13 = (char *)(uVar15 + (long)iVar7);
                while( true ) {
                  if (*pcVar13 != *pcVar20) break;
                  lVar10 = lVar10 + -1;
                  pcVar13 = pcVar13 + 1;
                  pcVar20 = pcVar20 + 1;
                  if (lVar10 == 0) goto LAB_03f00174;
                }
              }
LAB_03f001b4:
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar4);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar2);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
  }
  return;
}

