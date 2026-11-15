
void FUN_02089258(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = *(long *)(param_1 + 8);
  uVar3 = FUN_02087ce0(lVar6,param_2,0);
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)PTR_DAT_04bb27c0;
    if (lVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      uVar1 = *param_2;
      if ((((uVar1 == 0) ||
           (plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                               ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
          ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar1)) {
        plVar7 = (long *)0x0;
      }
      if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
        plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar4 + 0x60))();
      }
      if (plVar7 != (long *)0x0) {
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3fd8);
      }
    }
    lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x48) + 0x68);
    uVar3 = FUN_02201dc0(param_2,lVar6 + 0x278);
    if ((uVar3 & 1) != 0) {
      fVar8 = *(float *)(lVar6 + 0x278) - *(float *)(plVar7[0xd] + 0x278);
      fVar9 = *(float *)(lVar6 + 0x280) - *(float *)(plVar7[0xd] + 0x280);
      fVar8 = fVar9 * fVar9 + fVar8 * fVar8;
      if (fVar8 < (float)(*(uint **)(param_1 + 0x10))[1]) {
        **(uint **)(param_1 + 0x10) = *param_2;
        *(float *)(*(long *)(param_1 + 0x10) + 4) = fVar8;
      }
    }
  }
  return;
}

