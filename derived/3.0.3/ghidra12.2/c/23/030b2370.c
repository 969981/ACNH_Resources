
void FUN_030b2370(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float extraout_s0;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(undefined8 **)(param_3 + 0x28) != (undefined8 *)0x0) {
    plVar3 = (long *)**(undefined8 **)(param_3 + 0x28);
    (**(code **)(*plVar3 + 0x50))(plVar3,param_3 + 0x38);
    puVar7 = *(undefined8 **)(param_3 + 0x28);
    *(undefined1 *)(param_3 + 0x17a) = 0;
    *(undefined2 *)(param_3 + 0x178) = 1;
    *(undefined2 *)(param_3 + 0x30) = 1;
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
      local_60._0_4_ = extraout_s0;
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)*plVar3)();
        uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
        uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
        plVar5 = (long *)(**(code **)*plVar3)(plVar3);
        local_60 = PTR_DAT_04bc0cb8 + 0x10;
        local_58 = 0xb;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
        uVar6 = (**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
        FUN_030b28c0(*(undefined4 *)((long)plVar3 + 0x4c),&local_60,&local_68,uVar4,uVar1,uVar2,
                     (long)plVar3 + 0x1c,(long)plVar3 + 0x54,uVar6);
        param_2 = local_60._4_4_ + fStack_64;
        local_60._0_4_ = (float)local_60 + local_68;
      }
      local_60 = (undefined *)CONCAT44(param_2,(float)local_60);
      (**(code **)(*(long *)*puVar7 + 0x78))((long *)*puVar7,&local_60);
    }
  }
  return;
}

