
void FUN_0080de00(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
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
    iVar1 = FUN_007e6aa0(local_16e0);
    if (iVar1 != 0) {
      uVar3 = 0;
      puVar5 = param_2 + 0x2d;
      do {
        iVar1 = FUN_007e6760(local_16e0);
        if (iVar1 != 0) {
          uVar4 = 0;
          do {
            FUN_007e70d0(local_16e0,uVar4 & 0xffffffff,uVar3 & 0xffffffff,puVar5[uVar4]);
            uVar4 = uVar4 + 1;
            uVar2 = FUN_007e6760(local_16e0);
          } while (uVar4 < (uVar2 & 0xffffffff));
        }
        uVar3 = uVar3 + 1;
        uVar4 = FUN_007e6aa0(local_16e0);
        puVar5 = puVar5 + 0x20;
      } while (uVar3 < (uVar4 & 0xffffffff));
    }
    local_26 = param_2[1];
    local_27 = param_2[2];
    local_28 = 0xff;
    local_25 = *param_2;
    FUN_007e7690(local_16e0,0,&local_28);
    local_26 = param_2[4];
    local_27 = param_2[5];
    local_28 = 0xff;
    local_25 = param_2[3];
    FUN_007e7690(local_16e0,1,&local_28);
    local_26 = param_2[7];
    local_27 = param_2[8];
    local_28 = 0xff;
    local_25 = param_2[6];
    FUN_007e7690(local_16e0,2,&local_28);
    local_26 = param_2[10];
    local_27 = param_2[0xb];
    local_28 = 0xff;
    local_25 = param_2[9];
    FUN_007e7690(local_16e0,3,&local_28);
    local_26 = param_2[0xd];
    local_27 = param_2[0xe];
    local_28 = 0xff;
    local_25 = param_2[0xc];
    FUN_007e7690(local_16e0,4,&local_28);
    local_26 = param_2[0x10];
    local_27 = param_2[0x11];
    local_28 = 0xff;
    local_25 = param_2[0xf];
    FUN_007e7690(local_16e0,5,&local_28);
    local_26 = param_2[0x13];
    local_27 = param_2[0x14];
    local_28 = 0xff;
    local_25 = param_2[0x12];
    FUN_007e7690(local_16e0,6,&local_28);
    local_26 = param_2[0x16];
    local_27 = param_2[0x17];
    local_28 = 0xff;
    local_25 = param_2[0x15];
    FUN_007e7690(local_16e0,7,&local_28);
    local_26 = param_2[0x19];
    local_27 = param_2[0x1a];
    local_28 = 0xff;
    local_25 = param_2[0x18];
    FUN_007e7690(local_16e0,8,&local_28);
    local_26 = param_2[0x1c];
    local_27 = param_2[0x1d];
    local_28 = 0xff;
    local_25 = param_2[0x1b];
    FUN_007e7690(local_16e0,9,&local_28);
    local_26 = param_2[0x1f];
    local_27 = param_2[0x20];
    local_28 = 0xff;
    local_25 = param_2[0x1e];
    FUN_007e7690(local_16e0,10,&local_28);
    local_26 = param_2[0x22];
    local_27 = param_2[0x23];
    local_28 = 0xff;
    local_25 = param_2[0x21];
    FUN_007e7690(local_16e0,0xb,&local_28);
    local_26 = param_2[0x25];
    local_27 = param_2[0x26];
    local_28 = 0xff;
    local_25 = param_2[0x24];
    FUN_007e7690(local_16e0,0xc,&local_28);
    local_26 = param_2[0x28];
    local_27 = param_2[0x29];
    local_28 = 0xff;
    local_25 = param_2[0x27];
    FUN_007e7690(local_16e0,0xd,&local_28);
    local_26 = param_2[0x2b];
    local_27 = param_2[0x2c];
    local_28 = 0xff;
    local_25 = param_2[0x2a];
    FUN_007e7690(local_16e0,0xe,&local_28);
  }
  return;
}

