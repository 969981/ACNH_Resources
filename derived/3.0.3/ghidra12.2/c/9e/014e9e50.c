
void FUN_014e9e50(undefined1 param_1 [16],float param_2,float param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  uint uVar10;
  float extraout_s0;
  float extraout_s0_00;
  undefined *local_80;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar5 = param_4;
  if ((*(int *)(param_4 + 0x18) != 1) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0))
  goto LAB_014e9fcc;
  uVar10 = *(uint *)(param_4 + 0x8c);
  if ((uVar10 == 0) ||
     (((plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0 ||
       ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    uVar5 = (**(code **)(*plVar4 + 0x60))();
    if ((int)uVar5 < 0x11) {
      uVar10 = 0;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014e9f28;
      uVar10 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014e9f28:
    uVar10 = 1;
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    uVar2 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((uVar5 & 1) != 0) {
      if ((int)lVar7 != 1) {
        uVar10 = 1;
      }
      if ((uVar10 == 0) && ((uVar2 >> 4 & 1) != 0)) {
        FUN_0147f1c0(plVar9,param_5);
        if (*(int *)(param_4 + 0xe8) < 1) {
          return;
        }
        uVar6 = FUN_014e8b30(param_4);
        if (*(int *)(param_4 + 0xe8) == 0) {
          return;
        }
        lVar7 = (long)*(int *)(param_4 + 0xe8) << 3;
        plVar9 = *(long **)(param_4 + 0xf0);
        puVar1 = PTR_DAT_04bbbc20 + 0x10;
        do {
          uStack_68 = *(undefined4 *)(param_5 + 0x18);
          pfVar8 = (float *)*plVar9;
          local_78 = extraout_s0 + *pfVar8;
          local_74 = param_2 + pfVar8[1];
          local_70 = param_3 + pfVar8[2];
          local_6c = (int)pfVar8[3] + *(int *)(param_5 + 0x14);
          local_80 = puVar1;
          plVar4 = (long *)FUN_014e7558(uVar6,pfVar8[5]);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar4 + 0x368))(plVar4,&local_80,1);
          }
          plVar9 = plVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
        return;
      }
    }
  }
LAB_014e9fcc:
  if (*(int *)(param_4 + 0x98) != 0) {
    plVar9 = (long *)FUN_014ba988(param_4 + 0x90);
    uVar5 = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x68))(plVar9,param_5);
      if (*(int *)(param_4 + 0xe8) < 1) {
        return;
      }
      uVar6 = FUN_014e8b30(param_4);
      if (*(int *)(param_4 + 0xe8) == 0) {
        return;
      }
      lVar7 = (long)*(int *)(param_4 + 0xe8) << 3;
      plVar9 = *(long **)(param_4 + 0xf0);
      puVar1 = PTR_DAT_04bbbc20 + 0x10;
      do {
        uStack_68 = *(undefined4 *)(param_5 + 0x18);
        pfVar8 = (float *)*plVar9;
        local_78 = extraout_s0_00 + *pfVar8;
        local_74 = param_2 + pfVar8[1];
        local_70 = param_3 + pfVar8[2];
        local_6c = (int)pfVar8[3] + *(int *)(param_5 + 0x14);
        local_80 = puVar1;
        plVar4 = (long *)FUN_014e7558(uVar6,pfVar8[5]);
        uVar6 = 0;
        if (plVar4 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar4 + 0x368))(plVar4,&local_80,1);
        }
        plVar9 = plVar9 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
      return;
    }
  }
  if ((*(int *)(param_4 + 0x18) == 3) &&
     (plVar9 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(param_4 + 0x8c)), plVar9 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x014ea16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x368))(plVar9,param_5,0);
    return;
  }
  return;
}

