
void FUN_0037c830(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_78 [2];
  long local_70;
  undefined4 local_64;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar2 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar4 = (ulong)uVar2 + 4;
  piVar1 = (int *)(lVar5 + (ulong)(*(int *)(lVar5 + lVar4) + uVar2));
  if (*piVar1 != 0x15) {
    return;
  }
  if ((char)*(byte *)((long)piVar1 + 7) < '\0') {
    lVar6 = 0;
    bVar3 = *(byte *)(piVar1 + 2);
  }
  else {
    lVar6 = lVar5 + (ulong)(*(int *)(lVar5 + lVar4 + (ulong)*(byte *)((long)piVar1 + 7) * 4) + uVar2
                           );
    bVar3 = *(byte *)(piVar1 + 2);
  }
  if ((char)bVar3 < '\0') {
    if (lVar6 == 0) {
      return;
    }
    lVar5 = 0;
    lVar4 = FUN_00367b30(0x230);
  }
  else {
    lVar5 = lVar5 + (ulong)(*(int *)(lVar5 + lVar4 + (ulong)bVar3 * 4) + uVar2);
    lVar4 = FUN_00367b30(0x230);
  }
  if (lVar4 != 0) {
    FUN_0037f2a0(lVar4);
  }
  local_78[0] = 0x11;
  local_70 = lVar4;
  FUN_0037f2e4(lVar4,param_2,param_3,param_1,param_4);
  if (param_2 != (long *)0x0) {
    lVar5 = FUN_0038167c(param_3,lVar6,lVar5);
    *param_2 = *param_2 + lVar5;
  }
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) {
    local_64 = 0x15;
    local_60 = 0xffffffffff;
    uStack_5b = 0xffffff;
    uStack_58 = 0xffffffffff;
    FUN_0037db40(param_1,0x15,&local_64,0x14,1);
  }
  FUN_0037db40(param_1,0x11,local_78,0x10,0);
  return;
}

