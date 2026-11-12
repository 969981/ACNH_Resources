
bool FUN_0076b380(long param_1,undefined2 *param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 *__src;
  long *plVar5;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined *local_100;
  undefined1 *puStack_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  local_6d = 0;
  local_ec[0] = 0;
  local_60 = 0;
  local_f0 = 0x80;
  local_120 = param_3[4];
  uStack_11c = param_3[5];
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  local_68 = CONCAT26(local_68._6_2_,7);
  local_128 = *(undefined8 *)(param_3 + 2);
  local_130 = *param_3;
  uStack_12c = param_3[1];
  local_58 = 0;
  plVar5 = (long *)(param_3 + 0xc);
  local_118 = param_3[6];
  local_114 = *(undefined8 *)(param_3 + 7);
  local_10c = *(undefined8 *)(param_3 + 9);
  puStack_f8 = local_ec;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(undefined1 **)(param_3 + 0xe);
  if (local_ec != __src) {
    (**(code **)(*(long *)(param_3 + 0xc) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 0xe) + lVar4) == '\0') goto LAB_0076b49c;
      lVar1 = *(long *)(param_3 + 0xe) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0076b49c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0076b49c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0076b49c:
    iVar3 = (int)lVar4;
    if (local_f0 <= (int)lVar4) {
      iVar3 = local_f0 + -1;
    }
    memcpy(local_ec,__src,(long)iVar3);
    local_ec[iVar3] = 0;
  }
  local_68 = *(undefined8 *)(param_3 + 0x32);
  local_60 = *(undefined8 *)(param_3 + 0x34);
  bVar2 = true;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != -1)) {
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined2 *)(param_1 + 0xb4) = *param_2;
    *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 8);
    iVar3 = FUN_0076b954(param_1,param_2,&local_130,0,0,1,0,local_58,0);
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}

