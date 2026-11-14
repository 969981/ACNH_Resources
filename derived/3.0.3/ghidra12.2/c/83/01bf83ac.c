
void FUN_01bf83ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 0x40;
  FUN_03ebac90(lVar1,10,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "cState_Idle";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  puVar5[2] = &LAB_01bf87cc;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01bf87d0;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_01bf87d4;
  puVar5[7] = 0;
  pcStack_48 = "cState_Ready";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)(1 < *(uint *)(param_1 + 0x68)) * 0x40)
  ;
  puVar5[4] = &LAB_01bf8800;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01bf87d8;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01bf9cd8;
  puVar5[7] = 0;
  pcStack_48 = "cState_In";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)(2 < *(uint *)(param_1 + 0x68)) * 0x80)
  ;
  puVar5[4] = &LAB_01bf9d74;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01bf9cdc;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01bf9f30;
  puVar5[7] = 0;
  pcStack_48 = "cState_Play";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x68) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
  puVar5[2] = &LAB_01bf9f74;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01bf9fb0;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01bfa300;
  puVar5[7] = 0;
  pcStack_48 = "cState_Fermata";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x70) + (ulong)(4 < *(uint *)(param_1 + 0x68)) * 0x100);
  puVar5[4] = &LAB_01bfa310;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01bfa30c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01bfa394;
  puVar5[7] = 0;
  pcStack_48 = "cState_Pause";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_50);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x68) < 6) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
  puVar5[2] = &LAB_01bfa398;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01bfa4a4;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01bfa834;
  puVar5[7] = 0;
  pcStack_48 = "cState_Out";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_50);
  lVar3 = 0x180;
  if (*(uint *)(param_1 + 0x68) < 7) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
  puVar5[2] = &LAB_01bfa838;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01bfa8e4;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01bfa9f0;
  puVar5[7] = 0;
  pcStack_48 = "cState_Stand";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,7,&local_50);
  lVar3 = 0x1c0;
  if (*(uint *)(param_1 + 0x68) < 8) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
  puVar5[2] = &LAB_01bfaa0c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01bfaa48;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01bfab5c;
  puVar5[7] = 0;
  pcStack_48 = "cState_Suspend";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,8,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x70) + (ulong)(8 < *(uint *)(param_1 + 0x68)) * 0x200);
  puVar5[4] = &LAB_01bfab9c;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01bfab98;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01bfabcc;
  puVar5[7] = 0;
  pcStack_48 = "cState_Choice";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,9,&local_50);
  lVar1 = 0x240;
  if (*(uint *)(param_1 + 0x68) < 10) {
    lVar1 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar1);
  puVar5[2] = &LAB_01bfabd0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a3e338;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_01bfb1c4;
  puVar5[7] = 0;
  puVar5[4] = &LAB_01bfac9c;
  puVar5[5] = 0;
  *(undefined1 *)(param_1 + 0x61) = 1;
  uVar4 = *(uint *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
  *(uint *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x68) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x70) + (long)(int)uVar4 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

