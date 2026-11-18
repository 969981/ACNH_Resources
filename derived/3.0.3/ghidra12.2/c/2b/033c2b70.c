
void FUN_033c2b70(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) != 3 || uVar9 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x033c2c34;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033c2c34;
    }
  }
  uVar9 = 0;
joined_r0x033c2c34:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc99b8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc99b0);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
      uVar9 = *(uint *)(plVar8 + 0x4f);
      if (uVar9 != 0) {
        plVar5 = (long *)plVar8[0x50];
        plVar8 = plVar5;
        if ((uVar9 & 1) != 0) {
          plVar8 = plVar5 + 1;
          *(byte *)(*plVar5 + 0x48) = *(byte *)(*plVar5 + 0x48) & 0xfb;
        }
        if (((long)(int)uVar9 - 1U & 0x1fffffffffffffff) != 0) {
          do {
            *(byte *)(*plVar8 + 0x48) = *(byte *)(*plVar8 + 0x48) & 0xfb;
            plVar1 = plVar8 + 1;
            plVar8 = plVar8 + 2;
            *(byte *)(*plVar1 + 0x48) = *(byte *)(*plVar1 + 0x48) & 0xfb;
          } while (plVar8 != plVar5 + (int)uVar9);
        }
      }
    }
  }
  return;
}

