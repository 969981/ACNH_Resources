
bool FUN_02542d18(byte *param_1,undefined4 *param_2,undefined4 *param_3,byte param_4)

{
  bool bVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte bVar11;
  long lVar12;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  byte local_54;
  long *local_50;
  char local_48;
  char local_47;
  char local_46;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar9 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_24 = *puVar9;
  FUN_0071c8d0(&local_50,&local_24,PTR_DAT_04bb3238,0);
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_47 = '\0';
    }
  }
  bVar1 = ((local_50 != (long *)0x0 && local_48 != '\0') && local_47 != '\0') && local_46 != '\0';
  if (((local_50 == (long *)0x0 || local_48 == '\0') || local_47 == '\0') || local_46 == '\0') {
    return bVar1;
  }
  local_80 = *param_2;
  local_78 = param_2[2];
  local_64 = 0;
  local_6c = 0;
  local_74 = 0;
  local_5c = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_58 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_7c = FUN_016e026c(0,param_2,0,0);
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_02542e9c:
    if (7 < *pbVar10) {
LAB_02542ea8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar12 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar3 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar10 = (byte *)(lVar12 + 0x471);
          }
        }
        bVar11 = *pbVar10;
        bVar5 = 7 < bVar11;
        if (bVar5) {
          bVar11 = 0xff;
        }
        local_28 = CONCAT31(local_28._1_3_,bVar11);
        if (!bVar5) goto LAB_02542f28;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02542e9c;
      }
      goto LAB_02542ea8;
    }
  }
  bVar11 = *pbVar10;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_28 = CONCAT31(local_28._1_3_,bVar11);
LAB_02542f28:
  local_54 = param_4 & 1;
  local_8c = FUN_025581e0(&local_28);
  plVar4 = local_50;
  uVar7 = 1;
  if (local_8c == 1) {
    uVar7 = 2;
  }
  local_64._4_4_ = uVar7;
  if ((int)local_50[0x2f] == 1) {
    iVar8 = 0;
  }
  else {
    plVar2 = local_50 + 0x3dd;
    uVar6 = FUN_00a738a0(plVar2,0);
    iVar8 = 0;
    if ((uVar6 & 1) != 0) {
      local_8c = FUN_00a74b78(plVar2);
      iVar8 = 1;
      if (local_8c < 0xf) {
        if ((1 << (ulong)(local_8c & 0x1f) & 0x600dU) == 0) {
          if ((local_8c == 7) || (local_8c == 9)) {
            iVar8 = (uint)((*(byte *)(plVar4 + 0x2fa) & 6) != 0) << 1;
          }
        }
        else {
          iVar8 = 2;
        }
      }
    }
  }
  local_64 = CONCAT44(local_64._4_4_,iVar8);
  local_28 = 0;
  FUN_024bde14(&local_8c,&local_28,local_50[0xd] + 0x278,param_2);
  local_74 = CONCAT44(uStack_88,local_8c);
  local_5c = *param_3;
  uStack_58 = param_3[1];
  local_6c = CONCAT44(local_28,local_84);
  FUN_024bf968(local_50,&local_80);
  return bVar1;
}

