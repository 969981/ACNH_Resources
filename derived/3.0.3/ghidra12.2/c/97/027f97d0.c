
void FUN_027f97d0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
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
  FUN_012ca808();
  FUN_027f9454(param_1);
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  FUN_027f9454(param_1);
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xa4) = 0xffffffffffffffff;
  puVar7 = param_1 + 0x17;
  *puVar7 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x2a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_012ca808(puVar7);
  FUN_02806a0c(puVar7);
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  FUN_02806a0c(puVar7);
  *(undefined4 *)((long)param_1 + 0x16c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x164) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x15c) = 0xffffffffffffffff;
  param_1[0x2e] = 0;
  uVar4 = nn::os::GetSystemTick();
  *(undefined1 *)(param_1 + 0x2f) = 0;
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(short *)((long)param_1 + 0x174) = (short)(uVar4 >> 0x10);
  uVar5 = (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0x1b;
  *(char *)((long)param_1 + 0x176) = (char)(uVar5 >> 0x20);
  lVar6 = (ulong)((uVar4 >> 0x10) + 0x7f1cd4ef) << (uVar5 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *(int *)(param_1 + 0x2e) = iVar1;
  *(char *)((long)param_1 + 0x177) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  return;
}

