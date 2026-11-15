
void FUN_0226baf0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *__src;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  ulong local_1b4;
  undefined8 local_1ac;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  int local_190;
  undefined1 local_18c [127];
  undefined1 local_10d;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_100;
  long local_f8;
  undefined1 *local_f0;
  
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761) && (1 < *(byte *)(*DAT_0537d558 + 0x476))) {
    if ((param_3[4] == 0) && (*param_2 == 1)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (uint)(param_3[4] == *param_2);
    }
  }
  else {
    uVar6 = 0;
  }
  FUN_0074fda4(&local_f8,"%s/None/None/%s",(&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[*param_2],
               (&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[*param_2]);
  local_1d0 = 0xcb00000000;
  local_1bc = 0x3f800000;
  local_190 = 0x80;
  local_10d = 0;
  local_18c[0] = 0;
  local_100 = 0;
  local_104 = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a0 = &DAT_048fc708;
  local_108 = 7;
  if (uVar6 == 0) {
    local_1c8 = 0;
    uStack_1c4 = 0;
    local_1c0 = 0;
    puVar4 = (undefined4 *)PTR_DAT_04bb2ce8;
  }
  else {
    local_1c8 = *param_3;
    uStack_1c4 = param_3[1];
    local_1c0 = param_3[2];
    puVar4 = param_3 + 3;
  }
  local_1b8 = *puVar4;
  puStack_198 = local_18c;
  (**(code **)(local_f8 + 0x18))(&local_f8);
  __src = local_f0;
  if (local_18c != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == '\0') goto LAB_0226bca0;
      if (local_f0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0226bca0;
      }
      if (local_f0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0226bca0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0226bca0:
    iVar1 = (int)lVar5;
    if (local_190 <= (int)lVar5) {
      iVar1 = local_190 + -1;
    }
    memcpy(local_18c,__src,(long)iVar1);
    local_18c[iVar1] = 0;
  }
  uVar3 = *param_1;
  local_1d0 = CONCAT44(local_1d0._4_4_,uVar3);
  local_1ac = 0;
  local_1b4 = CONCAT44(*param_2,uVar6) ^ 1;
  if (param_4 != (undefined1 *)0x0) {
    uVar2 = 0;
    if (param_3[4] == 2) {
      uVar2 = uVar6;
    }
    *param_4 = (char)uVar2;
  }
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_1d0,uVar3,1);
  return;
}

