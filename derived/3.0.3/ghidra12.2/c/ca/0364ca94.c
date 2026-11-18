
void FUN_0364ca94(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  
  bVar5 = *(byte *)(param_1 + 2);
  bVar7 = bVar5 == 0;
  lVar2 = *param_1 + 0x2a8;
  lVar1 = lVar2 + (ulong)bVar5 * 0x40;
  uVar3 = *(int *)(lVar2 + (ulong)bVar5 * 0x10 + 0x410) - 1U &
          (uint)*(byte *)((long)param_1 + 0x11) << 0xb;
  FUN_03653cb0(lVar2,(ulong)bVar5 << 0xc,*(undefined8 *)(lVar1 + 0x18),0x800,uVar3,
               *(char *)(lVar1 + 0x10) == '\0');
  *(char *)((long)param_1 + 0x11) = (char)(uVar3 >> 0xb);
  uVar4 = (uint)bVar5 << 0xc | 0x800;
  lVar2 = *param_1 + 0x2a8;
  uVar6 = (ulong)(uVar4 >> 10);
  lVar1 = lVar2 + uVar6 * 0x10;
  uVar3 = *(int *)(lVar2 + uVar6 * 4 + 0x410) - 1U & (uint)*(byte *)((long)param_1 + 0x12) << 0xb;
  FUN_03653cb0(lVar2,uVar4,*(undefined8 *)(lVar1 + 0x18),0x800,uVar3,*(char *)(lVar1 + 0x10) == '\0'
              );
  *(char *)((long)param_1 + 0x12) = (char)(uVar3 >> 0xb);
  lVar2 = *param_1 + 0x2a8;
  lVar1 = lVar2 + (ulong)bVar7 * 0x40;
  uVar3 = *(int *)(lVar2 + (ulong)bVar7 * 0x10 + 0x410) - 1U &
          (uint)*(byte *)((long)param_1 + 0x13) << 10;
  FUN_03653cb0(lVar2,(ulong)bVar7 << 0xc,*(undefined8 *)(lVar1 + 0x18),0x400,uVar3,
               *(char *)(lVar1 + 0x10) == '\0');
  uVar8 = (uint)bVar7;
  uVar4 = uVar8 << 0xc | 0x400;
  *(char *)((long)param_1 + 0x13) = (char)(uVar3 >> 10);
  lVar2 = *param_1 + 0x2a8;
  uVar3 = uVar4 >> 10;
  lVar1 = lVar2 + (ulong)uVar3 * 0x10;
  uVar3 = *(int *)(lVar2 + (ulong)uVar3 * 4 + 0x410) - 1U &
          (uint)*(byte *)((long)param_1 + 0x14) << 10;
  FUN_03653cb0(lVar2,uVar4,*(undefined8 *)(lVar1 + 0x18),0x400,uVar3,*(char *)(lVar1 + 0x10) == '\0'
              );
  uVar4 = uVar8 << 0xc | 0x800;
  *(char *)((long)param_1 + 0x14) = (char)(uVar3 >> 10);
  lVar2 = *param_1 + 0x2a8;
  uVar3 = uVar4 >> 10;
  lVar1 = lVar2 + (ulong)uVar3 * 0x10;
  uVar3 = *(int *)(lVar2 + (ulong)uVar3 * 4 + 0x410) - 1U &
          (uint)*(byte *)((long)param_1 + 0x15) << 10;
  FUN_03653cb0(lVar2,uVar4,*(undefined8 *)(lVar1 + 0x18),0x400,uVar3,*(char *)(lVar1 + 0x10) == '\0'
              );
  *(char *)((long)param_1 + 0x15) = (char)(uVar3 >> 10);
  uVar4 = uVar8 << 0xc | 0xc00;
  lVar2 = *param_1 + 0x2a8;
  uVar6 = (ulong)(uVar4 >> 10);
  lVar1 = lVar2 + uVar6 * 0x10;
  uVar3 = *(int *)(lVar2 + uVar6 * 4 + 0x410) - 1U & (uint)*(byte *)((long)param_1 + 0x16) << 10;
  FUN_03653cb0(lVar2,uVar4,*(undefined8 *)(lVar1 + 0x18),0x400,uVar3,*(char *)(lVar1 + 0x10) == '\0'
              );
  *(char *)((long)param_1 + 0x16) = (char)(uVar3 >> 10);
  return;
}

