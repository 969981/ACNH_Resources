
void FUN_028fad24(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  *(undefined2 *)(param_1 + 0x308) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x30a) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x30b) = *(undefined1 *)((long)param_2 + 3);
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x30c) = param_2[1];
  puVar4 = PTR_DAT_04bb43c0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0277d6c4(param_2);
    }
  }
  uVar5 = nn::os::GetSystemTick();
  uVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar2 ^ uVar2 * 0x800;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
  *(short *)(param_1 + 0x304) = (short)(uVar5 >> 0x10);
  uVar6 = (ulong)(uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5) * 0x1b;
  *(char *)(param_1 + 0x306) = (char)(uVar6 >> 0x20);
  lVar7 = (ulong)(param_3 + 0x7f1cd4ef + (uVar5 >> 0x10)) << (uVar6 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar7 >> 0x20) + (int)lVar7;
  *(int *)(param_1 + 0x300) = iVar1;
  *(char *)(param_1 + 0x307) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  return;
}

