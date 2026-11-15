
void FUN_02341ccc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)(*(long *)(param_1 + 0xbdf8) +
                    ((ulong)*(uint *)(*(long *)(param_1 + 0xbdf8) + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 0;
      goto joined_r0x02341d9c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02341d9c;
    }
  }
  uVar9 = 1;
joined_r0x02341d9c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bc30a0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc30a0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc3098 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc30a0);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc3098);
    if (((uVar9 == 0 && ((uVar3 ^ 0xffffffff) & 1) == 0) && ((int)lVar7 == 1)) &&
       (lVar7 = plVar8[0xf], lVar7 != 0)) {
      lVar5 = FUN_0074f690(lVar7,plVar8 + 0x51);
      if (lVar5 != 0) {
        uVar6 = FUN_0074f690(lVar7,plVar8 + 0x51);
        if (*(long *)(param_1 + 0x1150) != 0) {
          FUN_01664990(*(undefined8 *)PTR_DAT_04bb2200,*(long *)(param_1 + 0x1150),uVar6,0);
          return;
        }
      }
    }
  }
  return;
}

