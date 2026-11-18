
int FUN_032df450(undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  undefined **local_158;
  byte *local_150;
  int local_148;
  byte local_144 [255];
  undefined1 local_45;
  
  if (((DAT_0572f9f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0572f9f0), iVar5 != 0)) {
    DAT_0572f9e8 = 0;
    __cxa_guard_release(&DAT_0572f9f0);
  }
  local_45 = 0;
  local_148 = 0x100;
  local_144[0] = 0;
  local_158 = &PTR_LAB_048f9a70;
  local_150 = local_144;
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar14 = (byte *)param_2[1];
  if (local_144 != pbVar14) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_032df530;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_032df530;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_032df530;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_032df530:
    iVar5 = (int)lVar8;
    if (local_148 <= (int)lVar8) {
      iVar5 = local_148 + -1;
    }
    memcpy(local_144,pbVar14,(long)iVar5);
    local_144[iVar5] = 0;
  }
  plVar13 = (long *)*param_1;
  (*(code *)local_158[3])(&local_158);
  iVar5 = *(int *)(*plVar13 + 0x20);
  if (iVar5 == -1) {
    iVar5 = -2;
  }
  else {
    lVar8 = 0;
    do {
      pbVar14 = local_150 + lVar8;
      lVar8 = lVar8 + 1;
    } while (*pbVar14 != 0);
    uVar11 = (uint)*local_150;
    puVar9 = *(uint **)(*(long *)(*plVar13 + 0x18) + (long)iVar5 * 0x18);
    uVar12 = *puVar9;
    if (*local_150 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      pbVar14 = local_150;
      do {
        pbVar14 = pbVar14 + 1;
        uVar10 = uVar11 + uVar10 * 0x492;
        uVar11 = (uint)*pbVar14;
      } while (uVar11 != 0);
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar10 / uVar12;
    }
    iVar3 = uVar10 - uVar11 * uVar12;
    if (puVar9[(int)(iVar3 * 2 | 1)] == 0) {
      iVar5 = -1;
    }
    else {
      uVar12 = 0;
      iVar4 = (int)lVar8;
      uVar11 = puVar9[iVar3 * 2 + 2];
      iVar5 = -1;
      do {
        bVar2 = *(byte *)((long)puVar9 + (ulong)uVar11);
        if (bVar2 + 1 == iVar4) {
          lVar8 = (ulong)uVar11 + 1;
          if (iVar4 + -1 < 1) {
LAB_032df66c:
            iVar5 = *(int *)((long)puVar9 + lVar8 + (ulong)(uint)bVar2);
            break;
          }
          pbVar14 = (byte *)((long)puVar9 + lVar8);
          pbVar6 = local_150;
          uVar7 = (ulong)(iVar4 - 1);
          while( true ) {
            if (*pbVar6 != *pbVar14) break;
            uVar7 = uVar7 - 1;
            pbVar14 = pbVar14 + 1;
            pbVar6 = pbVar6 + 1;
            if (uVar7 == 0) goto LAB_032df66c;
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar11 + bVar2 + 5;
      } while (uVar12 != puVar9[(int)(iVar3 * 2 | 1)]);
    }
  }
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  return iVar5;
}

