
void FUN_027ca620(void *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  long lVar9;
  
  memset(param_1,0,0xb10);
  lVar9 = 0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar9);
    *puVar2 = 0xfffe;
    FUN_0277d4ac(puVar2);
    lVar9 = lVar9 + 0xc;
    *(undefined4 *)(puVar2 + 1) = 0;
  } while (lVar9 != 0xb10);
  memset((void *)((long)param_1 + 0xb10),0,0x588);
  lVar9 = 0;
  do {
    lVar1 = lVar9 + 0x18;
    *(undefined1 *)((long)param_1 + lVar9 + 0xb14) = 0;
    *(undefined4 *)((long)param_1 + lVar9 + 0xb10) = 0;
    *(undefined4 *)((long)param_1 + lVar9 + 0xb16) = 0;
    *(undefined1 *)((long)param_1 + lVar9 + 0xb1a) = 0;
    *(undefined4 *)((long)param_1 + lVar9 + 0xb1c) = 0;
    *(undefined1 *)((long)param_1 + lVar9 + 0xb20) = 0;
    *(undefined1 *)((long)param_1 + lVar9 + 0xb26) = 0;
    *(undefined4 *)((long)param_1 + lVar9 + 0xb22) = 0;
    lVar9 = lVar1;
  } while (lVar1 != 0x588);
  *(undefined2 *)((long)param_1 + 0x109a) = 0;
  *(undefined2 *)((long)param_1 + 0x1098) = 0x134b;
  *(undefined4 *)((long)param_1 + 0x109c) = 0;
  FUN_0277d4ac((long)param_1 + 0x1098);
  *(undefined2 *)((long)param_1 + 0x10a0) = 0x134b;
  *(undefined2 *)((long)param_1 + 0x10a2) = 0;
  *(undefined4 *)((long)param_1 + 0x10a4) = 0;
  FUN_0277d4ac((long)param_1 + 0x10a0);
  *(undefined2 *)((long)param_1 + 0x10aa) = 0;
  *(undefined4 *)((long)param_1 + 0x10ac) = 0;
  *(undefined2 *)((long)param_1 + 0x10a8) = 0x139b;
  FUN_0277d4ac((long)param_1 + 0x10a8);
  uVar6 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined2 *)((long)param_1 + 0x10b6) = 0x4000;
  *(undefined4 *)((long)param_1 + 0x10bc) = 0x101;
  *(undefined1 *)((long)param_1 + 0x10b8) = 0x10;
  puVar8 = PTR_DAT_04bb37e0;
  *(undefined8 *)((long)param_1 + 0x10c0) = 0x3f80000000000001;
  *(undefined8 *)((long)param_1 + 0x10c8) = 0;
  *(undefined8 *)((long)param_1 + 0x10f8) = 0;
  *(undefined8 *)((long)param_1 + 0x10f0) = 0;
  *(undefined8 *)((long)param_1 + 0x10e8) = 0;
  *(undefined8 *)((long)param_1 + 0x10e0) = 0;
  uVar7 = *(undefined2 *)puVar8;
  *(undefined1 *)((long)param_1 + 0x1100) = 0;
  uVar4 = puVar8[2];
  *(undefined2 *)((long)param_1 + 0x10b0) = uVar6;
  *(undefined2 *)((long)param_1 + 0x10b2) = uVar6;
  *(undefined2 *)((long)param_1 + 0x10b4) = uVar6;
  *(undefined1 *)((long)param_1 + 0x10d2) = uVar4;
  *(undefined2 *)((long)param_1 + 0x10d0) = uVar7;
  *(undefined2 *)((long)param_1 + 0x10d8) = uVar7;
  uVar5 = puVar8[3];
  *(undefined1 *)((long)param_1 + 0x10d3) = uVar5;
  uVar3 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)((long)param_1 + 0x10da) = uVar4;
  *(undefined1 *)((long)param_1 + 0x10db) = uVar5;
  *(undefined4 *)((long)param_1 + 0x10d4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x10dc) = uVar3;
  return;
}

