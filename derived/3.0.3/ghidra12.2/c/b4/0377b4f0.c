
void FUN_0377b4f0(long *param_1,int param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined2 *__dest;
  undefined2 *__src;
  undefined *local_90;
  undefined2 *puStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  char local_7a [13];
  undefined1 local_6d;
  undefined *local_68;
  ushort *local_60;
  undefined4 local_58;
  ushort local_54;
  undefined1 local_52;
  undefined1 local_45;
  
  *(undefined1 *)param_1[1] = 0;
  puVar5 = PTR_DAT_04bb2ab0;
  if (param_2 == 0) {
    return;
  }
  if (param_2 == 0x15) {
    return;
  }
  local_45 = 0;
  local_58 = 0x10;
  local_54 = local_54 & 0xff00;
  local_68 = PTR_DAT_04bb2ab0 + 0x10;
  local_60 = &local_54;
  switch(param_2) {
  case 1:
    puStack_88 = (undefined2 *)&DAT_0407236f;
    break;
  case 2:
    puStack_88 = (undefined2 *)&DAT_04096eab;
    break;
  case 3:
    puStack_88 = (undefined2 *)&DAT_0408cc28;
    break;
  case 4:
    puStack_88 = (undefined2 *)&DAT_04079593;
    break;
  case 5:
    puStack_88 = (undefined2 *)&DAT_04064218;
    break;
  case 6:
    puStack_88 = (undefined2 *)&DAT_0409e032;
    break;
  case 7:
    puStack_88 = (undefined2 *)&DAT_0406ed78;
    break;
  case 8:
    puStack_88 = (undefined2 *)&DAT_0409e035;
    break;
  case 9:
    puStack_88 = (undefined2 *)&DAT_04083a01;
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
    local_52 = 0;
    local_54 = 0x3131;
    goto LAB_0377b674;
  case 0xd:
    puStack_88 = (undefined2 *)&DAT_04079596;
    break;
  case 0xe:
    puStack_88 = (undefined2 *)&DAT_040e136a;
    break;
  case 0xf:
    puStack_88 = (undefined2 *)&DAT_040f6b5b;
    break;
  case 0x13:
    puStack_88 = (undefined2 *)&DAT_0406ed7b;
    break;
  default:
    goto switchD_0377b57c_default;
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  FUN_006db890(&local_68,&local_90);
LAB_0377b674:
  __dest = (undefined2 *)param_1[1];
  __src = &local_7c;
  local_80 = 0x10;
  local_90 = puVar5 + 0x10;
  local_7c = 0x3030;
  if ((param_3 & 1) != 0) {
    local_7c = 0x3031;
  }
  local_7a[0] = '\0';
  local_6d = 0;
  puStack_88 = __src;
  if (__dest != __src) {
    lVar6 = 0;
    do {
      if (local_7a[lVar6 + -2] == '\0') goto LAB_0377b6fc;
      if (local_7a[lVar6 + -1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0377b6fc;
      }
      if (local_7a[lVar6] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0377b6fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0377b6fc:
    iVar3 = (int)lVar6;
    if ((int)param_1[2] <= (int)lVar6) {
      iVar3 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    __src = (undefined2 *)param_1[1];
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_0377b77c;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0377b77c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0377b77c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0377b77c:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_68 + 0x18))(&local_68);
  lVar6 = 0;
  do {
    if (*(char *)((long)local_60 + lVar6) == '\0') goto LAB_0377b7dc;
    if (*(char *)((long)local_60 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0377b7dc;
    }
    if (*(char *)((long)local_60 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0377b7dc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0377b7dc:
  uVar4 = (uint)lVar6;
  if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar6) {
    uVar4 = (int)param_1[2] + ~uVar2;
  }
  if (0 < (int)uVar4) {
    (**(code **)(local_68 + 0x18))(&local_68);
    memcpy((void *)((long)__src + (ulong)uVar2),local_60,(ulong)uVar4);
    *(undefined1 *)((long)__src + (long)(int)(uVar4 + uVar2)) = 0;
  }
switchD_0377b57c_default:
  return;
}

