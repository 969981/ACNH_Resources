
void FUN_02f3c550(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  void *__dest;
  void *__src;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar5 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ae3660;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_03463544(param_1 + 0x50,0);
  puVar5 = PTR_DAT_04bc8e10;
  param_1[0x7a] = -1;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = -1;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x79] = (long)(puVar5 + 0x10);
  param_1[0x7d] = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_04bb2f70;
  *(undefined4 *)(param_1 + 0x80) = 0;
  __dest = (void *)((long)param_1 + 0x41c);
  param_1[0x81] = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 0x83) = 0x40;
  puVar5 = PTR_PTR_04bb2238;
  param_1[0x82] = (long)__dest;
  *(undefined1 *)((long)param_1 + 0x45b) = 0;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  __src = *(void **)(puVar5 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar8) == '\0') goto LAB_02f3c6dc;
      lVar1 = *(long *)(puVar5 + 8) + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02f3c6dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02f3c6dc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02f3c6dc:
    iVar2 = (int)lVar8;
    if ((int)param_1[0x83] <= (int)lVar8) {
      iVar2 = (int)param_1[0x83] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[0x42] = 0;
  puVar6 = PTR_DAT_04bb37e0;
  param_1[0x44] = 0;
  puVar5 = PTR_DAT_04bb2bc0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x81] = (long)(puVar5 + 0x10);
  uVar3 = *(undefined4 *)puVar6;
  uVar4 = *(undefined4 *)(puVar6 + 4);
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined4 *)((long)param_1 + 0x464) = uVar4;
  return;
}

