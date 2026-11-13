
void FUN_011a7060(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined *local_e8;
  undefined1 *puStack_e0;
  int local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_d4[0] = 0;
  local_118 = 0x9300000000;
  local_104 = 0x3f800000;
  local_d8 = 0x80;
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  local_50 = 7;
  local_fc = 0;
  local_f4 = 0;
  local_110 = *(undefined4 *)(lVar3 + 0x278);
  uStack_10c = *(undefined4 *)(lVar3 + 0x27c);
  local_55 = 0;
  local_48 = 0;
  local_4c = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_108 = *(undefined4 *)(lVar3 + 0x280);
  puStack_e0 = local_d4;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (local_d4 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_011a716c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_011a716c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_011a716c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_011a716c:
    iVar2 = (int)lVar3;
    if (local_d8 <= (int)lVar3) {
      iVar2 = local_d8 + -1;
    }
    memcpy(local_d4,__src,(long)iVar2);
    local_d4[iVar2] = 0;
  }
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
               *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),0);
  return;
}

