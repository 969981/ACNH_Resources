
void FUN_03839210(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 local_250;
  undefined ***local_248;
  undefined8 uStack_240;
  undefined **local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  long lStack_200;
  undefined **local_1f8;
  char *local_1f0;
  undefined **ppuStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c8 [4];
  undefined8 local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [127];
  undefined1 local_125;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  lVar4 = **(long **)(param_3 + 0x18);
  pbVar3 = *(byte **)(lVar4 + 0x10);
  if ((((pbVar3 != (byte *)0x0) &&
       ((((pbVar3[8] >> 1 & 1) == 0 || ((pbVar3[0x1490] >> 1 & 1) == 0)) ||
        ((pbVar3[0x1538] >> 1 & 1) == 0)))) &&
      ((((*pbVar3 >> 2 & 1) == 0 || (*(char *)(lVar4 + 0x20) != '\0')) ||
       ((*(byte *)(param_1 + 1) & 1) != 0)))) && (*(char *)(param_3 + 8) == '\0')) {
    uStack_210 = 0;
    local_1c8[0] = 0;
    local_238 = &PTR_LAB_04b5d938;
    local_1b0 = local_1a4;
    local_1a8 = 0x80;
    local_125 = 0;
    local_1a4[0] = 0;
    local_110 = 0x80;
    puStack_118 = local_10c;
    local_10c[0] = 0;
    local_1c0 = 0;
    puStack_1b8 = &DAT_048fc708;
    local_8d = 0;
    local_120 = &DAT_048fc708;
    local_78 = 0x20;
    puStack_80 = local_74;
    local_74[0] = 0;
    local_1f8 = &PTR_LAB_048f9770;
    local_55 = 0;
    local_22e = 0;
    local_230 = 1;
    local_88 = &PTR_LAB_048f9700;
    local_228 = *(undefined8 *)(param_1 + 0x50);
    local_1f0 = "Re:AdvanceCompose";
    ppuStack_1e8 = &PTR_LAB_04b5d908;
    uStack_220 = 0;
    local_218 = param_1 + 400;
    lStack_200 = param_1 + 0x1b0;
    local_208 = 0;
    local_1e0 = *(undefined8 *)(lVar4 + 8);
    local_1d8 = *(undefined8 *)(lVar4 + 0x10);
    local_1d0 = *(undefined8 *)(lVar4 + 0x18);
    FUN_03837520(local_1c8,lVar4 + 0x20);
    uStack_240 = *(undefined8 *)(lVar4 + 0x18);
    local_250 = *(undefined8 *)(param_3 + 0x10);
    local_248 = &local_238;
    FUN_03f45184(param_1 + 0x58,&local_250);
    *(undefined1 *)(param_2 + 8) = 1;
    lVar4 = 1000000;
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      lVar4 = 100;
    }
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = *(long *)PTR_DAT_04bb29d0 / lVar4;
    }
    uVar2 = nn::os::ConvertToTimeSpan(lVar1);
    nn::os::TimedWaitLightEvent(param_1 + 0x40,uVar2);
  }
  return;
}

