
void FUN_013394f8(long param_1,undefined2 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  long *plVar5;
  undefined8 *local_58;
  int local_50;
  int iStack_4c;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_50 = param_5 - param_3;
  if ((local_50 == 0) && (param_6 == param_4)) {
    plVar5 = *(long **)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    if ((plVar5[5] != 0) && (*(long *)(plVar5[5] + 0x20) != 0)) {
      local_48 = plVar5[1];
      local_40 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar2,uVar3);
      uStack_38 = 8;
      (**(code **)(**(long **)(plVar5[5] + 0x20) + 0x20))(*(long **)(plVar5[5] + 0x20),&local_48);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = *(undefined4 *)(param_1 + 0x18);
    }
    lVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar2,uVar3);
    puVar4 = (undefined2 *)(lVar1 + plVar5[1]);
    *puVar4 = *param_2;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)((long)param_2 + 3);
    local_18._4_4_ = *(undefined4 *)(param_2 + 2);
  }
  else {
    iStack_4c = param_6 - param_4;
    local_58 = &DAT_048f9750;
    local_18 = 0xfffe;
    FUN_0277d4ac(&local_18);
    FUN_0277eec0(param_2,&local_18,&local_58);
    plVar5 = *(long **)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    if ((plVar5[5] != 0) && (*(long *)(plVar5[5] + 0x20) != 0)) {
      local_48 = plVar5[1];
      local_40 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar2,uVar3);
      uStack_38 = 8;
      (**(code **)(**(long **)(plVar5[5] + 0x20) + 0x20))(*(long **)(plVar5[5] + 0x20),&local_48);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = *(undefined4 *)(param_1 + 0x18);
    }
    lVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar2,uVar3);
    puVar4 = (undefined2 *)(lVar1 + plVar5[1]);
    *puVar4 = (undefined2)local_18;
    *(undefined1 *)(puVar4 + 1) = local_18._2_1_;
    *(undefined1 *)((long)puVar4 + 3) = local_18._3_1_;
  }
  *(undefined4 *)(puVar4 + 2) = local_18._4_4_;
  return;
}

