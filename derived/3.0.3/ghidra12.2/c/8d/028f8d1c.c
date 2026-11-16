
void FUN_028f8d1c(long param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  
  *(undefined8 *)(param_1 + 0x1520) = 0;
  *(undefined8 *)(param_1 + 0x1528) = 0;
  bVar1 = *(byte *)(param_1 + 0x1538);
  *(undefined8 *)(param_1 + 0x1530) = 0;
  *(undefined4 *)(param_1 + 0x1538) = 0;
  *(undefined8 *)(param_1 + 0x1518) = 0x134b;
  FUN_0277d4ac(param_1 + 0x1518);
  *(undefined8 *)(param_1 + 0x1520) = 0x134b;
  FUN_0277d4ac(param_1 + 0x1520);
  *(undefined8 *)(param_1 + 0x1528) = 0x139b;
  FUN_0277d4ac(param_1 + 0x1528);
  uVar2 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined2 *)(param_1 + 0x1536) = 0x4000;
  *(undefined8 *)(param_1 + 0x154c) = 0;
  *(undefined1 *)(param_1 + 0x1538) = 0x10;
  *(undefined4 *)(param_1 + 0x1540) = 0x101;
  *(undefined8 *)(param_1 + 0x1544) = 0x3f80000000000001;
  *(undefined2 *)(param_1 + 0x1530) = uVar2;
  *(undefined2 *)(param_1 + 0x1532) = uVar2;
  *(undefined2 *)(param_1 + 0x1534) = uVar2;
  if ((bVar1 >> 5 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1538) = 0x30;
  }
  local_48 = 0x3a30;
  FUN_0277d4ac(&local_48);
  local_50 = 0x3a31;
  FUN_0277d4ac(&local_50);
  FUN_0285abd0(param_1 + 0x1518,&local_50,&local_48);
  *(undefined1 *)(param_1 + 0x153e) = 0;
  *(undefined2 *)(param_1 + 0x1546) = 7;
  return;
}

