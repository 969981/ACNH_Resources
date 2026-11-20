
void FUN_03d85130(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x2c2) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2c2) >> 1 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x280);
    if ((char)plVar4[4] == '\0') {
      return;
    }
    plVar5 = (long *)((long)plVar4 + 0x24);
    if (*(char *)((long)plVar4 + 0x21) != '\0') {
      plVar5 = plVar4 + 5;
    }
    if ((int)*plVar5 == 0) {
      uVar3 = 0xf;
    }
    else {
      if ((int)*plVar5 != 1) {
        return;
      }
      uVar3 = 0x10;
    }
    *(undefined4 *)((long)plVar4 + 0x2c) = uVar3;
    uVar1 = FUN_03c83810(plVar4);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined4 *)((long)plVar4 + 0x24);
      *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
      *(undefined4 *)(plVar4 + 5) = uVar3;
      *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
      (**(code **)(*plVar4 + 0x48))(plVar4);
      if ((long *)plVar4[10] != plVar4 + 9) {
        lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
        plVar5 = (long *)(plVar4[10] - lVar6);
        do {
          (**(code **)(*plVar5 + 0x18))(plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
        } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
      }
    }
    FUN_03c835a0(plVar4);
    *(byte *)(param_1 + 0x2c3) = *(byte *)(param_1 + 0x2c3) & 0xfe;
    bVar2 = 0xfd;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x280);
    if ((char)plVar4[4] == '\0') {
      return;
    }
    plVar5 = (long *)((long)plVar4 + 0x24);
    if (*(char *)((long)plVar4 + 0x21) != '\0') {
      plVar5 = plVar4 + 5;
    }
    if ((int)*plVar5 == 4) {
      uVar3 = 0xe;
    }
    else {
      if ((int)*plVar5 != 5) {
        return;
      }
      uVar3 = 0x11;
    }
    *(undefined4 *)((long)plVar4 + 0x2c) = uVar3;
    uVar1 = FUN_03c83810(plVar4);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined4 *)((long)plVar4 + 0x24);
      *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
      *(undefined4 *)(plVar4 + 5) = uVar3;
      *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
      (**(code **)(*plVar4 + 0x48))(plVar4);
      if ((long *)plVar4[10] != plVar4 + 9) {
        lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
        plVar5 = (long *)(plVar4[10] - lVar6);
        do {
          (**(code **)(*plVar5 + 0x18))(plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
        } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
      }
    }
    FUN_03c835a0(plVar4);
    *(byte *)(param_1 + 0x2c3) = *(byte *)(param_1 + 0x2c3) | 1;
    bVar2 = 0xfe;
  }
  *(byte *)(param_1 + 0x2c2) = *(byte *)(param_1 + 0x2c2) & bVar2;
  return;
}

