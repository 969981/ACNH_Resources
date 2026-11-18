
void FUN_0365c644(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  iVar3 = *(int *)(param_1 + 0x218c);
  if (iVar3 != 0) {
    uVar5 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar3);
    uVar5 = FUN_0365c1e0(uVar5,param_1 + 0x2098,iVar3);
    uVar5 = FUN_0365c320(uVar5,param_1 + 0x20e4,iVar3);
    FUN_0365c470(uVar5,param_1 + 0x2114,iVar3);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar3;
  }
  *(undefined1 *)(param_1 + 0x2056) = 0;
  *(undefined4 *)(param_1 + 0x204c) = 0;
  *(undefined1 *)(param_1 + 0x20a2) = 0;
  *(undefined4 *)(param_1 + 0x2098) = 0;
  *(undefined1 *)(param_1 + 0x20ee) = 0;
  *(undefined4 *)(param_1 + 0x20e4) = 0;
  *(undefined1 *)(param_1 + 0x211e) = 0;
  *(undefined4 *)(param_1 + 0x2114) = 0;
  *(undefined1 *)(param_1 + 0x2185) = 0;
  *(undefined4 *)(param_1 + 0x215c) = 0;
  **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xffffffef;
  FUN_0365bcec(param_1,*(undefined1 *)(param_1 + 0x21a4));
  *(undefined1 *)(param_1 + 0x2049) = 0;
  *(undefined1 *)(param_1 + 0x2185) = 0;
  *(undefined4 *)(param_1 + 0x21a8) = 0xffffffff;
  **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xffffffef;
  **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xfffffff7;
  if (*(uint *)(param_1 + 0x2198) < 0x1801) {
    *(undefined4 *)(param_1 + 0x2198) = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2198) - 0x1800;
    uVar6 = *(uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x21a0) * 4 + 0x2190);
    *(uint *)(param_1 + 0x2198) = uVar1;
    if (uVar6 < uVar1) {
      if (*(uint *)(param_1 + 0x21a0) != 2) {
        return;
      }
      uVar6 = *(uint *)(param_1 + 0x2190);
      uVar4 = *(uint *)(param_1 + 0x2194);
      uVar2 = uVar6;
      if (uVar4 <= uVar6) {
        uVar2 = uVar4;
      }
      uVar6 = (uint)(uVar4 <= uVar6);
      if (uVar1 <= uVar2) {
        uVar6 = 2;
      }
      goto LAB_0365c790;
    }
  }
  uVar6 = 2;
LAB_0365c790:
  *(uint *)(param_1 + 0x21a0) = uVar6;
  return;
}

