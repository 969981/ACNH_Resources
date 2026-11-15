
void FUN_020f0da0(char *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int local_5c;
  undefined **local_58;
  int *piStack_50;
  uint *local_48;
  uint local_34;
  
  local_34 = 0;
  local_5c = (int)*param_1;
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (lVar7 == 0) {
    return;
  }
  piStack_50 = &local_5c;
  local_58 = &PTR_FUN_04a770e0;
  local_48 = &local_34;
  if (*(int *)(lVar7 + 0xb88) == 0) {
    return;
  }
  lVar10 = (long)*(int *)(lVar7 + 0xb88) << 3;
  puVar6 = *(undefined8 **)(lVar7 + 0xb90);
  do {
    (*(code *)*local_58)(&local_58,*puVar6);
    puVar2 = PTR_DAT_04bb27c0;
    lVar10 = lVar10 + -8;
    puVar6 = puVar6 + 1;
  } while (lVar10 != 0);
  if (local_34 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(local_34 >> 0x11) & 0x7ff8)
                     );
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != local_34)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x020f0ec4;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020f0ec4;
    }
  }
  uVar9 = 0;
joined_r0x020f0ec4:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar6 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb4110 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4110), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb4108 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4110);
      }
      if ((puVar6 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4108), (uVar5 & 1) != 0)) {
        if (param_1[1] == '\x01') {
          FUN_02085a50(plVar8[0x78],0,0);
        }
        else if (param_1[1] == '\0') {
          lVar7 = plVar8[0x78];
          uVar5 = FUN_02085a50(lVar7,1,0);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(lVar7 + 0x801) = 1;
            lVar10 = lVar7 + 0x10 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
            if (4 < *(uint *)(lVar7 + 0x294)) {
              lVar10 = lVar7 + 0x10;
            }
            *(undefined8 *)(lVar10 + 0xc) = 0;
            *(undefined4 *)(lVar10 + 0x14) = 0;
          }
        }
      }
    }
  }
  return;
}

