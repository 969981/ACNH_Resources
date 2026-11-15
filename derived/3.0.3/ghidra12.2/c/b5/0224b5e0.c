
void FUN_0224b5e0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  long *plVar4;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
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
  
  local_55 = 0;
  local_d8 = 0x80;
  local_50 = 7;
  local_d4[0] = 0;
  local_48 = 0;
  local_108 = *(undefined4 *)(param_2 + 0x10);
  local_4c = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_fc = 0;
  local_f4 = 0;
  uStack_114 = *(undefined4 *)(param_2 + 4);
  if ((param_3 & 1) == 0) {
    uStack_114 = 0x2e;
  }
  local_110 = *(undefined8 *)(param_2 + 8);
  local_118 = 0;
  local_100 = *(undefined4 *)(param_2 + 0x18);
  plVar4 = (long *)(param_2 + 0x30);
  uStack_104 = *(undefined4 *)(param_2 + 0x14);
  puStack_e0 = local_d4;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(undefined1 **)(param_2 + 0x38);
  if (local_d4 != __src) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar3) == '\0') goto LAB_0224b6ec;
      lVar1 = *(long *)(param_2 + 0x38) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0224b6ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0224b6ec;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0224b6ec:
    iVar2 = (int)lVar3;
    if (local_d8 <= (int)lVar3) {
      iVar2 = local_d8 + -1;
    }
    memcpy(local_d4,__src,(long)iVar2);
    local_d4[iVar2] = 0;
  }
  local_fc = CONCAT44(local_fc._4_4_,*(undefined4 *)(param_2 + 0x1c));
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,local_118,1);
  return;
}

