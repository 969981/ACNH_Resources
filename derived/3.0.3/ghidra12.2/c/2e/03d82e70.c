
undefined8 FUN_03d82e70(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x280);
  if ((param_2 & 1) == 0) {
    if ((char)plVar4[4] == '\0') {
      return 0;
    }
    plVar5 = (long *)((long)plVar4 + 0x24);
    if (*(char *)((long)plVar4 + 0x21) != '\0') {
      plVar5 = plVar4 + 5;
    }
    if ((int)*plVar5 == 1) {
      *(undefined4 *)((long)plVar4 + 0x2c) = 0x10;
      uVar2 = FUN_03c83810(plVar4);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
        *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
        *(undefined4 *)(plVar4 + 5) = uVar1;
        *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if ((long *)plVar4[10] != plVar4 + 9) {
          lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
          plVar5 = (long *)(plVar4[10] - lVar6);
          do {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
            plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
          } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
        }
      }
    }
    else {
      if ((int)*plVar5 != 0) {
        return 0;
      }
      *(undefined4 *)((long)plVar4 + 0x2c) = 0xf;
      uVar2 = FUN_03c83810(plVar4);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
        *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
        *(undefined4 *)(plVar4 + 5) = uVar1;
        *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if ((long *)plVar4[10] != plVar4 + 9) {
          lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
          plVar5 = (long *)(plVar4[10] - lVar6);
          do {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
            plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
          } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
        }
      }
    }
    FUN_03c835a0(plVar4);
    *(byte *)(param_1 + 0x2c3) = *(byte *)(param_1 + 0x2c3) & 0xfe;
    bVar3 = 0xfd;
  }
  else {
    if ((char)plVar4[4] == '\0') {
      return 0;
    }
    plVar5 = (long *)((long)plVar4 + 0x24);
    if (*(char *)((long)plVar4 + 0x21) != '\0') {
      plVar5 = plVar4 + 5;
    }
    if ((int)*plVar5 == 5) {
      *(undefined4 *)((long)plVar4 + 0x2c) = 0x11;
      uVar2 = FUN_03c83810(plVar4);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
        *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
        *(undefined4 *)(plVar4 + 5) = uVar1;
        *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if ((long *)plVar4[10] != plVar4 + 9) {
          lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
          plVar5 = (long *)(plVar4[10] - lVar6);
          do {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
            plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
          } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
        }
      }
    }
    else {
      if ((int)*plVar5 != 4) {
        return 0;
      }
      *(undefined4 *)((long)plVar4 + 0x2c) = 0xe;
      uVar2 = FUN_03c83810(plVar4);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
        *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
        *(undefined4 *)(plVar4 + 5) = uVar1;
        *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if ((long *)plVar4[10] != plVar4 + 9) {
          lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
          plVar5 = (long *)(plVar4[10] - lVar6);
          do {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
            plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
          } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
        }
      }
    }
    FUN_03c835a0(plVar4);
    *(byte *)(param_1 + 0x2c3) = *(byte *)(param_1 + 0x2c3) | 1;
    bVar3 = 0xfe;
  }
  *(byte *)(param_1 + 0x2c2) = *(byte *)(param_1 + 0x2c2) & bVar3;
  return 1;
}

