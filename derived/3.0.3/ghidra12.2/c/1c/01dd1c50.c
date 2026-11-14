
undefined8 FUN_01dd1c50(long param_1,ulong *param_2)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  undefined **ppuVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [48];
  undefined1 local_84;
  undefined2 local_80;
  byte local_7e;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [48];
  undefined1 local_34;
  
  uVar10 = *param_2;
  if (uVar10 == 0) {
    lVar15 = *(long *)(param_1 + 0xf0);
  }
  else {
    if (uVar10 != *(ulong *)(param_1 + 200)) {
      iVar13 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
      if (iVar13 == 0) {
        return 0;
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
      lVar12 = (long)iVar13 * 8;
      while( true ) {
        lVar12 = lVar12 + -8;
        lVar15 = *plVar11;
        if (uVar10 == *(ulong *)(lVar15 + 0x20)) break;
        plVar11 = plVar11 + 1;
        if (*(ulong *)(lVar15 + 0x20) < uVar10 || lVar12 == 0) {
          return 0;
        }
      }
      goto LAB_01dd1c9c;
    }
    lVar15 = *(long *)(param_1 + 0xd8);
  }
  if (lVar15 == 0) {
    return 0;
  }
LAB_01dd1c9c:
  cVar5 = *(char *)((long)param_2 + 0xc);
  piVar2 = (int *)(lVar15 + 0x9c);
  if (cVar5 != '\0') {
    piVar2 = (int *)(lVar15 + 0x98);
  }
  uVar7 = 0;
  if (*(int *)(DAT_053807b0 + 0x4c) != 0) {
    uVar7 = (*piVar2 + -1) / *(int *)(DAT_053807b0 + 0x4c);
  }
  uVar8 = (uint)param_2[1];
  if ((int)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) < (int)uVar8) {
    return 0;
  }
  if (*(int *)(lVar15 + 0x28) != 0) {
    plVar11 = *(long **)(lVar15 + 0x30);
    lVar12 = (long)*(int *)(lVar15 + 0x28) << 3;
    do {
      plVar14 = (long *)*plVar11;
      if (*plVar14 == 0) break;
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
      *(byte *)(plVar14 + 0x30e) = *(byte *)(plVar14 + 0x30e) & 0xf3;
    } while (lVar12 != 0);
    uVar8 = (uint)param_2[1];
    cVar5 = *(char *)((long)param_2 + 0xc);
  }
  lVar12 = 0x88;
  lVar3 = lVar15 + 0x88;
  if (cVar5 != '\0') {
    lVar12 = 0x78;
    lVar3 = lVar15 + 0x78;
  }
  iVar13 = *(int *)(lVar3 + 0xc);
  *(int *)(lVar3 + 0xc) = iVar13 + 1;
  if (((int)uVar8 < 0) || (*(long *)(lVar15 + lVar12) == 0 || *(int *)(lVar3 + 8) <= (int)uVar8)) {
    *(int *)(lVar3 + 0xc) = iVar13;
  }
  else {
    uVar7 = *(uint *)(*(long *)(lVar15 + lVar12) + (ulong)(uVar8 >> 5) * 4);
    *(int *)(lVar3 + 0xc) = iVar13;
    if ((uVar7 >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
      iVar13 = *(int *)(param_1 + 0x4c);
      if (iVar13 < 1) {
        return 0;
      }
      iVar9 = 0;
      while( true ) {
        uVar7 = iVar9 + (int)param_2[1] * iVar13;
        if (*(char *)((long)param_2 + 0xc) == '\0') {
          if ((int)uVar7 < 0) {
            return 0;
          }
          if (*(int *)(lVar15 + 0x68) <= (int)uVar7) {
            return 0;
          }
          plVar11 = *(long **)(*(long *)(lVar15 + 0x70) + (ulong)uVar7 * 8);
        }
        else {
          if ((int)uVar7 < 0) {
            return 0;
          }
          if (*(int *)(lVar15 + 0x58) <= (int)uVar7) {
            return 0;
          }
          plVar11 = *(long **)(*(long *)(lVar15 + 0x60) + (ulong)uVar7 * 8);
        }
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (*plVar11 == 0) break;
        if ((char)plVar11[0xd9] == '\0') {
          bVar6 = *(byte *)(plVar11 + 0x30e);
          if ((bVar6 & 1) == 0) {
            *(byte *)(plVar11 + 0x30e) = bVar6 | 4;
          }
        }
        if ((char)plVar11[0x16c] == '\0') {
          bVar6 = *(byte *)(plVar11 + 0x30e);
          if ((bVar6 >> 1 & 1) == 0) {
            *(byte *)(plVar11 + 0x30e) = bVar6 | 8;
          }
        }
        iVar13 = *(int *)(param_1 + 0x4c);
        iVar9 = iVar9 + 1;
        if (iVar13 <= iVar9) {
          return 0;
        }
      }
      return 0;
    }
  }
  local_e0[0] = 0;
  puStack_c0 = local_b4;
  bVar6 = *(byte *)((long)param_2 + 0xc);
  local_d8 = 0;
  local_d0 = 0;
  local_84 = 0;
  local_c8 = PTR_DAT_04bb2a58 + 0x10;
  local_b4[0] = 0;
  local_b8 = 0x31;
  local_80 = 0;
  local_7e = 0;
  if (*param_2 == 0) {
    local_68 = 0x31;
    puStack_70 = local_64;
    local_34 = 0;
    local_64[0] = 0;
    local_78 = local_c8;
    uVar10 = FUN_01df3650(&local_78,*(undefined8 *)(param_1 + 0xf8),0xffffffff);
    if ((uVar10 & 1) != 0) {
      cVar5 = *(char *)(*(long *)(param_1 + 0xf8) + 0x40);
      if (cVar5 == '\0') {
        FUN_006e00c0(local_e0,&local_78,bVar6 == 0);
      }
      else {
        cVar1 = 'c';
        if (cVar5 != '\x04') {
          cVar1 = cVar5;
        }
        FUN_006e01b0(local_e0,cVar1,&local_78);
      }
    }
  }
  else {
    local_e0[0] = 3;
    local_7e = bVar6 ^ 1;
    local_d0 = *param_2;
  }
  uVar10 = FUN_006df0f0(*(undefined8 *)(param_1 + 0x58),local_e0,
                        *(int *)(param_1 + 0x4c) * (int)param_2[1]);
  if ((uVar10 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x58);
    *(int *)(param_1 + 0xd0) = (int)param_2[1];
    cVar5 = *(char *)((long)param_2 + 0xc);
    *(long *)(lVar12 + 0x80) = lVar15;
    ppuVar4 = &PTR_LAB_04a5b690;
    if (cVar5 != '\0') {
      ppuVar4 = &PTR_LAB_04a5b668;
    }
    *(undefined ***)(lVar12 + 0x70) = ppuVar4;
    *(long *)(lVar12 + 0x78) = param_1;
  }
  return 1;
}

