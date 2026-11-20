
void FUN_03d85790(long *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *plStack_48;
  
  plStack_48 = param_1;
  if (param_2 == 1) {
    local_50 = *(undefined8 *)(param_3 + 0x10);
    local_60 = (undefined *)0x1;
    local_58 = (char *)CONCAT44(0xffffffff,*(undefined4 *)(param_3 + 8));
    puVar2 = (undefined8 *)param_1[0x4c];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,&local_60);
    }
    puVar2 = (undefined8 *)param_1[0x4d];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,&local_60);
    }
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((*(byte *)((long)param_1 + 0x2c2) >> 2 & 1) != 0) {
      *(byte *)((long)param_1 + 0x2c2) = *(byte *)((long)param_1 + 0x2c2) & 0xfb;
      return;
    }
    plVar4 = (long *)param_1[0x50];
    *(uint *)((long)plVar4 + 0x2c) = ((uint)*(byte *)((long)param_1 + 0x2c3) << 2 ^ 0xffffffff) & 4;
    uVar3 = FUN_03c83810(plVar4);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
      *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
      *(undefined4 *)(plVar4 + 5) = uVar1;
      *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
      (**(code **)(*plVar4 + 0x48))(plVar4);
      if ((long *)plVar4[10] != plVar4 + 9) {
        lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
        plVar5 = (long *)(plVar4[10] - lVar6);
        do {
          (**(code **)(*plVar5 + 0x18))(plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
        } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
      }
    }
    FUN_03c835a0(plVar4);
    lVar6 = param_1[0x54];
    if (lVar6 != 0) {
      uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar6 + 0x40) = uVar1;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = 0;
    }
    local_58 = "Unselect";
    lVar6 = param_1[0x52];
  }
  else {
    if (param_2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x57) = 0;
    puVar2 = (undefined8 *)param_1[0x4c];
    local_60 = (undefined *)0x0;
    local_58 = (char *)CONCAT44(0xffffffff,*(undefined4 *)(param_3 + 8));
    local_50 = *(undefined8 *)(param_3 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,&local_60);
    }
    puVar2 = (undefined8 *)param_1[0x4d];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,&local_60);
    }
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)param_1[0x50];
      uVar1 = 5;
      if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
        uVar1 = 1;
      }
      *(undefined4 *)((long)plVar4 + 0x2c) = uVar1;
      uVar3 = FUN_03c83810(plVar4);
      if ((uVar3 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
        *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
        *(undefined4 *)(plVar4 + 5) = uVar1;
        *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if ((long *)plVar4[10] != plVar4 + 9) {
          lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
          plVar5 = (long *)(plVar4[10] - lVar6);
          do {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
            plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
          } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
        }
      }
      FUN_03c835a0(plVar4);
    }
    if ((*(byte *)((long)param_1 + 0x2c4) & 1) != 0) {
      *(byte *)((long)param_1 + 0x2c4) = *(byte *)((long)param_1 + 0x2c4) & 0xfe;
      return;
    }
    lVar6 = param_1[0x54];
    if (lVar6 != 0) {
      uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar6 + 0x40) = uVar1;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = 0;
    }
    local_58 = "Select";
    lVar6 = param_1[0x51];
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  FUN_03d66950(param_1,&local_60,lVar6);
  return;
}

