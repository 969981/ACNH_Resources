
void FUN_03977e90(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
                 uint param_6)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  puVar9 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bd1448 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1448), iVar5 != 0))
  {
    *(undefined ***)PTR_DAT_04bd1440 = &PTR_LAB_04b685c0;
    __cxa_guard_release(PTR_DAT_04bd1448);
  }
  uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bd1440);
  if ((uVar6 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar9 + 2) <= param_2) {
    param_2 = 0;
  }
  lVar7 = puVar9[3] + (long)(int)param_2 * 0x70;
  uVar2 = param_3;
  if (*(uint *)(lVar7 + 0x60) <= param_3) {
    uVar2 = 0;
  }
  *(undefined8 *)(*(long *)(lVar7 + 0x68) + (long)(int)uVar2 * 0xd0 + 8) = param_4;
  uVar11 = *param_5;
  uVar2 = param_3;
  if (*(uint *)(lVar7 + 0x60) <= param_3) {
    uVar2 = 0;
  }
  lVar8 = *(long *)(lVar7 + 0x68) + (long)(int)uVar2 * 0xd0;
  *(undefined8 *)(lVar8 + 0x20) = param_5[1];
  *(undefined8 *)(lVar8 + 0x18) = uVar11;
  uVar11 = param_5[2];
  *(undefined8 *)(lVar8 + 0x30) = param_5[3];
  *(undefined8 *)(lVar8 + 0x28) = uVar11;
  uVar11 = param_5[4];
  *(undefined8 *)(lVar8 + 0x40) = param_5[5];
  *(undefined8 *)(lVar8 + 0x38) = uVar11;
  uVar11 = param_5[6];
  *(undefined8 *)(lVar8 + 0x50) = param_5[7];
  *(undefined8 *)(lVar8 + 0x48) = uVar11;
  if (*(uint *)(lVar7 + 0x60) <= param_3) {
    param_3 = 0;
  }
  uVar10 = 0;
  if ((param_6 & 1) == 0) {
    uVar10 = 0x3f800000;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x68) + (long)(int)param_3 * 0xd0 + 0x10);
  *(undefined4 *)(lVar7 + 0xa8) = uVar10;
  *(undefined4 *)(lVar7 + 0xac) = uVar10;
  *(undefined4 *)(lVar7 + 0xb0) = uVar10;
  *(undefined4 *)(lVar7 + 0xb4) = 0x3f800000;
  puVar1 = (uint *)(lVar7 + 0xd4);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 0x20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}

