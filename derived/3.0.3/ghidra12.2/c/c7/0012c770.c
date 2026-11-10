
uint FUN_0012c770(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  byte *local_58;
  
  param_2 = param_2 + (param_3 & 0xffff) * 0x20;
  puVar8 = (uint *)(param_2 + 0x10);
  if (1 < *puVar8 + 1) {
    uVar10 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x38);
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    iVar5 = FUN_0010dbc0(*(long *)(param_1 + 8),3,uVar10 + *puVar8 * 4 + -4,4,&local_58);
    if (iVar5 < 0) {
      return 0xffffd8f0;
    }
    uVar9 = *(uint *)(param_2 + 0x14);
    if (uVar9 <= *(uint *)(param_2 + 0x18)) {
      uVar1 = *local_58 & 0x7f;
      iVar5 = uVar10 + uVar9 * 4 + -4;
      uVar10 = 0;
      uVar7 = 0xffffd8f0;
      do {
        iVar6 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,iVar5,4,&local_58);
        if (iVar6 < 0) {
          return 0xffffd8f0;
        }
        uVar2 = *local_58 & 0x7f;
        if ((uVar2 == uVar1) && (*puVar8 < uVar9)) {
          *puVar8 = uVar9;
          return uVar2;
        }
        uVar3 = uVar2;
        if (uVar1 <= uVar2 || (int)uVar2 <= (int)uVar7) {
          uVar3 = uVar7;
        }
        uVar4 = uVar9;
        if (uVar1 <= uVar2 || (int)uVar2 <= (int)uVar7) {
          uVar4 = uVar10;
        }
        uVar9 = uVar9 + 1;
        iVar5 = iVar5 + 4;
        uVar10 = uVar4;
        uVar7 = uVar3;
      } while (uVar9 <= *(uint *)(param_2 + 0x18));
      if (uVar3 != 0xffffd8f0) {
        *puVar8 = uVar4;
        return uVar3;
      }
    }
  }
  *puVar8 = 0xffffffff;
  return 0xffffd8f0;
}

