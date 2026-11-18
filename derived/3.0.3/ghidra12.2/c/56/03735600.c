
void FUN_03735600(long param_1,undefined8 *param_2,int *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined1 *__src;
  long *plVar22;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  
  if (DAT_04c487d4 != -1) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x1b & 1) == 0) {
      local_148 = CONCAT44(local_148._4_4_,0x1a);
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar4 >> 0x1a & 1) != 0) && (DAT_05ab5ea8 != 0)) {
        if (DAT_05aed670 == 0) {
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar19 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar15 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar15 != 0x758f7eaf) {
              puVar19 = &DAT_055c04a0;
            }
          }
        }
        if ((*(byte *)(param_1 + 0x1231) & 1) == 0) {
          if (*(int *)(puVar19 + 7) == -0x17df00c3) {
            FUN_0371bdb0();
          }
          else {
            FUN_037313b0(param_1);
          }
          *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x100;
        }
        iVar15 = *(int *)(puVar19 + 7);
        bVar5 = DAT_05ac0a90 == iVar15;
        bVar6 = DAT_05ac0aa0 == iVar15;
        bVar7 = DAT_05ac0ab0 == iVar15;
        bVar8 = DAT_05ac0ac0 == iVar15;
        bVar9 = DAT_05ac0ad0 == iVar15;
        bVar10 = DAT_05ac0ae0 == iVar15;
        bVar11 = DAT_05ac0af0 == iVar15;
        bVar12 = DAT_05ac0b00 == iVar15;
        bVar13 = DAT_05ac0b10 == iVar15;
        bVar14 = DAT_05ac0b20 == iVar15;
        if (*(int *)(param_1 + 0xe0) != 0) {
          plVar22 = *(long **)(param_1 + 0xe8);
          plVar2 = plVar22 + *(int *)(param_1 + 0xe0);
          puVar1 = PTR_DAT_04bb2d88 + 0x10;
          do {
            lVar21 = *plVar22;
            if (*(int *)(lVar21 + 0x3c) == *param_3) {
              local_85 = 0;
              local_134 = 0x3f800000;
              local_108 = 0x80;
              local_104[0] = 0;
              local_78 = 0;
              local_7c = 0;
              local_138 = 0;
              local_12c = 0;
              uStack_124 = 0;
              local_80 = 7;
              plVar20 = (long *)(lVar21 + 0x10);
              local_140 = 0;
              *(undefined4 *)(lVar21 + 8) = *(undefined4 *)PTR_DAT_04bb3238;
              local_148 = 0xffffffff00000000;
              local_118 = puVar1;
              local_110 = local_104;
              (**(code **)(*plVar20 + 0x18))(plVar20);
              __src = *(undefined1 **)(lVar21 + 0x18);
              if (local_104 != __src) {
                (**(code **)(*(long *)(lVar21 + 0x10) + 0x18))(plVar20);
                lVar18 = 0;
                do {
                  if (*(char *)(*(long *)(lVar21 + 0x18) + lVar18) == '\0') goto LAB_03735930;
                  lVar3 = *(long *)(lVar21 + 0x18) + lVar18;
                  if (*(char *)(lVar3 + 1) == '\0') {
                    lVar18 = lVar18 + 1;
                    goto LAB_03735930;
                  }
                  if (*(char *)(lVar3 + 2) == '\0') {
                    lVar18 = lVar18 + 2;
                    goto LAB_03735930;
                  }
                  lVar18 = lVar18 + 3;
                } while (lVar18 != 0x80001);
                lVar18 = 0;
LAB_03735930:
                iVar15 = (int)lVar18;
                if (local_108 <= (int)lVar18) {
                  iVar15 = local_108 + -1;
                }
                memcpy(local_104,__src,(long)iVar15);
                local_104[iVar15] = 0;
              }
              uVar17 = FUN_03725e90(param_1,&local_148,lVar21);
              if ((uVar17 & 1) != 0) {
                if (((((((((bVar5 || bVar6) || bVar7) || bVar8) || bVar9) || bVar10) || bVar11) ||
                     bVar12) || bVar13) || bVar14) {
                  if (DAT_05abbc50 == *(int *)(lVar21 + 0xe4)) {
LAB_03735818:
                    FUN_037289d0(param_1,plVar20,0);
                  }
                  else if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) &&
                          (*(int *)(lVar21 + 0x3c) == 0)) {
                    local_6c = 0x23;
                    local_6a = 8;
                    FUN_020fd3a0(&local_6c,plVar20);
                    uVar16 = FUN_021d7d60(&local_6c);
                    if (((uVar16 < 10) && ((&DAT_053fee41)[(ulong)uVar16 * 0xba0] != '\0')) &&
                       (((&DAT_053fede8)[(ulong)uVar16 * 0x174] != 0 &&
                        (*(int *)((&DAT_053fede8)[(ulong)uVar16 * 0x174] + 4) == 1))))
                    goto LAB_03735818;
                  }
                }
                (**(code **)*param_2)(param_2,&local_148);
              }
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar2);
        }
      }
    }
  }
  return;
}

