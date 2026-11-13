
void FUN_01308fe4(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_a8;
  undefined **local_a0;
  long lStack_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  char *local_48;
  
  if ((*(long *)(param_1 + 0xe8) != 0 && *(int *)(param_1 + 0xe0) == 1) &&
      *(int *)(param_1 + 0xe0) != 2) {
    FUN_03f45838(param_1 + 0xd8);
  }
  lVar2 = DAT_0519d040;
  if (*(long *)(DAT_0519d040 + 0x1510) != 0) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 != 0) {
      FUN_0131af5c(param_1 + 0x28);
      *(short *)(param_1 + 0x28) = (short)*(undefined4 *)(param_2 + 8);
      *(short *)(param_1 + 0x2a) = (short)*(undefined4 *)(param_2 + 0xc);
      fVar5 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0 + -10.0;
      fVar4 = (float)*(int *)(param_2 + 8) * 10.0 + 5.0 + -10.0;
      sVar1 = (short)(int)((float)(int)fVar4 / 10.0) - (ushort)(fVar4 < 0.0);
      *(short *)(param_1 + 0x2c) = sVar1;
      *(short *)(param_1 + 0x30) = sVar1 + 2;
      sVar1 = (short)(int)((float)(int)fVar5 / 10.0) - (ushort)(fVar5 < 0.0);
      *(short *)(param_1 + 0x2e) = sVar1;
      *(short *)(param_1 + 0x32) = sVar1 + 2;
      FUN_0130a960(lVar3,param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
      lVar2 = *(long *)(lVar2 + 0x1510);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
        local_88 = 1;
        local_90 = PTR_DAT_04bb5070 + 0x10;
        local_50 = &PTR_LAB_048f9770;
        local_80 = 0;
        local_a8 = 0;
        local_86 = 1;
        lStack_70 = param_1 + 0xb8;
        local_78 = *(undefined8 *)(lVar2 + 8);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_48 = "LandMake";
        local_a0 = &local_90;
        lStack_98 = param_1 + 0xd8;
        FUN_03f45184(*(long *)(lVar2 + 0x20),&local_a8);
      }
    }
  }
  return;
}

