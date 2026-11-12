
void FUN_0080e180(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  short local_16e0 [4];
  long local_16d8;
  long lStack_16d0;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 auStack_22 [2];
  
  FUN_007ef010(auStack_22,param_1);
  FUN_007e4920(local_16e0,auStack_22);
  if ((local_16e0[0] != DAT_04cb6038) && (lStack_16d0 != 0 || local_16d8 != 0)) {
    FUN_007e6c10(local_16e0,*param_2);
    iVar1 = FUN_007e6aa0(local_16e0);
    if (iVar1 != 0) {
      uVar3 = 0;
      lVar5 = (long)param_2 + 0x31;
      do {
        iVar1 = FUN_007e6760(local_16e0);
        if (iVar1 != 0) {
          uVar4 = 0;
          do {
            FUN_007e70d0(local_16e0,uVar4 & 0xffffffff,uVar3 & 0xffffffff,
                         *(undefined1 *)(lVar5 + uVar4));
            uVar4 = uVar4 + 1;
            uVar2 = FUN_007e6760(local_16e0);
          } while (uVar4 < (uVar2 & 0xffffffff));
        }
        uVar3 = uVar3 + 1;
        uVar4 = FUN_007e6aa0(local_16e0);
        lVar5 = lVar5 + 0x40;
      } while (uVar3 < (uVar4 & 0xffffffff));
    }
    local_26 = *(undefined1 *)((long)param_2 + 5);
    local_27 = *(undefined1 *)((long)param_2 + 6);
    local_28 = 0xff;
    local_25 = *(undefined1 *)(param_2 + 1);
    FUN_007e7690(local_16e0,0,&local_28);
    local_26 = *(undefined1 *)(param_2 + 2);
    local_27 = *(undefined1 *)((long)param_2 + 9);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 7);
    FUN_007e7690(local_16e0,1,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0xb);
    local_27 = *(undefined1 *)(param_2 + 3);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 10);
    FUN_007e7690(local_16e0,2,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0xe);
    local_27 = *(undefined1 *)((long)param_2 + 0xf);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0xd);
    FUN_007e7690(local_16e0,3,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x11);
    local_27 = *(undefined1 *)((long)param_2 + 0x12);
    local_28 = 0xff;
    local_25 = *(undefined1 *)(param_2 + 4);
    FUN_007e7690(local_16e0,4,&local_28);
    local_26 = *(undefined1 *)(param_2 + 5);
    local_27 = *(undefined1 *)((long)param_2 + 0x15);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x13);
    FUN_007e7690(local_16e0,5,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x17);
    local_27 = *(undefined1 *)(param_2 + 6);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x16);
    FUN_007e7690(local_16e0,6,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x1a);
    local_27 = *(undefined1 *)((long)param_2 + 0x1b);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x19);
    FUN_007e7690(local_16e0,7,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x1d);
    local_27 = *(undefined1 *)((long)param_2 + 0x1e);
    local_28 = 0xff;
    local_25 = *(undefined1 *)(param_2 + 7);
    FUN_007e7690(local_16e0,8,&local_28);
    local_26 = *(undefined1 *)(param_2 + 8);
    local_27 = *(undefined1 *)((long)param_2 + 0x21);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x1f);
    FUN_007e7690(local_16e0,9,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x23);
    local_27 = *(undefined1 *)(param_2 + 9);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x22);
    FUN_007e7690(local_16e0,10,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x26);
    local_27 = *(undefined1 *)((long)param_2 + 0x27);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x25);
    FUN_007e7690(local_16e0,0xb,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x29);
    local_27 = *(undefined1 *)((long)param_2 + 0x2a);
    local_28 = 0xff;
    local_25 = *(undefined1 *)(param_2 + 10);
    FUN_007e7690(local_16e0,0xc,&local_28);
    local_26 = *(undefined1 *)(param_2 + 0xb);
    local_27 = *(undefined1 *)((long)param_2 + 0x2d);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x2b);
    FUN_007e7690(local_16e0,0xd,&local_28);
    local_26 = *(undefined1 *)((long)param_2 + 0x2f);
    local_27 = *(undefined1 *)(param_2 + 0xc);
    local_28 = 0xff;
    local_25 = *(undefined1 *)((long)param_2 + 0x2e);
    FUN_007e7690(local_16e0,0xe,&local_28);
  }
  return;
}

