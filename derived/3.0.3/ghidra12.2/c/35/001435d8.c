
undefined * FUN_001435d8(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04bcb730;
  if (*(int *)PTR_DAT_04bcb730 == 0) {
    piVar1 = (int *)(PTR_DAT_04bcb730 + 4);
    *(undefined4 *)PTR_DAT_04bcb730 = 1;
    *(int *)(puVar3 + 4) = *piVar1 + 1;
    lVar4 = FUN_00143430(0x4000,PTR_FUN_04bcb740,0,"LibcurlGc");
    *(long *)(puVar3 + 8) = lVar4;
    if (lVar4 != 0) {
      lVar4 = FUN_001432f0(0x20);
      *(long *)(puVar3 + 0x58) = lVar4;
      if (lVar4 != 0) {
        FUN_00143a84(lVar4,&DAT_001437e8);
        lVar4 = FUN_001432f0(0x20);
        *(long *)(puVar3 + 0x60) = lVar4;
        if (lVar4 != 0) {
          FUN_00143a84(lVar4,&LAB_001437ec);
          nnosInitializeMutex(puVar3 + 0x38,1,0);
          nnosInitializeEvent(puVar3 + 0x10,0,1);
          puVar2 = puVar3 + 0x68;
          nnosInitializeEvent(puVar2,0,1);
          nnosStartThread(*(undefined8 *)(puVar3 + 8));
          nnosWaitEvent(puVar2);
          nnosFinalizeEvent(puVar2);
          return puVar3;
        }
        goto LAB_00143604;
      }
    }
  }
  if (*(long *)(puVar3 + 0x60) != 0) {
    FUN_00143b8c(*(long *)(puVar3 + 0x60),0);
  }
LAB_00143604:
  if (*(long *)(puVar3 + 0x58) != 0) {
    FUN_00143b8c(*(long *)(puVar3 + 0x58),0);
  }
  if (*(long *)(puVar3 + 8) != 0) {
    FUN_00143598();
  }
  *(undefined4 *)puVar3 = 0;
  memset(puVar3 + 0x10,0,0x58);
  return (undefined *)0x0;
}

