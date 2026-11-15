
undefined8 FUN_01fec550(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *__src;
  long lVar7;
  undefined *local_70;
  undefined1 *puStack_68;
  int local_60;
  undefined1 auStack_5c [7];
  undefined1 local_55;
  
  puVar3 = PTR_DAT_04bb27f8;
  lVar7 = param_1[1];
  local_60 = 8;
  uVar6 = *(undefined8 *)PTR_DAT_04bb27f8;
  local_55 = 0;
  local_70 = PTR_DAT_04bb6a30 + 0x10;
  puStack_68 = auStack_5c;
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  __src = *(undefined1 **)(lVar7 + 1000);
  if (auStack_5c != __src) {
    (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(lVar7 + 1000) + lVar5) == '\0') goto LAB_01fec620;
      lVar1 = *(long *)(lVar7 + 1000) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01fec620;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01fec620;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01fec620:
    iVar2 = (int)lVar5;
    if (local_60 <= (int)lVar5) {
      iVar2 = local_60 + -1;
    }
    memcpy(auStack_5c,__src,(long)iVar2);
    auStack_5c[iVar2] = 0;
  }
  local_70 = PTR_DAT_04bb3768 + 0x10;
  uVar4 = FUN_036e4cd0(uVar6,&local_70);
  if (((uVar4 & 1) == 0) &&
     ((uVar4 = (**(code **)(*param_1 + 0x5c0))(param_1), (uVar4 & 1) == 0 ||
      (uVar4 = FUN_036e4924(*(undefined8 *)puVar3), (uVar4 & 1) == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

