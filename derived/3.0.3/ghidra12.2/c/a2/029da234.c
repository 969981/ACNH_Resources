
void FUN_029da234(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong local_a0;
  uint local_98;
  ulong local_90;
  uint local_84;
  long local_80;
  uint local_78;
  int iStack_74;
  undefined1 local_70;
  uint local_68;
  uint local_64;
  
  uVar11 = *(uint *)(param_2 + 1);
  uVar18 = *(uint *)(param_1 + 0x150);
  local_80 = CONCAT44(local_80._4_4_,uVar11);
  local_68 = uVar18;
  switch(uVar18) {
  case 0:
    if (uVar11 != 0) {
      if ((uVar11 & 0xfffffffe) == 2) {
LAB_029da2e4:
        local_68 = 3;
      }
      else {
LAB_029da340:
        local_68 = 1;
      }
      *(undefined1 *)(param_1 + 0x157) = 1;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x157) == '\0') {
      if (uVar11 == 0) goto switchD_029da298_caseD_ffffffff;
      if ((uVar11 & 0xfffffffe) == 2) goto LAB_029da2e4;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_68 = 2;
LAB_029da330:
      }
    }
    else {
LAB_029da2fc:
      *(undefined1 *)(param_1 + 0x157) = 0;
    }
    break;
  case 2:
    if (uVar11 == 0) goto switchD_029da298_caseD_ffffffff;
    if ((uVar11 & 0xfffffffe) == 2) goto LAB_029da2e4;
    break;
  case 3:
    if (*(char *)(param_1 + 0x157) != '\0') goto LAB_029da2fc;
    if (uVar11 == 0) goto switchD_029da298_caseD_ffffffff;
    if ((uVar11 & 0xfffffffe) != 2) goto LAB_029da340;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_68 = 4;
      goto LAB_029da330;
    }
    break;
  case 4:
    if (uVar11 == 0) goto switchD_029da298_caseD_ffffffff;
    if ((uVar11 & 0xfffffffe) != 2) goto LAB_029da340;
    break;
  case 0xffffffff:
switchD_029da298_caseD_ffffffff:
    local_68 = 0;
  }
  uVar11 = uVar18;
  if (local_68 != uVar18) {
    *(uint *)(param_1 + 0x150) = local_68;
    uVar11 = local_68;
  }
  lVar9 = DAT_055f6860;
  local_a0 = (ulong)uVar11;
  lVar12 = *param_2;
  local_90 = *(ulong *)(param_1 + 0x138);
  uVar15 = *(uint *)(param_1 + 0x140);
  uVar2 = *(uint *)(lVar12 + 0x2c);
  iVar3 = *(int *)(lVar12 + 0x24);
  cVar5 = *(char *)(lVar12 + 0x21);
  local_98 = *(uint *)(param_1 + 0x144);
  uVar13 = (ulong)*(uint *)(param_1 + 0x14c);
  pMVar1 = (MutexType *)(DAT_055f6860 + 0x895a8);
  local_64 = uVar18;
  nn::os::LockMutex(pMVar1);
  iVar4 = *(int *)(lVar9 + 0x89584);
  nn::os::UnlockMutex(pMVar1);
  local_80 = param_1 + 0xb8;
  local_78 = uVar2;
  iStack_74 = iVar4;
  local_70 = uVar11 - 3 < 2;
  FUN_029dba10(param_1 + 8,&local_80);
  puVar14 = *(uint **)(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) + -1;
    iVar10 = 0;
    if (*(int *)(param_1 + 0x20) <= iVar7) {
      iVar10 = *(int *)(param_1 + 0x20);
    }
    puVar14 = puVar14 + (iVar7 - iVar10);
  }
  uVar19 = *puVar14;
  if (uVar2 == uVar15) {
    iVar10 = *(int *)(param_1 + 0x16c);
    uVar16 = *(uint *)(param_1 + 0x174);
    uVar17 = *(uint *)(param_1 + 0x178);
  }
  else {
    local_84 = uVar2;
    lVar9 = FUN_029d5f90(param_1 + 0xb8,&local_84);
    if (lVar9 == 0) {
      uVar15 = 0;
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(lVar9 + 0xc);
      uVar15 = *(uint *)(lVar9 + 4);
    }
    uVar16 = 2;
    if (uVar2 != 0x1f5) {
      uVar16 = uVar15;
    }
    if ((int)uVar16 < 0x18) {
      if ((int)uVar16 < 0xc) {
        uVar15 = uVar16 + 0xc;
      }
      else {
        uVar15 = uVar16 - 0xc;
      }
    }
    else {
      uVar15 = 0xffffffff;
    }
    *(int *)(param_1 + 0x16c) = iVar10;
    uVar17 = uVar16;
    if (0xb < uVar16) {
      uVar17 = uVar15;
    }
    *(uint *)(param_1 + 0x174) = uVar16;
    *(uint *)(param_1 + 0x178) = uVar17;
  }
  iVar7 = (int)param_2[1];
  switch(uVar11) {
  case 0:
    local_90 = 0;
    local_98 = 0;
    break;
  case 1:
    local_90 = 0;
    local_98 = uVar19;
    break;
  case 2:
  case 4:
    local_a0 = uVar13;
    if ((uVar11 == uVar18) || ((uVar18 | 2) != 3)) {
LAB_029da51c:
      if (iVar3 == 7) goto LAB_029da524;
LAB_029da5d0:
      *(undefined1 *)(param_1 + 0x156) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (uVar11 != 4) {
        if (uVar11 == 2) {
          local_a0 = 1;
          local_90 = (ulong)uVar19 << 0x20 | 1;
          local_98 = uVar19;
        }
        goto LAB_029da51c;
      }
      bVar8 = iVar7 != 3;
      local_98 = 0x191;
      if (bVar8) {
        local_98 = 0x1f5;
      }
      uVar18 = 6;
      if (bVar8) {
        uVar18 = 7;
      }
      local_a0 = (ulong)uVar18;
      lVar9 = 0x191;
      if (bVar8) {
        lVar9 = 0x1f5;
      }
      local_90 = local_a0 | lVar9 << 0x20;
      if (iVar3 != 7) goto LAB_029da5d0;
LAB_029da524:
      if (*(char *)(param_1 + 0x156) != '\0') {
        if (iVar4 == 0) {
          *(undefined1 *)(param_1 + 0x156) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x156) = 0;
          uVar18 = 8;
          if (0x1e < iVar4) {
            uVar18 = 2;
          }
          local_a0 = (ulong)uVar18;
          local_98 = uVar17 + 600;
          if (0x1e < iVar4) {
            local_98 = uVar19;
          }
          local_90 = CONCAT44(local_98,uVar18);
        }
      }
    }
    uVar13 = local_a0;
    if (cVar5 == '\0') goto switchD_029da4cc_default;
    switch(iVar3) {
    case 1:
      local_a0 = 2;
      local_90 = (ulong)uVar2 << 0x20 | 2;
      local_98 = uVar2;
      break;
    case 2:
      if ((uVar11 == 4) && ((iVar4 - iVar10) + 1 < 6)) {
        local_a0 = 8;
        uVar19 = uVar17 + 600;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x168);
        *(int *)(param_1 + 0x168) = iVar10 + 1;
        if (uVar16 != 0xffffffff) {
          uVar18 = *(uint *)(param_1 + 0x170);
          *(uint *)(param_1 + 0x170) = uVar16;
          bVar8 = uVar16 != uVar18;
          if (uVar11 == 4) {
            if (0x15 < iVar4 && (1 < iVar10 && bVar8)) {
LAB_029da758:
              bVar6 = *(byte *)(param_1 + 0x17c);
              *(byte *)(param_1 + 0x17c) = bVar6 ^ 1;
              if (bVar6 == 0) {
                *(undefined1 *)(param_1 + 0x154) = 1;
              }
              else {
                *(undefined1 *)(param_1 + 0x155) = 1;
              }
              local_a0 = 3;
              uVar19 = uVar2;
              goto LAB_029da78c;
            }
          }
          else if (1 < iVar10 && bVar8) goto LAB_029da758;
        }
        local_a0 = 2;
      }
      goto LAB_029da78c;
    case 3:
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (*(char *)(param_1 + 0x154) == '\0') {
        if (*(char *)(param_1 + 0x155) == '\0') {
          local_a0 = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x155) = 0;
          local_a0 = 5;
          uVar19 = uVar17 + 300;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x154) = 0;
        local_a0 = 4;
        uVar19 = uVar17 + 200;
      }
LAB_029da78c:
      local_90 = local_a0 | (ulong)uVar19 << 0x20;
      local_98 = uVar19;
      break;
    case 4:
    case 5:
      local_a0 = 1;
      local_90 = (ulong)uVar19 << 0x20 | 1;
      local_98 = uVar19;
      break;
    case 6:
      local_a0 = 0;
      local_90 = 0x19100000006;
      local_98 = 0;
      break;
    case 7:
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x156) = 0;
        uVar11 = 8;
        if (0x1e < iVar4) {
          uVar11 = 2;
        }
        local_a0 = (ulong)uVar11;
        local_98 = uVar17 + 600;
        if (0x1e < iVar4) {
          local_98 = uVar19;
        }
        local_90 = CONCAT44(local_98,uVar11);
        break;
      }
      *(undefined1 *)(param_1 + 0x156) = 1;
    default:
switchD_029da4cc_default:
      local_a0 = uVar13;
      break;
    case 8:
      local_90 = (ulong)(uVar17 + 600) << 0x20 | 8;
      local_a0 = 0;
      local_98 = 0;
    }
    break;
  case 3:
    local_98 = 0x191;
    if (iVar7 != 3) {
      local_98 = 0x1f5;
    }
    local_90 = 0;
    uVar11 = 6;
    if (iVar7 != 3) {
      uVar11 = 7;
    }
    local_a0 = (ulong)uVar11;
    break;
  default:
    goto switchD_029da4cc_default;
  }
  *(uint *)(param_1 + 0x140) = uVar2;
  *(uint *)(param_1 + 0x144) = local_98;
  *(int *)(param_1 + 0x148) = iVar3;
  *(int *)(param_1 + 0x14c) = (int)local_a0;
  *(ulong *)(param_1 + 0x138) = local_90;
  return;
}

