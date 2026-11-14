
int FUN_014e593c(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint in_w9;
  long *plVar9;
  uint uVar10;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  if (DAT_051f0338 != 0) {
    in_w9 = *(uint *)(DAT_051f0338 + 8);
  }
  uVar10 = *(uint *)PTR_DAT_04bb3238;
  if (DAT_051f0338 != 0) {
    uVar10 = in_w9;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_014e5afc;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar10 >> 0x14) * 8),
       plVar9 == (long *)0x0)) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014e5a2c;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014e5a2c:
    uVar10 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbcf28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbcf28), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbcf20 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcf28);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbcf20);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && (param_4 != 0)) {
      local_68 = 0;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_70 = PTR_DAT_04bb2010 + 0x10;
      uStack_58 = 0;
      local_60 = puStack_70;
      iVar5 = FUN_014d00a0(param_1,param_2,param_3 & 1,&local_78,param_4,1);
      iVar4 = *(int *)puVar3;
      if (iVar5 == 0) {
        return iVar4;
      }
      if ((param_3 & 1) == 0) {
        if (*(int *)(param_4 + 8) != *(int *)(param_1 + 8)) {
          return iVar4;
        }
        if (*(int *)(param_4 + 0xc) != *(int *)(param_1 + 0xc)) {
          return iVar4;
        }
      }
      return iVar5;
    }
  }
LAB_014e5afc:
  return *(int *)puVar3;
}

