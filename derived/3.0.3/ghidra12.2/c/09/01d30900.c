
bool FUN_01d30900(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  char *pcStack_38;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    *param_1 = 0x220a002803;
    lVar4 = *param_2;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x2c) = 0xff;
    *(undefined8 *)((long)param_1 + 0x2d) = 0;
    *(undefined8 *)((long)param_1 + 0x35) = 0;
    *(undefined8 *)((long)param_1 + 0x3d) = 0;
    *(undefined8 *)((long)param_1 + 0x45) = 0;
    *(undefined8 *)((long)param_1 + 0x4d) = 0;
    *(undefined8 *)((long)param_1 + 0x55) = 0;
    *(undefined8 *)((long)param_1 + 0x5d) = 0;
    *(undefined8 *)((long)param_1 + 0x65) = 0;
    param_1[1] = lVar4;
    *(undefined8 *)((long)param_1 + 0x6d) = 0;
    *(undefined8 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)((long)param_1 + 0x7d) = 0;
    *(undefined8 *)((long)param_1 + 0x85) = 0;
    *(undefined8 *)((long)param_1 + 0x8d) = 0;
    *(undefined8 *)((long)param_1 + 0x95) = 0;
    *(undefined8 *)((long)param_1 + 0x9d) = 0;
    *(undefined8 *)((long)param_1 + 0xa5) = 0;
    *(undefined8 *)((long)param_1 + 0xad) = 0;
    *(undefined4 *)((long)param_1 + 0xb5) = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x13c) = 0xff;
    *(undefined4 *)(param_1 + 0x27) = 0;
    memset((void *)((long)param_1 + 0x13f),0,0x402);
    local_40 = (undefined *)nn::oe::GetDesiredLanguage();
    lVar4 = 0;
    do {
      if (*(char *)((long)&local_40 + lVar4) == '\0') goto LAB_01d30a0c;
      if (*(char *)((long)&local_40 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01d30a0c;
      }
      if (*(char *)((long)&local_40 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01d30a0c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01d30a0c:
    uVar3 = (uint)lVar4;
    *(undefined8 *)((long)param_1 + 0x541) = 0;
    if (6 < (int)uVar3) {
      uVar3 = 7;
    }
    memcpy((undefined8 *)((long)param_1 + 0x541),&local_40,(ulong)uVar3);
    puVar1 = PTR_DAT_04bb2020;
    *(undefined1 *)((long)param_1 + 0x54b) = 0;
    pcStack_38 = "CoordinatorGrade";
    local_40 = puVar1 + 0x10;
    uVar2 = FUN_02758850(&local_40);
    *(undefined1 *)((long)param_1 + 0x13d) = uVar2;
    pcStack_38 = "CoordinatorRank";
    local_40 = puVar1 + 0x10;
    uVar2 = FUN_02758850(&local_40);
    *(undefined1 *)((long)param_1 + 0x13e) = uVar2;
    *(undefined4 *)((long)param_1 + 0x54c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x54a) = 0;
  }
  return lVar5 != 0;
}

