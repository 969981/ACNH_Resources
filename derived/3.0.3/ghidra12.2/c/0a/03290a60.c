
void FUN_03290a60(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
    return;
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x58) + -8);
  bVar2 = *(long *)(param_1 + 0x58) != 0;
  if ((bVar2) && (plVar7 != param_2)) {
    do {
      lVar8 = plVar7[3];
      plVar7 = (long *)(lVar8 + -8);
      bVar2 = lVar8 != 0;
      if (!bVar2) {
        plVar7 = (long *)0x0;
      }
    } while (lVar8 != 0 && plVar7 != param_2);
  }
  if (!bVar2) {
    return;
  }
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x28))(param_2,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((param_4 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      return;
    }
    uVar4 = (**(code **)(*param_2 + 0x28))(param_2,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar4 = FUN_032927f0(param_1 + 0x68,param_2 + 4,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  plVar6 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = param_2;
  plVar7 = param_2;
  if ((plVar6 != param_2) && (plVar5 = *(long **)(param_1 + 0x138), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar6,param_2);
    plVar7 = *(long **)(param_1 + 0x18);
  }
  if ((long *)plVar7[7] != (long *)0x0) {
    (**(code **)(*(long *)plVar7[7] + 0x20))();
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    if (((*PTR_DAT_04bc8fa0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8fa0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc8f98 = PTR_DAT_04bc8fa8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc8fa0);
    }
    uVar4 = (**(code **)*param_2)(param_2,PTR_DAT_04bc8f98);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(uint *)(param_2 + 0xf);
      if (*(uint *)(param_1 + 0x160) <= uVar1) {
        uVar1 = 0;
      }
      *(long **)(*(long *)(param_1 + 0x168) + (long)(int)uVar1 * 8) = param_2;
    }
  }
  plVar7 = *(long **)(param_1 + 0xb8);
  lVar8 = *(long *)(param_1 + 0x18);
  if ((plVar7 == (long *)0x0) && ((param_4 & 1) == 0)) {
    plVar7 = *(long **)(param_1 + 0x88);
    if (plVar7 == (long *)0x0) goto LAB_03290bfc;
    (**(code **)(*plVar7 + 0x20))(plVar7,lVar8 + 0x20,param_3 & 1);
    plVar7 = *(long **)(param_1 + 0xb8);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,lVar8 + 0x20,param_3 & 1);
    lVar8 = *(long *)(param_1 + 0x18);
  }
LAB_03290bfc:
  lVar9 = *(long *)(param_1 + 0x58) + -8;
  bVar2 = *(long *)(param_1 + 0x58) != 0;
  if ((bVar2) && (lVar9 != lVar8)) {
    do {
      lVar10 = *(long *)(lVar9 + 0x18);
      lVar9 = lVar10 + -8;
      bVar2 = lVar10 != 0;
      if (!bVar2) {
        lVar9 = 0;
      }
    } while (lVar10 != 0 && lVar9 != lVar8);
  }
  if (bVar2) {
    *(long *)(param_1 + 0x60) = lVar8;
  }
  return;
}

