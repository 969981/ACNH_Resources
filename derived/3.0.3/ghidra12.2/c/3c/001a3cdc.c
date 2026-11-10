
void FUN_001a3cdc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  char local_c0 [16];
  char *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined *local_78 [5];
  
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 **)(param_1 + 0x20) = (undefined1 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0x10;
  puVar1 = puVar1 + 0x10;
  *(long *)(param_1 + 8) = (long)puVar1;
  FUN_0018b070((long *)(param_1 + 8),&DAT_04094693,0xffffffffffffffff);
  *(long *)(param_1 + 0x30) = (long)puVar1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x48) = (undefined1 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = 0x10;
  FUN_0018b070((long *)(param_1 + 0x30),&DAT_0407ebb1,0xffffffffffffffff);
  *(long *)(param_1 + 0x58) = (long)puVar1;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x70) = (undefined1 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = 0x10;
  FUN_0018b070((long *)(param_1 + 0x58),&DAT_0407ebb1,0xffffffffffffffff);
  *(long *)(param_1 + 0x80) = (long)puVar1;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 **)(param_1 + 0x98) = (undefined1 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = 0x10;
  FUN_0018b070((long *)(param_1 + 0x80),"localhost",0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(long *)(param_1 + 0xb0) = (long)puVar1;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 **)(param_1 + 200) = (undefined1 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xd0) = 0x10;
  FUN_0018b070((long *)(param_1 + 0xb0),&DAT_0407ebb1,0xffffffffffffffff);
  *(long *)(param_1 + 0xd8) = (long)puVar1;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 **)(param_1 + 0xf0) = (undefined1 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xf8) = 0x10;
  FUN_0018b070((long *)(param_1 + 0xd8),&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined **)(param_1 + 0x100) = puVar1;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x120) = 0x10;
  FUN_0018b070(param_1 + 0x100,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined **)(param_1 + 0x128) = puVar1;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x140) = param_1 + 0x130;
  *(undefined8 *)(param_1 + 0x148) = 0x10;
  FUN_0018b070(param_1 + 0x128,&DAT_0407ebb1,0xffffffffffffffff);
  puVar2 = PTR_DAT_04bc0ec8;
  local_98[0] = 0;
  local_88 = local_98;
  uStack_80 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_a0 = puVar1;
  FUN_0018b070(&local_a0,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  local_c0[0] = '\0';
  uStack_a8 = 0x10;
  local_c8 = puVar1;
  local_b0 = local_c0;
  FUN_0018b070(&local_c8,&DAT_040b8872,0xffffffffffffffff);
  FUN_001a4630(local_78,&local_a0,&local_c8,1);
  lVar6 = param_1 + 8;
  FUN_00189504(lVar6,local_78);
  local_78[0] = puVar1;
  FUN_0018b1a0(local_78);
  local_c8 = puVar1;
  FUN_0018b1a0(&local_c8);
  lVar4 = FUN_0018b798(lVar6);
  lVar5 = FUN_0018b798(param_2);
  if (lVar4 == lVar5) {
    FUN_00189504(&local_a0,lVar6);
    FUN_0018a58c(lVar6,*(undefined8 *)PTR_PTR_04bcc288);
  }
  local_d8 = local_e8;
  local_e8[0] = 0;
  uStack_d0 = 0x10;
  local_f0 = puVar1;
  FUN_0018b070(&local_f0,&DAT_04079e84,0xffffffffffffffff);
  local_c0[0] = '\0';
  uStack_a8 = 0x10;
  local_c8 = puVar1;
  local_b0 = local_c0;
  iVar3 = FUN_0018b980(&local_a0,local_d8,0);
  if (iVar3 < 0) {
    FUN_00189504(&local_c8,&local_a0);
    FUN_0018a58c(&local_a0,&DAT_0407ebb1);
  }
  else {
    FUN_001a4858(local_78,&local_a0,iVar3,0);
    FUN_00189504(&local_c8,local_78);
    local_78[0] = puVar2 + 0x10;
    FUN_0018b1a0(local_78);
  }
  puVar1 = puVar2 + 0x10;
  local_f0 = puVar1;
  FUN_0018b1a0(&local_f0);
  local_d8 = local_e8;
  local_e8[0] = 0;
  uStack_d0 = 0x10;
  local_f0 = puVar1;
  FUN_0018b070(&local_f0,&DAT_040a3a35,0xffffffffffffffff);
  FUN_001a4630(local_78,&local_c8,&local_f0,1);
  local_f0 = puVar1;
  FUN_0018b1a0(&local_f0);
  lVar6 = FUN_0018b798(&local_c8);
  if (lVar6 == 0) {
    FUN_00189504(&local_c8,local_78);
    FUN_0018a58c(param_1 + 0x30,&DAT_0407ebb1);
    FUN_0018a58c(param_1 + 0x58,&DAT_0407ebb1);
  }
  else {
    local_100 = local_110;
    local_110[0] = 0;
    uStack_f8 = 0x10;
    local_118 = puVar1;
    FUN_0018b070(&local_118,&DAT_040addd9,0xffffffffffffffff);
    FUN_001a4630(&local_f0,local_78,&local_118,1);
    FUN_00189504(param_1 + 0x30,&local_f0);
    local_f0 = puVar1;
    FUN_0018b1a0(&local_f0);
    local_118 = puVar1;
    FUN_0018b1a0(&local_118);
    FUN_00189504(param_1 + 0x58,local_78);
  }
  puVar1 = puVar2 + 0x10;
  local_110[0] = 0;
  local_100 = local_110;
  uStack_f8 = 0x10;
  local_118 = puVar1;
  FUN_0018b070(&local_118,&DAT_040addd9,0xffffffffffffffff);
  FUN_001a4630(&local_f0,&local_c8,&local_118,1);
  FUN_00189504(param_1 + 0x80,&local_f0);
  local_f0 = puVar1;
  FUN_0018b1a0(&local_f0);
  local_118 = puVar1;
  FUN_0018b1a0(&local_118);
  lVar6 = FUN_0018b798(&local_c8);
  iVar3 = 0;
  if (lVar6 != 0) {
    iVar3 = atoi(local_b0);
  }
  lVar6 = param_1 + 0xb0;
  *(int *)(param_1 + 0xa8) = iVar3;
  FUN_00189504(lVar6,&local_a0);
  iVar3 = FUN_0018b980(lVar6,&DAT_04084559,0);
  if (iVar3 == -1) {
    FUN_0018a58c(param_1 + 0x128,&DAT_0407ebb1);
  }
  else {
    FUN_001a4710(&local_f0,lVar6,iVar3,1);
    FUN_00189504(param_1 + 0x128,&local_f0);
    local_f0 = puVar2 + 0x10;
    FUN_0018b1a0(&local_f0);
  }
  iVar3 = FUN_0018b980(lVar6,&DAT_0406a414,0);
  if (iVar3 == -1) {
    FUN_0018a58c(param_1 + 0x100,&DAT_0407ebb1);
  }
  else {
    FUN_001a4710(&local_f0,lVar6,iVar3,1);
    FUN_00189504(param_1 + 0x100,&local_f0);
    local_f0 = puVar2 + 0x10;
    FUN_0018b1a0(&local_f0);
  }
  iVar3 = FUN_0018b980(lVar6,&DAT_040995ce,0);
  if (iVar3 == -1) {
    FUN_0018a58c(param_1 + 0xd8,&DAT_0407ebb1);
  }
  else {
    FUN_001a4710(&local_f0,lVar6,iVar3,1);
    FUN_00189504(param_1 + 0xd8,&local_f0);
    local_f0 = puVar2 + 0x10;
    FUN_0018b1a0(&local_f0);
  }
  puVar2 = puVar2 + 0x10;
  local_78[0] = puVar2;
  FUN_0018b1a0(local_78);
  local_c8 = puVar2;
  FUN_0018b1a0(&local_c8);
  local_a0 = puVar2;
  FUN_0018b1a0(&local_a0);
  return;
}

