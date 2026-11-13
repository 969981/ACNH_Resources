
void FUN_011e5354(long param_1,undefined4 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((param_3 & 1) == 0) {
    local_2c = *(undefined8 *)(param_2 + 10);
    puVar3 = &DAT_040a0a74;
  }
  else {
    local_2c = *(undefined8 *)(param_2 + 10);
    puVar3 = &DAT_040d47fe;
  }
  local_24 = param_2[0xc];
  local_34 = *param_2;
  uStack_30 = param_2[1];
  uVar2 = FUN_011ea808(0,param_1,&local_34,&local_2c,puVar3);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_1 + 0x1e138) == '\0') {
      lVar4 = 0;
    }
    else if (*(char *)(param_1 + 0x1e139) == '\0') {
      lVar4 = 1;
    }
    else if (*(char *)(param_1 + 0x1e13a) == '\0') {
      lVar4 = 2;
    }
    else if (*(char *)(param_1 + 0x1e13b) == '\0') {
      lVar4 = 3;
    }
    else if (*(char *)(param_1 + 0x1e13c) == '\0') {
      lVar4 = 4;
    }
    else if (*(char *)(param_1 + 0x1e13d) == '\0') {
      lVar4 = 5;
    }
    else if (*(char *)(param_1 + 0x1e13e) == '\0') {
      lVar4 = 6;
    }
    else if (*(char *)(param_1 + 0x1e13f) == '\0') {
      lVar4 = 7;
    }
    else if (*(char *)(param_1 + 0x1e140) == '\0') {
      lVar4 = 8;
    }
    else if (*(char *)(param_1 + 0x1e141) == '\0') {
      lVar4 = 9;
    }
    else if (*(char *)(param_1 + 0x1e142) == '\0') {
      lVar4 = 10;
    }
    else if (*(char *)(param_1 + 0x1e143) == '\0') {
      lVar4 = 0xb;
    }
    else if (*(char *)(param_1 + 0x1e144) == '\0') {
      lVar4 = 0xc;
    }
    else if (*(char *)(param_1 + 0x1e145) == '\0') {
      lVar4 = 0xd;
    }
    else if (*(char *)(param_1 + 0x1e146) == '\0') {
      lVar4 = 0xe;
    }
    else if (*(char *)(param_1 + 0x1e147) == '\0') {
      lVar4 = 0xf;
    }
    else if (*(char *)(param_1 + 0x1e148) == '\0') {
      lVar4 = 0x10;
    }
    else if (*(char *)(param_1 + 0x1e149) == '\0') {
      lVar4 = 0x11;
    }
    else if (*(char *)(param_1 + 0x1e14a) == '\0') {
      lVar4 = 0x12;
    }
    else if (*(char *)(param_1 + 0x1e14b) == '\0') {
      lVar4 = 0x13;
    }
    else if (*(char *)(param_1 + 0x1e14c) == '\0') {
      lVar4 = 0x14;
    }
    else if (*(char *)(param_1 + 0x1e14d) == '\0') {
      lVar4 = 0x15;
    }
    else if (*(char *)(param_1 + 0x1e14e) == '\0') {
      lVar4 = 0x16;
    }
    else if (*(char *)(param_1 + 0x1e14f) == '\0') {
      lVar4 = 0x17;
    }
    else {
      if (*(char *)(param_1 + 0x1e150) != '\0') {
        return;
      }
      lVar4 = 0x18;
    }
    lVar1 = param_1 + lVar4 * 0x10;
    *(undefined4 *)(lVar1 + 0x1dfb0) = param_2[6];
    *(undefined4 *)(lVar1 + 0x1dfb4) = param_2[7];
    ((char *)(param_1 + 0x1e138))[lVar4] = '\x14';
  }
  return;
}

