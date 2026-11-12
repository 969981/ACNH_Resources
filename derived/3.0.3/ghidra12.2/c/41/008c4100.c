
void FUN_008c4100(long param_1,long *param_2,long *param_3,undefined4 *param_4,byte param_5,
                 byte param_6,byte param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  if ((0x22 < *(uint *)(param_1 + 0x410)) ||
     ((1L << ((ulong)*(uint *)(param_1 + 0x410) & 0x3f) & 0x400078002U) == 0)) {
    FUN_008c3440(param_1);
  }
  *(undefined4 *)(param_1 + 0x307b0) = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0x307b4) = *param_4;
  *(undefined4 *)(param_1 + 0x307b8) = param_4[1];
  uVar6 = param_4[2];
  *(undefined1 *)(param_1 + 0x37fb4) = 1;
  pvVar4 = *(void **)(param_1 + 0x306a0);
  *(undefined4 *)(param_1 + 0x307bc) = uVar6;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_008c4238;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_008c4238;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_008c4238;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_008c4238:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x306a8) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x306a8) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x306d8);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_008c42dc;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_008c42dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_008c42dc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_008c42dc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x306e0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x306e0) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(byte *)(param_1 + 0x37fb6) = param_5 & 1;
  *(byte *)(param_1 + 0x37fb7) = param_6 & 1;
  FUN_03ebb160(param_1 + 0x408,0x22);
  *(byte *)(param_1 + 0x37fb8) = param_7 & 1;
  *(undefined1 *)(param_1 + 0x37fb9) = 1;
  return;
}

