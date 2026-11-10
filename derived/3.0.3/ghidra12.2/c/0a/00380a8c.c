
void FUN_00380a8c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  undefined8 local_28;
  
  FUN_00380c88();
  if (param_1[0xb] != 0) {
    FUN_00380dd8(param_1,param_2,param_3);
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) != 0)) &&
       (*(char *)(param_1 + 0x13) != '\0')) {
      FUN_00381254(param_1,param_2,param_3);
    }
  }
  lVar5 = param_1[0xb];
  if (param_1[1] == 0) {
    if (lVar5 == 0) {
      return;
    }
    if ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0) {
      return;
    }
    puVar4 = (undefined8 *)FUN_00367334(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    lVar5 = param_1[0xe];
    local_28 = *puVar4;
    iVar2 = *(int *)(param_1 + 0x1b);
  }
  else {
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0)) {
      return;
    }
    if (((*(byte *)(param_1[1] + 4) >> 1 & 1) == 0) || (*(char *)((long)param_1 + 0x54) == '\0')) {
      FUN_003819b4(param_1,param_2,param_3);
      (**(code **)(*(long *)*param_1 + 0xb0))((long *)*param_1,param_3);
      lVar5 = param_1[7];
      iVar3 = *(int *)(param_1 + 8);
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      lStack_48 = plVar1[1];
      local_50 = *plVar1 + (long)*(int *)(param_1 + 6);
      goto LAB_00380c30;
    }
    puVar4 = (undefined8 *)FUN_00367334(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    lVar5 = param_1[9];
    local_28 = *puVar4;
    iVar2 = *(int *)(param_1 + 6);
  }
  FUN_0038d1a0(param_2,param_3,param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  FUN_00348c64(param_3,*(undefined4 *)((long)param_1 + 0x224),4,lVar5 + 8,&local_28);
  (**(code **)(*(long *)*param_1 + 0xb0))((long *)*param_1,param_3);
  lVar5 = param_1[0x43];
  iVar3 = *(int *)(param_1 + 0x44);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)iVar2;
LAB_00380c30:
  lVar6 = *(long *)(param_2 + 0xb8);
  FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 4),0,&local_50,0x230)
  ;
  FUN_00347e74(param_3,3,1,lVar6 + 0x248,6,0);
  return;
}

