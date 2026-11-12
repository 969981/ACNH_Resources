
undefined8 FUN_006e9a70(int *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  byte local_30 [5];
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  
  *(undefined1 *)param_2[1] = 0;
  if (*param_1 == 0) {
    FUN_038d1270(param_2,"%012llu",*(undefined8 *)(param_1 + 2));
    return 1;
  }
  if (*param_1 != 1) {
    return 1;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = *(ulong *)(param_1 + 2);
  pcVar7 = (char *)param_2[1];
  if (uVar5 < 0x1e) {
    uVar6 = 0;
    uVar4 = 0;
    local_30[0] = (byte)uVar5;
  }
  else {
    uVar4 = 0;
    do {
      bVar3 = (byte)(uVar5 / 0x1e);
      local_30[uVar4] = (char)uVar5 + bVar3 * -0x1e;
      uVar4 = uVar4 + 1;
      bVar1 = 899 < uVar5;
      uVar5 = uVar5 / 0x1e;
    } while (bVar1);
    uVar6 = uVar4 & 0xffffffff;
    local_30[uVar6] = bVar3;
    if (10 < (int)uVar4) goto LAB_006e9b50;
  }
  memset(local_30 + uVar6 + 1,0,(ulong)(10 - (int)uVar4) + 1);
LAB_006e9b50:
  *pcVar7 = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_25];
  pcVar7[1] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_26];
  pcVar7[2] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_27];
  pcVar7[3] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_28];
  pcVar7[4] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_29];
  pcVar7[5] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_2a];
  pcVar7[6] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_2b];
  pcVar7[7] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_30[4]];
  pcVar7[8] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_30[3]];
  pcVar7[9] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_30[2]];
  pcVar7[10] = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_30[1]];
  cVar2 = "0123456789BCDFGHJKLMNPQRSTVWXY"[local_30[0]];
  pcVar7[0xc] = '\0';
  pcVar7[0xb] = cVar2;
  return 1;
}

