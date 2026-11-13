
void FUN_011a71d0(undefined4 param_1,long param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  int local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_100 = 0;
  local_118 = 0x9300000000;
  local_55 = 0;
  local_d8 = 0x80;
  local_110 = *param_4;
  uStack_10c = param_4[1];
  local_d4[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_fc = 0;
  local_f4 = 0;
  local_108 = param_4[2];
  local_e8 = &DAT_048fc708;
  local_50 = 7;
  uStack_104 = param_1;
  puStack_e0 = local_d4;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (undefined1 *)param_3[1];
  if (local_d4 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_011a72cc;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_011a72cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_011a72cc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_011a72cc:
    iVar2 = (int)lVar3;
    if (local_d8 <= (int)lVar3) {
      iVar2 = local_d8 + -1;
    }
    memcpy(local_d4,__src,(long)iVar2);
    local_d4[iVar2] = 0;
  }
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
               *(undefined4 *)(*(long *)(param_2 + 0x48) + 0x230),0);
  return;
}

