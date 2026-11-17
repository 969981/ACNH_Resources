
bool FUN_02b47ee0(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 *__src;
  long *plVar6;
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
  plVar6 = (long *)(param_3 + 0xc);
  local_118 = param_3[6];
  local_114 = *(undefined8 *)(param_3 + 7);
  local_10c = *(undefined8 *)(param_3 + 9);
  puStack_f8 = local_ec;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = *(undefined1 **)(param_3 + 0xe);
  if (local_ec != __src) {
    (**(code **)(*(long *)(param_3 + 0xc) + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 0xe) + lVar5) == '\0') goto LAB_02b47ffc;
      lVar1 = *(long *)(param_3 + 0xe) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02b47ffc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02b47ffc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02b47ffc:
    iVar4 = (int)lVar5;
    if (local_f0 <= (int)lVar5) {
      iVar4 = local_f0 + -1;
    }
    memcpy(local_ec,__src,(long)iVar4);
    local_ec[iVar4] = 0;
  }
  uVar2 = local_58;
  local_68 = *(undefined8 *)(param_3 + 0x32);
  local_60 = *(undefined8 *)(param_3 + 0x34);
  bVar3 = true;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != -1)) {
    *(undefined1 *)(param_1 + 200) = 1;
    FUN_02a6ccf0(param_1 + 0x170,param_2 + 8);
    iVar4 = FUN_02b489dc(param_1,param_2,&local_130,0,0,1,0,uVar2,0);
    bVar3 = iVar4 != 0;
  }
  return bVar3;
}

