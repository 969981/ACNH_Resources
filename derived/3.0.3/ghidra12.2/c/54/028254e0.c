
uint FUN_028254e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x48);
  uVar4 = (uint)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar2 = (uVar3 | 0x80) - ((uVar3 & 0xaaaaaaaa | 0x80) >> 1);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  if ((uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) < 0xc) {
    uVar6 = (ulong)~uVar3 & 0xf7f;
    uVar2 = nn::os::GetSystemTick();
    if ((~uVar3 & 0xf7f) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
      uVar2 = 0xffffffff;
      uVar3 = uVar4 ^ uVar4 * 0x800;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
      uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
      uVar4 = (uint)uVar6 - ((uint)uVar6 >> 1 & 0x515);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      iVar5 = (int)((ulong)(uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1) *
                    (ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f) >> 0x20) + 2;
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 < 2) {
          uVar6 = uVar6 - 1 & (uVar6 ^ 0xffffffffffffffff);
          uVar2 = (uint)uVar6;
          uVar4 = (uint)(uVar6 >> 0x20);
          uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          uVar4 = uVar4 + (uVar4 >> 8);
          return (uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f);
        }
        uVar6 = uVar6 - 1 & uVar6;
      } while (uVar6 != 0);
    }
  }
  else {
    uVar2 = nn::os::GetSystemTick();
    uVar4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar2 = (uint)((ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0xb >> 0x20);
    if (uVar2 == 0) {
      uVar4 = 0xf7f;
    }
    else if (uVar2 == 1) {
      uVar4 = 0xf7e;
    }
    else if (uVar2 < 3) {
      uVar4 = 0xf7c;
    }
    else if (uVar2 == 3) {
      uVar4 = 0xf78;
    }
    else if (uVar2 < 5) {
      uVar4 = 0xf70;
    }
    else if (uVar2 == 5) {
      uVar4 = 0xf60;
    }
    else if (uVar2 < 7) {
      uVar4 = 0xf40;
    }
    else if (uVar2 == 7) {
      uVar4 = 0xf00;
    }
    else if (uVar2 < 9) {
      uVar4 = 0xe00;
    }
    else {
      uVar4 = 0xc00;
      if (uVar2 != 9) {
        uVar4 = 0x800;
      }
    }
    uVar2 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = uVar2 + (uVar2 >> 0x10) & 0x3f;
  }
  return uVar2;
}

