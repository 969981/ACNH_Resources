
void FUN_0171b3a0(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *__src;
  undefined1 auStack_14c [255];
  undefined1 local_4d;
  uint local_48;
  
  local_4d = 0;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (auStack_14c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_0171b45c;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0171b45c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0171b45c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0171b45c:
    iVar2 = (int)lVar4;
    if (0xff < (int)lVar4) {
      iVar2 = 0xff;
    }
    memcpy(auStack_14c,__src,(long)iVar2);
    auStack_14c[iVar2] = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar6 = (byte *)param_1[1];
  uVar3 = (uint)*pbVar6;
  if (*pbVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    do {
      pbVar6 = pbVar6 + 1;
      uVar5 = crc32b(uVar5,uVar3,0x4c11db7);
      uVar3 = (uint)*pbVar6;
    } while (uVar3 != 0);
    uVar5 = ~uVar5;
  }
  local_48 = uVar5;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_007c1520(uVar5,param_1[1]);
  return;
}

