
void FUN_01394338(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (*param_2 != 0) {
    lVar6 = param_1 + 0xb8;
    FUN_03ebac90(lVar6,6,0,*param_2,0);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "State::cWait";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,0,&local_50);
    puVar5 = *(undefined8 **)(param_1 + 0xe8);
    puVar5[2] = &LAB_01394644;
    puVar5[3] = 0;
    puVar5[4] = &LAB_01394648;
    puVar5[5] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[6] = &LAB_0139464c;
    puVar5[7] = 0;
    pcStack_48 = "State::cColLockWait";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,1,&local_50);
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0xe8) + (ulong)(1 < *(uint *)(param_1 + 0xe0)) * 0x40);
    puVar5[4] = &LAB_01394654;
    puVar5[5] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_01394650;
    puVar5[3] = 0;
    puVar5[6] = &LAB_01394830;
    puVar5[7] = 0;
    pcStack_48 = "State::cActionWait";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,2,&local_50);
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0xe8) + (ulong)(2 < *(uint *)(param_1 + 0xe0)) * 0x80);
    puVar5[4] = &LAB_01394838;
    puVar5[5] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_01394834;
    puVar5[3] = 0;
    puVar5[6] = &LAB_013948a8;
    puVar5[7] = 0;
    pcStack_48 = "State::cActionHostDelayAction";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,3,&local_50);
    lVar2 = 0xc0;
    if (*(uint *)(param_1 + 0xe0) < 4) {
      lVar2 = 0;
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0xe8) + lVar2);
    puVar5[2] = &LAB_013948ac;
    puVar5[3] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[4] = &LAB_013948b0;
    puVar5[5] = 0;
    puVar5[6] = &LAB_013949c0;
    puVar5[7] = 0;
    pcStack_48 = "State::cActionActiveWait";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,4,&local_50);
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0xe8) + (ulong)(4 < *(uint *)(param_1 + 0xe0)) * 0x100);
    puVar5[4] = &LAB_013949c8;
    puVar5[5] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_013949c4;
    puVar5[3] = 0;
    puVar5[6] = &LAB_01394d4c;
    puVar5[7] = 0;
    pcStack_48 = "State::cSequenceEndWait";
    local_50 = puVar1;
    FUN_03ebaf40(lVar6,5,&local_50);
    lVar6 = 0x140;
    if (*(uint *)(param_1 + 0xe0) < 6) {
      lVar6 = 0;
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0xe8) + lVar6);
    puVar5[2] = &LAB_01394d50;
    puVar5[3] = 0;
    *puVar5 = &PTR_LAB_04993e30;
    puVar5[1] = param_1;
    puVar5[6] = &LAB_01394e80;
    puVar5[7] = 0;
    puVar5[4] = &LAB_01394e04;
    puVar5[5] = 0;
    *(undefined1 *)(param_1 + 0xd9) = 1;
    uVar4 = *(uint *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (uVar4 != 0xffffffff) {
      if (*(uint *)(param_1 + 0xe0) <= uVar4) {
        uVar4 = 0;
      }
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + (long)(int)uVar4 * 0x40);
      if (puVar5 != (undefined8 *)0x0) {
        (*(code *)*puVar5)();
      }
    }
    *(int *)(param_1 + 0x10) = (int)param_2[2];
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    *(int *)(param_1 + 0x40) = (int)param_2[2];
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x14);
    *(long *)(param_1 + 0x58) = param_2[4];
    *(long *)(param_1 + 0x78) = param_2[5];
    lVar6 = param_2[6];
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(long *)(param_1 + 0x90) = lVar6;
    uVar3 = *(undefined4 *)((long)param_2 + 0x14);
    *(int *)(param_1 + 0x124) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x128) = uVar3;
  }
  return;
}

