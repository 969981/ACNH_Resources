
undefined8 FUN_03130c90(long *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte local_24 [4];
  
  uVar3 = (**(code **)(*param_1 + 0xf0))();
  if ((((uVar3 & 1) != 0) && (local_24[0] = *param_2, local_24[0] < 8)) &&
     (7 < *(byte *)(param_1 + 0x44))) {
    lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar4 == 0) {
      return 0;
    }
    if ((*(long **)(lVar4 + 0x161a8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x161a8), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    bVar6 = *(byte *)(*(long *)(lVar4 + 0x16190) + *(long *)(lVar4 + 0x16188));
    bVar1 = bVar6;
    if (7 < bVar6) {
      bVar1 = 0xff;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x161a8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x161a8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (bVar6 < 8) {
      bVar6 = *param_2;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      *(byte *)(param_1 + 0x44) = bVar6;
      *(int *)((long)param_1 + 0x224) = (int)(char)bVar1;
      return 1;
    }
  }
  return 0;
}

