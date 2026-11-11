
void FUN_0054b2a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [48];
  undefined8 local_60;
  undefined8 local_58;
  
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x168) + lVar1 * 8);
      FUN_004385f0(auStack_90,lVar2 + 0x20);
      local_58 = *(undefined8 *)(lVar2 + 0x58);
      local_60 = *(undefined8 *)(lVar2 + 0x50);
      FUN_00482510(lVar2 + 0x20,param_2,auStack_90);
      FUN_00482280(lVar2 + 0x60,param_2 + 0x10,lVar2 + 0x60);
      FUN_00482280(lVar2 + 0x70,param_2 + 0x10,lVar2 + 0x70);
      FUN_004385e0(auStack_90);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x170));
  }
  return;
}

