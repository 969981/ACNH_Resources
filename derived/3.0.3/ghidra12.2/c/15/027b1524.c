
uint FUN_027b1524(undefined1 *param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,ushort *param_8,
                 uint param_9,byte param_10,undefined8 *param_11)

{
  undefined1 *__s;
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
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
  puVar14 = (undefined2 *)(param_1 + 0xc0);
  *puVar14 = 0xfffe;
  FUN_0277d4ac(puVar14);
  __s = param_1 + 0xce;
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(__s,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  uVar1 = *param_2;
  uVar8 = (param_9 ^ param_9 >> 0x1e) * 0x6c078965 + 1;
  local_648 = 0;
  uStack_640 = 0;
  uVar5 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  FUN_01b8a150(&local_648,param_4,param_6,param_8);
  uVar8 = uVar8 ^ uVar8 * 0x800;
  uVar8 = uVar8 >> 8 ^ uVar6 >> 0x13 ^ uVar8 ^ uVar6;
  FUN_01b88620(auStack_78,&local_648,uVar8);
  memset(param_1,0,0x374);
  param_1[0xc3] = 0;
  *puVar14 = 0xfffe;
  FUN_0277d4ac(puVar14);
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(__s,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  param_1[0x5c] = 2;
  local_648._0_4_ = uVar1;
  if (((DAT_04f292d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04f292d0), iVar9 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  uVar1 = (uint)local_648;
  if (*(uint *)PTR_DAT_04bb8aa0 <= (uint)local_648) {
    uVar1 = 0;
  }
  uVar2 = *(undefined4 *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + (long)(int)uVar1 * 4);
  param_1[0xb8] = 0;
  param_1[4] = (char)uVar2;
  uVar11 = param_3[1];
  uVar12 = param_3[2];
  uVar13 = *param_3;
  param_1[0x78] = *(undefined1 *)(param_3 + 3);
  *(undefined8 *)(param_1 + 0x68) = uVar11;
  *(undefined8 *)(param_1 + 0x70) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  uVar11 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar12 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)(param_1 + 0x84) = uVar12;
  *(undefined8 *)(param_1 + 0x7c) = uVar11;
  uVar1 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar4 = *param_8;
  uVar7 = param_8[1];
  bVar3 = *(byte *)((long)param_8 + 3);
  uVar10 = nn::time::IsValidDate((uint)uVar4,(uint)(byte)uVar7,(uint)bVar3);
  if ((uVar10 & 1) != 0) {
    *(ushort *)(param_1 + 0xbc) = uVar4;
    param_1[0xbe] = (byte)uVar7;
    param_1[0xbf] = bVar3;
  }
  *(undefined2 *)(param_1 + 0x36e) = local_70;
  param_1[0xcc] = 1;
  if ((param_10 & 1) != 0) {
    uVar5 = uVar5 ^ uVar5 * 0x800;
    FUN_01b8e020(&local_648,param_4,param_6,param_3,uVar5 >> 8 ^ uVar8 >> 0x13 ^ uVar5 ^ uVar8);
    *(uint *)(param_1 + 0xc0) = (uint)local_648;
    *(undefined4 *)(param_1 + 0xc4) = local_648._4_4_;
  }
  FUN_01bdde78(&local_648);
  local_88 = param_1 + 0x12e;
  local_628 = auStack_5d0;
  local_80 = param_1 + 0x30e;
  local_618 = auStack_1d0;
  puStack_620 = auStack_490;
  local_90 = __s;
  if (param_11 != (undefined8 *)0x0) {
    (**(code **)*param_11)(param_11,auStack_638);
  }
  uVar8 = FUN_01bdc41c(&local_648,param_4,param_5,param_6,param_7,param_3);
  return uVar8 & 1;
}

