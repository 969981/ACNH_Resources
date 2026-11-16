
void FUN_027db620(uint *param_1,uint *param_2,ulong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  
  uVar8 = *param_3;
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
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  }
  uVar3 = *param_3;
  if (uVar3 != 0) {
    uVar6 = (uint)(uVar8 >> 0x20);
    uVar2 = (int)uVar8 - ((uint)(uVar8 >> 1) & 0x55555555);
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar6 = uVar6 + (uVar6 >> 8);
    iVar4 = (int)((ulong)uVar1 *
                  (ulong)((uVar6 + (uVar6 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f)) >>
                 0x20) + 2;
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 2) {
        uVar8 = uVar3 - 1 & (uVar3 ^ 0xffffffffffffffff);
        uVar1 = (uint)uVar8;
        uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar2 = (uint)(uVar8 >> 0x20);
        uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
        uVar1 = uVar1 + (uVar1 >> 8);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar1 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar1 + (uVar1 >> 0x10) & 0x3f);
        *param_1 = uVar1;
        puVar7 = param_4 + uVar1;
        if (0x22 < uVar1) {
          puVar7 = param_4;
        }
        goto LAB_027db808;
      }
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  *param_1 = 0xffffffff;
  puVar7 = param_4;
LAB_027db808:
  uVar2 = *puVar7;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) & 0x3f;
  if (DAT_05594b4c == '\x01') {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    uVar5 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
    uVar6 = (uint)((ulong)uVar5 * (ulong)uVar1 >> 0x20);
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5;
  }
  else {
    uVar2 = nn::os::GetSystemTick();
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar6 = uVar2 ^ uVar2 * 0x800;
    uVar5 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = *puVar7;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
    uVar6 = (uint)((ulong)(uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5) * (ulong)uVar1 >> 0x20);
    uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    uVar1 = uVar1 + (uVar1 >> 0x10) & 0x3f;
  }
  uVar5 = 0xffffffff;
  if ((uVar2 != 0) && (uVar5 = 0xffffffff, uVar6 < uVar1)) {
    iVar4 = uVar6 + 2;
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 2) {
        uVar1 = uVar2 - 1 & (uVar2 ^ 0xffffffff);
        uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
        uVar1 = uVar1 + (uVar1 >> 8);
        uVar5 = uVar1 + (uVar1 >> 0x10) & 0x3f;
        break;
      }
      uVar2 = uVar2 - 1 & uVar2;
    } while (uVar2 != 0);
  }
  *param_2 = uVar5;
  return;
}

