
void FUN_016212e0(long *param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  void *__dest;
  void *__src;
  
  puVar6 = PTR_DAT_04bb2020;
  param_1[4] = 0;
  param_1[5] = (long)param_1;
  puVar7 = PTR_DAT_04bbd4a0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[2] = (long)&DAT_0407ebb1;
  param_1[3] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[1] = (long)(puVar6 + 0x10);
  FUN_03941294(param_1 + 9);
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *param_1 = (long)&PTR_LAB_049b4270;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_0390cee0(param_1 + 0x56);
  param_1[0x72] = 0;
  puVar6 = PTR_DAT_04bdf0c8;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  param_1[0x76] = 0;
  puVar7 = PTR_DAT_04bdf1d8;
  param_1[0x78] = 0;
  param_1[0x74] = (long)(puVar6 + 0x10);
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  param_1[0x8e] = (long)"agl::TextureData";
  param_1[0x77] = (long)(puVar7 + 0x10);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x10000;
  FUN_0390cee0(param_1 + 0x90);
  __dest = (void *)((long)param_1 + 0x574);
  param_1[0xac] = (long)(PTR_DAT_04bb4520 + 0x10);
  param_1[0xad] = (long)__dest;
  *(undefined4 *)(param_1 + 0xae) = 0x100;
  puVar6 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x673) = 0;
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  __src = *(void **)(puVar6 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar8) == '\0') goto LAB_016214b0;
      lVar2 = *(long *)(puVar6 + 8) + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_016214b0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_016214b0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_016214b0:
    iVar3 = (int)lVar8;
    if ((int)param_1[0xae] <= (int)lVar8) {
      iVar3 = (int)param_1[0xae] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  *(undefined1 *)(param_1 + 0xcf) = 0;
  puVar6 = PTR_DAT_04bb21f8;
  *(undefined8 *)((long)param_1 + 0x67c) = 0x4380000044000000;
  *(undefined4 *)((long)param_1 + 0x684) = 6;
  *(undefined2 *)((long)param_1 + 0x374) = 0x101;
  puVar7 = PTR_DAT_04bbd618;
  *(undefined1 *)((long)param_1 + 0x376) = 2;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xac] = (long)(puVar6 + 0x10);
  param_1[0xd1] = (long)(puVar7 + 0x10);
  puVar1 = (uint *)((long)param_1 + 900);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined1 *)((long)param_1 + 0x377) = 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined1 *)(param_1 + 0x6f) = 6;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}

