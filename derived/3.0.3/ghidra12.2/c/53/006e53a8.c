
void FUN_006e53a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_50 = 0;
  uStack_48 = 0;
  local_20 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10);
  uStack_18 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18);
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  uStack_28 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18);
  lVar1 = *(long *)(param_1 + 0x70);
  local_40 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
  uStack_38 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) != 0)) {
    uStack_48 = *(undefined8 *)(lVar1 + 0x18);
    local_50 = *(long *)(lVar1 + 0x10);
  }
  lVar1 = *(long *)(param_1 + 0x80);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10);
  uStack_58 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) != 0)) {
    uStack_68 = *(undefined8 *)(lVar1 + 0x18);
    local_70 = *(long *)(lVar1 + 0x10);
  }
  FUN_006994c0(param_2,param_1 + 0x88,param_1 + 0x90,*(undefined4 *)(param_1 + 0x50),&local_20,
               &local_30,&local_40,&local_50,&local_60,&local_70,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

