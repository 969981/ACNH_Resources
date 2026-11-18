
uint FUN_0340a3bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  undefined **local_50;
  undefined4 local_48;
  
  uVar1 = FUN_03463a4c(param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  local_55 = 0;
  local_158 = 0x100;
  puStack_160 = local_154;
  local_154[0] = 0;
  plVar3 = *(long **)(param_1 + 8);
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  local_50 = &PTR_LAB_04a3ee98;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  (**(code **)(plVar3[3] + 0x30))(&local_168,plVar3[1]);
  if (((param_4 != 0) && ((uVar1 & 1) == 0)) && (*(long *)(param_4 + 8) != -1)) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  }
  return uVar1 & 1;
}

