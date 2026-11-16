
uint FUN_027b0354(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,ushort *param_11,uint param_12,byte param_13
                 ,undefined8 *param_14)

{
  undefined1 *__s;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 auStack_638 [16];
  undefined1 *local_628;
  undefined1 *puStack_620;
  undefined1 *local_618;
  undefined1 auStack_5d0 [320];
  undefined1 auStack_490 [704];
  undefined1 auStack_1d0 [320];
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 auStack_78 [8];
  undefined2 local_70;
  
  memset(param_1,0,0x374);
  param_1[0xc3] = 0;
  puVar12 = (undefined2 *)(param_1 + 0xc0);
  *puVar12 = 0xfffe;
  FUN_0277d4ac(puVar12);
  __s = param_1 + 0xce;
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(__s,0,0x2a2);
  uVar7 = (param_12 ^ param_12 >> 0x1e) * 0x6c078965 + 1;
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  local_648 = 0;
  uStack_640 = 0;
  uVar3 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  FUN_01b89230(&local_648,param_5,param_7,param_11);
  uVar7 = uVar7 ^ uVar7 * 0x800;
  uVar4 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
  FUN_01b88620(auStack_78,&local_648,uVar4);
  memset(param_1,0,0x374);
  param_1[0xc3] = 0;
  *puVar12 = 0xfffe;
  FUN_0277d4ac(puVar12);
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(__s,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  param_1[0x5c] = 1;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  uVar6 = FUN_020fd7d8(param_2);
  param_1[6] = uVar6;
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  uVar6 = *(undefined1 *)(param_3 + 3);
  uVar11 = *param_3;
  param_1[0xb8] = 0;
  param_1[0x20] = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar11;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = *param_4;
  param_1[0x78] = *(undefined1 *)(param_4 + 3);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  uVar9 = *(undefined8 *)((long)param_4 + 0x2c);
  uVar10 = *(undefined8 *)((long)param_4 + 0x24);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)((long)param_4 + 0x1c);
  *(undefined8 *)(param_1 + 0x84) = uVar10;
  *(undefined8 *)(param_1 + 0x8c) = uVar9;
  uVar7 = *(uint *)((long)param_4 + 0x34);
  if (1 < uVar7) {
    uVar7 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar7;
  uVar2 = *param_11;
  uVar5 = param_11[1];
  bVar1 = *(byte *)((long)param_11 + 3);
  uVar8 = nn::time::IsValidDate((uint)uVar2,(uint)(byte)uVar5,(uint)bVar1);
  if ((uVar8 & 1) != 0) {
    *(ushort *)(param_1 + 0xbc) = uVar2;
    param_1[0xbe] = (byte)uVar5;
    param_1[0xbf] = bVar1;
  }
  param_1[0xcc] = 1;
  *(undefined2 *)(param_1 + 0x36e) = local_70;
  if ((param_13 & 1) != 0) {
    uVar3 = uVar3 ^ uVar3 * 0x800;
    FUN_01b8c800(&local_648,param_5,param_7,param_2,param_4,
                 uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4);
    *(undefined4 *)(param_1 + 0xc0) = (undefined4)local_648;
    *(undefined4 *)(param_1 + 0xc4) = local_648._4_4_;
  }
  FUN_01bdde78(&local_648);
  local_88 = param_1 + 0x12e;
  local_628 = auStack_5d0;
  local_80 = param_1 + 0x30e;
  local_618 = auStack_1d0;
  puStack_620 = auStack_490;
  local_90 = __s;
  if (param_14 != (undefined8 *)0x0) {
    (**(code **)*param_14)(param_14,auStack_638);
  }
  uVar7 = FUN_01bdc314(&local_648,param_5,param_6,param_7,param_8,param_9,param_10,param_2,param_4);
  return uVar7 & 1;
}

