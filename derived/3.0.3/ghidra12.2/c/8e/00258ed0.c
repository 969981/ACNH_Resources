
/* WARNING: Type propagation algorithm not settling */

void FUN_00258ed0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined4 local_98;
  ErrorResultVariant aEStack_94 [12];
  undefined *local_88;
  undefined4 local_80 [8];
  undefined8 local_60;
  undefined4 local_58 [9];
  undefined4 local_34;
  
  if ((((int)param_2[0x84] != 0) || (uVar5 = FUN_002212e4(param_2[0x83]), (uVar5 & 1) != 0)) ||
     ((char)param_2[0x8f] != '\0')) {
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_88);
    FUN_002296c4(param_1,&local_60);
    return;
  }
  if (param_2[0xa5] != 0) {
    FUN_00227258(&local_60);
    FUN_00227440(&local_88,&local_60,param_2 + 0x55);
    pcVar8 = (code *)param_2[0xa5];
    FUN_0022726c(&local_88,&local_60);
    (*pcVar8)(2,&local_88,param_2[0xa6]);
    puVar1 = PTR_DAT_04bcba18 + 0x10;
    local_88 = puVar1;
    FUN_0021f584(local_80);
    local_60 = puVar1;
    FUN_0021f584(local_58);
  }
  iVar3 = FUN_002212bc(param_2[0x83]);
  if (iVar3 != 0) {
    (**(code **)(*(long *)param_2[0x83] + 0x10))((long *)param_2[0x83],1);
  }
  plVar2 = param_2 + 0x59;
  uVar5 = FUN_002200e4(param_2 + 0x17,plVar2);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x1f,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x17);
    *(undefined2 *)(param_2 + 0x1b) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined2 *)((long)param_2 + 0xe4) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x1f,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x27,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x1f);
    *(undefined2 *)(param_2 + 0x23) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined2 *)((long)param_2 + 0x124) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x27,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x2f,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x27);
    *(undefined2 *)(param_2 + 0x2b) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined2 *)((long)param_2 + 0x164) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x2f,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x37,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x2f);
    *(undefined2 *)(param_2 + 0x33) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined2 *)((long)param_2 + 0x1a4) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x37,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x3f,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x37);
    *(undefined2 *)(param_2 + 0x3b) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined2 *)((long)param_2 + 0x1e4) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x3f,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x47,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x3f);
    *(undefined2 *)(param_2 + 0x43) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined2 *)((long)param_2 + 0x224) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x47,plVar2);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_002200e4(param_2 + 0x4f,plVar2);
  }
  else {
    FUN_0021fef8(param_2 + 0x47);
    *(undefined2 *)(param_2 + 0x4b) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined2 *)((long)param_2 + 0x264) = 0xff00;
    uVar5 = FUN_002200e4(param_2 + 0x4f,plVar2);
  }
  if ((uVar5 & 1) != 0) {
    FUN_0021fef8(param_2 + 0x4f);
    *(undefined2 *)(param_2 + 0x53) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined2 *)((long)param_2 + 0x2a4) = 0xff00;
  }
  local_58[0] = 0;
  local_60 = (undefined *)0x20;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60);
  uVar5 = FUN_0024e270(param_2 + 0x16);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x1e);
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x1e);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x26);
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x26);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x2e);
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x2e);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x36);
  }
  else {
    *(undefined4 *)(param_2 + 0x34) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x36);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x3e);
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x3e);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x46);
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x46);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0024e270(param_2 + 0x4e);
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = 1;
    uVar5 = FUN_0024e270(param_2 + 0x4e);
  }
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x54) = 1;
  }
  *(undefined1 *)((long)param_2 + 0x571) = 0;
  *(undefined4 *)((long)param_2 + 0x424) = 0;
  FUN_0021f4e0(&local_60);
  FUN_0025aa50(param_2,&local_60);
  local_80[0] = 0;
  local_88 = (undefined *)0x10;
  FUN_00220138(param_2 + 0x55,&local_88);
  local_80[0] = 0;
  local_88 = (undefined *)0x10;
  FUN_00220138(plVar2,&local_88);
  local_80[0] = 0;
  local_88 = (undefined *)0x10;
  FUN_00220138(&local_60,&local_88);
  lVar7 = param_2[0x83];
  lVar9 = param_2[0x85];
  uVar4 = FUN_002200e4(param_2 + 0x55,&local_60);
  FUN_00250fbc(&local_88,lVar7,lVar9,uVar4 & 1);
  if ((int)local_88 == 0) {
    FUN_002211bc(param_2[0x83],0);
    local_98 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_34);
    ppuVar6 = (undefined **)&local_98;
  }
  else {
    ppuVar6 = &local_88;
  }
  FUN_002296c4(param_1,ppuVar6);
  FUN_0021f584(&local_60);
  return;
}

