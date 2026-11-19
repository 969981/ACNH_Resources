
void FUN_03a0fbe0(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  
  lVar2 = 200;
  if (*(char *)(param_1 + 200) != '\0' || param_2 != 1) {
    lVar2 = 0xd0;
  }
  puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04bb31c8 + lVar2);
  *(undefined4 *)(param_1 + 0x1e0) = *puVar9;
  *(undefined4 *)(param_1 + 0x1e4) = puVar9[1];
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(puVar9 + 2);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(puVar9 + 4);
  *(undefined4 *)(param_1 + 0x1f8) = puVar9[6];
  *(undefined4 *)(param_1 + 0x1fc) = puVar9[7];
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(puVar9 + 8);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(puVar9 + 10);
  uVar3 = *(undefined8 *)(puVar9 + 0xc);
  uVar4 = *(undefined8 *)(puVar9 + 0xe);
  uVar8 = *(undefined8 *)(puVar9 + 0x10);
  *(undefined8 *)(param_1 + 0x227) = *(undefined8 *)((long)puVar9 + 0x47);
  *(undefined8 *)(param_1 + 0x220) = uVar8;
  *(undefined8 *)(param_1 + 0x218) = uVar4;
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  FUN_038fd1e0(param_1 + 0x230);
  FUN_038fd2f0(param_1 + 0x230,puVar9 + 0x14);
  uVar5 = puVar9[0x26];
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(puVar9 + 0x24);
  puVar1 = (uint *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x278) = uVar5;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  return;
}

