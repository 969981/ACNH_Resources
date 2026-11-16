
uint FUN_026d2dec(ushort *param_1,undefined8 param_2,undefined4 param_3,ushort param_4,
                 ushort *param_5,undefined8 *param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined1 auStack_6a0 [56];
  undefined1 auStack_668 [56];
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [16];
  undefined8 local_610;
  undefined1 *puStack_608;
  undefined1 *local_600;
  undefined1 auStack_478 [704];
  undefined1 auStack_1b8 [320];
  undefined8 local_78;
  ushort *local_70;
  ushort *local_68;
  
  FUN_006d8678(auStack_668,"0%02d");
  FUN_006d8678(auStack_6a0,"1%02d",param_3);
  memset(param_1,0,0x77d0);
  param_1[0x3bc0] = 0;
  param_1[0x3bc1] = 0;
  param_1[0x3bc2] = 0;
  param_1[0x3bc3] = 0;
  *(undefined1 *)(param_1 + 0x3bca) = 2;
  param_1[0x3bc4] = 0;
  param_1[0x3bc5] = 0;
  param_1[0x3bc6] = 0;
  param_1[0x3bc7] = 0;
  param_1[0x3bc8] = 0;
  param_1[0x3bc9] = 0;
  param_1[0x3bcc] = 0;
  param_1[0x3bcd] = 0;
  param_1[0x3bce] = 0;
  param_1[0x3bcf] = 0;
  param_1[0x3bd0] = 0;
  param_1[0x3bd1] = 0;
  param_1[0x3bd2] = 0;
  param_1[0x3bd3] = 0;
  param_1[0x3bd4] = 0;
  param_1[0x3bd5] = 0;
  param_1[0x3bd6] = 0;
  param_1[0x3bd7] = 0;
  param_1[0x3bd8] = 0;
  param_1[0x3bd9] = 0;
  param_1[0x3bda] = 0xffff;
  puVar6 = param_1 + 0x3bdb;
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  param_1[0x3bdf] = 0;
  param_1[0x3be0] = 0;
  param_1[0x3be1] = 0;
  param_1[0x3be2] = 0;
  param_1[0x3be2] = 0;
  param_1[0x3be3] = 0;
  param_1[0x3be4] = 0;
  param_1[0x3be5] = 0;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  bVar1 = *(byte *)((long)param_5 + 3);
  uVar5 = nn::time::IsValidDate((uint)uVar2,(uint)(byte)uVar3,(uint)bVar1);
  if ((uVar5 & 1) != 0) {
    *param_1 = uVar2;
    *(byte *)(param_1 + 1) = (byte)uVar3;
    *(byte *)((long)param_1 + 3) = bVar1;
  }
  *puVar6 = param_4;
  FUN_01bdde78(auStack_630);
  if (param_6 != (undefined8 *)0x0) {
    (**(code **)*param_6)(param_6,auStack_620);
  }
  local_70 = param_1 + 2;
  puStack_608 = auStack_478;
  local_78 = 0;
  local_68 = param_1 + 0xf2;
  local_600 = auStack_1b8;
  local_610 = 0;
  uVar4 = FUN_01bdd994(auStack_630,param_2,auStack_668,auStack_6a0);
  return uVar4 & 1;
}

