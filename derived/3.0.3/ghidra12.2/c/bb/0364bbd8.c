
uint FUN_0364bbd8(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (*(int *)(lVar7 + 0x298) == 5) {
    if (*(char *)(lVar7 + 0x1dad) != '\0') {
      uVar6 = *(uint *)(lVar7 + 0x1da4);
      uVar3 = *(uint *)(lVar7 + 0x1da8);
      iVar5 = uVar6 - uVar3;
      if (uVar6 < uVar3) {
        iVar5 = uVar6 + *(ushort *)(param_1 + 0x28) + ~uVar3;
      }
      iVar1 = 0x155;
      if (iVar5 != 0) {
        iVar1 = iVar5 * 0x155;
      }
      uVar6 = iVar1 - *(int *)(param_1 + 0x24);
      if (0x2fff < uVar6) {
        uVar6 = 0x3000;
      }
      goto LAB_0364bd58;
    }
  }
  else if (*(int *)(lVar7 + 0x298) == 4) {
    if ((*(uint *)(lVar7 + 0x1c90) & 0xfffffffd) == 0) {
      if (*(char *)(lVar7 + 0x1c8d) != '\0') goto LAB_0364bcbc;
      if (*(char *)(lVar7 + 0x1c8c) == '\0') {
        uVar6 = *(uint *)(lVar7 + 0x1c84);
        if (uVar6 == 0) {
          uVar6 = 0xffff;
          goto LAB_0364bd44;
        }
      }
      else {
        uVar6 = *(uint *)(lVar7 + 0x1c88);
        if (uVar6 == 0) goto LAB_0364bcbc;
      }
LAB_0364bcb0:
      uVar6 = uVar6 - 1;
      if (uVar6 < 2) goto LAB_0364bcbc;
LAB_0364bd44:
      uVar6 = uVar6 * 0x155 - 0x155;
    }
    else {
      if (*(char *)(lVar7 + 0x1c8c) == '\0') {
        uVar6 = *(uint *)(lVar7 + 0x1c84);
        if (1 < uVar6) goto LAB_0364bcb0;
      }
      else {
        uVar6 = *(uint *)(lVar7 + 0x1c88);
        if (uVar6 != 0) {
          if (uVar6 != 1) goto LAB_0364bcb0;
          uVar6 = 2;
          goto LAB_0364bd44;
        }
      }
LAB_0364bcbc:
      uVar3 = *(uint *)(param_1 + 0x24);
      if ((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) {
        uVar6 = *(uint *)(param_1 + 0x20);
        bVar4 = *(byte *)(param_1 + 0x39) >> 3 & 3;
        if (bVar4 == 2) {
          uVar2 = *(uint *)(param_1 + 0x14);
          if ((5 < uVar3) || (uVar2 != uVar6)) {
            uVar8 = 0x145;
            goto joined_r0x0364bd28;
          }
          uVar8 = 5;
          goto LAB_0364bcf8;
        }
        if (bVar4 == 1) {
          uVar2 = *(uint *)(param_1 + 0x14);
          uVar8 = 0x105;
joined_r0x0364bd28:
          if ((uVar2 == uVar6) || (uVar6 < *(uint *)(param_1 + 0x18))) goto LAB_0364bcf8;
        }
      }
      else {
        uVar8 = 0x105;
LAB_0364bcf8:
        uVar6 = uVar8 - uVar3;
        if (uVar3 <= uVar8) goto LAB_0364bd4c;
      }
      uVar6 = 0x155 - uVar3;
    }
LAB_0364bd4c:
    if (0x2fff < uVar6) {
      uVar6 = 0x3000;
    }
    goto LAB_0364bd58;
  }
  uVar6 = 0x3000;
LAB_0364bd58:
  uVar3 = *(int *)(param_1 + 0x10) * 0x155 + 1;
  iVar5 = *(int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x68) <= uVar3) {
    iVar5 = 0;
  }
  uVar3 = (uVar3 - *(uint *)(param_1 + 0x68)) + iVar5;
  if (uVar6 <= uVar3) {
    uVar3 = uVar6;
  }
  return uVar3;
}

