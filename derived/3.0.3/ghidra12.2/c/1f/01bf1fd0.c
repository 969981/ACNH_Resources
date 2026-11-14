
void FUN_01bf1fd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 local_128;
  int iStack_124;
  int local_120;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined **local_70;
  undefined8 local_68;
  undefined1 *puStack_60;
  int local_58;
  undefined1 auStack_54 [20];
  
  piVar3 = *(int **)(param_1 + 0x30);
  iVar1 = piVar3[1];
  if ((piVar3[2] == -1 && *piVar3 == 1) && iVar1 != -1) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    local_58 = -1;
    puStack_60 = auStack_54;
    local_68 = 0x400000064;
    local_70 = &PTR_LAB_04a3e298;
    FUN_01bf61b0(&local_70,uVar2,iVar1);
    FUN_01be6180(&local_128,uVar2,piVar3 + 6);
    if (0 < local_58) {
      *(undefined ****)(param_1 + 0x30c8) = &local_70;
      local_120 = FUN_035a3f60(0x3f800000,param_1 + 0x1880,&local_128);
      *(undefined8 *)(param_1 + 0x30c8) = 0;
      if (0 < local_120) {
        local_bd = 0;
        puStack_108 = local_fc;
        local_11c = 0;
        local_fc[0] = 0;
        local_100 = 0x40;
        local_128 = 1;
        local_110 = PTR_DAT_04bb2bc0 + 0x10;
        iStack_124 = iVar1;
        FUN_038d1270(&local_110,"%03d_%02d",iVar1);
        (*(code *)**(undefined8 **)(param_1 + 8))((undefined8 *)(param_1 + 8),&local_128);
      }
    }
  }
  return;
}

