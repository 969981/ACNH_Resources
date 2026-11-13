
undefined8 FUN_014788dc(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_60 = CONCAT44(local_60._4_4_,*(int *)(param_1 + 0x2d0));
  if (*(int *)(param_1 + 0x2d0) == 1) {
    uVar2 = FUN_01478db0();
    lVar5 = *(long *)PTR_DAT_04bb27c0;
    if (lVar5 != 0) {
      if ((((uVar2 == 0) ||
           (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + (ulong)(uVar2 >> 0x14) * 8
                               ), plVar6 == (long *)0x0)) ||
          ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar2)) {
        plVar6 = (long *)0x0;
      }
      if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
        plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar4 + 0x60))();
      }
      if (plVar6 != (long *)0x0) {
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb5920);
        if ((int)plVar6[0x60] < (int)plVar6[99]) {
          local_50 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
          uStack_48 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
          local_40 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
          uStack_38 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
          local_60 = *(undefined8 *)PTR_DAT_04bb2f80;
          uStack_58 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
          (**(code **)(*(long *)plVar6[0x152] + 0x108))
                    ((long *)plVar6[0x152],&local_60,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
          FUN_007535b4(&local_90,&local_60);
          lVar5 = *(long *)(param_1 + 0x68);
          fVar8 = *(float *)(lVar5 + 0x278);
          fVar9 = *(float *)(lVar5 + 0x27c);
          fVar7 = *(float *)(lVar5 + 0x280);
          iVar3 = *(int *)(lVar5 + 0x2b4);
          iVar1 = *(int *)(plVar6[0xd] + 0x2b4);
          *(uint *)(param_1 + 0x2d4) = uVar2;
          *(undefined4 *)(param_1 + 0x2dc) = 0;
          *(int *)(param_1 + 0x2e4) = iVar3 - iVar1;
          *(float *)(param_1 + 0x2d8) =
               fStack_84 + fVar9 * fStack_8c + fVar8 * local_90 + fVar7 * local_88;
          *(float *)(param_1 + 0x2e0) =
               fStack_64 + fVar9 * fStack_6c + fVar8 * local_70 + fVar7 * local_68;
          return 1;
        }
      }
    }
  }
  return 0;
}

