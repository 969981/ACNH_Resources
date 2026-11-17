
void FUN_02acf374(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined *local_50;
  char *pcStack_48;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe | (uint)*(byte *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((long)param_2 + 0x1c);
  (**(code **)(param_2[5] + 0x10))(param_2 + 5,param_1 + 0x78);
  (**(code **)(param_2[9] + 0x10))(param_2 + 9,param_1 + 0x98);
  lVar1 = param_1 + 0x18;
  FUN_03ebac90(lVar1,4,0,*param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cToON";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  puVar4[2] = &LAB_02acf5a8;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02acf5ac;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a9eb50;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02acf66c;
  puVar4[7] = 0;
  pcStack_48 = "State::cON";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(1 < *(uint *)(param_1 + 0x40)) * 0x40)
  ;
  puVar4[4] = &LAB_02acf6c0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a9eb50;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_02acf670;
  puVar4[3] = 0;
  puVar4[6] = &LAB_02acf720;
  puVar4[7] = 0;
  pcStack_48 = "State::cToOFF";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(2 < *(uint *)(param_1 + 0x40)) * 0x80)
  ;
  puVar4[4] = &LAB_02acf728;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a9eb50;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_02acf724;
  puVar4[3] = 0;
  puVar4[6] = &LAB_02acf7f0;
  puVar4[7] = 0;
  pcStack_48 = "State::cOFF";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x40) < 4) {
    lVar1 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar1);
  puVar4[2] = &LAB_02acf7f4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a9eb50;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02acf838;
  puVar4[5] = 0;
  puVar4[6] = &LAB_02acf894;
  puVar4[7] = 0;
  cVar3 = *(char *)(param_2 + 2);
  *(undefined1 *)(param_1 + 100) = 1;
  uVar5 = 3;
  if (cVar3 != '\0') {
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  return;
}

