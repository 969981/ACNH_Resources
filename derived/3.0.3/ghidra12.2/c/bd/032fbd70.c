
undefined4 FUN_032fbd70(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined *local_60;
  undefined **local_58;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x498) == '\0') {
    return 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar4 + 0x518) == 0) || (*(char *)(*(long *)(lVar4 + 0x518) + 0x712) == '\0')) {
    if ((*(long *)(*(long *)(lVar4 + 0x528) + 0x20) == *(long *)(lVar4 + 0x528) + 0x38) &&
       ((*(long *)(lVar4 + 0x6e0) != 0 &&
        (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x6e0) + 8), puVar7 != (undefined8 *)0x0)))) {
      bVar3 = (**(code **)*puVar7)(puVar7);
      bVar2 = *(char *)(param_1 + 0x498) != '\0';
      lVar4 = *(long *)(param_1 + 0x20);
    }
    else {
      bVar3 = 0;
      bVar2 = true;
    }
    uVar5 = FUN_03300398(lVar4);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_03357cf4();
      }
      if (*(long *)(param_1 + 0xbf8) != 0) {
        FUN_033487ac(*(long *)(param_1 + 0xbf8),bVar3 & bVar2);
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_03351648();
      }
    }
    puVar1 = PTR_DAT_04bc8ed0;
    lVar4 = *(long *)PTR_DAT_04bc8ed0;
    if (lVar4 != 0) {
      FUN_032a5fc0(lVar4,0);
      if ((*(int *)(lVar4 + 0xa8) != 0) && (*(int *)(lVar4 + 0xa8) != 3)) {
        local_40 = PTR_LAB_04bc9260;
        uStack_38 = 0;
        local_60 = PTR_DAT_04bc8e60 + 0x10;
        local_50 = PTR_DAT_04bc9290 + 0x10;
        local_58 = &local_50;
        lStack_48 = lVar4;
        FUN_032c7c30(*(undefined8 *)(lVar4 + 0x40),1,0,&local_60,0,0);
        if (local_58 != (undefined **)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        *(undefined4 *)(lVar4 + 0xa8) = 3;
      }
      FUN_032a63e0(*(undefined8 *)puVar1);
    }
    *(undefined1 *)(param_1 + 0x498) = 0;
    memset(*(void **)(param_1 + 0xa68),0,0x3ea);
    *(undefined4 *)(param_1 + 0xbdc) = 0;
    uVar6 = 0;
    if ((uVar5 & 1) == 0) {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}

