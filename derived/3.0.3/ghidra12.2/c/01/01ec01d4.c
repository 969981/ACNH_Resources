
void FUN_01ec01d4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *__dest;
  uint uVar9;
  
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x68);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04bc20b8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc20b8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc20b0 = PTR_DAT_04bc20c0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc20b8);
    }
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bc20b0);
    if ((uVar4 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
  }
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    plVar8 = (long *)0x0;
    uVar4 = 0;
  }
  else {
    uVar9 = *(uint *)PTR_DAT_04bb8c58;
    if ((((uVar9 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar4 = 1;
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01ec02f0;
        uVar4 = 0x101000100 >> (((ulong)*(uint *)(lVar6 + 0x5e8) & 7) << 3);
        uVar9 = (uint)uVar4;
      }
    }
    else {
LAB_01ec02f0:
      uVar4 = 0;
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      bVar2 = (int)plVar8[0x2a] == 1;
      if (((*PTR_DAT_04bb8c50 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8c50), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb8c48 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb8c50);
      }
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb8c48);
      if ((uVar4 & 1) == 0) {
        uVar9 = 0;
      }
      uVar4 = (ulong)uVar9;
      goto joined_r0x01ec0338;
    }
  }
  bVar2 = false;
joined_r0x01ec0338:
  if (((plVar7 != (long *)0x0) && (plVar8 != (long *)0x0)) && ((bVar2 && ((uVar4 & 0xff) != 0)))) {
    *(int *)(plVar7 + 0x60) = (int)plVar8[0x46];
    __dest = (char *)plVar7[0x62];
    if (__dest != "NPCPosition") {
      iVar3 = 0xb;
      if ((int)plVar7[99] < 0xc) {
        iVar3 = (int)plVar7[99] + -1;
      }
      memcpy(__dest,"NPCPosition",(long)iVar3);
      __dest[iVar3] = '\0';
    }
    *(undefined1 *)((long)plVar7 + 0x347) = 0;
    *(undefined4 *)(plVar7 + 0x69) = 0;
    *(undefined1 *)((long)plVar7 + 0x344) = 1;
  }
  return;
}

