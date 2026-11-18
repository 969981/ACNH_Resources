
ushort FUN_037242d0(long param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  ushort *__src;
  size_t __n;
  undefined *local_50;
  ushort *puStack_48;
  int local_40;
  ushort local_3c;
  undefined1 local_3a;
  undefined1 local_35;
  
  local_35 = 0;
  local_3c = local_3c & 0xff00;
  local_40 = 8;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  pcVar4 = (char *)param_2[1];
  puStack_48 = &local_3c;
  if (((*pcVar4 == 'o') && (pcVar4[1] == 't')) && (pcVar4[2] == 'g')) {
    __n = 3;
    local_3c = 0x746f;
    local_3a = 0x67;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (ushort *)param_2[1];
    if (&local_3c == __src) goto LAB_037243f4;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_037243cc;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_037243cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_037243cc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_037243cc:
    iVar3 = (int)lVar5;
    if (local_40 <= (int)lVar5) {
      iVar3 = local_40 + -1;
    }
    __n = (size_t)iVar3;
    memcpy(&local_3c,__src,__n);
  }
  *(undefined1 *)((long)&local_3c + __n) = 0;
LAB_037243f4:
  iVar3 = FUN_03722560(param_1,&local_50);
  if (iVar3 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ushort *)(*(long *)(*(long *)(param_1 + 0xe8) + (long)iVar3 * 8) + 0x114) >> 5 & 1;
  }
  return uVar2;
}

