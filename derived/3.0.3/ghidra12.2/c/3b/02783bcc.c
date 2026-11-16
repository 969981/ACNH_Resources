
void FUN_02783bcc(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_027db980(param_1 + 0x10);
  FUN_028da1e0(param_1 + 0x1e35f0,1);
  FUN_0273e2a0(&LAB_0022ebf0 + param_1);
  FUN_0273bad0(param_1 + 0x33caf0);
  *(undefined1 *)(param_1 + 0x3654f5) = 0x1e;
  *(undefined8 *)(param_1 + 0x3654ed) = 0;
  *(undefined8 *)(param_1 + 0x3654e8) = 0;
  FUN_0273bad0(param_1 + 0x365518);
  *(undefined1 *)(param_1 + 0x38df1d) = 0x1e;
  *(undefined8 *)(param_1 + 0x38df15) = 0;
  *(undefined8 *)(param_1 + 0x38df10) = 0;
  FUN_0273bad0(param_1 + 0x38df40);
  *(undefined1 *)(param_1 + 0x3b6945) = 0x1e;
  *(undefined8 *)(param_1 + 0x3b693d) = 0;
  *(undefined8 *)(param_1 + 0x3b6938) = 0;
  FUN_0273bad0(param_1 + 0x3b6968);
  *(undefined1 *)(param_1 + 0x3df36d) = 0x1e;
  *(undefined8 *)(param_1 + 0x3df365) = 0;
  *(undefined8 *)(param_1 + 0x3df360) = 0;
  FUN_0273bad0(param_1 + 0x3df390);
  *(undefined1 *)(param_1 + 0x407d95) = 0x1e;
  *(undefined8 *)(param_1 + 0x407d8d) = 0;
  *(undefined8 *)(param_1 + 0x407d88) = 0;
  FUN_0273bad0(param_1 + 0x407db8);
  *(undefined1 *)(param_1 + 0x4307bd) = 0x1e;
  *(undefined8 *)(param_1 + 0x4307b5) = 0;
  *(undefined8 *)(param_1 + 0x4307b0) = 0;
  FUN_0273bad0(_INIT_81 + param_1);
  *(undefined1 *)(param_1 + 0x4591e5) = 0x1e;
  *(undefined8 *)(param_1 + 0x4591dd) = 0;
  *(undefined8 *)(param_1 + 0x4591d8) = 0;
  FUN_0273bad0(param_1 + 0x459208);
  (&DAT_00481c0d)[param_1] = 0x1e;
  *(undefined8 *)(param_1 + 0x481c05) = 0;
  *(undefined8 *)(&LAB_00481c00 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x495084) = 0x404;
  *(undefined4 *)(param_1 + 0x495060) = 0x8a508a5;
  *(undefined8 *)(param_1 + 0x495064) = 0;
  *(undefined8 *)(param_1 + 0x49506c) = 0;
  *(undefined8 *)(param_1 + 0x495074) = 0;
  *(undefined8 *)(param_1 + 0x49507c) = 0;
  memset((void *)(param_1 + 0x494760),0,0x900);
  uVar4 = nn::os::GetSystemTick();
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(short *)(&LAB_005781d8 + param_1) = (short)(uVar4 >> 0x10);
  uVar5 = (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0x1b;
  *(char *)(param_1 + 0x5781da) = (char)(uVar5 >> 0x20);
  lVar6 = (ulong)((uVar4 >> 0x10) + 0x7f1cd4ef) << (uVar5 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *(int *)(&LAB_005781d4 + param_1) = iVar1;
  *(char *)(param_1 + 0x5781db) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  *(undefined2 *)(&LAB_005781dc + param_1) = DAT_05586008;
  *(undefined1 *)(param_1 + 0x5781de) = DAT_0558600a;
  *(undefined1 *)(param_1 + 0x5781df) = DAT_0558600b;
  *(undefined4 *)(&LAB_005781e0 + param_1) = DAT_0558600c;
  FUN_02741780(&LAB_00578490 + param_1);
  return;
}

