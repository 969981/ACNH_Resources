
uint FUN_02b91d60(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0xffff;
  }
  if (((((int)param_1 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8)
       , plVar8 == (long *)0x0)) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar8[0x46] != (int)param_1)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar7 = 1;
      goto joined_r0x02b91e74;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b91e74;
    }
  }
  uVar7 = 0;
joined_r0x02b91e74:
  if (plVar8 == (long *)0x0) {
    return 0xffff;
  }
  lVar6 = plVar8[0x2a];
  if (((*PTR_DAT_04bb59a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb59a0);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5998);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar7;
  }
  if ((uVar5 & 1) == 0) {
    return 0xffff;
  }
  if (uVar1 == 0) {
    return 0xffff;
  }
  uVar7 = (uint)*(ushort *)((long)plVar8 + 0xcbe);
  if ((int)plVar8[0xaa] != 0x1a) {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

