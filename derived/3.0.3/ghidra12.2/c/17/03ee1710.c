
void FUN_03ee1710(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_74;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x108) + 0x28);
    uVar3 = (**(code **)(*plVar4 + 0xa0))(plVar4,0);
    if (0 < (int)uVar3) {
      uVar5 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar6 = *(long *)(param_1 + 0x170);
        uVar2 = uVar5;
        if (*(uint *)(param_1 + 0x168) <= uVar5) {
          uVar2 = 0;
        }
        (**(code **)(*plVar4 + 0xa8))(plVar4,0,uVar5,&local_60);
        lVar6 = lVar6 + (ulong)uVar2 * 0x20;
        local_74 = 0xff2800ff;
        uStack_68 = local_60;
        local_70 = puVar1;
        (**(code **)(**(long **)(lVar6 + 0x18) + 0x48))
                  (*(long **)(lVar6 + 0x18),0x100,&local_70,&local_74);
        (**(code **)(**(long **)(lVar6 + 8) + 0x50))(local_54);
        (**(code **)(**(long **)(lVar6 + 0x10) + 0x50))(local_58);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return;
}

