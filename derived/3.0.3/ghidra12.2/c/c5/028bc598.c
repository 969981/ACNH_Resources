
void FUN_028bc598(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = *(long *)PTR_DAT_04bb3350;
  if (((lVar5 != 0) &&
      (lVar3 = nn::os::GetTlsValue(*(undefined4 *)(lVar5 + 0x68)), *(long *)(lVar5 + 0x60) != lVar3)
      ) || (puVar2 = DAT_055b0f38, 7 < (int)param_1[0xb] - 1U)) {
    return;
  }
  switch((int)param_1[0xb]) {
  case 1:
    if ((DAT_055b0f38 != (undefined8 *)0x0) &&
       ((lVar5 = *(long *)puVar1, lVar5 == 0 ||
        (lVar3 = nn::os::GetTlsValue(*(undefined4 *)(lVar5 + 0x68)),
        *(long *)(lVar5 + 0x60) == lVar3)))) {
      *puVar2 = 0;
      FUN_03ebb160(puVar2 + 1,0);
    }
  case 4:
    uVar4 = 0;
    *(undefined4 *)(*param_1 + 0x7c) = 5;
    *param_1 = 0;
    break;
  default:
    *(undefined1 *)((long)param_1 + 0x10c) = 1;
    return;
  case 3:
  case 6:
    *(undefined1 *)((long)param_1 + 0x10c) = 1;
    uVar4 = 8;
  }
  FUN_03ebb160(param_1 + 10,uVar4);
  return;
}

