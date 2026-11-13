
void FUN_014c9038(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  uint local_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_5 != (uint *)0x0) {
    local_64 = *param_5;
    goto LAB_014c906c;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  local_64 = 0;
  if (lVar6 == 0) goto LAB_014c906c;
  uVar8 = *(uint *)PTR_DAT_04bb32f8;
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
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014c91b4;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014c91b4:
    uVar8 = 0;
  }
  if (plVar7 == (long *)0x0) {
    local_64 = 0;
  }
  else {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    local_64 = 0;
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      FUN_00900940(&local_34,plVar7);
      local_64 = local_34 + 0x20000000U >> 0x1e;
    }
  }
LAB_014c906c:
  local_70 = *(float *)(param_1 + 0xa3c);
  uStack_6c = *(undefined4 *)(param_1 + 0xa40);
  local_58 = 0;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  local_5c = 0;
  uStack_60 = *(undefined4 *)(param_1 + 0xb28);
  local_68 = *(float *)(param_1 + 0xa44);
  local_54 = 1;
  *(uint *)(param_3 + 8) = (int)((float)(int)local_70 / 5.0) - (uint)(local_70 < 0.0);
  *(uint *)(param_3 + 0xc) = (int)((float)(int)local_68 / 5.0) - (uint)(local_68 < 0.0);
  FUN_0148a480(param_2,&local_78);
  return;
}

