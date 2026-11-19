
void FUN_039686d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 extraout_x1;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_78;
  undefined4 local_74;
  long local_70;
  long lStack_68;
  
  lVar5 = param_1 + 0xd28;
  lVar8 = *(long *)PTR_DAT_04bbd7e8;
  lVar7 = param_1 + 8;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0xb0,0);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x1e8;
  FUN_0390e390(lVar5,1,param_2);
  lVar6 = lVar8 + 0x5c0;
  FUN_0390e4c0(lVar5,0,lVar6,0);
  FUN_0390e4c0(lVar5,1,lVar6,1);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x3c8;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0x2990,0);
  FUN_0390e4c0(lVar5,1,lVar8 + 0x2990,1);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x5a8;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0x1fc0,0);
  FUN_0390e4c0(lVar5,1,lVar8 + 0x1fc0,1);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x788;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0x24a8,0);
  FUN_0390e4c0(lVar5,1,lVar8 + 0x24a8,1);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0xb48;
  FUN_0390e390(lVar5,1,param_2);
  lVar1 = lVar8 + 0x1308;
  FUN_0390e4c0(lVar5,0,lVar1,0);
  FUN_0390e4c0(lVar5,1,lVar1,1);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0xf08;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0x338,0);
  FUN_0390e4c0(lVar5,1,lVar8 + 0x338,2);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x10e8;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8 + 0xc58,0);
  FUN_0390e4c0(lVar5,1,lVar8 + 0xc58,2);
  FUN_0390e640(lVar5);
  FUN_0390e390(lVar7,1,param_2);
  FUN_0390e4c0(lVar7,0,lVar6,0);
  FUN_0390e640(lVar7);
  lVar5 = param_1 + 0x968;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar1,0);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x12c8;
  FUN_0390e390(lVar5,1,param_2);
  lVar8 = lVar8 + 0x848;
  FUN_0390e4c0(lVar5,0,lVar8,0);
  FUN_0390e640(lVar5);
  lVar5 = param_1 + 0x14a8;
  FUN_0390e390(lVar5,1,param_2);
  FUN_0390e4c0(lVar5,0,lVar8,0);
  FUN_0390e4c0(lVar5,1,lVar8,1);
  FUN_0390e640(lVar5);
  lVar5 = param_2;
  if (param_2 == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar3 = (long *)(lVar7 + 8);
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar3;
  }
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined2 *)(param_1 + 0x19b2) = 0;
  *(byte *)(param_1 + 0x19b0) = *(byte *)(param_1 + 0x19b0) & 0xfe;
  FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x1988,lVar5,0x40,8,0);
  *(undefined2 *)(param_1 + 0x19b2) = 0;
  puVar4 = PTR_DAT_04bb2cd8;
  if (0 < (int)(*(ulong *)(param_1 + 0x1998) >> 4)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      lVar8 = (**(code **)puVar4)(*(undefined8 *)(param_1 + 0x19a0));
      lVar6 = 0;
      if (*(long *)(param_1 + 0x19a8) != 0) {
        lVar6 = *(long *)(param_1 + 0x1990) - *(long *)(*(long *)(param_1 + 0x19a8) + 0x10);
      }
      lVar6 = lVar6 + lVar7;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x10;
      puVar2 = (undefined8 *)(lVar8 + lVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
    } while (lVar5 < (int)(*(ulong *)(param_1 + 0x1998) >> 4));
  }
  local_70 = *(long *)(param_1 + 0x19a0);
  local_78 = 0;
  if (*(long *)(param_1 + 0x19a8) != 0) {
    local_78 = *(int *)(param_1 + 0x1990) - *(int *)(*(long *)(param_1 + 0x19a8) + 0x10);
  }
  local_74 = 0;
  if (local_70 != 0) {
    local_74 = *(undefined4 *)(local_70 + 0x104);
  }
  lVar5 = param_1 + 0x1868;
  lStack_68 = param_1 + 0x1988;
  FUN_0390ebc0(lVar5,&local_78,0x10);
  *(undefined8 *)(param_1 + 0x18a0) = 0x2e;
  *(undefined2 *)(param_1 + 0x18a8) = 1;
  param_1 = param_1 + 0x1688;
  FUN_0390e390(param_1,1,param_2);
  FUN_0390e4c0(param_1,0,lVar5,0);
  FUN_0390e4c0(param_1,1,lVar5,0);
  FUN_0390e4c0(param_1,2,lVar5,0);
  FUN_0390e4c0(param_1,3,lVar5,0);
  FUN_0390e4c0(param_1,4,lVar5,0);
  FUN_0390e4c0(param_1,5,lVar5,0);
  FUN_0390e4c0(param_1,6,lVar5,0);
  FUN_0390e4c0(param_1,7,lVar5,0);
  FUN_0390e4c0(param_1,8,lVar5,0);
  FUN_0390e4c0(param_1,9,lVar5,0);
  FUN_0390e4c0(param_1,10,lVar5,0);
  FUN_0390e4c0(param_1,0xb,lVar5,0);
  FUN_0390e4c0(param_1,0xc,lVar5,0);
  FUN_0390e4c0(param_1,0xd,lVar5,0);
  FUN_0390e4c0(param_1,0xe,lVar5,0);
  FUN_0390e4c0(param_1,0xf,lVar5,0);
  FUN_0390e640(param_1);
  return;
}

