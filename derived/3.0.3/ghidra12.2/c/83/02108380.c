
void FUN_02108380(ushort *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int local_5c;
  undefined **local_58;
  int *piStack_50;
  uint *local_48;
  uint local_34;
  
  local_34 = 0;
  local_5c = (int)(short)*param_1;
  lVar5 = *(long *)PTR_DAT_04bb3968;
  if (lVar5 == 0) {
LAB_02108444:
    lVar5 = *(long *)PTR_DAT_04bb27c0;
    if (lVar5 != 0) {
LAB_02108454:
      plVar8 = (long *)0x0;
LAB_02108458:
      if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
        plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar5 = *(long *)PTR_DAT_04bb27c0;
        iVar2 = (**(code **)(*plVar4 + 0x60))();
        if (iVar2 < 0x11) {
          uVar9 = 1;
        }
        else {
          if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_021084bc;
          uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_021084bc:
        uVar9 = 0;
      }
      if (plVar8 != (long *)0x0) {
        lVar5 = plVar8[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
        cVar1 = (char)param_1[1];
        if (((int)lVar5 == 1) && ((uVar3 & uVar9) != 0)) {
          if ((cVar1 == '\0') && (*(int *)(plVar8[0x76] + 0x360) != 0x12)) {
            return;
          }
          if (*(int *)((long)plVar8 + 0x754) < 3) {
            *(undefined4 *)((long)plVar8 + 0x754) = 3;
            return;
          }
          return;
        }
        goto joined_r0x02108554;
      }
    }
  }
  else {
    piStack_50 = &local_5c;
    local_58 = &PTR_FUN_04a770e0;
    local_48 = &local_34;
    if (*(int *)(lVar5 + 0xb88) == 0) goto LAB_02108444;
    lVar10 = (long)*(int *)(lVar5 + 0xb88) << 3;
    puVar7 = *(undefined8 **)(lVar5 + 0xb90);
    do {
      (*(code *)*local_58)(&local_58,*puVar7);
      lVar10 = lVar10 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar10 != 0);
    lVar5 = *(long *)PTR_DAT_04bb27c0;
    if (lVar5 != 0) {
      if ((((local_34 == 0) ||
           (plVar8 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                               ((ulong)(local_34 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
          ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != local_34))
      goto LAB_02108454;
      goto LAB_02108458;
    }
  }
  cVar1 = (char)param_1[1];
joined_r0x02108554:
  if (((cVar1 == '\0') && (uVar6 = (ulong)*param_1, uVar6 < 10)) &&
     ((&DAT_053fee41)[uVar6 * 0xba0] != '\0')) {
    (&DAT_053fee38)[uVar6 * 0xba0] = 1;
  }
  return;
}

