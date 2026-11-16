
void FUN_02776a9c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  uVar4 = nn::os::GetSystemTick();
  *(undefined4 *)((long)param_1 + 0x1e) = 0;
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(short *)(param_1 + 1) = (short)(uVar4 >> 0x10);
  uVar5 = (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0x1b;
  *(undefined2 *)(param_1 + 2) = 0x4c7b;
  *(undefined2 *)((long)param_1 + 0xe) = 0x4c7b;
  *(undefined2 *)(param_1 + 5) = 0x4c7b;
  *(undefined2 *)(param_1 + 9) = 0x4c7b;
  *(char *)((long)param_1 + 6) = (char)(uVar5 >> 0x20);
  lVar6 = (ulong)((uVar4 >> 0x10) + 0x7f1cd4ef) << (uVar5 >> 0x20) + 3;
  *(undefined4 *)((long)param_1 + 10) = 0x101;
  param_1[4] = 0x101;
  iVar1 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *param_1 = iVar1;
  *(undefined8 *)((long)param_1 + 0x16) = 0x1014c7b00000101;
  *(char *)((long)param_1 + 7) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  param_1[10] = 0x4c7b4c7b;
  param_1[0xb] = 0x4c7b4c7b;
  param_1[0xc] = 0x4c7b4c7b;
  param_1[0xd] = 0x4c7b4c7b;
  memset(param_1 + 0xe,0,0x754);
  *(undefined2 *)(param_1 + 0x1e3) = 0x23;
  *(undefined1 *)((long)param_1 + 0x78e) = 8;
  return;
}

