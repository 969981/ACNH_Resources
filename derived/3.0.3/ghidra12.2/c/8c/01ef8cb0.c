
bool FUN_01ef8cb0(long param_1,uint *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  undefined *local_50;
  char *local_48;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar9 = *param_2;
  if (uVar9 == *(uint *)(param_1 + 8)) {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01ef8d80;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01ef8d80:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if ((uVar9 & uVar5) == 1) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      local_48 = "gst";
      (**(code **)(plVar8[0x7c] + 0x18))(plVar8 + 0x7c);
      lVar7 = 0;
      uVar10 = 0xffffffff;
      do {
        if (*(char *)(plVar8[0x7d] + lVar7) == '\0') {
LAB_01ef8e5c:
          iVar4 = (int)lVar7;
joined_r0x01ef8e60:
          if (2 < iVar4) {
            uVar10 = 0;
            goto LAB_01ef8e9c;
          }
          uVar10 = 0xffffffff;
          break;
        }
        lVar1 = plVar8[0x7d] + lVar7;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_01ef8e5c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          iVar4 = (int)lVar7 + 2;
          goto joined_r0x01ef8e60;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
LAB_01ef8f00:
      return (int)uVar10 != -1;
    }
  }
  return false;
  while (uVar10 = uVar10 + 1, iVar4 - 2 != uVar10) {
LAB_01ef8e9c:
    pcVar2 = (char *)(plVar8[0x7d] + uVar10);
    (**(code **)(local_50 + 0x18))(&local_50);
    if ((pcVar2 == local_48) ||
       ((*pcVar2 == *local_48 &&
        ((*pcVar2 == '\0' ||
         ((pcVar2[1] == local_48[1] && ((pcVar2[1] == '\0' || (pcVar2[2] == local_48[2]))))))))))
    goto LAB_01ef8f00;
  }
  uVar10 = 0xffffffff;
  goto LAB_01ef8f00;
}

