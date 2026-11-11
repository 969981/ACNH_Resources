
undefined8 FUN_004c01b0(long *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar3 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  local_48 = 0xffffffff;
  local_58 = param_3;
  uStack_50 = uVar3;
  uVar2 = FUN_004c43b0(param_1,&local_58);
  if (*(uint *)(param_1 + 1) == uVar2) {
    plVar4 = (long *)(*(code *)**(undefined8 **)param_1[0xc])();
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0x70,0);
    if ((param_4 & 1) == 0) {
      FUN_00453cd0(lVar5,param_3,uVar3,0,0x1000);
    }
    else {
      FUN_00453c80();
    }
    uVar3 = (**(code **)(*(long *)param_1[0xc] + 0x30))();
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x20);
      uVar6 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x20);
    *puVar1 = local_58;
    puVar1[1] = uStack_50;
    puVar1[2] = local_48;
    puVar1[3] = lVar5;
    *(uint *)(param_1 + 1) = uVar6 + 1;
  }
  return *(undefined8 *)(*param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1b) + 0x18);
}

