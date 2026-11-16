
uint FUN_027e81c0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar1 = FUN_026644b0(0);
  uVar2 = FUN_026644b0(1);
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar2 = FUN_026644b0(2);
  uVar4 = 4;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = FUN_026644b0(3);
  uVar5 = 8;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  uVar2 = FUN_026644b0(4);
  uVar6 = 0x10;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  uVar2 = FUN_026644b0(5);
  uVar7 = 0x20;
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
  }
  uVar2 = FUN_026644b0(6);
  uVar8 = 0x40;
  if ((uVar2 & 1) == 0) {
    uVar8 = 0;
  }
  uVar2 = FUN_026644b0(7);
  uVar9 = 0x80;
  if ((uVar2 & 1) == 0) {
    uVar9 = 0;
  }
  uVar2 = FUN_026644b0(8);
  uVar10 = 0x100;
  if ((uVar2 & 1) == 0) {
    uVar10 = 0;
  }
  uVar1 = uVar3 | uVar1 & 1 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
  uVar2 = FUN_026644b0(9);
  uVar3 = 0x200;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar1 | uVar3;
  uVar3 = uVar4 - ((uVar1 & 0xaaaaaaaa | uVar3) >> 1);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  if (uVar3 != 0) {
    if (DAT_05594b4c == '\x01') {
      uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar1;
    }
    else {
      uVar1 = nn::os::GetSystemTick();
      uVar5 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
      uVar1 = uVar5 ^ uVar5 * 0x800;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
      uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
    }
    uVar1 = (uint)((ulong)uVar1 * (ulong)uVar3 >> 0x20);
    if ((uVar1 < uVar3) && (uVar4 != 0)) {
      iVar11 = uVar1 + 2;
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 < 2) {
          uVar3 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
          uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          return uVar3 + (uVar3 >> 0x10) & 0x3f;
        }
        uVar4 = uVar4 - 1 & uVar4;
      } while (uVar4 != 0);
    }
  }
  return 0xffffffff;
}

