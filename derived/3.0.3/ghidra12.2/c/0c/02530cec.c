
bool FUN_02530cec(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  byte local_50;
  undefined7 uStack_4f;
  char local_48;
  char local_47;
  char local_46;
  int local_3c;
  uint local_38;
  uint local_34;
  
  uVar7 = FUN_025506ac(param_1,param_1[0xc],*(undefined4 *)(param_1 + 8),param_1[0xe],
                       param_1[0xf] == 0);
  if ((uVar7 & 1) == 0) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (param_1[0xe] == 0) {
    if (lVar9 != 0) goto LAB_02530d9c;
LAB_02530de8:
    if (7 < *pbVar10) {
LAB_02530df4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar9 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar3 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar10 = (byte *)(lVar9 + 0x471);
          }
        }
        local_50 = *pbVar10;
        if (local_50 < 8) goto LAB_02530e74;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (lVar9 == 0) goto LAB_02530de8;
    if ((*(int *)(lVar9 + 0x15c) != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar9 + 0x158);
      }
      bVar13 = *param_1;
      bVar12 = *pbVar2;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (bVar12 != bVar13 && param_1[0xd] == 0) {
        return false;
      }
    }
LAB_02530d9c:
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02530de8;
      }
      goto LAB_02530df4;
    }
  }
  local_50 = *pbVar10;
  if (7 < local_50) {
    local_50 = 0xff;
  }
LAB_02530e74:
  uVar7 = FUN_02532880(&local_50,PTR_DAT_04bb3238);
  if ((uVar7 & 1) == 0) {
    if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
      piVar11 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    else {
      piVar11 = (int *)PTR_DAT_04bb3238;
    }
    local_3c = *piVar11;
    if (local_3c != 0) {
      FUN_0071cb58(&local_50,&local_3c,param_1 + 8,0);
      plVar5 = (long *)CONCAT71(uStack_4f,local_50);
      if (plVar5 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
        if ((uVar7 & 1) == 0) {
          local_46 = '\0';
        }
      }
      lVar9 = CONCAT71(uStack_4f,local_50);
      bVar1 = ((lVar9 != 0 && local_48 != '\0') && local_46 != '\0') && local_47 != '\0';
      if (((lVar9 == 0 || local_48 == '\0') || local_46 == '\0') || local_47 == '\0') {
        return bVar1;
      }
      local_34 = 0;
      if (*(long *)(lVar9 + 0x70) != 0) {
        uVar4 = *(uint *)(*(long *)(lVar9 + 0x70) + 0x280);
        local_34 = 0;
        if (uVar4 < 0x149) {
          local_34 = uVar4;
        }
      }
      uVar8 = FUN_0251d928(local_34);
      if (param_1[0x11] != 0) {
        local_34 = 0x19;
        local_38 = 0;
        if (*(long *)(lVar9 + 0x70) != 0) {
          uVar4 = *(uint *)(*(long *)(lVar9 + 0x70) + 0x280);
          local_38 = 0;
          if (uVar4 < 0x149) {
            local_38 = uVar4;
          }
        }
        if ((local_38 == 0x19) && (uVar7 = FUN_0244bc64(lVar9), (uVar7 & 1) != 0)) {
          return bVar1;
        }
      }
      if ((param_1[0x13] != 0) && (uVar7 = FUN_025273b8(param_1), (uVar7 & 1) != 0)) {
        return bVar1;
      }
      if ((((param_1[4] >> 1 & 1) != 0) && (uVar7 = FUN_02425688(uVar8), (uVar7 & 1) != 0)) &&
         ((*(uint *)(lVar9 + 0x1810) & 0xfffffffe) == 2)) {
        return bVar1;
      }
      if ((((param_1[4] >> 2 & 1) != 0) && (uVar7 = FUN_0242572c(uVar8), (uVar7 & 1) != 0)) &&
         (*(int *)(lVar9 + 0x1810) == 4)) {
        return bVar1;
      }
      if ((((param_1[4] >> 3 & 1) != 0) && (uVar7 = FUN_024257d0(uVar8), (uVar7 & 1) != 0)) &&
         (*(int *)(lVar9 + 0x1810) == 5)) {
        return bVar1;
      }
      if ((((param_1[4] >> 5 & 1) != 0) && (uVar7 = FUN_02425874(uVar8), (uVar7 & 1) != 0)) &&
         (*(int *)(lVar9 + 0x1810) == 7)) {
        return bVar1;
      }
      if (((param_1[4] & 1) != 0) && (uVar7 = FUN_024255e4(uVar8), (uVar7 & 1) != 0)) {
        if ((*(uint *)(lVar9 + 0x1810) | 8) == 9) {
          return bVar1;
        }
        if ((*(uint *)(lVar9 + 0x1810) == 8) && (param_1[0x10] != 0)) {
          return bVar1;
        }
      }
    }
  }
  return false;
}

