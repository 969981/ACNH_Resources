
void FUN_03a74e50(long param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined **local_78;
  char *pcStack_70;
  int local_64;
  
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    param_3 = 0;
  }
  if ((*(char *)(*(long *)(param_1 + 0x238) + (long)(int)param_3 * 0x6d0) != '\0') &&
     (uVar8 = *(uint *)(param_1 + 0x220), 0 < (int)uVar8)) {
    lVar10 = *(long *)(param_1 + 0x238) + (long)(int)param_3 * 0x6d0;
    uVar15 = 0;
    do {
      uVar9 = uVar15;
      if (uVar8 <= uVar15) {
        uVar9 = 0;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x240);
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x228) + (ulong)uVar9 * 0x2c + 4);
      uVar8 = *(uint *)(lVar10 + 0x28) >> (ulong)(uVar9 & 0x1f);
      uVar9 = *(uint *)(lVar10 + 0x2c) >> (ulong)(uVar9 & 0x1f);
      lVar12 = *(long *)PTR_DAT_04bbd510;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      local_78 = &PTR_LAB_048f9770;
      pcStack_70 = "volume mask - mask";
      lVar6 = nn::os::GetTlsValue(DAT_05ae7898);
      if (lVar6 == 0) {
        local_64 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_64 = (int)lVar6 + -1;
      }
      uVar7 = FUN_03948e10(lVar12,param_2,lVar12 + (long)local_64 * 0x290 + 0x10,&local_78,uVar3,1,
                           uVar8,uVar9,1,0,1,0,1,0,0,0);
      uVar8 = uVar15;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
        uVar8 = 0;
      }
      *(undefined8 *)(*(long *)(lVar10 + 0x20) + (ulong)uVar8 * 8) = uVar7;
      uVar8 = uVar15;
      if (*(uint *)(lVar10 + 8) <= uVar15) {
        uVar8 = 0;
      }
      uVar9 = uVar15;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
        uVar9 = 0;
      }
      puVar13 = *(undefined4 **)(*(long *)(lVar10 + 0x20) + (ulong)uVar9 * 8);
      puVar14 = (undefined4 *)(*(long *)(lVar10 + 0x10) + (ulong)uVar8 * 0xe0);
      *puVar14 = *puVar13;
      puVar14[1] = puVar13[1];
      *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(puVar13 + 2);
      *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar13 + 4);
      puVar14[6] = puVar13[6];
      puVar14[7] = puVar13[7];
      *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(puVar14 + 10) = *(undefined8 *)(puVar13 + 10);
      uVar7 = *(undefined8 *)(puVar13 + 0xc);
      uVar2 = *(undefined8 *)(puVar13 + 0xe);
      uVar11 = *(undefined8 *)(puVar13 + 0x10);
      *(undefined8 *)((long)puVar14 + 0x47) = *(undefined8 *)((long)puVar13 + 0x47);
      *(undefined8 *)(puVar14 + 0xe) = uVar2;
      *(undefined8 *)(puVar14 + 0x10) = uVar11;
      *(undefined8 *)(puVar14 + 0xc) = uVar7;
      FUN_038fd1e0(puVar14 + 0x14);
      FUN_038fd2f0(puVar14 + 0x14,puVar13 + 0x14);
      uVar3 = puVar13[0x26];
      *(undefined8 *)(puVar14 + 0x24) = *(undefined8 *)(puVar13 + 0x24);
      puVar1 = puVar14 + 0x35;
      puVar14[0x26] = uVar3;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar8 = *(uint *)(param_1 + 0x220);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar8);
  }
  return;
}

