
void FUN_02b914b0(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if (((((int)param_2 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8)
       , plVar7 == (long *)0x0)) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar7[0x46] != (int)param_2)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02b91568;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b91568;
    }
  }
  uVar8 = 0;
joined_r0x02b91568:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb59a0);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5998);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) &&
       (((int)plVar7[0xaa] == 0x1f &&
        (((*(short *)((long)plVar7 + 0xca2) != -1 && (*(short *)((long)plVar7 + 0xca4) != -1)) &&
         (*(short *)((long)plVar7 + 0xca6) != -1)))))) {
      *param_1 = plVar7[0x194];
      *(short *)(param_1 + 1) = (short)plVar7[0x195];
      *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)plVar7 + 0xcaa);
      *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)plVar7 + 0xcab);
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)plVar7 + 0xcac);
    }
  }
  return;
}

