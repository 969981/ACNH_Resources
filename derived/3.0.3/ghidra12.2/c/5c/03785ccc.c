
void FUN_03785ccc(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *param_2;
  if (uVar8 == *(uint *)(param_1 + 8)) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x03785d98;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03785d98;
    }
  }
  uVar8 = 0;
joined_r0x03785d98:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) &&
       (local_40 = (undefined *)CONCAT44(local_40._4_4_,0x13),
       *(int *)(plVar7[0x76] + 0x360) != 0x13)) {
      lVar6 = *(long *)PTR_DAT_04bb4e28;
      iVar3 = FUN_03722560(lVar6,plVar7 + 0x7c);
      if ((iVar3 != -1) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0xe8) + (long)iVar3 * 8),
         (*(ushort *)(lVar6 + 0x114) >> 9 & 1) != 0)) {
        local_40 = PTR_DAT_04bb2010 + 0x10;
        local_38 = (int)((float)(int)*(float *)(lVar6 + 0x104) / 5.0) -
                   (uint)(*(float *)(lVar6 + 0x104) < 0.0);
        iStack_34 = (int)((float)(int)*(float *)(lVar6 + 0x10c) / 5.0) -
                    (uint)(*(float *)(lVar6 + 0x10c) < 0.0);
        FUN_03785910(*(undefined8 *)(param_1 + 0x10),&local_40);
      }
    }
  }
  return;
}

