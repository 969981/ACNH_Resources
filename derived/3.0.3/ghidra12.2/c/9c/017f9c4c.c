
void FUN_017f9c4c(long param_1,undefined4 param_2,short param_3,byte param_4)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_68;
  short local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  long local_58;
  
  uVar4 = FUN_0277dedc(param_1 + 0xd0);
  puVar1 = PTR_DAT_04bb43c0;
  sVar2 = -1;
  if (((uVar4 & 1) == 0) && (local_60 = *(short *)(param_1 + 0xd0), local_60 != -2)) {
    local_58 = 0;
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_5e = *(undefined2 *)(param_1 + 0xd2);
    local_5c = *(undefined4 *)(param_1 + 0xd4);
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0xd0);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
          local_58 = lVar5;
        }
      }
    }
    sVar2 = FUN_01b01f10(&local_68);
  }
  if (sVar2 == param_3) {
    if (*(int *)(param_1 + 0x14c) == 0) {
LAB_017f9d7c:
      *(undefined4 *)(param_1 + 0x158) = param_2;
      *(byte *)(param_1 + 0x160) = param_4 & 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x14c) != 0) goto LAB_017f9d7c;
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  *(byte *)(param_1 + 0x161) = param_4 & 1;
  return;
}

