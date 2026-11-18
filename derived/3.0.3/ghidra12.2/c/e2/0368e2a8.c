
undefined8 FUN_0368e2a8(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (((param_2 == 0) || ((int)param_3 < 0)) || (*(int *)(param_1 + 0x278) <= (int)param_3)) {
    return 0;
  }
  uVar9 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8) + 0x40);
  if (uVar9 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0368e3a4;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0368e3a4;
    }
  }
  uVar9 = 0;
joined_r0x0368e3a4:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3740);
    if (((uVar9 & uVar3) == 1) && (plVar7[0xd] != 0)) {
      fVar10 = *(float *)(plVar7[0xd] + 0x2a0);
      puVar8 = (undefined8 *)plVar7[0xc];
      if (puVar8 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar8 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar8 = &DAT_05240280;
        }
      }
      if ((puVar8[0x22a] != 0) && (uVar5 = FUN_016ff8c0(puVar8,0xb,param_2), (uVar5 & 1) != 0)) {
        *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + 10.0;
      }
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + (fVar10 + -1.0) * 10.0;
      return 1;
    }
  }
  return 0;
}

