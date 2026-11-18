
void FUN_0365b790(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar4 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar4 = FUN_0365c1e0(uVar4,param_1 + 0x2098,iVar1);
    uVar4 = FUN_0365c320(uVar4,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar4,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  lVar5 = param_1 + (ulong)param_2 * 0x4c;
  *(uint *)(lVar5 + 0x2084) = (uint)*(byte *)(lVar5 + 0x2084) | (param_3 & 7) << 8;
  if (*(char *)(lVar5 + 0x2056) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x2198);
    if ((uVar2 < 0x401) && (*(uint *)(lVar5 + 0x204c) != 0)) {
      *(undefined4 *)(lVar5 + 0x2050) = 0xffffffff;
    }
    else {
      uVar6 = (ulong)(param_3 >> 3) & 0x1f;
      bVar3 = (&DAT_041979c4)[uVar6];
      *(char *)(lVar5 + 0x2054) = (char)uVar6;
      *(uint *)(lVar5 + 0x204c) = (uint)bVar3;
      *(uint *)(lVar5 + 0x2050) = uVar2;
    }
  }
  param_1 = param_1 + (ulong)param_2 * 0x4c;
  *(undefined4 *)(param_1 + 0x2088) = 0;
  *(undefined1 *)(param_1 + 0x2068) = 1;
  return;
}

