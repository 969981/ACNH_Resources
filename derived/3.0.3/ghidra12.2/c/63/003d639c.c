
void FUN_003d639c(long *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(char *)((long)param_1 + 0xe1) == '\0') {
    uVar5 = FUN_003ca198();
    FUN_003ca570(uVar5,param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0xe1) = 1;
    lVar2 = param_1[0x1f];
  }
  else {
    lVar2 = param_1[0x1f];
  }
  if (lVar2 == 0) {
    memcpy(param_1 + 0x2271,param_2,0x2e0);
    *(undefined1 *)(param_1 + 0x22cd) = 0;
  }
  else if ((char)param_1[0x1b] != '\0') {
    if (*(char *)((long)param_1 + 0xdb) == '\0') {
      uVar3 = param_2[5];
      if (uVar3 == 0) {
        uVar3 = (uint)param_2[4] / 5;
      }
      *(uint *)(param_1 + 0x25) = uVar3;
      *(bool *)((long)param_1 + 0xe2) = 0 < (int)uVar3;
      *(undefined4 *)(param_1 + 0x23) = *param_2;
      param_1[0x24] = *(long *)(param_2 + 2);
      *(undefined4 *)(param_1 + 0x2210) = param_2[6];
      uVar5 = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(lVar2 + 0x348) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar2 + 0x350) = uVar5;
      *(long **)(param_1[0x1f] + 0x20) = param_1;
      *(long **)(param_1[0x1f] + 0x30) = param_1 + 0x27;
      *(uint *)(param_1[0x1f] + 0x38) = (uint)*(byte *)((long)param_1 + 0x12e);
      *(int *)(param_1[0x1f] + 0x3c) = (int)param_1[0x26];
      *(undefined1 *)(param_1[0x1f] + 0x59) = *(undefined1 *)((long)param_1 + 0x12f);
      (**(code **)(*param_1 + 0x38))(param_1,1);
      lVar2 = param_1[0x1f];
    }
    lVar4 = param_1[0x43];
    *(undefined2 *)((long)param_1 + 0xdf) = 0;
    *(undefined1 *)(param_1 + 0x22cd) = 1;
    lVar6 = param_1[0x44];
    *(undefined2 *)(lVar2 + 0x56) = *(undefined2 *)((long)param_1 + 0x134);
    *(long *)(lVar2 + 0x60) = lVar4;
    *(long *)(lVar2 + 0x68) = lVar6;
    strncpy((char *)(param_1[0x1f] + 0x70),(char *)(param_2 + 0xc),0x27f);
    lVar2 = param_1[0x1f];
    uVar5 = *(undefined8 *)(param_2 + 0xb2);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x48) = uVar5;
    lVar2 = param_1[0x1f];
    uVar5 = *(undefined8 *)(param_2 + 0xae);
    *(undefined8 *)(lVar2 + 0x2f0) = *(undefined8 *)(param_2 + 0xac);
    *(undefined8 *)(lVar2 + 0x2f8) = uVar5;
    lVar2 = param_1[0x1f];
    uVar5 = *(undefined8 *)(param_2 + 0xb6);
    *(undefined8 *)(lVar2 + 0x300) = *(undefined8 *)(param_2 + 0xb4);
    *(undefined8 *)(lVar2 + 0x308) = uVar5;
    uVar1 = DAT_04c1125c;
    lVar2 = param_1[0x1f];
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined1 *)(lVar2 + 0x58) = uVar1;
    FUN_003d9130(param_1[0x1f]);
    return;
  }
  return;
}

