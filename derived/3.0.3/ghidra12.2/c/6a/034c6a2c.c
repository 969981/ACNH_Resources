
void FUN_034c6a2c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined *local_c0 [4];
  undefined *local_a0 [4];
  undefined *local_80;
  long lStack_78;
  undefined *local_60 [2];
  undefined **local_50;
  undefined8 local_48;
  undefined ***pppuStack_40;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (*(int *)(*(long *)(param_1 + 0x2a0) + 0x94) != 3) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) goto LAB_034c6b6c;
  uVar7 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_034c6b00;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_034c6b00:
    uVar7 = 0;
  }
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3278);
    if ((uVar7 & uVar3) == 1) {
      iVar2 = FUN_008fbd00(plVar6);
      if (iVar2 < 0) {
        iVar2 = -1;
      }
      *(int *)(*(long *)(param_1 + 0x230) + 0xf10) = iVar2;
    }
  }
LAB_034c6b6c:
  local_48 = *(undefined8 *)(param_1 + 0x218);
  pppuStack_40 = &local_50;
  local_80 = &DAT_04b30250;
  local_60[0] = PTR_DAT_04bc6388 + 0x10;
  local_50 = &PTR_LAB_04b30148;
  local_c0[0] = PTR_DAT_04bbba70 + 0x10;
  local_a0[0] = local_c0[0];
  lStack_78 = param_1;
  FUN_03467a60(*(undefined8 *)(param_1 + 0x2a0),local_60,0,&local_80,local_a0,local_c0);
  return;
}

