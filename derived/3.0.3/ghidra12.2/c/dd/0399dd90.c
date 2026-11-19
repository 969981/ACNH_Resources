
void FUN_0399dd90(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__dest;
  undefined4 *puVar9;
  
  FUN_03968e34();
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0x22;
  *param_1 = &PTR_FUN_04b69b60;
  *(undefined8 *)((long)param_1 + 0x204) = 0x2d000000500;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  FUN_0390cee0(param_1 + 0x47);
  *(undefined1 *)((long)param_1 + 0x353) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  param_1[0x65] = (undefined1 *)((long)param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x66) = 0x20;
  param_1[0x6b] = 0;
  param_1[100] = &PTR_LAB_048f9700;
  FUN_039a7060(param_1 + 0x6c);
  param_1[0x10a] = 0;
  puVar5 = PTR_DAT_04bd1178;
  param_1[0x109] = &DAT_3f8000003f800000;
  param_1[0x10b] = &DAT_3f8000003f800000;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x108] = puVar5 + 0x10;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  param_1[0x128] = "agl::TextureData";
  param_1[0x116] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0x10000;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 300) = 0xff;
  param_1[0x115] = &PTR_LAB_04b65dc0;
  *(undefined4 *)((long)param_1 + 0x964) = 0;
  param_1[0x12d] = 0x80000000000;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  FUN_0390cee0(param_1 + 0x132);
  *(undefined4 *)(param_1 + 0x14e) = 0;
  *(undefined2 *)((long)param_1 + 0xa74) = 0x1d0;
  FUN_03941294(param_1 + 0x14f);
  __dest = (char *)param_1[0x65];
  if (__dest != "Layer") {
    iVar1 = 5;
    if (*(int *)(param_1 + 0x66) < 6) {
      iVar1 = *(int *)(param_1 + 0x66) + -1;
    }
    memcpy(__dest,"Layer",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  puVar9 = *(undefined4 **)(DAT_05ae9110 + 0x18);
  param_1[0x10c] = param_1 + 0x115;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = *puVar9;
  *(undefined4 *)((long)param_1 + 0x994) = puVar9[1];
  param_1[0x133] = *(undefined8 *)(puVar9 + 2);
  param_1[0x134] = *(undefined8 *)(puVar9 + 4);
  *(undefined4 *)(param_1 + 0x135) = puVar9[6];
  *(undefined4 *)((long)param_1 + 0x9ac) = puVar9[7];
  param_1[0x136] = *(undefined8 *)(puVar9 + 8);
  param_1[0x137] = *(undefined8 *)(puVar9 + 10);
  uVar6 = *(undefined8 *)(puVar9 + 0xc);
  uVar8 = *(undefined8 *)(puVar9 + 0xe);
  uVar7 = *(undefined8 *)(puVar9 + 0x10);
  *(undefined8 *)((long)param_1 + 0x9d7) = *(undefined8 *)((long)puVar9 + 0x47);
  param_1[0x13a] = uVar7;
  param_1[0x139] = uVar8;
  param_1[0x138] = uVar6;
  FUN_038fd1e0(param_1 + 0x13c);
  FUN_038fd2f0(param_1 + 0x13c,puVar9 + 0x14);
  uVar6 = *(undefined8 *)(puVar9 + 0x24);
  *(undefined4 *)(param_1 + 0x145) = puVar9[0x26];
  param_1[0x144] = uVar6;
  uVar6 = *(undefined8 *)(puVar9 + 0x30);
  uVar8 = *(undefined8 *)(puVar9 + 0x32);
  uVar2 = puVar9[0x34];
  param_1[0x149] = *(undefined8 *)(puVar9 + 0x2e);
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  param_1[0x14b] = uVar8;
  param_1[0x14a] = uVar6;
  uVar6 = *(undefined8 *)(puVar9 + 0x28);
  uVar8 = *(undefined8 *)(puVar9 + 0x2c);
  param_1[0x147] = *(undefined8 *)(puVar9 + 0x2a);
  param_1[0x146] = uVar6;
  param_1[0x148] = uVar8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass((undefined4 *)((long)param_1 + 0xa64),0x10);
    if (bVar4) {
      *(undefined4 *)((long)param_1 + 0xa64) = 0x7fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined1 *)(param_1 + 0x14d) = *(undefined1 *)(puVar9 + 0x36);
  FUN_038fd92c((long)param_1 + 0xa6a,(long)puVar9 + 0xda);
  *(undefined4 *)(param_1 + 0x13) = 10;
  return;
}

