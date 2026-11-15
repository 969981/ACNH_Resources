
void FUN_023163dc(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined2 local_26;
  byte local_24 [4];
  
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar3 = FUN_02583354(DAT_055021a0,local_24,1);
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x3278) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x3278), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      puVar1 = (undefined1 *)(*(long *)(lVar3 + 0x3260) + *(long *)(lVar3 + 0x3258));
      local_30 = *puVar1;
      local_2f = puVar1[1];
      local_2e = puVar1[2];
      local_2d = puVar1[3];
      local_2c = puVar1[4];
      local_2b = puVar1[5];
      local_2a = puVar1[6];
      local_29 = puVar1[7];
      local_28 = puVar1[8];
      local_26 = *(undefined2 *)(puVar1 + 10);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x3278) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3278) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      FUN_02346fe0(lVar5,&local_30);
    }
  }
  return;
}

