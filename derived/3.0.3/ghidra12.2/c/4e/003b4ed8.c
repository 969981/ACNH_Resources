
void FUN_003b4ed8(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *(char *)(param_1 + 0x19) = (char)param_5;
  *(char *)(param_1 + 0x1a) = (char)param_6;
  uVar1 = ((param_5 | param_6) ^ 1) & param_7 & param_4;
  bVar4 = (byte)uVar1;
  *(byte *)(param_1 + 0x28) = bVar4;
  *(byte *)(param_1 + 0x1e) = bVar4 ^ (byte)param_4;
  iVar6 = 2;
  if ((param_2 & 1) == 0) {
    iVar6 = 6;
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_8;
    *(int *)(param_1 + 0x14) = iVar6 + param_9;
    return;
  }
  param_3 = param_3 & 1;
  iVar2 = 0x1e;
  if (param_3 == 0) {
    iVar2 = iVar6 << 1;
  }
  iVar7 = 6;
  if (param_3 == 0) {
    iVar7 = 2;
  }
  bVar5 = (param_5 & 1) == 0;
  if (bVar5) {
    iVar7 = 0;
  }
  iVar8 = 1;
  if (!bVar5) {
    iVar8 = 2;
  }
  iVar3 = iVar6;
  if ((param_3 & param_6) == 0) {
    iVar3 = 0;
  }
  iVar8 = iVar8 + (param_6 & 1);
  iVar2 = iVar7 + iVar3 + iVar2;
  if ((param_4 & 1) == 0) {
    iVar8 = 0;
    iVar2 = iVar6;
  }
  *(int *)(param_1 + 0x10) = iVar8;
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}

