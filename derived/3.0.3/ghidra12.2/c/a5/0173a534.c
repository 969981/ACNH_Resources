
void FUN_0173a534(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long *local_30;
  undefined8 local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    local_30 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_28 = "model_env_instance_intensity";
    FUN_0073d560(*(undefined4 *)(param_1 + 0x284),*(long *)(param_1 + 0x60),&local_30);
  }
  if (((((*(char *)(param_1 + 0x280) != '\0') && (*(char *)(param_1 + 0x281) != '\0')) &&
       (*(long *)(param_1 + 0x278) != 0)) &&
      (((*(long *)(param_1 + 0x88) != 0 && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       ((uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x234), uVar1 != 0 &&
        ((lVar5 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar5 != 0 &&
         (*(uint *)(lVar5 + 0x230) == uVar1)))))))) && (*(long *)(lVar5 + 0x88) != 0)) {
    uStack_4 = *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0x88) + 0x48) + 0x230);
    local_8 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071cb58(&local_30,&uStack_4,&local_8,0);
    plVar2 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb3760 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
      uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3758);
      if ((uVar4 & 1) == 0) {
        local_28._0_3_ = (uint3)(ushort)local_28;
      }
    }
    if (((local_30 != (long *)0x0) && ((char)local_28 != '\0')) && (local_28._2_1_ != '\0')) {
      fVar6 = (float)FUN_016e5d70();
      fVar8 = 1.0;
      if (fVar6 <= 1.0) {
        fVar8 = fVar6;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar8;
      }
      *(float *)(*(long *)(param_1 + 0x278) + 0x54) = fVar7;
      FUN_01738aa0(*(undefined8 *)(param_1 + 0x278),*(undefined8 *)(param_1 + 0x60));
    }
  }
  return;
}

