
void FUN_00939394(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb27c8;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    return;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  FUN_00947a00(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x48,param_2,&local_58,param_3,param_4 & 1
              );
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar3 = *(long *)puVar2;
    lVar4 = *(long *)(lVar3 + 0x1150);
    plVar1 = (long *)(*(int *)(lVar3 + 0x1164) + param_1);
    *(long **)(lVar3 + 0x1150) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = lVar3 + 0x1150;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(lVar3 + 0x1160) = *(int *)(lVar3 + 0x1160) + 1;
  }
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x44) = local_38._4_4_;
  return;
}

