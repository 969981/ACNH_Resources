
void FUN_0363c760(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long local_28;
  long lStack_20;
  int local_18;
  undefined2 local_14 [2];
  
  local_14[0] = *(undefined2 *)(param_1 + 8);
  local_18 = 0;
  local_28 = 0;
  lStack_20 = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    uVar2 = 4;
    do {
      uVar3 = (uint)*(byte *)(param_2 + uVar1);
      iVar4 = -0x30;
      if (((9 < uVar3 - 0x30) && (iVar4 = -0x57, 5 < uVar3 - 0x61)) &&
         (iVar4 = -0x37, 5 < uVar3 - 0x41)) break;
      uVar5 = uVar1 >> 1;
      uVar1 = uVar1 + 1;
      iVar4 = iVar4 + uVar3 << uVar2;
      uVar2 = uVar2 ^ 4;
      *(byte *)((long)local_14 + (uVar5 - 0x14)) =
           *(byte *)((long)local_14 + (uVar5 - 0x14)) | (byte)iVar4;
    } while (uVar1 != 0x28);
  }
  if ((local_28 == *(long *)PTR_DAT_04bcaa48 && lStack_20 == *(long *)(PTR_DAT_04bcaa48 + 8)) &&
      local_18 == *(int *)(PTR_DAT_04bcaa48 + 0x10)) {
    FUN_0363cb50(param_3,param_4,param_1 + 0x30,local_14,0);
  }
  else if ((local_28 == DAT_0419709c && lStack_20 == DAT_041970a4) && local_18 == DAT_041970ac) {
    FUN_0363d110(param_3,param_4,param_1 + 0x30,local_14,0);
  }
  return;
}

