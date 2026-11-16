
void FUN_0298cd94(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  if ((*(long *)PTR_DAT_04bc3ee8 == 0) ||
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28), lVar4 == 0)) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x7420) = 0;
    *(undefined8 *)(param_1 + 0x7428) = 0;
    *(undefined8 *)(param_1 + 0x73f8) = 0;
    *(undefined8 *)(param_1 + 0x7410) = 0;
    *(undefined8 *)(param_1 + 0x7418) = 0;
    *(undefined8 *)(param_1 + 0x7400) = 0;
    *(undefined8 *)(param_1 + 0x7408) = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "AudioFtr_XS";
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_S";
    *(long *)(param_1 + 0x73f8) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_M";
    *(long *)(param_1 + 0x7400) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_L";
    *(long *)(param_1 + 0x7408) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_Indoor_XS";
    *(long *)(param_1 + 0x7410) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_Indoor_S";
    *(long *)(param_1 + 0x7418) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_Indoor_M";
    *(long *)(param_1 + 0x7420) = lVar3;
    local_40 = puVar1;
    lVar2 = FUN_03baddf0(lVar4,&local_40);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    pcStack_38 = "AudioFtr_Indoor_L";
    *(long *)(param_1 + 0x7428) = lVar3;
    local_40 = puVar1;
    lVar3 = FUN_03baddf0(lVar4,&local_40);
    lVar4 = *(long *)(lVar4 + 0x88);
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
  }
  *(long *)(param_1 + 0x7430) = lVar4;
  return;
}

