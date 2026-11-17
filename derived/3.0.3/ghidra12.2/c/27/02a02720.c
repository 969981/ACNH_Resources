
void FUN_02a02720(long param_1)

{
  undefined *puVar1;
  undefined1 *__src;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__dest;
  float fVar9;
  uint local_7c;
  undefined *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  local_68 = 0x20;
  local_45 = 0;
  lVar7 = *(long *)PTR_DAT_04bb3988;
  local_64[0] = 0;
  local_70 = local_64;
  local_78 = PTR_DAT_04bb2028 + 0x10;
  local_7c = *(uint *)(lVar7 + 0xedc);
  FUN_02b9d5dc(lVar7,&local_78,&local_7c);
  local_7c = *(uint *)PTR_DAT_04bb3238;
  uVar4 = FUN_02ba1c60(lVar7,&local_7c);
  puVar1 = PTR_DAT_04bb27c0;
  fVar9 = 0.0;
  if (((uVar4 & 1) == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_02a028cc;
  if ((local_7c == 0) ||
     (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(local_7c >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != local_7c)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_02a02858;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02a02858:
    uVar6 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3980), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3978 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3980);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3978);
    if ((uVar6 & uVar3) == 1) {
      if (plVar8[0xc] == 0) {
        return;
      }
      lVar7 = *(long *)(plVar8[0xc] + 0x1150);
      if (lVar7 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x50);
      if (lVar7 == 0) {
        return;
      }
      fVar9 = **(float **)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
    }
  }
LAB_02a028cc:
  __dest = *(undefined1 **)(param_1 + 0x17c8);
  (**(code **)(local_78 + 0x18))(&local_78);
  __src = local_70;
  if (__dest != local_70) {
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar7 = 0;
    do {
      if (local_70[lVar7] == '\0') goto LAB_02a0294c;
      if (local_70[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02a0294c;
      }
      if (local_70[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02a0294c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02a0294c:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x17d0) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x17d0) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  if ((uVar4 & 1) != 0) {
    uVar6 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar6 = (uint)(fVar9 < 0.0);
    }
    *(uint *)(param_1 + 0x17b8) = (int)fVar9 - uVar6;
  }
  return;
}

