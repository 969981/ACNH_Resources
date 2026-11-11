
bool FUN_003b9b24(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  if (puVar5 != (undefined4 *)0x0) {
    *param_3 = *puVar5;
    param_3[1] = puVar5[1];
    *(undefined1 *)((long)param_3 + 10) = *(undefined1 *)(puVar5 + 2);
    uVar4 = FUN_003b95dc(puVar5);
    param_3[3] = uVar4;
    uVar4 = FUN_003b95fc(puVar5);
    param_3[4] = uVar4;
    uVar4 = FUN_003b961c(puVar5);
    param_3[5] = uVar4;
    uVar3 = FUN_003b964c(puVar5);
    *(undefined2 *)(param_3 + 6) = uVar3;
    uVar1 = FUN_003b967c(puVar5);
    *(undefined1 *)((long)param_3 + 9) = uVar1;
    uVar1 = FUN_003b96a4(puVar5);
    *(undefined1 *)(param_3 + 2) = uVar1;
    *(undefined1 *)((long)param_3 + 0xb) = *(undefined1 *)((long)puVar5 + 9);
    bVar2 = FUN_003b96d0(puVar5);
    *(byte *)((long)param_3 + 0x1a) = bVar2 & 1;
  }
  return puVar5 != (undefined4 *)0x0;
}

