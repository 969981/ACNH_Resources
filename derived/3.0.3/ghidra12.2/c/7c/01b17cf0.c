
void FUN_01b17cf0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != (uint *)0x0) {
    iVar4 = 0;
    uVar5 = 0x13;
    do {
      iVar6 = 400;
      do {
        uVar2 = (iVar4 + iVar6) - 5;
        uVar3 = (iVar4 + iVar6) - 1;
        uVar7 = 1 << (ulong)(uVar3 & 0x1f);
        uVar3 = uVar3 >> 5;
        if ((param_1[uVar2 >> 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
          uVar7 = param_1[uVar3] & (uVar7 ^ 0xffffffff);
        }
        else {
          uVar7 = param_1[uVar3] | uVar7;
        }
        iVar6 = iVar6 + -0x14;
        param_1[uVar3] = uVar7;
      } while (iVar6 != 0);
      iVar4 = iVar4 + -1;
      bVar1 = 4 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
    *param_1 = *param_1 & 0xff0ffff0;
    param_1[1] = param_1[1] & 0xffff0ff;
    param_1[2] = param_1[2] & 0xfff0ffff;
    param_1[3] = param_1[3] & 0xf0ffff0f;
    param_1[4] = param_1[4] & 0xffff0fff;
    param_1[5] = param_1[5] & 0xff0ffff0;
    param_1[6] = param_1[6] & 0xffff0ff;
    param_1[7] = param_1[7] & 0xfff0ffff;
    param_1[8] = param_1[8] & 0xf0ffff0f;
    param_1[9] = param_1[9] & 0xffff0fff;
    param_1[10] = param_1[10] & 0xff0ffff0;
    param_1[0xb] = param_1[0xb] & 0xffff0ff;
  }
  return;
}

