
void FUN_002bbdb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0xa8) != 4) {
      *(undefined4 *)(param_1 + 0xa8) = 0x14;
      FUN_002904f0(param_1 + 0x60);
      if (*(int *)(param_1 + 0xa8) != 4) {
        lVar2 = *(long *)PTR_DAT_04bcd020;
        do {
          FUN_00290904(lVar2 / 10000);
          if (*(int *)(param_1 + 0xa8) == 3) {
            *(undefined4 *)(param_1 + 0xa8) = 0x14;
            FUN_002904f0(param_1 + 0x60);
          }
        } while (*(int *)(param_1 + 0xa8) != 4);
      }
    }
    (**(code **)(**(long **)(param_1 + 0x58) + 0x40))();
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_00285dc0(puVar1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_002a90e0(param_1 + 8);
  local_40 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_00229780(param_1 + 0xb0,&local_40);
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    FUN_002b82fc(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}

