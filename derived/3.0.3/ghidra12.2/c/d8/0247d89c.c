
/* WARNING: Removing unreachable block (ram,0x0247d9cc) */

void FUN_0247d89c(byte *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == DAT_04c487d4) {
    *(undefined4 *)(lVar1 + 0xc) = 3;
    FUN_01393458(lVar1 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = 4;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  sVar5 = *(short *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x26);
  bVar4 = *param_1;
  if (bVar4 < 8) {
    FUN_02582d8c(param_1,1);
  }
  puVar7 = (undefined4 *)FUN_0251b3b0(param_1,1);
  if (puVar7 == (undefined4 *)0x0) {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = *puVar7;
    uVar10 = puVar7[1];
    uVar12 = puVar7[2];
  }
  uVar8 = (uint)bVar4;
  bVar6 = 7 < uVar8;
  if (bVar6) {
    uVar8 = 0xff;
  }
  puVar9 = &DAT_0548ed14 + (ulong)uVar8 * 0x8c;
  if (bVar6) {
    puVar9 = &DAT_0548f0e8;
  }
  *(undefined4 *)(puVar9 + 8) = uVar10;
  *puVar9 = 1;
  *(undefined4 *)(puVar9 + 4) = uVar11;
  *(undefined4 *)(puVar9 + 0xc) = uVar12;
  *(float *)(puVar9 + 0x14) = (float)(int)sVar5 * 0.25;
  *(float *)(puVar9 + 0x10) = (float)iVar2 * 0.001;
  *(float *)(puVar9 + 0x18) = (float)iVar3 * 0.001;
  return;
}

