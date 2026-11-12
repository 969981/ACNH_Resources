
void FUN_00944200(long param_1,uint param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined1 *)(param_1 + 0x3c) = 1;
  lVar7 = param_1 + 0xe8 + (ulong)param_2 * 0x90;
  if (0x3f < param_2) {
    lVar7 = param_1 + 0xe8;
  }
  *(undefined4 *)(lVar7 + 0x5c) = *param_3;
  *(undefined4 *)(lVar7 + 0x60) = param_3[1];
  *(undefined4 *)(lVar7 + 100) = param_3[2];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar7 + 0x14);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar7 + 0x18);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar7 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar7 + 0x24);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar7 + 0x28);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar7 + 0x30);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar7 + 0x40);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar7 + 0x44);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar7 + 0x48);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar7 + 0x4c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar7 + 0x50);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar7 + 0x54);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar7 + 0x58);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar7 + 0x5c);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar7 + 0x60);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar7 + 100);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(lVar7 + 0x68);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar7 + 0x78);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar7 + 0x7c);
  uVar4 = *(undefined4 *)(lVar7 + 0x80);
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(lVar7 + 0x84);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x2c74);
  fVar8 = *(float *)(param_1 + 0xc0);
  if (*param_4 <= *(float *)(param_1 + 0xc0)) {
    fVar8 = *param_4;
  }
  *(float *)(param_1 + 0xc0) = fVar8;
  fVar8 = *(float *)(param_1 + 200);
  if (param_4[2] <= *(float *)(param_1 + 200)) {
    fVar8 = param_4[2];
  }
  *(float *)(param_1 + 200) = fVar8;
  fVar8 = *(float *)(param_1 + 0xcc);
  if (*(float *)(param_1 + 0xcc) <= *param_4) {
    fVar8 = *param_4;
  }
  *(float *)(param_1 + 0xcc) = fVar8;
  fVar8 = *(float *)(param_1 + 0xd4);
  if (*(float *)(param_1 + 0xd4) <= param_4[2]) {
    fVar8 = param_4[2];
  }
  *(float *)(param_1 + 0xd4) = fVar8;
  if ((int)uVar3 < 0x40) {
    lVar2 = param_1 + 0x2c78 + (ulong)uVar3 * 0x80;
    if (0x3f < uVar3) {
      lVar2 = param_1 + 0x2c78;
    }
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar7 + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar7 + 0x14);
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar7 + 0x1c);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar7 + 0x24);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar7 + 0x28);
    *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar7 + 0x2c);
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar7 + 0x30);
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar7 + 0x40);
    *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar7 + 0x44);
    *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar7 + 0x48);
    *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar7 + 0x4c);
    *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar7 + 0x50);
    *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar7 + 0x54);
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar7 + 0x58);
    *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar7 + 0x5c);
    *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar7 + 0x60);
    *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar7 + 100);
    *(undefined1 *)(lVar2 + 0x60) = *(undefined1 *)(lVar7 + 0x68);
    *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(lVar7 + 0x78);
    *(undefined4 *)(lVar2 + 0x74) = *(undefined4 *)(lVar7 + 0x7c);
    uVar4 = *(undefined4 *)(lVar7 + 0x80);
    *(undefined1 *)(lVar2 + 0x7c) = *(undefined1 *)(lVar7 + 0x84);
    *(undefined4 *)(lVar2 + 0x78) = uVar4;
    *(int *)(param_1 + 0x2c74) = *(int *)(param_1 + 0x2c74) + 1;
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if (lVar7 != 0) {
    uVar9 = *param_3;
    uVar10 = param_3[1];
    uVar11 = param_3[2];
    piVar1 = (int *)(lVar7 + 0x160);
    uVar4 = *(undefined4 *)(param_1 + 0x4c9c);
    do {
    } while (*piVar1 == 1);
    do {
      do {
      } while (*piVar1 != 0);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    uVar3 = *(uint *)(lVar7 + 8);
    if ((int)uVar3 < 0xe) {
      lVar2 = lVar7 + 0x10 + (ulong)uVar3 * 0x18;
      if (0xd < uVar3) {
        lVar2 = lVar7 + 0x10;
      }
      *(undefined4 *)(lVar2 + 8) = uVar9;
      *(undefined4 *)(lVar2 + 0xc) = uVar10;
      *(undefined4 *)(lVar2 + 0x10) = uVar11;
      *(undefined4 *)(lVar2 + 0x14) = uVar4;
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    DataMemoryBarrier(2,3);
    do {
      do {
      } while (*piVar1 != 1);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return;
}

