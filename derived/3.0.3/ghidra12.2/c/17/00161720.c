
void FUN_00161720(long param_1,int param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar5 + 0x41f) >> 2 & 1) == 0) && (*(int *)(lVar5 + 0x230) != 0x14)) {
    if (param_2 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(lVar5 + (long)param_2 * 4 + 600);
    }
    *(undefined4 *)(lVar5 + 0x470) = uVar3;
    if (param_5 == -1) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(lVar5 + (long)param_5 * 4 + 600);
    }
  }
  else {
    iVar2 = param_2;
    if ((param_2 != -1) || (iVar2 = param_5, param_5 != -1)) {
      iVar2 = *(int *)(lVar5 + (long)iVar2 * 4 + 600);
    }
    *(int *)(lVar5 + 0x470) = iVar2;
  }
  *(int *)(lVar5 + 0x474) = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x660);
  uVar4 = 0x80;
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
  }
  *(long *)(param_1 + 0xf0) = param_3;
  *(ushort *)(param_1 + 0x660) = uVar1 & 0xff7f | uVar4;
  if (((param_4 & 1) == 0) &&
     (((*(ushort *)(param_1 + 0x660) = uVar1 & 0xff7e | uVar4, param_3 < 1 ||
       (FUN_00146c4c(param_1,param_3), (*(ushort *)(param_1 + 0x660) >> 7 & 1) == 0)) &&
      ((*(byte *)(param_1 + 0xf63) & 1) != 0)))) {
    return;
  }
  if (param_2 != -1) {
    *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 1;
  }
  if (param_5 != -1) {
    if ((*(ushort *)(param_1 + 0x15c4) >> 8 & 1) != 0) {
      if (((*(byte *)(*(long *)(lVar5 + 0x440) + 0x80) & 3) != 0) &&
         (*(int *)(*(long *)(param_1 + 0x1e8) + 0x208) == 2)) {
        *(undefined4 *)(param_1 + 0x198) = 1;
        auVar6 = FUN_00147178();
        *(undefined1 (*) [16])(param_1 + 0x188) = auVar6;
        FUN_00147570(param_1,*(undefined8 *)(param_1 + 0xf00),0);
        return;
      }
      *(undefined4 *)(param_1 + 0x198) = 2;
    }
    *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
  }
  return;
}

