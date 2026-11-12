
void FUN_00929b04(long param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  short *psVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 local_70 [16];
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 uStack_51;
  undefined8 local_38;
  
  local_70 = FUN_02642d30();
  uVar9 = local_70._8_8_ & 0xffffffff;
  if (uVar9 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_38 = &uStack_51;
  lVar5 = (*(code *)(&PTR_LAB_04a88330)[uVar9])(&local_38,local_70);
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)(lVar5 + 0x98360);
  lVar10 = *(long *)(lVar5 + 0x98380);
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar6 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar5 + 0x98380) == 0) goto LAB_00929bdc;
      plVar6 = *(long **)(*(long *)(lVar5 + 0x98380) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_70._0_8_ = *plVar1;
      local_70._8_8_ = *(undefined8 *)(lVar5 + 0x98368);
      uStack_60 = 0x1c;
      (**(code **)(*plVar6 + 0x20))(plVar6,local_70);
    }
  }
LAB_00929bdc:
  piVar2 = (int *)(*(long *)(lVar5 + 0x98368) + *plVar1);
  if (*piVar2 != 0) {
    psVar7 = (short *)(**(code **)(*param_2 + 0x18))(param_2);
    iVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    if (((psVar7 != (short *)0x0) && (iVar4 != 0)) && (*psVar7 != 0)) {
      local_70._0_4_ = 10;
      local_70._8_8_ = piVar2 + 1;
      FUN_02906c90(local_70,param_2);
      *(undefined1 *)((long)piVar2 + 0x19) = 1;
    }
  }
  if ((*(long *)(lVar5 + 0x98380) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar5 + 0x98380) + 0x20), plVar6 != (long *)0x0)) {
    local_70._0_8_ = *plVar1;
    local_70._8_8_ = *(undefined8 *)(lVar5 + 0x98368);
    uStack_60 = 0x1c;
    (**(code **)(*plVar6 + 0x20))(plVar6,local_70);
  }
  *(undefined1 *)(*(long *)(lVar5 + 0x98368) + *plVar1 + 0x18) = param_3;
  if ((*(long *)(lVar5 + 0x98380) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar5 + 0x98380) + 0x20), plVar6 != (long *)0x0)) {
    local_70._0_8_ = *plVar1;
    local_70._8_8_ = *(undefined8 *)(lVar5 + 0x98368);
    uStack_60 = 0x1c;
    (**(code **)(*plVar6 + 0x20))(plVar6,local_70);
  }
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x98368) + *plVar1);
  local_70._0_8_ = *puVar8;
  local_70._8_8_ = puVar8[1];
  uStack_60 = puVar8[2];
  local_58 = *(undefined4 *)(puVar8 + 3);
  uVar3 = (ulong)local_38 >> 0x30;
  local_38 = (undefined1 *)CONCAT26((ushort)uVar3 & 0xff00,0xff0000000000);
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 8),&local_38,local_70,0x1c,0
                );
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar5 + 0x98380) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x98380) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

