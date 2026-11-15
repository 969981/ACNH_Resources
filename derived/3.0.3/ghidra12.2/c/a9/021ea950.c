
void FUN_021ea950(undefined2 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined1 *__src;
  undefined **local_60;
  undefined1 *puStack_58;
  int local_50;
  undefined1 auStack_4c [7];
  undefined1 local_45;
  
  local_50 = 8;
  local_45 = 0;
  local_60 = &PTR_LAB_04937050;
  puStack_58 = auStack_4c;
  (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
  __src = *(undefined1 **)(param_2 + 1000);
  if (auStack_4c != __src) {
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 1000) + lVar5) == '\0') goto LAB_021eaa10;
      lVar1 = *(long *)(param_2 + 1000) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_021eaa10;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_021eaa10;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_021eaa10:
    iVar2 = (int)lVar5;
    if (local_50 <= (int)lVar5) {
      iVar2 = local_50 + -1;
    }
    memcpy(auStack_4c,__src,(long)iVar2);
    auStack_4c[iVar2] = 0;
  }
  local_60 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  uVar3 = FUN_021dd320(&local_60);
  if (uVar3 < 6) {
    uVar4 = *(undefined2 *)(&DAT_04179d8c + (long)(int)uVar3 * 2);
  }
  else {
    uVar4 = 0x393e;
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac(param_1);
  return;
}

