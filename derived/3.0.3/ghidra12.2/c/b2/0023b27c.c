
void FUN_0023b27c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  *(undefined1 *)(param_2 + 0x4d) = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x10,uVar1);
  if (lVar2 != 0) {
    FUN_00226900(lVar2);
  }
  *(long *)(param_2 + 0xa0) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x10,uVar1);
  if (lVar2 != 0) {
    FUN_00226900(lVar2);
  }
  *(long *)(param_2 + 0xa8) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0xee8,uVar1);
  if (lVar2 != 0) {
    FUN_0023e2b4(lVar2,param_2);
  }
  *(long *)(param_2 + 200) = lVar2;
  *(undefined4 *)(param_2 + 0x13a4) = 1;
  *(undefined1 *)(param_2 + 0xb0) = 0;
  *(undefined2 *)(param_2 + 0x98) = 0;
  *(undefined1 *)(param_2 + 0x13a0) = 0;
  *(undefined2 *)(param_2 + 0x13b8) = 0;
  *(undefined1 *)(param_2 + 0x13ba) = 0;
  local_40 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

