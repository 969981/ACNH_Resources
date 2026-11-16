
void FUN_027ae180(undefined8 *param_1,uint *param_2,undefined8 *param_3,undefined2 *param_4,
                 ushort *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xfffe;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)param_1 = 1;
  uVar1 = *param_2;
  *(undefined1 *)((long)param_1 + 0x5c) = 2;
  if (((DAT_04f292d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04f292d0), iVar6 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (*(uint *)PTR_DAT_04bb8aa0 <= uVar1) {
    uVar1 = 0;
  }
  uVar2 = *(undefined4 *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + (long)(int)uVar1 * 4);
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(char *)((long)param_1 + 4) = (char)uVar2;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar10 = *param_3;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 3);
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar9;
  param_1[0xc] = uVar10;
  uVar8 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar9 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x84) = uVar9;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar8;
  uVar1 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x94) = uVar1;
  *(undefined2 *)(param_1 + 0x18) = *param_4;
  *(undefined1 *)((long)param_1 + 0xc2) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)((long)param_1 + 0xc3) = *(undefined1 *)((long)param_4 + 3);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_4 + 2);
  uVar4 = *param_5;
  uVar5 = param_5[1];
  bVar3 = *(byte *)((long)param_5 + 3);
  uVar7 = nn::time::IsValidDate((uint)uVar4,(uint)(byte)uVar5,(uint)bVar3);
  if ((uVar7 & 1) != 0) {
    *(ushort *)((long)param_1 + 0xbc) = uVar4;
    *(byte *)((long)param_1 + 0xbe) = (byte)uVar5;
    *(byte *)((long)param_1 + 0xbf) = bVar3;
  }
  return;
}

