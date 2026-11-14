
/* WARNING: Type propagation algorithm not settling */

bool FUN_01508370(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint local_54;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return false;
  }
  uVar10 = *param_1;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01508438;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01508438;
    }
  }
  uVar10 = 0;
joined_r0x01508438:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    puVar3 = PTR_DAT_04bbccc8;
    puVar2 = PTR_DAT_04bbccc0;
    if ((uVar10 & uVar5) == 1) {
      if ((long *)plVar9[0x16] != plVar9 + 0x15) {
        lVar8 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar6 = (long *)(plVar9[0x16] - lVar8);
        puVar1 = PTR_DAT_04bb65f0 + 0x10;
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
            local_54 = *param_2 ^ 0x80000000;
            iVar4 = FUN_014421b4(plVar6,&local_54);
            return iVar4 == 1;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar9 + 0x15) - lVar8));
      }
    }
  }
  return false;
}

