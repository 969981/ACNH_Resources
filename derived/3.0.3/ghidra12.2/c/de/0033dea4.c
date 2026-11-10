
void FUN_0033dea4(long param_1,int param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar7 = (long)param_2;
  memcpy((void *)(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x548),param_4,0x250);
  lVar4 = *(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8;
  pvVar2 = (void *)FUN_00346e50(lVar4 + 0x10,lVar4 + 0x798,0x250);
  if (pvVar2 != (void *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)((long)param_4 + 0x208) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)((long)param_4 + 0x200) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)((long)param_4 + 0x218) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)((long)param_4 + 0x210) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x1970);
    *(undefined8 *)((long)param_4 + 0x228) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)((long)param_4 + 0x220) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)((long)param_4 + 0x238) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)((long)param_4 + 0x230) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)((long)param_4 + 0x248) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)((long)param_4 + 0x240) = uVar5;
    memcpy(pvVar2,param_4,0x250);
    FUN_00348cdc(param_3,5,0,*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x798,0x250);
    FUN_00348cdc(param_3,5,4,*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x798,0x250);
    FUN_00348cdc(param_3,5,5,*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x798,0x250);
    FUN_00346f6c(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10);
  }
  lVar4 = *(long *)(param_1 + 0x1708);
  pvVar2 = *(void **)(lVar4 + lVar7 * 0x40);
  if (pvVar2 != (void *)0x0) {
    local_60 = 0;
    uStack_58 = 0;
    sVar6 = *(size_t *)(lVar4 + lVar7 * 0x40 + 0x20);
    pvVar3 = (void *)FUN_00346e50(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10,
                                  &local_60,sVar6);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,pvVar2,sVar6);
      FUN_00348cdc(param_3,0xb,0,&local_60,sVar6);
      FUN_00348cdc(param_3,0xb,4,&local_60,sVar6);
      FUN_00348cdc(param_3,0xb,5,&local_60,sVar6);
      FUN_00346f6c(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10);
    }
    lVar4 = *(long *)(param_1 + 0x1708);
  }
  lVar1 = lVar4 + lVar7 * 0x40;
  pvVar2 = *(void **)(lVar1 + 8);
  if (pvVar2 != (void *)0x0) {
    local_60 = 0;
    uStack_58 = 0;
    sVar6 = *(size_t *)(lVar1 + 0x28);
    pvVar3 = (void *)FUN_00346e50(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10,
                                  &local_60,sVar6);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,pvVar2,sVar6);
      FUN_00348cdc(param_3,0xc,0,&local_60,sVar6);
      FUN_00348cdc(param_3,0xc,4,&local_60,sVar6);
      FUN_00348cdc(param_3,0xc,5,&local_60,sVar6);
      FUN_00346f6c(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10);
    }
    lVar4 = *(long *)(param_1 + 0x1708);
  }
  lVar1 = lVar4 + lVar7 * 0x40;
  pvVar2 = *(void **)(lVar1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    local_60 = 0;
    uStack_58 = 0;
    sVar6 = *(size_t *)(lVar1 + 0x30);
    pvVar3 = (void *)FUN_00346e50(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10,
                                  &local_60,sVar6);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,pvVar2,sVar6);
      FUN_00348cdc(param_3,0xd,0,&local_60,sVar6);
      FUN_00348cdc(param_3,0xd,4,&local_60,sVar6);
      FUN_00348cdc(param_3,0xd,5,&local_60,sVar6);
      FUN_00346f6c(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10);
    }
    lVar4 = *(long *)(param_1 + 0x1708);
  }
  lVar4 = lVar4 + lVar7 * 0x40;
  pvVar2 = *(void **)(lVar4 + 0x18);
  if (pvVar2 != (void *)0x0) {
    local_60 = 0;
    uStack_58 = 0;
    sVar6 = *(size_t *)(lVar4 + 0x38);
    pvVar3 = (void *)FUN_00346e50(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10,
                                  &local_60,sVar6);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,pvVar2,sVar6);
      FUN_00348cdc(param_3,4,0,&local_60,sVar6);
      FUN_00348cdc(param_3,4,4,&local_60,sVar6);
      FUN_00348cdc(param_3,4,5,&local_60,sVar6);
      FUN_00346f6c(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10);
    }
  }
  return;
}

