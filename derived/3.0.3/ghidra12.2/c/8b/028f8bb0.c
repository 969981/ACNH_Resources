
void FUN_028f8bb0(void *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  
  memset(param_1,0,0xe10);
  lVar5 = 0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar5);
    *puVar2 = 0xfffe;
    FUN_0277d4ac(puVar2);
    lVar5 = lVar5 + 0xc;
    *(undefined4 *)(puVar2 + 1) = 0;
  } while (lVar5 != 0xe10);
  memset((void *)((long)param_1 + 0xe10),0,0x708);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 0x18;
    *(undefined1 *)((long)param_1 + lVar5 + 0xe14) = 0;
    *(undefined4 *)((long)param_1 + lVar5 + 0xe10) = 0;
    *(undefined4 *)((long)param_1 + lVar5 + 0xe16) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0xe1a) = 0;
    *(undefined4 *)((long)param_1 + lVar5 + 0xe1c) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0xe20) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0xe26) = 0;
    *(undefined4 *)((long)param_1 + lVar5 + 0xe22) = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0x708);
  *(undefined2 *)((long)param_1 + 0x151a) = 0;
  *(undefined2 *)((long)param_1 + 0x1518) = 0x134b;
  *(undefined4 *)((long)param_1 + 0x151c) = 0;
  FUN_0277d4ac((long)param_1 + 0x1518);
  *(undefined2 *)((long)param_1 + 0x1520) = 0x134b;
  *(undefined2 *)((long)param_1 + 0x1522) = 0;
  *(undefined4 *)((long)param_1 + 0x1524) = 0;
  FUN_0277d4ac((long)param_1 + 0x1520);
  *(undefined2 *)((long)param_1 + 0x152a) = 0;
  *(undefined4 *)((long)param_1 + 0x152c) = 0;
  *(undefined2 *)((long)param_1 + 0x1528) = 0x139b;
  FUN_0277d4ac((long)param_1 + 0x1528);
  *(undefined8 *)((long)param_1 + 0x1544) = 0x3f80000000000001;
  puVar4 = PTR_DAT_04bb3170;
  *(undefined2 *)((long)param_1 + 0x153c) = 0;
  *(undefined2 *)((long)param_1 + 0x1554) = 0;
  *(undefined2 *)((long)param_1 + 0x1558) = 0;
  uVar3 = *(undefined2 *)puVar4;
  *(undefined2 *)((long)param_1 + 0x1536) = 0x4000;
  *(undefined1 *)((long)param_1 + 0x153e) = 0;
  *(undefined8 *)((long)param_1 + 0x154c) = 0;
  *(undefined1 *)((long)param_1 + 0x1538) = 0x10;
  *(undefined4 *)((long)param_1 + 0x1540) = 0x101;
  *(undefined2 *)((long)param_1 + 0x1530) = uVar3;
  *(undefined2 *)((long)param_1 + 0x1532) = uVar3;
  *(undefined2 *)((long)param_1 + 0x1534) = uVar3;
  *(undefined2 *)((long)param_1 + 0x1556) = 0xff;
  *(undefined1 *)((long)param_1 + 0x155a) = 0xff;
  return;
}

