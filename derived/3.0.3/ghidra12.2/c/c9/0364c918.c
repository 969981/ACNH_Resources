
void FUN_0364c918(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0x12) = 0x6050401;
  *(undefined2 *)((long)param_1 + 0x16) = 7;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_0364ca94();
  lVar5 = *param_1;
  bVar4 = (char)param_1[1] != '\0';
  uVar6 = 0x8000;
  if (bVar4) {
    uVar6 = 0xc000;
  }
  uVar7 = 0xc000;
  if (bVar4) {
    uVar7 = 0x8000;
  }
  lVar1 = lVar5 + 0x2a8 + (ulong)(uVar6 >> 10) * 0x10;
  uVar2 = *(uint *)(lVar5 + 0x738) & 0xffffe000;
  uVar3 = *(int *)(lVar5 + (ulong)(uVar6 >> 10) * 4 + 0x6b8) - 1U &
          (uint)*(byte *)((long)param_1 + 0x17) << 0xd;
  FUN_03653cb0(lVar5 + 0x2a8,uVar6,*(undefined8 *)(lVar1 + 0x18),0x2000,uVar3,
               *(char *)(lVar1 + 0x10) == '\0');
  *(char *)((long)param_1 + 0x17) = (char)(uVar3 >> 0xd);
  lVar5 = *param_1;
  uVar6 = *(int *)(lVar5 + 0x758) - 1U & (uint)*(byte *)(param_1 + 3) << 0xd;
  FUN_03653cb0(lVar5 + 0x2a8,0xa000,*(undefined8 *)(lVar5 + 0x540),0x2000,uVar6,
               *(char *)(lVar5 + 0x538) == '\0');
  lVar1 = *param_1 + 0x2a8;
  lVar5 = lVar1 + (ulong)(uVar7 >> 10) * 0x10;
  *(char *)(param_1 + 3) = (char)(uVar6 >> 0xd);
  FUN_03653cb0(lVar1,uVar7,*(undefined8 *)(lVar5 + 0x18),0x2000,
               *(int *)(lVar1 + (ulong)(uVar7 >> 10) * 4 + 0x410) - 1U & uVar2 - 0x4000,
               *(char *)(lVar5 + 0x10) == '\0');
  lVar5 = *param_1;
  FUN_03653cb0(lVar5 + 0x2a8,0xe000,*(undefined8 *)(lVar5 + 0x640),0x2000,
               *(int *)(lVar5 + 0x798) - 1U & uVar2 - 0x2000,*(char *)(lVar5 + 0x638) == '\0');
  return;
}

