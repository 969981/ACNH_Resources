
void FUN_0025f270(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcd930;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 100;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10(0x5d8,uVar2);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(lVar3 + lVar4) = 0;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x5d8);
  }
  param_1[0xf] = lVar3;
  uVar2 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar2);
  if (lVar4 != 0) {
    FUN_0025f20c(lVar4,lVar3,0x5d8);
  }
  param_1[0xe] = lVar4;
  return;
}

