
bool FUN_03af9bd0(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined **local_78;
  char *pcStack_70;
  int local_64;
  
  lVar14 = DAT_05ae90c0;
  uVar5 = *(uint *)(param_1 + 0x18);
  if ((uVar5 >> 4 & 1) == 0) {
    lVar15 = *(long *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 8) <= param_3) {
      param_3 = 0;
    }
    lVar12 = lVar15 + (long)(int)param_3 * 0x23c0;
    plVar1 = (long *)(lVar12 + 0x1a48);
    fVar16 = *(float *)(lVar12 + 0xae0);
    fVar18 = *(float *)(lVar12 + 0xad8);
    fVar19 = *(float *)(lVar12 + 0xadc);
    fVar17 = *(float *)(lVar12 + 0xae4);
    uVar11 = 1;
    if ((uVar5 & 0x1000) != 0) {
      uVar11 = 2;
    }
    if ((param_4 & 1) == 0) {
      uVar11 = 1;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "gsys::RenderBuffer::color(ReducedBuffer)";
    lVar9 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar9 == 0) {
      local_64 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_64 = (int)lVar9 + -1;
    }
    puVar10 = (undefined4 *)
              FUN_03948e10(lVar14,param_2,lVar14 + (long)local_64 * 0x290 + 0x10,&local_78,uVar6,1,
                           (int)(fVar16 - fVar18),(int)(fVar17 - fVar19),uVar11,0,1,0,1,0,0,0);
    lVar14 = lVar15 + (long)(int)param_3 * 0x23c0;
    *(undefined4 **)(lVar14 + 0x1b90) = puVar10;
    FUN_01560750(lVar14 + 0x1ab0,puVar10,*(undefined1 *)(lVar14 + 0x1b6e),
                 *(undefined2 *)(lVar14 + 0x1b6c));
    *(undefined4 *)(lVar14 + 0x1b98) = *puVar10;
    *(undefined4 *)(lVar14 + 0x1b9c) = puVar10[1];
    *(undefined8 *)(lVar14 + 0x1ba0) = *(undefined8 *)(puVar10 + 2);
    *(undefined8 *)(lVar14 + 0x1ba8) = *(undefined8 *)(puVar10 + 4);
    *(undefined4 *)(lVar14 + 0x1bb0) = puVar10[6];
    *(undefined4 *)(lVar14 + 0x1bb4) = puVar10[7];
    *(undefined8 *)(lVar14 + 0x1bb8) = *(undefined8 *)(puVar10 + 8);
    *(undefined8 *)(lVar14 + 0x1bc0) = *(undefined8 *)(puVar10 + 10);
    uVar13 = *(undefined8 *)(puVar10 + 0x10);
    uVar3 = *(undefined8 *)(puVar10 + 0xc);
    uVar4 = *(undefined8 *)(puVar10 + 0xe);
    *(undefined8 *)(lVar14 + 0x1bdf) = *(undefined8 *)((long)puVar10 + 0x47);
    *(undefined8 *)(lVar14 + 0x1bd8) = uVar13;
    *(undefined8 *)(lVar14 + 0x1bd0) = uVar4;
    *(undefined8 *)(lVar14 + 0x1bc8) = uVar3;
    FUN_038fd1e0(lVar14 + 0x1be8);
    FUN_038fd2f0(lVar14 + 0x1be8,puVar10 + 0x14);
    uVar11 = puVar10[0x26];
    *(undefined8 *)(lVar14 + 0x1c28) = *(undefined8 *)(puVar10 + 0x24);
    *(undefined4 *)(lVar14 + 0x1c30) = uVar11;
    puVar2 = (uint *)(lVar14 + 0x1c6c);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *puVar2 = *puVar2 | 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(long *)(lVar12 + 0x1a68) = lVar14 + 0x1ab0;
    lVar15 = lVar15 + (long)(int)param_3 * 0x23c0;
    *(long *)(lVar12 + 0x1aa8) = lVar15 + 0xdd0;
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    lVar15 = lVar15 + 0x1c78;
    FUN_038e77e4(lVar15,param_2,plVar1);
    if ((*(byte *)(param_1 + 0x1d) >> 3 & 1) == 0) {
      FUN_039025b0(0x3f800000,plVar1,param_2,0,1,param_1 + 0xa8,0,lVar15,1);
    }
  }
  return (uVar5 & 0x10) == 0;
}

