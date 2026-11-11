
void FUN_003cd30c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_28;
  
  cVar1 = *(char *)(param_2 + 0x74);
  *PTR_DAT_04bd0240 = cVar1;
  lVar5 = *param_3;
  if (cVar1 == '\0') {
    *param_1 = lVar5;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    cVar1 = *(char *)(param_2 + 0x75);
  }
  else {
    lVar7 = param_3[1];
    uVar9 = *(uint *)(param_2 + 0x90);
    if ((int)uVar9 < 2) {
      uVar9 = 1;
    }
    if (0x17 < (int)uVar9) {
      uVar9 = 0x18;
    }
    local_28 = (ulong)*(byte *)(param_2 + 0x96) << 8 | (ulong)uVar9 << 0x20 |
               (ulong)*(byte *)(param_2 + 0x95);
    uVar2 = FUN_003cc20c();
    lVar3 = FUN_003cc29c(uVar2,*(int *)(param_2 + 0x58) << 1,&local_28);
    uVar2 = FUN_03b38a74();
    lVar4 = FUN_003b5330(uVar2,*(undefined4 *)(param_2 + 0x58));
    uVar6 = lVar3 + lVar4 + 0xfffU & 0xfffffffffffff000;
    uVar8 = *param_3 + 0xfffU & 0xfffffffffffff000;
    lVar3 = uVar8 + uVar6;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
    *param_1 = lVar3;
    param_1[1] = (lVar7 + lVar5) - lVar3;
    cVar1 = *(char *)(param_2 + 0x75);
  }
  if (cVar1 == '\0') {
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
    return;
  }
  if (*(char *)(param_2 + 99) == '\0') {
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
  lVar5 = FUN_003ccac0(param_2);
  param_1[4] = *param_1;
  param_1[5] = lVar5;
  *param_1 = *param_1 + lVar5;
  param_1[1] = param_1[1] - lVar5;
  return;
}

