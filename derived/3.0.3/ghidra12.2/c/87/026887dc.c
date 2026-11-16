
void FUN_026887dc(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_28 [4];
  undefined2 local_24;
  undefined1 local_22;
  
  local_28[0] = *param_2;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_28,1);
  if (lVar4 == 0) {
    return;
  }
  lVar10 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    lVar4 = *(long *)(lVar10 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x194d8);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_026888c0;
      plVar6 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar10 + 8);
      uStack_50 = *(undefined8 *)(lVar10 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_026888c0:
  lVar4 = *(long *)(lVar10 + 8);
  lVar2 = *(long *)(lVar10 + 0x10);
  local_24 = 0x23;
  local_22 = 8;
  FUN_020fd3a0(&local_24,param_1);
  uVar9 = (ulong)(byte)local_24;
  lVar4 = lVar2 + lVar4 + 0x30518;
  uVar8 = (uint)(byte)local_24;
  local_58 = CONCAT44(local_58._4_4_,uVar8);
  uVar3 = 1 << (ulong)(local_24._1_1_ & 0x1f);
  uVar1 = (ulong)uVar8;
  if (0x22 < uVar8) {
    uVar1 = 0;
  }
  if ((*(uint *)(lVar4 + uVar1 * 4) & uVar3) == 0) {
    if (0x22 < uVar8) {
      uVar9 = 0;
    }
    *(uint *)(lVar4 + uVar9 * 4) = *(uint *)(lVar4 + uVar9 * 4) | uVar3;
    if ((*(long *)(lVar10 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_58 = *(undefined8 *)(lVar10 + 8);
      uStack_50 = *(undefined8 *)(lVar10 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
    lVar4 = *(long *)(lVar10 + 8);
    lVar2 = *(long *)(lVar10 + 0x10);
    FUN_021f6050(&local_58,param_1);
    FUN_02790980(lVar2 + lVar4 + 0x38240,&local_58,param_2);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

