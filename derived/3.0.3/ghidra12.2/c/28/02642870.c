
void FUN_02642870(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ushort uVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_28 [2];
  ushort local_24 [2];
  
  bVar6 = *param_1;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar6);
  lVar2 = FUN_02583354(DAT_055021a0,&local_58,1);
  if (lVar2 == 0) {
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 9) goto LAB_0264291c;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_0264291c:
  bVar6 = *param_1;
  local_24[0] = 0;
  uVar10 = bVar6 & 0x7f;
  if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar7 = (uint)uVar8;
  if (DAT_04c8c0f0 <= uVar7) {
    uVar7 = 0;
  }
  if (7 < bVar6) {
    uVar10 = 0x7f;
  }
  local_24[0] = uVar10 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar7 * 4) << 0xb);
  lVar5 = *(long *)(lVar2 + 0x3278);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar2 + 0x3278) == 0) goto LAB_026429c4;
      plVar3 = *(long **)(*(long *)(lVar2 + 0x3278) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar2 + 0x3258);
      uStack_50 = *(undefined8 *)(lVar2 + 0x3260);
      local_48 = 0x2b8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
LAB_026429c4:
  *(char *)(*(long *)(lVar2 + 0x3260) + *(long *)(lVar2 + 0x3258) + 3) = (char)param_2;
  if ((*(long *)(lVar2 + 0x3278) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar2 + 0x3278) + 0x20), plVar3 != (long *)0x0)) {
    local_58 = *(undefined8 *)(lVar2 + 0x3258);
    uStack_50 = *(undefined8 *)(lVar2 + 0x3260);
    local_48 = 0x2b8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  }
  *(char *)(*(long *)(lVar2 + 0x3260) + *(long *)(lVar2 + 0x3258) + 8) =
       (char)((ulong)param_2 >> 0x20);
  FUN_0080bc00(param_1,param_3);
  if ((*(long *)(lVar2 + 0x3278) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar2 + 0x3278) + 0x20), plVar3 != (long *)0x0)) {
    local_58 = *(undefined8 *)(lVar2 + 0x3258);
    uStack_50 = *(undefined8 *)(lVar2 + 0x3260);
    local_48 = 0x2b8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  }
  lVar5 = *(long *)(lVar2 + 0x3258);
  lVar9 = *(long *)(lVar2 + 0x3260);
  FUN_007ef010(local_28,local_24);
  *(undefined2 *)(lVar9 + lVar5 + 10) = local_28[0];
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x3278) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x3278) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

