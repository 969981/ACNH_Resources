
bool FUN_02694c0c(undefined4 *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_02694cf4:
    puVar9 = (uint *)0x0;
    uVar4 = 0xbc;
    bVar3 = true;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02694cf4;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (puVar9 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), puVar9 == (uint *)0x0
       )) goto LAB_02694cf4;
    uVar4 = *puVar9;
    local_48 = puVar9;
    if (uVar4 == 0 || puVar9 == (uint *)(ulong)uVar4) goto LAB_02694ce8;
    puVar8 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
    uVar4 = 0;
    if (*puVar8 == 0) {
LAB_02694cec:
      bVar3 = false;
    }
    else {
      uVar4 = puVar8[1];
      if ((uVar4 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_02694ce8:
        uVar4 = 0;
        goto LAB_02694cec;
      }
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar10 == 0) goto LAB_02694ce8;
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar4);
      }
      if (*puVar8 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar1) goto LAB_02694ce8;
      uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
      if (uVar4 < 0xbd) goto LAB_02694cec;
      bVar3 = false;
      uVar4 = 0;
    }
  }
  if ((uVar4 - 0xd < 7) || (uVar4 - 9 < 2)) {
    iVar5 = FUN_01ae58b0(&local_58);
    if (iVar5 == 2) {
      if (*param_3 < 4) {
        return true;
      }
    }
    else if ((iVar5 == 1) && ((*param_3 & 0xfffffffc) == 4)) {
      return true;
    }
    uVar6 = FUN_01b024bc(&local_58,1);
    switch(uVar6) {
    case 0:
      return false;
    case 1:
      goto switchD_02694d8c_caseD_1;
    case 2:
      goto switchD_02694d8c_caseD_2;
    case 3:
      goto switchD_02694d8c_caseD_3;
    case 4:
      local_5c = 3;
      if (!bVar3) {
        puVar8 = (uint *)((long)puVar9 - (ulong)*puVar9);
        if ((((*puVar9 != 0) && (puVar8 != (uint *)0x0)) && (*puVar8 != 0)) &&
           ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05327190) && (*(short *)(DAT_05327198 + (long)(int)uVar1 * 2) == 0x52))
            goto LAB_02694fb8;
          }
        }
      }
      break;
    default:
      goto switchD_02694d8c_default;
    }
  }
  else {
    uVar7 = 0;
    if (((!bVar3) && (uVar4 = *puVar9, uVar4 != 0)) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_053271b0) &&
               (uVar7 = *(ushort *)(DAT_053271b8 + (long)(int)uVar1 * 2), uVar7 < 5))
            goto LAB_02694e28;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02694e28:
    bVar3 = false;
    switch(uVar7) {
    case 0:
      goto switchD_02694d8c_caseD_0;
    case 1:
switchD_02694d8c_caseD_1:
      local_5c = 0;
      break;
    case 2:
switchD_02694d8c_caseD_2:
      local_5c = 1;
      break;
    case 3:
switchD_02694d8c_caseD_3:
      local_5c = 2;
      break;
    case 4:
      local_5c = 3;
      iVar5 = FUN_01af103c(&local_58);
      if (iVar5 == 0xb9) {
LAB_02694fb8:
        local_5c = 3;
        if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1) {
          local_5c = 1;
        }
      }
      break;
    default:
switchD_02694d8c_default:
      return true;
    }
  }
  bVar3 = local_5c != *param_2;
switchD_02694d8c_caseD_0:
  return bVar3;
}

