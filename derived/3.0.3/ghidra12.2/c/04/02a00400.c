
long FUN_02a00400(long param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x23aa8);
  nn::os::LockMutex((MutexType *)(param_1 + 0x23a70));
  plVar3 = (long *)(*(int *)(param_1 + 0x23abc) + param_2);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar3;
  *plVar3 = lVar4;
  plVar3[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar3;
  }
  *(int *)(param_1 + 0x23ab8) = *(int *)(param_1 + 0x23ab8) + 1;
  if (*(char *)(param_1 + 0x23ac0) == '\0') {
    lVar4 = 0;
  }
  else if (*(char *)(param_1 + 0x23ac4) == '\0') {
    lVar4 = 1;
  }
  else if (*(char *)(param_1 + 0x23ac8) == '\0') {
    lVar4 = 2;
  }
  else if (*(char *)(param_1 + 0x23acc) == '\0') {
    lVar4 = 3;
  }
  else if (*(char *)(param_1 + 0x23ad0) == '\0') {
    lVar4 = 4;
  }
  else if (*(char *)(param_1 + 0x23ad4) == '\0') {
    lVar4 = 5;
  }
  else if (*(char *)(param_1 + 0x23ad8) == '\0') {
    lVar4 = 6;
  }
  else if (*(char *)(param_1 + 0x23adc) == '\0') {
    lVar4 = 7;
  }
  else if (*(char *)(param_1 + 0x23ae0) == '\0') {
    lVar4 = 8;
  }
  else if (*(char *)(param_1 + 0x23ae4) == '\0') {
    lVar4 = 9;
  }
  else if (*(char *)(param_1 + 0x23ae8) == '\0') {
    lVar4 = 10;
  }
  else if (*(char *)(param_1 + 0x23aec) == '\0') {
    lVar4 = 0xb;
  }
  else if (*(char *)(param_1 + 0x23af0) == '\0') {
    lVar4 = 0xc;
  }
  else if (*(char *)(param_1 + 0x23af4) == '\0') {
    lVar4 = 0xd;
  }
  else if (*(char *)(param_1 + 0x23af8) == '\0') {
    lVar4 = 0xe;
  }
  else if (*(char *)(param_1 + 0x23afc) == '\0') {
    lVar4 = 0xf;
  }
  else if (*(char *)(param_1 + 0x23b00) == '\0') {
    lVar4 = 0x10;
  }
  else if (*(char *)(param_1 + 0x23b04) == '\0') {
    lVar4 = 0x11;
  }
  else if (*(char *)(param_1 + 0x23b08) == '\0') {
    lVar4 = 0x12;
  }
  else if (*(char *)(param_1 + 0x23b0c) == '\0') {
    lVar4 = 0x13;
  }
  else if (*(char *)(param_1 + 0x23b10) == '\0') {
    lVar4 = 0x14;
  }
  else if (*(char *)(param_1 + 0x23b14) == '\0') {
    lVar4 = 0x15;
  }
  else if (*(char *)(param_1 + 0x23b18) == '\0') {
    lVar4 = 0x16;
  }
  else if (*(char *)(param_1 + 0x23b1c) == '\0') {
    lVar4 = 0x17;
  }
  else {
    if (*(char *)(param_1 + 0x23b20) != '\0') {
      lVar4 = 0xff;
      goto LAB_02a005f8;
    }
    lVar4 = 0x18;
  }
  pcVar1 = (char *)(param_1 + 0x23ac0) + lVar4 * 4;
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
LAB_02a005f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x23a70));
  return lVar4;
}

