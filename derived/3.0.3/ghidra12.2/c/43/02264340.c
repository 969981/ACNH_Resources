
void FUN_02264340(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 auStack_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined1 auStack_d4 [31];
  undefined1 local_b5;
  float local_8c;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bc0dd8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02264410;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02264410;
    }
  }
  uVar10 = 0;
joined_r0x02264410:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    uVar2 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bc0de8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0de8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc0de0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0de8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc0de0);
    if ((((int)lVar7 == 1) && ((uVar5 & uVar10) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      lVar7 = FUN_01c41bb8(plVar9);
      local_ed = 0;
      plVar9 = (long *)(lVar7 + 0x30);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puVar11 = *(undefined1 **)(lVar7 + 0x38);
      if (auStack_12c != puVar11) {
        (**(code **)(*(long *)(lVar7 + 0x30) + 0x18))(plVar9);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(lVar7 + 0x38) + lVar8) == '\0') goto LAB_0226453c;
          lVar1 = *(long *)(lVar7 + 0x38) + lVar8;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0226453c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0226453c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0226453c:
        iVar4 = (int)lVar8;
        if (0x3f < (int)lVar8) {
          iVar4 = 0x3f;
        }
        memcpy(auStack_12c,puVar11,(long)iVar4);
        auStack_12c[iVar4] = 0;
      }
      local_d8 = 0x20;
      local_b5 = 0;
      local_e8 = PTR_DAT_04bb2a08 + 0x10;
      plVar9 = (long *)(lVar7 + 0x88);
      local_e0 = auStack_d4;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puVar11 = *(undefined1 **)(lVar7 + 0x90);
      if (auStack_d4 != puVar11) {
        (**(code **)(*(long *)(lVar7 + 0x88) + 0x18))(plVar9);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(lVar7 + 0x90) + lVar8) == '\0') goto LAB_0226460c;
          lVar1 = *(long *)(lVar7 + 0x90) + lVar8;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0226460c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0226460c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0226460c:
        iVar4 = (int)lVar8;
        if (local_d8 <= (int)lVar8) {
          iVar4 = local_d8 + -1;
        }
        memcpy(auStack_d4,puVar11,(long)iVar4);
        auStack_d4[iVar4] = 0;
      }
      local_8c = (float)*(undefined8 *)(lVar7 + 0xe4);
      *(undefined4 *)(param_1 + 0x278) = 0x41f00000;
      *(float *)(param_1 + 0x274) = local_8c * local_8c;
    }
  }
  return;
}

