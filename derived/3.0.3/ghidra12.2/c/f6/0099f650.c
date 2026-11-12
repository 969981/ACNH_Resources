
void FUN_0099f650(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  void *__dest;
  undefined8 local_118;
  char local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined8 local_48;
  
  param_1[3] = *(undefined4 *)PTR_DAT_04bb3238;
  local_118 = 0xfffe;
  FUN_0277d4ac(&local_118);
  lVar2 = 0;
  __dest = *(void **)(param_1 + 0x12);
  local_d4[0] = '\0';
  local_48 = 0;
  local_50 = 7;
  uStack_4c = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = (undefined4)local_118;
  param_1[1] = local_118._4_4_;
  param_1[0xe] = 0;
  local_55 = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  do {
    if (local_d4[lVar2] == '\0') goto LAB_0099f71c;
    if (local_d4[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_0099f71c;
    }
    if (local_d4[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_0099f71c;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_0099f71c:
  iVar1 = (int)lVar2;
  if ((int)param_1[0x14] <= (int)lVar2) {
    iVar1 = param_1[0x14] + -1;
  }
  memcpy(__dest,local_d4,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  *(ulong *)(param_1 + 0x36) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
  *(undefined8 *)(param_1 + 0x38) = local_48;
  return;
}

