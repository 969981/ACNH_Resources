
void FUN_03834380(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 5) {
    FUN_03f45838(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x20);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd8) >> 1 & 1) == 0)) {
      FUN_03bf3a60(lVar3);
      *(byte *)(lVar3 + 0xd8) = *(byte *)(lVar3 + 0xd8) | 2;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 3) {
      if (*(int *)(param_1 + 0x40) != 3) {
        if (*(int *)(param_1 + 0x40) != 2) goto LAB_03834418;
LAB_03834458:
        *(undefined4 *)(param_1 + 0x10) = 4;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
        lVar3 = *(long *)(param_1 + 0x20);
        goto joined_r0x03834470;
      }
    }
    else {
      if (iVar2 != 6) {
        if (iVar2 != 5) goto LAB_038343e8;
LAB_03834418:
        *(undefined4 *)(param_1 + 0x10) = 4;
        goto LAB_03834420;
      }
      if (*(int *)(param_1 + 0x40) == 3) goto LAB_03834458;
    }
  }
  else {
LAB_038343e8:
    if (iVar2 != 6) {
      if (iVar2 == 4) {
LAB_03834420:
        lVar3 = *(long *)(param_1 + 0x20);
joined_r0x03834470:
        if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
          *(undefined4 *)(param_1 + 0x10) = 6;
          lVar5 = *(long *)(param_1 + 0x18);
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
          puVar1 = PTR_DAT_04bb3350;
          if (lVar5 == 0) {
            lVar4 = 1;
          }
          else {
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar4 = *(long *)(lVar3 + 0xa8);
            *(long *)(lVar3 + 0xa8) = lVar5;
            lVar3 = *(long *)(param_1 + 0x20);
          }
          if (lVar3 != 0) {
            FUN_03bf3850();
            FUN_03bf3600(*(undefined8 *)(param_1 + 0x20));
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
          *(undefined8 *)(param_1 + 0x30) = 0;
          if (lVar4 != 1) {
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
            *(long *)(lVar3 + 0xa8) = lVar4;
          }
          if (*(long **)(param_1 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          goto LAB_038344f8;
        }
        FUN_03bf3c20();
        iVar2 = *(int *)(param_1 + 0x10);
      }
      else if (iVar2 == 3) goto LAB_03834418;
      if (1 < iVar2 - 1U) {
        if (iVar2 != 0) {
          return;
        }
        goto LAB_038344fc;
      }
    }
  }
LAB_038344f8:
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_038344fc:
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return;
}

