
void FUN_02cab6f0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **local_60;
  undefined8 *local_58;
  
  plVar4 = *(long **)(param_1 + 0x20);
  *(uint *)((long)plVar4 + 0x2c) = param_2;
  uVar3 = FUN_03c83810(plVar4);
  if ((uVar3 & 1) != 0) {
    uVar2 = *(undefined4 *)((long)plVar4 + 0x24);
    *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
    *(undefined4 *)(plVar4 + 5) = uVar2;
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
  if (param_2 < 4) {
    local_58 = (undefined8 *)(&PTR_DAT_04ab5370)[param_2];
  }
  else {
    local_58 = &DAT_0407ebb1;
  }
  local_60 = &PTR_LAB_048f9770;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28) + param_2;
    if (3 < param_2) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
    }
    FUN_03d66950(*(long *)(param_1 + 8),&local_60,*puVar1);
  }
  plVar4 = *(long **)(param_1 + 0x48);
  local_60 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  (**(code **)(plVar4[3] + 400))(0x3f800000,plVar4[1]);
  return;
}

