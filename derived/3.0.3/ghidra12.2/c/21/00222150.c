
void FUN_00222150(uint *param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  
  memcpy(param_1,param_2,(ulong)param_3);
  if (param_3 < 0xb0) {
    uVar1 = param_3 >> 2;
    uVar5 = (ulong)param_1[(int)(uVar1 - 1)];
    uVar2 = (ulong)(param_3 >> 2);
    uVar3 = uVar1;
    if (uVar1 < 0x2c) {
      uVar3 = 0x2b;
    }
    uVar4 = (ulong)(((uVar3 + (param_3 >> 2)) - uVar1) + 1);
    puVar6 = param_1;
    uVar8 = uVar2;
    if (param_3 < 0x1c) {
      do {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uint)uVar8 / uVar1;
        }
        if ((uint)uVar8 == uVar3 * uVar1) {
          uVar5 = (ulong)(((uint)(byte)(&DAT_0410d449)[uVar5 >> 8 & 0xff] |
                           (uint)(byte)(&DAT_0410d449)[uVar5 & 0xff] << 0x18 |
                           (uint)(byte)(&DAT_0410d449)[uVar5 >> 0x10 & 0xff] << 8 |
                          (uint)(byte)(&DAT_0410d449)[uVar5 >> 0x18] << 0x10) ^
                         (uint)(byte)"N2nn3pia6common33MonitoringServerAddressResolveJobE"
                                     [(long)(int)uVar3 + 0x33]);
        }
        uVar8 = uVar8 + 1;
        uVar3 = *puVar6 ^ (uint)uVar5;
        uVar5 = (ulong)uVar3;
        puVar6[uVar2] = uVar3;
        puVar6 = puVar6 + 1;
      } while (uVar4 != uVar8);
    }
    else {
      do {
        uVar3 = 0;
        uVar7 = (uint)uVar8;
        if (uVar1 != 0) {
          uVar3 = uVar7 / uVar1;
        }
        if (uVar7 - uVar3 * uVar1 == 4) {
          uVar5 = (ulong)CONCAT13((&DAT_0410d449)[uVar5 >> 0x18],
                                  CONCAT12((&DAT_0410d449)[uVar5 >> 0x10 & 0xff],
                                           CONCAT11((&DAT_0410d449)[uVar5 >> 8 & 0xff],
                                                    (&DAT_0410d449)[uVar5 & 0xff])));
        }
        else if (uVar7 == uVar3 * uVar1) {
          uVar5 = (ulong)(((uint)(byte)(&DAT_0410d449)[uVar5 >> 8 & 0xff] |
                           (uint)(byte)(&DAT_0410d449)[uVar5 & 0xff] << 0x18 |
                           (uint)(byte)(&DAT_0410d449)[uVar5 >> 0x10 & 0xff] << 8 |
                          (uint)(byte)(&DAT_0410d449)[uVar5 >> 0x18] << 0x10) ^
                         (uint)(byte)"N2nn3pia6common33MonitoringServerAddressResolveJobE"
                                     [(long)(int)uVar3 + 0x33]);
        }
        uVar8 = uVar8 + 1;
        uVar3 = *puVar6 ^ (uint)uVar5;
        uVar5 = (ulong)uVar3;
        puVar6[uVar2] = uVar3;
        puVar6 = puVar6 + 1;
      } while (uVar4 != uVar8);
    }
  }
  if ((param_4 & 1) == 0) {
    FUN_00222380(param_1 + 4,param_1 + 4);
    FUN_00222380(param_1 + 8,param_1 + 8);
    FUN_00222380(param_1 + 0xc,param_1 + 0xc);
    FUN_00222380(param_1 + 0x10,param_1 + 0x10);
    FUN_00222380(param_1 + 0x14,param_1 + 0x14);
    FUN_00222380(param_1 + 0x18,param_1 + 0x18);
    FUN_00222380(param_1 + 0x1c,param_1 + 0x1c);
    FUN_00222380(param_1 + 0x20,param_1 + 0x20);
    FUN_00222380(param_1 + 0x24,param_1 + 0x24);
    return;
  }
  return;
}

