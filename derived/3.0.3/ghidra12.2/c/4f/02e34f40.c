
void FUN_02e34f40(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  *(undefined8 *)((long)param_1 + 0xe5c) = 0;
  *(undefined8 *)((long)param_1 + 0xe64) = 0;
  *(undefined8 *)((long)param_1 + 0xe84) = 0;
  *(undefined8 *)((long)param_1 + 0xe8c) = 0;
  *(undefined8 *)((long)param_1 + 0xeac) = 0;
  *(undefined8 *)((long)param_1 + 0xeb4) = 0;
  lVar4 = param_1[0x1db];
  *(undefined4 *)(param_1 + 0x1cf) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
  *(long *)(lVar4 + 8) = param_1[0x1c5];
  *(int *)(lVar4 + 0x10) = (int)param_1[0x1c6];
  *(int *)(lVar4 + 0x18) = (int)param_1[0x1c7];
  lVar4 = param_1[0x1e0];
  *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
  *(long *)(lVar4 + 8) = param_1[0x1c5];
  *(int *)(lVar4 + 0x10) = (int)param_1[0x1c6];
  *(int *)(lVar4 + 0x18) = (int)param_1[0x1c7];
  puVar1 = PTR_DAT_04bb2200;
  if ((char)param_1[0x1c8] == '\0') goto LAB_02e35084;
  lVar4 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar4 + 0x244) = 0;
    *(undefined4 *)((long)param_1 + lVar4 + 0x248) = 0;
    if ((*(byte *)((long)param_1 + lVar4 + 0x224) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(*(long *)puVar1 + 0x140),(long)param_1 + lVar4 + 0x220);
    }
    if (*(int *)((long)param_1 + lVar4 + 0x240) != -1) {
      *(undefined4 *)((long)param_1 + lVar4 + 0x240) = 0xffffffff;
    }
    lVar2 = DAT_0575aaf0;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0xc00);
  if ((char)param_1[0x1c8] == '\0') goto LAB_02e35084;
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar3 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (*(int *)(DAT_0575aaf0 + 8) < 1) goto LAB_02e35068;
    *(int *)(DAT_0575aaf0 + 8) = iVar3;
    if (iVar3 == 0) {
      iVar3 = 0;
      *(undefined8 *)(lVar2 + 0xc) = 0x200000000;
    }
    else {
      iVar3 = 2;
    }
  }
  else {
LAB_02e35068:
    iVar3 = -2;
  }
  if (-1 < iVar3) {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
LAB_02e35084:
  FUN_03465b80(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

