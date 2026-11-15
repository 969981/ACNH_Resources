
bool FUN_01fd5450(long param_1,int *param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined1 *__src;
  uint uVar15;
  uint uVar16;
  undefined **local_b0;
  byte *pbStack_a8;
  int *local_a0;
  int local_8c;
  undefined *local_88;
  char *local_80;
  int local_78;
  undefined1 auStack_74 [7];
  undefined1 local_6d;
  byte local_68 [4];
  uint local_64;
  undefined **local_60;
  uint local_54;
  
  if (*(int *)(param_1 + 0x12424) != 0) {
    *param_2 = *(int *)(param_1 + 0x12424);
    return true;
  }
  uVar15 = *(uint *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
  local_54 = 0;
  if (uVar15 != 0) {
    lVar6 = 0;
    lVar8 = (long)(int)uVar15 << 3;
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *(int *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
        if ((uint)lVar6 < uVar15) {
          lVar6 = *(long *)(lVar7 + lVar6 * 8);
        }
        else {
          lVar6 = 0;
        }
        local_54 = DAT_05abbc50;
        if (DAT_05abbc50 == *(uint *)(lVar6 + 0xe4)) goto LAB_01fd5534;
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "GetCookingRecipeToday";
        iVar3 = FUN_02758850(&local_88);
        if (iVar3 == 0) {
          if (*(int *)(lVar6 + 0xd8) == 0xd) {
            local_54 = 0x20;
            goto LAB_01fd5534;
          }
          if (*(int *)(lVar6 + 0xd8) == 0xe) {
            local_54 = 0x21;
            goto LAB_01fd5534;
          }
        }
        local_54 = *(uint *)(lVar6 + 0xe4);
        goto LAB_01fd5534;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    local_54 = 0;
  }
LAB_01fd5534:
  puVar2 = PTR_DAT_04bc23c8;
  puVar1 = PTR_DAT_04bc23c0;
  lVar6 = *(long *)PTR_DAT_04bb4960;
  if (lVar6 != 0) {
    if ((int)*(uint *)(lVar6 + 0x5c0) < 1) {
      if (*(long *)(lVar6 + 0x4b0) == 0) {
        return false;
      }
      puVar4 = *(uint **)(*(long *)(lVar6 + 0x4b0) + 8);
      if (puVar4 == (uint *)0x0) {
        return false;
      }
      if ((local_54 < *(uint *)(lVar6 + 0x4c8)) &&
         (*(char *)(*(long *)(lVar6 + 0x4d0) + (long)(int)local_54) == '\0')) {
        return false;
      }
      if (*puVar4 <= local_54) {
        return false;
      }
      if (puVar4[1] == 0) {
        return false;
      }
      if ((ushort)puVar4[2] == 0) {
        return false;
      }
      iVar3 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        iVar3 = 0x1c;
      }
      puVar4 = (uint *)((ulong)(puVar4[1] * local_54 + (uint)(ushort)puVar4[2] * 8 + iVar3) +
                       (long)puVar4);
    }
    else {
      if (*(uint *)(lVar6 + 0x5c0) <= local_54) {
        return false;
      }
      uVar15 = local_54;
      if (*(uint *)(lVar6 + 0x5b0) <= local_54) {
        uVar15 = 0;
      }
      puVar4 = *(uint **)(*(long *)(lVar6 + 0x5b8) + (ulong)uVar15 * 8);
    }
    if (puVar4 != (uint *)0x0) {
      if (*puVar4 != 0) {
        cVar9 = *PTR_DAT_04bc23c0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar2 + 0x3c);
            if (-1 < (int)uVar15) {
              pcVar11 = (char *)((ulong)uVar15 + (long)puVar4);
              goto LAB_01fd5658;
            }
            if (uVar15 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar4;
          pcVar11 = (char *)0x0;
          if ((*puVar4 == 0) || (puVar4 == puVar12)) goto LAB_01fd5658;
          lVar6 = 0xc;
          if (*(char *)((long)puVar4 + (10 - (long)puVar12)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar4 + (lVar6 - (long)puVar12);
          if (lVar6 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar12));
          *(undefined4 *)(puVar2 + 0x3c) = 0xfffffffe;
          pcVar11 = (char *)0x0;
          if (uVar10 == 0) goto LAB_01fd5658;
          piVar13 = (int *)(lVar6 + 4);
          while (piVar13[-1] != 0x630f2b53) {
            piVar13 = piVar13 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              pcVar11 = (char *)0x0;
              goto LAB_01fd5658;
            }
          }
          iVar3 = 0;
          if (*piVar13 != -1) {
            iVar3 = *piVar13;
          }
          *(int *)(puVar2 + 0x3c) = iVar3;
        } while (*puVar4 != 0);
      }
      pcVar11 = (char *)0x0;
LAB_01fd5658:
      puVar1 = PTR_DAT_04bc23b8;
      local_80 = "";
      if (pcVar11 != (char *)0x0) {
        local_80 = pcVar11;
      }
      local_88 = PTR_DAT_04bb2020 + 0x10;
      uVar15 = 0;
      do {
        pcVar11 = "";
        if (uVar15 < 0x3d) {
          pcVar11 = *(char **)(puVar1 + (ulong)uVar15 * 8 + 0x938);
        }
        (**(code **)(local_88 + 0x18))(&local_88);
        if (pcVar11 == local_80) {
LAB_01fd573c:
          lVar6 = *(long *)(param_1 + 8);
          local_78 = 8;
          local_6d = 0;
          local_88 = PTR_DAT_04bb6a30 + 0x10;
          local_80 = auStack_74;
          local_68[0] = param_3 & 1;
          local_64 = uVar15;
          (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
          __src = *(undefined1 **)(lVar6 + 1000);
          if (auStack_74 == __src) goto LAB_01fd58c4;
          (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
          lVar8 = 0;
          goto LAB_01fd57b0;
        }
        if (*pcVar11 == *local_80) {
          if (*pcVar11 == '\0') goto LAB_01fd573c;
          lVar6 = 0x7fffe;
          pcVar5 = local_80;
          while( true ) {
            if (pcVar11[1] != pcVar5[1]) break;
            if (pcVar11[1] == '\0') goto LAB_01fd573c;
            if (pcVar11[2] != pcVar5[2]) break;
            if (pcVar11[2] == '\0') goto LAB_01fd573c;
            if ((lVar6 == 0) || (cVar9 = pcVar11[3], cVar9 != pcVar5[3])) break;
            lVar6 = lVar6 + -3;
            pcVar5 = pcVar5 + 3;
            pcVar11 = pcVar11 + 3;
            if (cVar9 == '\0') goto LAB_01fd573c;
          }
        }
        uVar16 = 0x3d;
        if ((int)uVar15 < 0x3d) {
          uVar16 = uVar15 + 1;
        }
        uVar15 = uVar16;
      } while (uVar16 != 0x3d);
    }
  }
  return false;
  while( true ) {
    lVar7 = *(long *)(lVar6 + 1000) + lVar8;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01fd589c;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_01fd589c;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
LAB_01fd57b0:
    if (*(char *)(*(long *)(lVar6 + 1000) + lVar8) == '\0') goto LAB_01fd589c;
  }
  lVar8 = 0;
LAB_01fd589c:
  iVar3 = (int)lVar8;
  if (local_78 <= (int)lVar8) {
    iVar3 = local_78 + -1;
  }
  memcpy(auStack_74,__src,(long)iVar3);
  auStack_74[iVar3] = 0;
LAB_01fd58c4:
  pbStack_a8 = local_68;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  local_8c = *(int *)PTR_DAT_04bb3238;
  local_b0 = &PTR_FUN_04a6aa98;
  local_a0 = &local_8c;
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar3 != 0) {
    lVar6 = (long)iVar3 << 3;
    puVar14 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    local_60 = &local_88;
    do {
      (*(code *)*local_b0)(&local_b0,*puVar14);
      lVar6 = lVar6 + -8;
      puVar14 = puVar14 + 1;
    } while (lVar6 != 0);
  }
  if (local_8c == 0) {
    return false;
  }
  *param_2 = local_8c;
  return local_8c != 0;
}

