
void FUN_02552c38(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0960);
      puVar10 = &DAT_054f0958;
      if (iVar4 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar10 = &DAT_054f0958;
    }
  }
  else {
    puVar10 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar10 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
  }
  local_40 = 0x31;
  *(uint *)((long)puVar10 + 4) = *(uint *)((long)puVar10 + 4) & 0xfffdffff;
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar9 = *puVar1;
  }
  else {
    uVar9 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar9 == 0) {
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
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02552dbc;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02552dbc;
    }
  }
  uVar9 = 0;
joined_r0x02552dbc:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar2 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
    if ((((int)lVar7 == 1) && ((uVar5 & uVar9) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      FUN_023203ac(plVar8,0,0);
      local_40 = 0;
      local_3c = 1;
      local_38 = 6;
      local_32 = 0;
      local_34 = 0;
      FUN_02321e44(auStack_48,plVar8,&local_40);
    }
  }
  return;
}

