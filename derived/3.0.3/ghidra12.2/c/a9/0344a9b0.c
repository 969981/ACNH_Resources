
void FUN_0344a9b0(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_40;
  undefined4 local_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar1 = param_2;
    if (*(uint *)(lVar2 + 0x2e8) <= param_2) {
      uVar1 = 0;
    }
    plVar4 = *(long **)(*(long *)(lVar2 + 0x2f0) + (long)(int)uVar1 * 8);
    if (plVar4 != (long *)0x0) {
      if (param_3 == 0) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 7;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1c0);
      }
      else {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 6;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1b8);
      }
      (*(code *)*puVar3)(plVar4[1]);
    }
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    uVar1 = param_2;
    if (*(uint *)(lVar2 + 0x2e8) <= param_2) {
      uVar1 = 0;
    }
    plVar4 = *(long **)(*(long *)(lVar2 + 0x2f0) + (long)(int)uVar1 * 8);
    if (plVar4 != (long *)0x0) {
      if (param_3 == 1) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 7;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1c0);
      }
      else {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 6;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1b8);
      }
      (*(code *)*puVar3)(plVar4[1]);
    }
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x2e8) <= param_2) {
      param_2 = 0;
    }
    plVar4 = *(long **)(*(long *)(lVar2 + 0x2f0) + (long)(int)param_2 * 8);
    if (plVar4 != (long *)0x0) {
      if (param_3 == 2) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 7;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1c0);
      }
      else {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 6;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        puVar3 = (undefined8 *)(plVar4[3] + 0x1b8);
      }
      (*(code *)*puVar3)(plVar4[1]);
    }
  }
  return;
}

