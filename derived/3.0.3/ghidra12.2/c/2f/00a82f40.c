
int FUN_00a82f40(uint param_1,byte param_2,uint param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 2) {
    iVar5 = 0;
    goto LAB_00a82fc0;
  }
  bVar4 = (param_1 & 0xf) != 0;
  bVar3 = (param_1 * 0x170a4000 & 0xffff | param_1 * 0x5c29 >> 2 & 0x3fff) < 0x290;
  if ((param_1 & 3) != 0) {
    if ((param_4 & 1) != 0) {
      iVar5 = 0;
      uVar6 = 1;
      do {
        uVar2 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        iVar5 = iVar5 + (uint)(byte)(&DAT_0416812f)[uVar2];
      } while (uVar1 != uVar6);
      goto LAB_00a82fc0;
    }
    if (param_2 == 2) goto LAB_00a83158;
    if (param_2 != 3) {
      iVar5 = 0x3b;
      uVar6 = 3;
      do {
        uVar2 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        iVar5 = iVar5 + (uint)(byte)(&DAT_0416812f)[uVar2];
      } while (uVar1 != uVar6);
      goto LAB_00a82fc0;
    }
    goto LAB_00a8305c;
  }
  if ((param_4 & 1) != 0) {
    if (bVar4 && bVar3) {
      iVar5 = 0;
      uVar6 = 1;
      do {
        uVar2 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        iVar5 = iVar5 + (uint)(byte)(&DAT_0416812f)[uVar2];
      } while (uVar1 != uVar6);
    }
    else {
      iVar5 = 0;
      uVar6 = 1;
      do {
        uVar2 = uVar6 & 0xff;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        uVar7 = 0x1d;
        if (uVar2 != 2) {
          uVar7 = (uint)(byte)(&DAT_0416812f)[uVar2];
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + uVar7;
      } while (uVar1 != uVar6);
    }
    goto LAB_00a82fc0;
  }
  if (bVar4 && bVar3) {
    if (param_2 == 2) goto LAB_00a83158;
    if (param_2 != 3) {
      iVar5 = 0x3b;
      uVar6 = 3;
      do {
        uVar2 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        iVar5 = iVar5 + (uint)(byte)(&DAT_0416812f)[uVar2];
      } while (uVar1 != uVar6);
      goto LAB_00a82fc0;
    }
  }
  else {
    if (param_2 == 2) {
LAB_00a83158:
      iVar5 = 0x1f;
      goto LAB_00a82fc0;
    }
    if (param_2 != 3) {
      iVar5 = 0x3b;
      uVar6 = 3;
      do {
        uVar2 = uVar6 & 0xff;
        if (uVar2 - 0xd < 0xfffffff4) {
          uVar2 = 1;
        }
        uVar7 = 0x1d;
        if (uVar2 != 2) {
          uVar7 = (uint)(byte)(&DAT_0416812f)[uVar2];
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + uVar7;
      } while (uVar1 != uVar6);
      goto LAB_00a82fc0;
    }
  }
LAB_00a8305c:
  iVar5 = 0x3b;
LAB_00a82fc0:
  uVar6 = 0x1c;
  if (((param_3 & 0xff) == 0x1d & uVar1 == 2 & (param_4 ^ 1)) == 0) {
    uVar6 = param_3 & 0xff;
  }
  return iVar5 + uVar6;
}

