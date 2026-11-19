
void FUN_0390cee0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  
  param_1[0x11] = 0;
  puVar7 = param_1 + 10;
  *(undefined4 *)puVar7 = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar8 = (uint *)((long)param_1 + 0xd4);
  *puVar8 = 0xff;
  param_1[0x12] = "agl::TextureData";
  *(undefined4 *)(param_1 + 0x13) = 0x10000;
  param_1[0x16] = 0x3f80000000000000;
  param_1[0x17] = 0x4170000000000000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x101070707020101;
  *(undefined4 *)(param_1 + 0x1a) = 0x5040302;
  *(undefined1 *)(param_1 + 0x1b) = 0x20;
  param_1[0x14] = "agl::TextureSampler";
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((long)param_1 + 0xda) = 0xffff;
  lVar4 = DAT_05ae9110;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined2 *)((long)param_1 + 0xce) = 0;
  if (lVar4 != 0) {
    puVar9 = *(undefined4 **)(lVar4 + 0x18);
    *(undefined4 *)param_1 = *puVar9;
    *(undefined4 *)((long)param_1 + 4) = puVar9[1];
    param_1[1] = *(undefined8 *)(puVar9 + 2);
    param_1[2] = *(undefined8 *)(puVar9 + 4);
    *(undefined4 *)(param_1 + 3) = puVar9[6];
    *(undefined4 *)((long)param_1 + 0x1c) = puVar9[7];
    param_1[4] = *(undefined8 *)(puVar9 + 8);
    param_1[5] = *(undefined8 *)(puVar9 + 10);
    uVar5 = *(undefined8 *)(puVar9 + 0xc);
    uVar1 = *(undefined8 *)(puVar9 + 0xe);
    uVar6 = *(undefined8 *)(puVar9 + 0x10);
    *(undefined8 *)((long)param_1 + 0x47) = *(undefined8 *)((long)puVar9 + 0x47);
    param_1[6] = uVar5;
    param_1[7] = uVar1;
    param_1[8] = uVar6;
    FUN_038fd1e0(puVar7);
    FUN_038fd2f0(puVar7,puVar9 + 0x14);
    uVar5 = *(undefined8 *)(puVar9 + 0x24);
    *(undefined4 *)(param_1 + 0x13) = puVar9[0x26];
    param_1[0x12] = uVar5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = *puVar8 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

