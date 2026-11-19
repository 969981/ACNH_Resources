
void FUN_03ca1200(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined **local_b0;
  long *plStack_a8;
  long *local_a0;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_44;
  
  local_88 = param_2;
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_03ca0cec(param_1,param_3,param_4);
  }
  puVar2 = PTR_LAB_04bd4120;
  local_90 = 0;
  plStack_a8 = &local_90;
  local_b0 = &PTR_LAB_04b893d8;
  local_a0 = &local_88;
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar6 = (long)*(int *)(param_1 + 0x74);
    lVar7 = *(long *)(param_1 + 0x68) - lVar6;
    puVar1 = PTR_DAT_04bd4138 + 0x10;
    do {
      local_80 = puVar1;
      uVar3 = FUN_03c90cc0(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x18) + 0xc9),
                           &local_b0,&local_80,local_88 + 0x30,puVar2,0);
      if ((uVar3 & 1) != 0) break;
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
    } while (lVar7 != (param_1 + 0x60) - lVar6);
    if (local_90 != 0) {
      plVar5 = *(long **)(local_90 + 0xc9);
      lVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar6 = local_90;
      puVar2 = PTR_DAT_04bd44e8;
      lVar7 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar7 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc9) + 8);
      }
      if ((plVar5[1] == lVar7) || (plVar5[1] == local_88)) {
        lVar7 = local_90;
      }
      else if (*(long *)(local_90 + 0x18) == 0) {
        lVar7 = FUN_03ca0cec(param_1,param_3,param_4);
        lVar7 = *(long *)(lVar7 + 0x18);
      }
      else {
        local_80 = *(undefined **)(param_1 + 0x30);
        uStack_78 = 0;
        nn::os::LockMutex((MutexType *)(PTR_DAT_04bd44e8 + 0x20));
        puVar1 = PTR_DAT_04bd44c8;
        local_70 = *(undefined8 *)PTR_DAT_04bd44c8;
        *(undefined ***)PTR_DAT_04bd44c8 = &local_80;
        FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
        lVar7 = FUN_03c92160(lVar6,*(undefined8 *)(*(long *)(lVar6 + 0xc9) + 0x10),0);
        lVar4 = *(long *)(lVar6 + 0x18);
        if (*(long *)(lVar6 + 0x10) == lVar4 + 0x20) {
          FUN_0037cfe0(lVar4,lVar7);
        }
        else {
          FUN_0037d014(lVar4,*(long *)(lVar6 + 0x10) + -8,lVar7);
        }
        FUN_03ca1480(lVar6,lVar7);
        local_44 = 0;
        FUN_03ca1050(lVar7,*(undefined8 *)(*(long *)(lVar7 + 0xc9) + 0x10),&local_44);
        *(undefined8 *)puVar1 = local_70;
        FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
        nn::os::UnlockMutex((MutexType *)(puVar2 + 0x20));
      }
      *(long *)(local_88 + 0x48) = lVar7;
      *(undefined1 *)(local_88 + 0x10) = 1;
      FUN_03c90a50(*(long *)(lVar7 + 0xc9),local_88,*(undefined8 *)(*(long *)(lVar7 + 0xc9) + 8));
      return;
    }
    param_2 = local_88;
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}

