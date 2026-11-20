
void FUN_03d7dfb0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  void *__src;
  
  FUN_03c5cce8(param_1,param_2,0);
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_04b90648;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = (char)param_3[5] != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar4;
  lVar7 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x18);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x18,8);
  }
  *(undefined4 *)((long)pvVar6 + 0x10) = 0;
  *(void **)pvVar6 = pvVar6;
  *(void **)((long)pvVar6 + 8) = pvVar6;
  param_1[0x3b] = pvVar6;
  *(undefined4 *)((long)pvVar6 + 0x14) = 8;
  *param_1 = &PTR_LAB_04b92128;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  param_1[0x4a] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2ab) = 0;
  pvVar6 = (void *)((long)param_1 + 0x26c);
  param_1[0x4b] = puVar1;
  param_1[0x4c] = pvVar6;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (pvVar6 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_03d7e13c;
      lVar5 = param_3[1] + lVar7;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03d7e13c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03d7e13c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03d7e13c:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x4d) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x4d) + -1;
    }
    memcpy(pvVar6,__src,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0x303) = 0;
  param_1[0x57] = (undefined1 *)((long)param_1 + 0x2c4);
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0x3c;
  param_1[0x4b] = puVar1 + 0x10;
  param_1[0x56] = puVar1 + 0x10;
  param_1[0x61] = &PTR_LAB_04b92600;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined1 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  FUN_03d7ede8(param_1 + 0x78);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  return;
}

