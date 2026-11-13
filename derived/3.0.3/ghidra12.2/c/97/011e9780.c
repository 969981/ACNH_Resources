
uint FUN_011e9780(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') && (DAT_050dfb28 != 0)) &&
     (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                       ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
    if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar8 + 0x46) != DAT_050dfb28)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_011e9870;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_011e9870:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb10);
      }
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbbb08);
      uVar4 = 0;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        local_38 = *(undefined4 *)(param_1 + 8);
        uStack_34 = *(undefined4 *)(param_1 + 0xc);
        local_40 = PTR_DAT_04bb2010 + 0x10;
        uVar6 = FUN_011d4db0(plVar8,&local_40,0);
        if ((uVar6 & 1) == 0) {
          local_44 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
          local_4c = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
          local_48 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_4c,0);
          uVar4 = FUN_011e4960(0,local_48,plVar8,param_1,0);
        }
        else {
          uVar4 = 1;
        }
      }
      goto LAB_011e97ac;
    }
  }
  uVar4 = 0;
LAB_011e97ac:
  return uVar4 & 1;
}

