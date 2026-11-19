
uint FUN_0396f9a0(long param_1,long param_2,long *param_3,undefined8 param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar12 == 0) {
    iVar11 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar11 = (int)lVar12 + -1;
  }
  puVar1 = (uint *)(param_1 + 0x80);
  do {
    uVar8 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar8 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar12 = (long)(int)uVar8;
  lVar15 = param_1 + (long)iVar11 * 0x28;
  if (*(uint *)(param_1 + 0x100) <= uVar8) {
    lVar12 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x108) + lVar12 * 0x398;
  iVar2 = *(int *)(lVar15 + 0x98);
  uVar18 = (uint)*(byte *)(param_1 + 0x111);
  if (*(uint *)(lVar15 + 0x88) <= (uint)*(byte *)(param_1 + 0x111)) {
    uVar18 = 0;
  }
  piVar17 = (int *)(*(long *)(lVar15 + 0x90) + (ulong)uVar18 * 0x18);
  uVar18 = *(int *)(lVar15 + 0x9c) - iVar2;
  if (0x1ffffff < uVar18) {
    uVar18 = 0x2000000;
  }
  uVar3 = *(uint *)(lVar15 + 0xa8);
  iVar5 = *(int *)(lVar15 + 0xac);
  lVar16 = *(long *)(lVar15 + 0xa0);
  iVar4 = *piVar17;
  iVar6 = piVar17[1];
  lVar7 = *(long *)(piVar17 + 2);
  uVar13 = *(undefined8 *)(piVar17 + 4);
  *(undefined4 *)(lVar12 + 0x24c) = 0;
  bVar10 = lVar16 != 0;
  *(int *)(lVar12 + 8) = iVar4 + iVar2;
  *(int *)(lVar12 + 0xc) = iVar6;
  *(long *)(lVar12 + 0x10) = lVar7;
  *(undefined8 *)(lVar12 + 0x18) = uVar13;
  lVar15 = lVar12 + 0x40;
  if (bVar10) {
    lVar15 = lVar16 + (ulong)uVar3;
  }
  iVar2 = 0x200;
  if (bVar10) {
    iVar2 = iVar5 - uVar3;
  }
  *(long *)(lVar12 + 0x38) = lVar15;
  uVar3 = 0;
  if (lVar7 != 0) {
    uVar3 = uVar18;
  }
  *(int *)(lVar12 + 0x248) = iVar2;
  *(byte *)(lVar12 + 600) = *(byte *)(lVar12 + 600) & 0xf4 | bVar10 << 3;
  *(uint *)(lVar12 + 0x20) = uVar3;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar15 = param_3[1];
  *(char *)(lVar12 + 0x278) = (char)iVar11;
  *(undefined4 *)(lVar12 + 0x25c) = param_5;
  *(undefined8 *)(lVar12 + 0x260) = 0;
  *(long *)(lVar12 + 0x28) = lVar15;
  uVar13 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar12 + 0x268) = uVar13;
  if (*(long *)(param_2 + 0xe8) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0xe8) + 0x30) = 0;
  }
  *(long *)(param_2 + 0xe8) = lVar12;
  *(long *)(lVar12 + 0x30) = param_2;
  *(byte *)(lVar12 + 600) = *(byte *)(lVar12 + 600) & 0xef | (*(byte *)(param_1 + 0x112) & 4) << 2;
  uVar14 = FUN_038fe8f0(lVar12);
  if ((uVar14 & 1) == 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}

