
uint FUN_009b55cc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char local_c [4];
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  byte local_5;
  undefined1 local_4;
  
  if (3 < param_2) {
    return 0xffffffff;
  }
  if ((param_2 != 0) ||
     (param_2 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30), param_2 != 0xffffffff)) {
    uVar9 = (ulong)param_2;
    if (8 < param_2) {
      uVar9 = 0;
    }
    uVar1 = *(uint *)(**(long **)PTR_DAT_04bb48f8 + 0x7c);
    uVar8 = uVar1 >> 1 & 1;
    uVar2 = uVar1 >> 2 & 1;
    uVar3 = uVar1 >> 3 & 1;
    uVar4 = uVar1 >> 4 & 1;
    uVar5 = uVar1 >> 5 & 1;
    uVar6 = uVar1 >> 6 & 1;
    local_5 = (byte)(uVar1 >> 7) & 1;
    uVar7 = uVar1 >> 8 & 1;
    local_c[0] = (char)(uVar1 & 1);
    local_c[1] = (char)uVar8;
    local_c[2] = (char)uVar2;
    local_c[3] = (char)uVar3;
    local_8 = (char)uVar4;
    local_7 = (char)uVar5;
    local_6 = (char)uVar6;
    local_4 = (char)uVar7;
    if (local_c[uVar9] == '\0') {
      if (uVar7 != 0) {
        return 8;
      }
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      if (uVar8 != 0) {
        return 1;
      }
      if (uVar2 != 0) {
        return 2;
      }
      if (uVar3 != 0) {
        return 3;
      }
      if (uVar4 != 0) {
        return 4;
      }
      if (uVar5 != 0) {
        return 5;
      }
      uVar8 = 7;
      if ((uVar1 & 0x80) == 0) {
        uVar8 = 0xffffffff;
      }
      if (uVar6 != 0) {
        uVar8 = 6;
      }
      return uVar8;
    }
  }
  return param_2;
}

