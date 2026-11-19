
void FUN_0394da90(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  void *__dest;
  void *__src;
  
  uVar2 = crc32b(0xffffffff,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar5 = crc32b(uVar2,0x74,0x4c11db7);
  *(uint *)(param_1 + 1) = ~uVar5;
  *param_1 = &PTR_LAB_04b664e8;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[4] = (undefined1 *)((long)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 5) = 0x20;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_048f9700;
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar8 = (byte *)param_3[1];
  uVar5 = (uint)*pbVar8;
  if (*pbVar8 != 0) {
    uVar7 = 0xffffffff;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar8;
    } while (uVar5 != 0);
    uVar5 = ~uVar7;
  }
  *(uint *)(param_1 + 1) = uVar5;
  if (param_5 != 0) {
    puVar4 = (undefined8 *)(param_5 + 8);
    if (*(long *)(param_5 + 0x10) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_5 + 0x10) + 0x10);
    }
    *puVar4 = param_1;
    *(undefined8 **)(param_5 + 0x10) = param_1;
    *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + 1;
  }
  __dest = (void *)param_1[4];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0394dc0c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0394dc0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0394dc0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0394dc0c:
    iVar3 = (int)lVar6;
    if (*(int *)(param_1 + 5) <= (int)lVar6) {
      iVar3 = *(int *)(param_1 + 5) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  return;
}

