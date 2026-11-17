
void FUN_031029c0(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined **local_60;
  undefined4 local_58;
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = 0;
  do {
    if (*(short *)(param_2[1] + uVar5 * 2) == 0) goto joined_r0x03102a58;
    lVar1 = param_2[1] + uVar5 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      uVar5 = uVar5 + 1;
      goto joined_r0x03102a58;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      uVar5 = uVar5 + 2;
      goto joined_r0x03102a58;
    }
    uVar5 = uVar5 + 3;
  } while (uVar5 != 0x80001);
  uVar5 = 0;
joined_r0x03102a58:
  if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0x48), plVar4[1] != 0)) {
    local_60 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
    local_58 = 9;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
    (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],lVar2,uVar5 & 0xffffffff);
    FUN_03d7dd80(lVar3);
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x48);
  local_60 = &PTR_LAB_04a3ee98;
  local_58 = 0x39;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  (**(code **)(plVar4[3] + 0x3a8))(plVar4[1],1);
  lVar3 = *(long *)(param_1 + 0x2b8);
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar2 = param_3[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar5 = 0;
  do {
    if (*(short *)(param_3[1] + uVar5 * 2) == 0) goto joined_r0x03102b6c;
    lVar1 = param_3[1] + uVar5 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      uVar5 = uVar5 + 1;
      goto joined_r0x03102b6c;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      uVar5 = uVar5 + 2;
      goto joined_r0x03102b6c;
    }
    uVar5 = uVar5 + 3;
  } while (uVar5 != 0x80001);
  uVar5 = 0;
joined_r0x03102b6c:
  if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0x48), plVar4[1] != 0)) {
    local_60 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
    local_58 = 9;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
    (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],lVar2,uVar5 & 0xffffffff);
    FUN_03d7dd80(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x2c0);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar2 = param_4[1];
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar5 = 0;
  do {
    if (*(short *)(param_4[1] + uVar5 * 2) == 0) goto joined_r0x03102c38;
    lVar1 = param_4[1] + uVar5 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      uVar5 = uVar5 + 1;
      goto joined_r0x03102c38;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      uVar5 = uVar5 + 2;
      goto joined_r0x03102c38;
    }
    uVar5 = uVar5 + 3;
  } while (uVar5 != 0x80001);
  uVar5 = 0;
joined_r0x03102c38:
  if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0x48), plVar4[1] != 0)) {
    local_60 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
    local_58 = 9;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
    (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],lVar2,uVar5 & 0xffffffff);
    FUN_03d7dd80(lVar3);
  }
  return;
}

