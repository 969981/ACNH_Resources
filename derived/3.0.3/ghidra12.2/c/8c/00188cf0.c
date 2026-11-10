
bool FUN_00188cf0(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar3 = *(long *)PTR_DAT_04bcbd60;
  if (param_2 != 0) {
    lVar3 = param_2;
  }
  *(long *)(param_1 + 0x48) = lVar3;
  puVar2 = PTR_DAT_04bcbc88;
  lVar3 = **(long **)(param_1 + 0x30);
  if (lVar3 != 0) {
    local_24 = 0xe000000e;
    local_28 = 0;
    FUN_0018cd00(*(long *)PTR_DAT_04bcbc88 + 0x38,&local_24);
    FUN_0018cd00(*(long *)puVar2 + 0xb8,&local_28);
    return lVar3 == 0;
  }
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_00188dd0();
  cVar1 = *(char *)(param_1 + 0x51);
  while (cVar1 == '\0') {
    nn::os::SleepThread(1000000);
    cVar1 = *(char *)(param_1 + 0x51);
  }
  return true;
}

