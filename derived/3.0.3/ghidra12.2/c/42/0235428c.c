
void FUN_0235428c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  byte bVar7;
  
  *param_1 = 0;
  puVar2 = PTR_DAT_04bb5038;
  param_1[2] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0xf3) = 0;
  uVar4 = DAT_0558600a;
  uVar3 = DAT_05586008;
  bVar7 = *puVar2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(undefined2 *)(param_1 + 6) = DAT_05586008;
  *(undefined2 *)(param_1 + 8) = uVar3;
  *(undefined2 *)(param_1 + 10) = uVar3;
  *(undefined2 *)(param_1 + 0xc) = uVar3;
  *(undefined2 *)(param_1 + 0xe) = uVar3;
  *(undefined2 *)(param_1 + 0x10) = uVar3;
  *(undefined2 *)(param_1 + 0x12) = uVar3;
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  *(undefined2 *)(param_1 + 0x16) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x22) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x32) = uVar4;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x42) = uVar4;
  *(undefined1 *)((long)param_1 + 0x4a) = uVar4;
  *(byte *)(param_1 + 1) = bVar7;
  uVar6 = DAT_0558600c;
  uVar5 = DAT_0558600b;
  *(undefined1 *)((long)param_1 + 0x52) = uVar4;
  *(undefined1 *)((long)param_1 + 0x5a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x23) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x33) = uVar5;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x43) = uVar5;
  *(undefined1 *)((long)param_1 + 0x4b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x53) = uVar5;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar5;
  puVar1 = (undefined8 *)(param_1 + 0x1d);
  param_1[7] = uVar6;
  param_1[9] = uVar6;
  param_1[0xb] = uVar6;
  param_1[0xd] = uVar6;
  param_1[0xf] = uVar6;
  param_1[0x11] = uVar6;
  param_1[0x13] = uVar6;
  param_1[0x15] = uVar6;
  param_1[0x17] = uVar6;
  *(undefined8 **)(param_1 + 0x1a) = puVar1;
  param_1[0x1c] = 0x80;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined1 **)(param_1 + 0x18) = &DAT_048fc708;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined2 *)((long)param_1 + 0x102) = DAT_04cb6038;
  *(undefined8 *)(param_1 + 0x42) = 0xffffffff00000001;
  bVar7 = DAT_0548e140;
  if (7 < DAT_0548e140) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x44) = bVar7;
  return;
}

