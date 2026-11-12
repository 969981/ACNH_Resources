
void FUN_00754ba0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *__src;
  long lVar2;
  void *__dest;
  undefined *puVar3;
  long local_158;
  void *local_150;
  
  FUN_00705c50();
  puVar3 = (undefined *)param_1[0xc];
  param_1[0x53] = 0;
  param_1[0x54] = &DAT_3f8000003f800000;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  param_1[0x51] = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c1) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  if (puVar3 != &DAT_040afd37) {
    iVar1 = 4;
    if (*(int *)(param_1 + 0xd) < 5) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(puVar3,&DAT_040afd37,(long)iVar1);
    puVar3[iVar1] = 0;
  }
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = param_2;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 5;
  *param_1 = &PTR_LAB_04905ae8;
  FUN_00705c50(param_1 + 0x5f);
  puVar3 = PTR_DAT_04bb36a8;
  param_1[0xb0] = 0x3800000000;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0x5f] = puVar3 + 0x10;
  param_1[0xaf] = param_1 + 0xae;
  param_1[0xae] = param_1 + 0xae;
  (**(code **)(param_1[0xb] + 0x18))(param_1 + 0xb);
  FUN_006e9528(&local_158,"Multi[%s]",param_1[0xc]);
  __dest = (void *)param_1[0xc];
  (**(code **)(local_158 + 0x18))(&local_158);
  __src = local_150;
  if (__dest != local_150) {
    (**(code **)(local_158 + 0x18))(&local_158);
    lVar2 = 0;
    do {
      if (*(char *)((long)local_150 + lVar2) == '\0') goto LAB_00754d4c;
      if (*(char *)((long)local_150 + lVar2 + 1) == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_00754d4c;
      }
      if (*(char *)((long)local_150 + lVar2 + 2) == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_00754d4c;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_00754d4c:
    iVar1 = (int)lVar2;
    if (*(int *)(param_1 + 0xd) <= (int)lVar2) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return;
}

