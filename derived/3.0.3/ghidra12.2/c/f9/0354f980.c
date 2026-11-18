
void FUN_0354f980(long param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  float fVar21;
  int local_9c;
  undefined1 auStack_98 [3];
  char local_95;
  int local_94;
  undefined *local_90;
  int local_88;
  uint local_84;
  uint uStack_80;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined4 local_70;
  undefined8 local_6c;
  byte local_64;
  
  lVar19 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar19 == 0) {
    return;
  }
  pcVar2 = (char *)(param_1 + 0x10c304);
  piVar11 = (int *)(param_1 + 0x1c270);
  iVar7 = FUN_0354ffa0();
  local_70 = 0;
  local_7a = 0x1000001;
  uVar9 = *(uint *)(param_1 + 0x1c288);
  local_6c = 0x60000000c;
  local_84 = 0;
  uStack_80 = 0;
  local_64 = 0xff;
  local_9c = -1;
  local_90 = PTR_DAT_04bc9c78 + 0x10;
  local_7c = 0;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *piVar11)) {
    lVar13 = param_1 + 0x1c260;
    uVar20 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      lVar13 = *(long *)(lVar13 + 8);
    }
    local_9c = -1;
    if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c274), lVar13 != 0)) {
      local_9c = *(int *)(lVar13 + 0x270);
    }
  }
  local_88 = iVar7;
  if (local_9c == 0x78) {
    iVar8 = 0x78;
    if (*pcVar2 == '\0') goto LAB_0354ff2c;
    *pcVar2 = '\0';
  }
  iVar8 = *(int *)(param_1 + 0x23c);
  if (iVar8 == 0) {
    lVar13 = FUN_033d0598(&DAT_0548e140);
    lVar13 = lVar13 + 0x420;
  }
  else if (iVar8 == 3) {
    lVar13 = FUN_033d0598(&DAT_0548e140);
    lVar13 = lVar13 + 0x714;
  }
  else if (iVar8 == 2) {
    lVar13 = FUN_033d0598(&DAT_0548e140);
    lVar13 = lVar13 + 0x618;
  }
  else {
    lVar13 = FUN_033d0598(&DAT_0548e140);
    lVar13 = lVar13 + 0x51c;
  }
  uVar9 = *(uint *)(param_1 + 0x1c288);
  local_9c = -1;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *piVar11)) {
    lVar14 = param_1 + 0x1c260;
    uVar20 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      lVar14 = *(long *)(lVar14 + 8);
    }
    local_9c = -1;
    if ((lVar14 != 0) && (lVar14 = lVar14 - *(int *)(param_1 + 0x1c274), lVar14 != 0)) {
      local_9c = *(int *)(lVar14 + 0x270);
    }
  }
  uVar10 = FUN_03550400(&local_9c);
  lVar18 = DAT_05ab5ea8;
  uVar9 = *(uint *)(param_1 + 0x1c288);
  lVar14 = lVar13 + 0x3c + (uVar10 & 0xffffffff) * 8;
  bVar1 = false;
  uVar20 = *(uint *)(lVar13 + (uVar10 & 0xffffffff) * 4 + 0xb4);
  if ((-1 < (int)uVar9) && ((int)uVar9 < *piVar11)) {
    lVar15 = param_1 + 0x1c260;
    uVar16 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      lVar15 = *(long *)(lVar15 + 8);
    }
    bVar1 = false;
    if ((lVar15 != 0) && (lVar15 = lVar15 - *(int *)(param_1 + 0x1c274), lVar15 != 0)) {
      if (*(int *)(lVar15 + 0x270) == 0x77) {
        if (DAT_05ab5ea8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x228) + 0x570) + 0x2e8);
          if (DAT_05aed670 == 0) {
            puVar17 = &DAT_055c04a0;
          }
          else {
            puVar17 = &DAT_055c04a0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              puVar17 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar8 = FUN_006bd550(*puVar17,0);
              puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar8 != 0x758f7eaf) {
                puVar17 = &DAT_055c04a0;
              }
            }
          }
          iVar8 = *(int *)(puVar17 + 7);
          if ((((((DAT_05ac0a90 == iVar8) || (DAT_05ac0aa0 == iVar8)) || (DAT_05ac0ab0 == iVar8)) ||
               (((DAT_05ac0ac0 == iVar8 || (DAT_05ac0ad0 == iVar8)) ||
                ((DAT_05ac0ae0 == iVar8 || ((DAT_05ac0af0 == iVar8 || (DAT_05ac0b00 == iVar8))))))))
              || (DAT_05ac0b10 == iVar8)) || (DAT_05ac0b20 == iVar8)) {
            piVar11 = (int *)FUN_036e50d0(lVar18);
          }
          else {
            piVar11 = (int *)(lVar18 + 0x40);
          }
          iVar8 = 0;
          if (iVar4 != 0) {
            iVar8 = (iVar4 + *piVar11 + -1) / iVar4;
          }
          iVar8 = iVar8 * iVar4;
        }
        bVar1 = (int)uVar20 < iVar8;
      }
      else {
        bVar1 = false;
      }
    }
  }
  puVar6 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(lVar14);
  if (*(long *)puVar6 == 0) {
LAB_0354fe4c:
    if ((param_2 & 1) == 0) goto LAB_0354feec;
LAB_0354fe58:
    iVar8 = local_9c;
    if (iVar7 < 1) goto LAB_0354ff2c;
    iVar8 = *(int *)(lVar19 + 0x2e8);
    uVar9 = 0;
    if (iVar8 != 0) {
      uVar9 = *(int *)(lVar19 + 0x2f4) / iVar8;
    }
    local_84 = uVar20;
    uStack_80 = uVar20;
    if (uVar9 != 1) {
      fVar21 = (float)(int)uVar9 * 0.5;
      uVar16 = 0;
      if (fVar21 != (float)(int)fVar21) {
        uVar16 = (uint)(0.0 <= fVar21);
      }
      iVar4 = uVar16 + (int)fVar21;
      if ((uVar9 & 1) != 0) {
        iVar4 = uVar9 - (uVar16 + (int)fVar21);
      }
      iVar5 = 0;
      if (iVar8 != 0) {
        iVar5 = (int)uVar20 / iVar8;
      }
      iVar4 = iVar5 - iVar4;
      iVar3 = iVar4;
      if (iVar7 <= iVar4 * iVar8) {
        iVar3 = iVar5;
      }
      iVar7 = 0;
      if (-1 < iVar4) {
        iVar7 = iVar3;
      }
      local_84 = iVar7 * iVar8;
    }
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if (*(uint *)(lVar18 + 0x1d8) <= uVar9) goto LAB_0354fe4c;
    if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
      bVar1 = true;
    }
    if ((bVar1) || (uVar9 = FUN_0354ffa0(param_1), (int)uVar9 < 1)) goto LAB_0354fe4c;
    uVar16 = 0;
    lVar18 = lVar13 + 0x3c + (uVar10 & 0xffffffff) * 8;
    do {
      FUN_0354bdb0(&local_9c,param_1,uVar16);
      if ((((local_9c != 8) && (uVar12 = FUN_0277d7b4(auStack_98,lVar14), (uVar12 & 1) != 0)) &&
          (local_95 == *(char *)(lVar18 + 3))) && (local_94 == *(int *)(lVar18 + 4)))
      goto LAB_0354fee0;
      uVar16 = uVar16 + 1;
    } while (uVar9 != uVar16);
    uVar16 = uVar20;
LAB_0354fee0:
    uVar20 = uVar16;
    if ((param_2 & 1) != 0) goto LAB_0354fe58;
LAB_0354feec:
    if ((int)uVar20 < 0) {
      local_84 = 0;
      uStack_80 = 0;
    }
    else {
      iVar7 = *(int *)(lVar13 + (uVar10 & 0xffffffff) * 4);
      local_84 = uVar20;
      uStack_80 = uVar20;
      if (-1 < iVar7) {
        iVar8 = *(int *)(lVar19 + 0x2e8);
        iVar4 = 0;
        if (iVar8 != 0) {
          iVar4 = (int)uVar20 / iVar8;
        }
        local_84 = iVar4 * iVar8 - iVar8 * iVar7;
        local_84 = local_84 & ((int)local_84 >> 0x1f ^ 0xffffffffU);
      }
    }
  }
  iVar8 = local_9c;
LAB_0354ff2c:
  local_9c = iVar8;
  local_64 = *(byte *)(param_1 + 0x1f8);
  local_7a._0_5_ = CONCAT23(0x101,(undefined3)local_7a);
  local_7c = 0x101;
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_7a = CONCAT17(1,(undefined7)local_7a);
  local_6c = CONCAT44(4,(undefined4)local_6c);
  FUN_03864290(lVar19,&local_90);
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_80;
  }
  *pcVar2 = '\0';
  return;
}

