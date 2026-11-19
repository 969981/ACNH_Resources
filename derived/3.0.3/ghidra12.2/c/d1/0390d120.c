
void FUN_0390d120(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x10000;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x5040302;
  *(undefined2 *)((long)param_1 + 0xce) = 0;
  param_1[0x16] = 0x3f80000000000000;
  param_1[0x17] = 0x4170000000000000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x101070707020101;
  puVar6 = param_1 + 10;
  *(undefined4 *)puVar6 = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = "agl::TextureData";
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
  param_1[0x14] = "agl::TextureSampler(from texture)";
  param_1[0x15] = 0;
  puVar7 = (uint *)((long)param_1 + 0xd4);
  *puVar7 = 0xff;
  *(undefined1 *)(param_1 + 0x1b) = 0x20;
  *(undefined2 *)((long)param_1 + 0xda) = 0xffff;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((long)param_1 + 4) = param_2[1];
  param_1[1] = *(undefined8 *)(param_2 + 2);
  param_1[2] = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[7];
  param_1[4] = *(undefined8 *)(param_2 + 8);
  param_1[5] = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x47) = *(undefined8 *)((long)param_2 + 0x47);
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  param_1[8] = uVar5;
  FUN_038fd1e0(puVar6);
  FUN_038fd2f0(puVar6,param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x13) = param_2[0x26];
  param_1[0x12] = uVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar3) {
      *puVar7 = *puVar7 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}

