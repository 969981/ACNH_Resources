
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_02522c84(undefined4 param_1,byte *param_2,undefined8 param_3,undefined4 *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_2 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
    }
    uVar10 = *puVar1;
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar10 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02522d9c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02522d9c;
    }
  }
  uVar10 = 0;
joined_r0x02522d9c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar2 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
    if ((int)lVar7 != 1) {
      return 0;
    }
    if ((uVar5 & uVar10) == 0) {
      return 0;
    }
    if ((uVar2 >> 4 & 1) == 0) {
      return 0;
    }
    lVar7 = *(long *)PTR_DAT_04bb47e0;
    if (((lVar7 == 0) || (*(int *)(lVar7 + 0x160) == 0)) ||
       ((*(char **)(lVar7 + 0x168) == (char *)0x0 || (**(char **)(lVar7 + 0x168) == '\0')))) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar9 = &DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar9 = &DAT_054f0958;
        }
      }
      else {
        puVar9 = (undefined8 *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + *param_2;
        }
      }
      local_54 = 0x2f;
      if ((*(uint *)((long)puVar9 + 4) >> 0xf & 1) == 0) {
        local_58 = *param_4;
        FUN_023ea4a8(param_1,plVar8,0,param_3,&local_58,param_5 & 1);
        return 1;
      }
    }
  }
  return 0;
}

