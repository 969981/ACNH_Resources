
/* WARNING: Removing unreachable block (ram,0x01a23974) */
/* WARNING: Removing unreachable block (ram,0x01a23890) */
/* WARNING: Removing unreachable block (ram,0x01a237d8) */
/* WARNING: Removing unreachable block (ram,0x01a236f0) */
/* WARNING: Removing unreachable block (ram,0x01a23744) */
/* WARNING: Removing unreachable block (ram,0x01a23800) */
/* WARNING: Removing unreachable block (ram,0x01a238b8) */
/* WARNING: Removing unreachable block (ram,0x01a23984) */
/* WARNING: Removing unreachable block (ram,0x01a23990) */

void FUN_01a23690(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_b0;
  int local_ac;
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_04bb2200;
  local_68 = (long *)0x0;
  if ((*(long *)PTR_DAT_04bb2200 == 0) ||
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar9 == 0)) {
LAB_01a23774:
    plVar14 = (long *)0x0;
LAB_01a23778:
    uVar15 = 0;
    bVar11 = true;
  }
  else {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    plVar14 = *(long **)(lVar9 + 0x118);
    if (plVar14 == (long *)0x0) goto LAB_01a23778;
    if (((char)plVar14[7] == '\0') ||
       (uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14), (uVar8 & 1) == 0)) goto LAB_01a23774;
    lVar9 = *(long *)puVar5;
    local_68 = plVar14;
    if ((((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x118), lVar9 == 0)) || (*(char *)(lVar9 + 0xe0b) != '\0')) {
      bVar11 = false;
      uVar15 = *(int *)(plVar14[0x164] + (long)(int)plVar14[0x166] * 0x10) - 1;
    }
    else {
      bVar11 = false;
      uVar15 = 0;
    }
  }
  local_88 = PTR_DAT_04bb2018 + 0x10;
  local_70 = 0;
  local_80 = 0;
  local_78 = local_88;
  FUN_01a1ff10(&local_78,&local_88);
  if (bVar11) {
    local_94 = 0;
    local_ac = 0;
LAB_01a2394c:
    local_b0 = 0;
    local_98 = 0;
  }
  else {
    lVar9 = *(long *)puVar5;
    if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x50), lVar10 == 0)) {
LAB_01a23814:
      if (*(int *)(plVar14[0x164] + (long)(int)plVar14[0x166] * 0x10) < 1) {
        local_ac = 0;
        local_94 = 0;
      }
      else {
LAB_01a2382c:
        lVar10 = plVar14[0x168];
        iVar3 = (int)local_70;
        if (*(int *)(lVar10 + 0x20) <= (int)local_70) {
          iVar3 = *(int *)(lVar10 + 0x20);
        }
        local_ac = 0;
        if (*(int *)(lVar10 + 0x10) <= (int)local_70) {
          local_ac = iVar3 - *(int *)(lVar10 + 0x10);
        }
        iVar3 = local_70._4_4_;
        if (*(int *)(lVar10 + 0x24) <= local_70._4_4_) {
          iVar3 = *(int *)(lVar10 + 0x24);
        }
        local_94 = 0;
        if (*(int *)(lVar10 + 0x14) <= local_70._4_4_) {
          local_94 = iVar3 - *(int *)(lVar10 + 0x14);
        }
      }
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_01a238f0;
LAB_01a23878:
      if ((*(long *)(lVar9 + 0x118) != 0) && (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) == '\0'))
      goto LAB_01a2394c;
      if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0'))
      goto LAB_01a238f0;
    }
    else {
      if ((*(long *)(lVar10 + 0x118) == 0) || (*(char *)(*(long *)(lVar10 + 0x118) + 0xe0b) != '\0')
         ) {
        if ((*(long *)(lVar10 + 0x118) == 0) ||
           (*(char *)(*(long *)(lVar10 + 0x118) + 0xe0b) != '\0')) goto LAB_01a23814;
        goto LAB_01a2382c;
      }
      local_94 = 0;
      local_ac = 0;
      lVar9 = *(long *)(lVar9 + 0x50);
      if (lVar9 != 0) goto LAB_01a23878;
LAB_01a238f0:
      if (*(int *)(plVar14[0x164] + (long)(int)plVar14[0x166] * 0x10) < 1) goto LAB_01a2394c;
    }
    lVar9 = plVar14[0x168];
    iVar3 = (int)local_80;
    if (*(int *)(lVar9 + 0x20) <= (int)local_80) {
      iVar3 = *(int *)(lVar9 + 0x20);
    }
    local_b0 = 0;
    if (*(int *)(lVar9 + 0x10) <= (int)local_80) {
      local_b0 = iVar3 - *(int *)(lVar9 + 0x10);
    }
    iVar3 = local_80._4_4_;
    if (*(int *)(lVar9 + 0x24) <= local_80._4_4_) {
      iVar3 = *(int *)(lVar9 + 0x24);
    }
    local_98 = 0;
    if (*(int *)(lVar9 + 0x14) <= local_80._4_4_) {
      local_98 = iVar3 - *(int *)(lVar9 + 0x14);
    }
  }
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  local_90 = 0;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar9 != 0) {
    iVar3 = param_2 + 1 << (ulong)(uVar15 & 0x1f);
    FUN_015af3fc(&local_68,&local_78,lVar9 + 0x18,0);
    FUN_015af3fc(&local_68,&local_88,lVar9 + 0x28,0);
    param_2 = param_2 << (ulong)(uVar15 & 0x1f);
    if (param_2 < iVar3) {
      iVar4 = param_3 + 1 << (ulong)(uVar15 & 0x1f);
      param_3 = param_3 << (ulong)(uVar15 & 0x1f);
      if (param_3 < iVar4) {
        iVar1 = (local_b0 - local_ac) + 1;
        iVar2 = ((int)local_88 - (int)local_78) + 1;
        uVar12 = param_2 + param_3 * iVar2;
        uVar15 = (param_2 + iVar1 * (param_3 - local_94)) - local_ac;
        do {
          uVar13 = uVar12;
          uVar16 = uVar15;
          iVar17 = param_3;
          do {
            local_90 = param_2;
            iStack_8c = iVar17;
            if (((param_2 < local_ac || local_b0 < param_2) || (iVar17 < local_94)) ||
               (local_98 < iVar17)) {
              iVar6 = FUN_015afa70(&local_68,&local_90,0);
              iVar7 = FUN_015afb74(&local_68,&local_90,0);
              if ((iVar7 + iVar6 == 4) && (uVar13 >> 8 < 0x19)) {
                lVar9 = (ulong)(uVar13 >> 5) * 4;
                *(uint *)(param_1 + 0x14 + lVar9) =
                     *(uint *)(param_1 + 0x14 + lVar9) | 1 << (ulong)(uVar13 & 0x1f);
              }
            }
            else {
              iVar6 = FUN_015afa70(&local_68,&local_90,0);
              iVar7 = FUN_015afb74(&local_68,&local_90,0);
              if (iVar7 + iVar6 == 4) {
                if (uVar16 < 0x8c) {
                  lVar9 = (ulong)(uVar16 >> 5) * 4;
                  *(uint *)(param_1 + lVar9) =
                       *(uint *)(param_1 + lVar9) | 1 << (ulong)(uVar16 & 0x1f);
                }
              }
              else if (uVar16 < 0x8c) {
                lVar9 = (ulong)(uVar16 >> 5) * 4;
                *(uint *)(param_1 + lVar9) =
                     *(uint *)(param_1 + lVar9) & (1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
              }
            }
            iVar17 = iVar17 + 1;
            uVar16 = uVar16 + iVar1;
            uVar13 = uVar13 + iVar2;
          } while (iVar4 != iVar17);
          param_2 = param_2 + 1;
          uVar15 = uVar15 + 1;
          uVar12 = uVar12 + 1;
        } while (param_2 != iVar3);
      }
    }
  }
  return;
}

