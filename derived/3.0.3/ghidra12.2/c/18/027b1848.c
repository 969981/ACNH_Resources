
void FUN_027b1848(undefined1 *param_1,uint *param_2,undefined8 *param_3,undefined2 param_4,
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
  
  memset(param_1,0,0x374);
  param_1[0xc3] = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
  FUN_0277d4ac();
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(param_1 + 0xce,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  uVar1 = *param_2;
  param_1[0x5c] = 2;
  if (((DAT_04f292d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04f292d0), iVar6 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (*(uint *)PTR_DAT_04bb8aa0 <= uVar1) {
    uVar1 = 0;
  }
  uVar2 = *(undefined4 *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + (long)(int)uVar1 * 4);
  param_1[0xb8] = 0;
  param_1[4] = (char)uVar2;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar10 = *param_3;
  param_1[0x78] = *(undefined1 *)(param_3 + 3);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  uVar8 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar9 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)(param_1 + 0x84) = uVar9;
  *(undefined8 *)(param_1 + 0x7c) = uVar8;
  uVar1 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar4 = *param_5;
  uVar5 = param_5[1];
  bVar3 = *(byte *)((long)param_5 + 3);
  uVar7 = nn::time::IsValidDate((uint)uVar4,(uint)(byte)uVar5,(uint)bVar3);
  if ((uVar7 & 1) != 0) {
    *(ushort *)(param_1 + 0xbc) = uVar4;
    param_1[0xbe] = (byte)uVar5;
    param_1[0xbf] = bVar3;
  }
  *(undefined2 *)(param_1 + 0x36e) = param_4;
  param_1[0xcc] = 1;
  return;
}

