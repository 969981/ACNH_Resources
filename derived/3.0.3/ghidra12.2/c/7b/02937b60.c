
void FUN_02937b60(byte param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint *puVar12;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bc3ab8;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02937c2c;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02937c2c:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar9 = plVar10[0x2a];
  if (((*PTR_DAT_04bc3a98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3a98), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc3a90 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3a98);
  }
  uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bc3a90);
  puVar5 = PTR_DAT_04bc3b60;
  puVar4 = PTR_DAT_04bc3b58;
  puVar12 = (uint *)PTR_DAT_04bb3238;
  uVar2 = 0;
  if ((int)lVar9 == 1) {
    uVar2 = uVar11;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  if ((long *)plVar10[0x16] == plVar10 + 0x15) {
LAB_02937d68:
    uVar11 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
    plVar7 = (long *)(plVar10[0x16] - lVar9);
    puVar1 = PTR_DAT_04bbca00 + 0x10;
    do {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar4), (uVar8 & 1) != 0)) {
        if (param_1 < 0x14) {
          if (((int)(uint)*(byte *)((long)plVar7 + 0x59a) <= (int)(char)param_1) &&
             ((int)((uint)*(byte *)((long)plVar7 + 0x59b) + (uint)*(byte *)((long)plVar7 + 0x59a))
              <= (int)(char)param_1)) goto LAB_02937d68;
          uVar11 = *(uint *)(plVar7 + (ulong)param_1 + 0x9f);
          goto joined_r0x02937d60;
        }
        puVar12 = (uint *)PTR_DAT_04bb3238;
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
    } while (plVar7 != (long *)((long)(plVar10 + 0x15) - lVar9));
    uVar11 = *puVar12;
  }
joined_r0x02937d60:
  if (uVar11 == 0) {
    return;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
      goto joined_r0x02937e34;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02937e34;
    }
  }
  uVar11 = 0;
joined_r0x02937e34:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc3aa8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3ab0);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bc3aa8);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
      lVar9 = 0;
      if (plVar10[0xe] != 0) {
        lVar9 = plVar10[0xe] + 0x278;
      }
      if (*(int *)(lVar9 + 8) != 4) {
        FUN_03ebb160(lVar9,4);
        return;
      }
    }
  }
  return;
}

