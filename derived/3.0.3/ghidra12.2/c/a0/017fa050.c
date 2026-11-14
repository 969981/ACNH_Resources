
uint FUN_017fa050(long param_1,short param_2)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined *local_58;
  short local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  uVar5 = FUN_0277dedc(param_1 + 0xf4);
  puVar2 = PTR_DAT_04bb43c0;
  sVar3 = -1;
  if (((uVar5 & 1) == 0) && (local_50 = *(short *)(param_1 + 0xf4), local_50 != -2)) {
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_4e = *(undefined2 *)(param_1 + 0xf6);
    local_4c = *(undefined4 *)(param_1 + 0xf8);
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1 + 0xf4);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
          local_48 = lVar7;
        }
      }
    }
    sVar3 = FUN_01b01f10(&local_58);
  }
  if (sVar3 == param_2) {
    if (*(int *)(param_1 + 0x164) != 0) {
LAB_017fa164:
      uVar4 = *(uint *)(param_1 + 0x16c);
      if (*(char *)(param_1 + 0x179) == '\0') {
        return uVar4;
      }
      uVar6 = *(uint *)(param_1 + 0x174);
      goto LAB_017fa18c;
    }
  }
  else if (*(int *)(param_1 + 0x164) == 0) goto LAB_017fa164;
  uVar4 = *(uint *)(param_1 + 0x168);
  if (*(char *)(param_1 + 0x178) == '\0') {
    return uVar4;
  }
  uVar6 = *(uint *)(param_1 + 0x170);
LAB_017fa18c:
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar4 / uVar6;
  }
  return uVar4 - uVar1 * uVar6;
}

