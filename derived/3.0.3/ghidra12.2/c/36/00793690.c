
void FUN_00793690(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  undefined1 *__dest_00;
  undefined1 *__src;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = &PTR_FUN_04ba93e0;
  if (__dest != "XLink") {
    iVar2 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  param_1[0x5e] = 0;
  *param_1 = &PTR_LAB_0490dc58;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  __dest_00 = (undefined1 *)((long)param_1 + 0x30c);
  *__dest_00 = 0;
  param_1[0x5b] = &PTR_LAB_0490ddc0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = __dest_00;
  *(undefined4 *)(param_1 + 0x61) = 0x20;
  *(undefined1 *)((long)param_1 + 0x32b) = 0;
  param_1[0x5f] = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (__dest_00 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_007937e0;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_007937e0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_007937e0;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_007937e0:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x61) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x61) + -1;
    }
    memcpy(__dest_00,__src,(long)iVar2);
    __dest_00[iVar2] = 0;
  }
  return;
}

