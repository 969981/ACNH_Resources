
void FUN_0036f4a0(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_14;
  ushort local_12;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((*(code **)(param_2 + 0x178) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_2 + 0x178))
                        (param_3,plVar2 + 8,plVar2 + 1,*(long *)(param_1 + 0x20) + 8,plVar2 + 0x11,
                         *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x180)),
     (uVar1 & 1) == 0)) {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_0034fdec(&local_58);
    local_58 = 0;
    (**(code **)(*plVar2 + 0x20))(&local_80,plVar2);
    uStack_50 = (ulong)CONCAT24((undefined2)local_80,(undefined4)uStack_50);
    (**(code **)(*plVar2 + 0x20))(&local_80,plVar2);
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = CONCAT44(local_48._4_4_,(uint)local_80._2_2_);
    local_80 = 0;
    uStack_78 = 0;
    FUN_0034fdec(&local_80);
    local_80 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_14);
    uStack_78 = (ulong)CONCAT24(local_14,(undefined4)uStack_78);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_14);
    local_70 = CONCAT44(local_70._4_4_,(uint)local_12);
    FUN_003484c4(param_3,plVar2[3],&local_58,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 &local_80,0);
  }
  return;
}

