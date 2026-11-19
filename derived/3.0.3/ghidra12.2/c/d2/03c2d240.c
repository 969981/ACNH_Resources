
void FUN_03c2d240(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *__dest;
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *plVar12;
  void *__src;
  
  FUN_038c69f0(param_1,param_3,3);
  *param_1 = &PTR_LAB_04b7ebd8;
  param_1[5] = 0;
  param_1[6] = 0;
  __dest = (void *)((long)param_1 + 0x74);
  param_1[7] = param_1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_3;
  uVar6 = *param_2;
  param_1[0xd] = __dest;
  *(undefined4 *)(param_1 + 0xe) = 0x100;
  *(undefined1 *)((long)param_1 + 0x173) = 0;
  puVar1 = PTR_DAT_04bb4520 + 0x10;
  param_1[0xb] = uVar6;
  param_1[0xc] = puVar1;
  plVar12 = param_2 + 1;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  __src = (void *)param_2[2];
  if (__dest != __src) {
    (**(code **)(param_2[1] + 0x18))(plVar12);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[2] + lVar7) == '\0') goto LAB_03c2d32c;
      lVar2 = param_2[2] + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03c2d32c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03c2d32c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03c2d32c:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 0xe) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 0xe) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  param_1[0xc] = PTR_DAT_04bb21f8 + 0x10;
  param_1[0x2f] = param_2[0x24];
  uVar9 = *(undefined8 *)((long)param_2 + 0x13e);
  uVar6 = param_2[0x25];
  uVar4 = param_2[0x26];
  uVar11 = param_2[0x27];
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((long)param_1 + 0x196) = uVar9;
  param_1[0x30] = uVar6;
  param_1[0x31] = uVar4;
  param_1[0x32] = uVar11;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  (**(code **)(param_2[1] + 0x18))(plVar12);
  pbVar10 = (byte *)param_2[2];
  uVar5 = (uint)*pbVar10;
  if (*pbVar10 != 0) {
    uVar8 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar8 = crc32b(uVar8,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar10;
    } while (uVar5 != 0);
    uVar5 = ~uVar8;
  }
  *(uint *)(param_1 + 4) = uVar5;
  return;
}

