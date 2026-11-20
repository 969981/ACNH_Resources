
ulong FUN_03d529f0(long param_1,ulong *param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined1 *__dest;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *__src;
  long lVar11;
  undefined1 auStack_c8 [4];
  uint local_c4;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  ulong local_68;
  
  if (param_4 == 0x666f6e74) {
    (**(code **)(*param_3 + 0x18))(param_3);
    local_68 = 0;
    FUN_0071b954(&local_c0,"%s.bffnt",param_3[1]);
    plVar9 = *(long **)(param_1 + 0x18);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar10 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb2860);
    if ((uVar10 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    lVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_c0,&local_68);
    if (lVar6 == 0) {
      return 0;
    }
    *param_2 = local_68 >> 0x20;
    return lVar6;
  }
  if (param_4 != 0x73636674) {
    return 0;
  }
  uVar10 = 0;
  lVar6 = *(long *)PTR_DAT_04bb29d0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = 0;
  do {
    local_b8 = (char *)((long)&DAT_041e935c + (long)(int)(&DAT_041e935c)[uVar10]);
    local_c0 = puVar1;
    (**(code **)(*param_3 + 0x18))(param_3);
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar11 = param_3[1];
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if ((char *)lVar11 == local_b8) {
LAB_03d52b70:
      nn::os::GetSystemTick();
      uVar5 = 1 << (ulong)((uint)uVar10 & 0x1f);
      if ((uVar5 & 0xffff & (uint)*(ushort *)(param_1 + 0x50)) == 0) {
        nn::pl::RequestSharedFontLoad(uVar10 & 0xffffffff);
        *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | (ushort)uVar5;
      }
      while (iVar4 = nn::pl::GetSharedFontLoadState(uVar10 & 0xffffffff), iVar4 != 1) {
        nn::os::ConvertToTimeSpan(lVar6 / 100);
        nn::os::SleepThread();
      }
      uVar5 = nn::pl::GetSharedFontSize(uVar10 & 0xffffffff);
      local_68 = nn::pl::GetSharedFontAddress(uVar10 & 0xffffffff);
      local_c4 = uVar5;
      if (local_68 != 0) goto LAB_03d52e4c;
    }
    else {
      uVar8 = 0;
      bVar3 = true;
      do {
        lVar11 = param_3[1] + 2 + uVar8;
        cVar2 = *(char *)(lVar11 + -2);
        local_c4 = uVar5;
        if (cVar2 != *(char *)((long)local_b8 + uVar8)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_03d52b70;
          break;
        }
        cVar2 = *(char *)(lVar11 + -1);
        if (cVar2 != *(char *)((long)local_b8 + uVar8 + 1)) break;
        if (cVar2 == '\0') goto LAB_03d52b70;
        cVar2 = *(char *)(param_3[1] + 2 + uVar8);
        if (cVar2 != *(char *)((long)local_b8 + uVar8 + 2)) break;
        if (cVar2 == '\0') goto LAB_03d52b70;
        bVar3 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
    }
    uVar10 = uVar10 + 1;
    uVar5 = local_c4;
  } while (uVar10 != 6);
  local_68 = 0;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = ".";
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar6 = 0;
  lVar11 = 0xffffffff;
  do {
    if (*(char *)(param_3[1] + lVar6) == '\0') {
LAB_03d52cd4:
      iVar4 = (int)lVar6;
joined_r0x03d52cd8:
      if (0 < iVar4) {
        lVar11 = 0;
        goto LAB_03d52ce4;
      }
      lVar11 = 0xffffffff;
      break;
    }
    lVar7 = param_3[1] + lVar6;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03d52cd4;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      iVar4 = (int)lVar6;
      goto joined_r0x03d52cd8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  goto LAB_03d52d3c;
  while (lVar11 = lVar11 + 1, lVar6 != lVar11) {
LAB_03d52ce4:
    lVar7 = param_3[1];
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (((char *)(lVar7 + lVar11) == local_b8) || (*(char *)(lVar7 + lVar11) == *local_b8))
    goto LAB_03d52d3c;
  }
  lVar11 = 0xffffffff;
LAB_03d52d3c:
  local_6d = 0;
  __dest = local_ac;
  local_b0 = 0x40;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_b8 = __dest;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (undefined1 *)param_3[1];
  iVar4 = (int)lVar11;
  if (iVar4 < 0) {
    if (__dest == __src) goto LAB_03d52e18;
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_03d52df0;
      lVar11 = param_3[1] + lVar6;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03d52df0;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03d52df0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03d52df0:
    iVar4 = (int)lVar6;
    if (local_b0 <= (int)lVar6) {
      iVar4 = local_b0 + -1;
    }
  }
  else {
    if (__dest == __src) goto LAB_03d52e18;
    if (local_b0 <= iVar4) {
      iVar4 = local_b0 + -1;
    }
  }
  memcpy(__dest,__src,(long)iVar4);
  __dest[iVar4] = 0;
LAB_03d52e18:
  (**(code **)(local_c0 + 0x18))(&local_c0);
  FUN_03d52654(param_1,&local_68,&local_c4,auStack_c8,local_b8);
  if (local_68 != 0) {
LAB_03d52e4c:
    *param_2 = (ulong)local_c4;
  }
  return local_68;
}

