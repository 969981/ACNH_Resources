
uint FUN_013fe070(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    uVar11 = *(uint *)PTR_DAT_04bbc7c0;
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_013fe144;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_013fe144:
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbc7a8);
      }
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc7a0);
      puVar4 = PTR_DAT_04bbc9f8;
      puVar3 = PTR_DAT_04bbc9f0;
      uVar6 = 0;
      uVar2 = 0;
      if ((int)lVar9 == 1) {
        uVar2 = uVar11;
      }
      if (((uVar8 & 1) == 0) || (uVar2 == 0)) goto LAB_013fe23c;
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar7 = (long *)(plVar10[0x16] - lVar9);
        puVar1 = PTR_DAT_04bbca00 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar7 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar3), (uVar8 & 1) != 0)) {
            local_70 = PTR_DAT_04bb2018 + 0x10;
            local_68 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
            iStack_64 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
            uVar6 = FUN_013ce4a0(plVar7,param_3,&local_70);
            goto LAB_013fe23c;
          }
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
        } while (plVar7 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  uVar6 = 0;
LAB_013fe23c:
  return uVar6 & 1;
}

