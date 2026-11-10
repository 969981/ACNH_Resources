
void FUN_002c30d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x28) == '\0') {
      if ((*(short *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 0x178) != 2)) {
        *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x150);
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        local_14 = 0;
        local_40 = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
        FUN_002296c4(auStack_30,&local_40);
        FUN_00220ff8(lVar1,auStack_30);
      }
      else {
        FUN_002c9590();
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(undefined1 *)(param_1 + 0x20) = 3;
        local_40 = 0;
        local_14 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
        FUN_002296c4(auStack_50,&local_40);
        FUN_00220f8c(uVar2,auStack_50);
      }
    }
    else {
      FUN_00221064(lVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

