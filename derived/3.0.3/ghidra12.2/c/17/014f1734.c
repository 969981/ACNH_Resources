
bool FUN_014f1734(long param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  uVar4 = FUN_0277e294(param_3);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar4 & 1) == 0) {
    return false;
  }
  uVar8 = *param_2;
  if (uVar8 == *(uint *)PTR_DAT_04bb3238) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x014f18c0;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014f18c0;
    }
  }
  uVar8 = 0;
joined_r0x014f18c0:
  if (plVar7 == (long *)0x0) {
    return false;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  lVar6 = plVar7[0xd];
  uStack_58 = *(undefined8 *)(lVar6 + 0x278);
  local_50 = *(undefined4 *)(lVar6 + 0x280);
  local_4c = *(undefined4 *)(lVar6 + 0x2b4);
  local_60 = PTR_DAT_04bbbc20 + 0x10;
  uStack_48 = (undefined4)plVar7[0x5a];
  FUN_014e728c(param_1,&local_60,param_3,param_2);
  return *(int *)(param_1 + 0x18) != 0;
}

