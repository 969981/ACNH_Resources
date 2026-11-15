
byte FUN_01e06398(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 != (byte *)0x0) {
    *param_2 = 0;
  }
  uVar2 = FUN_01d77c78(param_3);
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
    goto LAB_01e064d4;
  }
  uVar2 = FUN_01d77c78(param_3);
  if ((uVar2 & 1) != 0) {
    switch(*(uint *)(param_3 + 8)) {
    case 0:
      uVar5 = *(uint *)(param_3 + 4);
      uVar4 = *(uint *)(param_1 + 0x170);
      if (uVar4 != uVar5 && (uVar5 <= uVar4 && (int)uVar5 <= (int)uVar4)) {
        lVar3 = *(long *)(param_1 + 0x178);
        goto LAB_01e06490;
      }
      break;
    case 1:
      uVar5 = *(uint *)(param_3 + 4);
      uVar4 = *(uint *)(param_1 + 0x180);
      if (uVar4 != uVar5 && (uVar5 <= uVar4 && (int)uVar5 <= (int)uVar4)) {
        lVar3 = *(long *)(param_1 + 0x188);
        goto LAB_01e06490;
      }
      break;
    case 2:
      lVar3 = *(long *)(param_1 + 0x1b8);
      bVar1 = 1;
      uVar5 = *(uint *)(param_3 + 4);
      uVar4 = *(uint *)(param_1 + 0x1b0);
      if (lVar3 == 0) {
        uVar4 = 0xffffffff;
      }
      if (((int)uVar4 <= (int)uVar5) || (*(uint *)(param_1 + 0x1b0) <= uVar5)) goto LAB_01e064d4;
LAB_01e06490:
      if (*(long *)(lVar3 + (long)(int)uVar5 * 8) != 0) {
        bVar1 = 0;
        if ((*(uint *)(param_3 + 8) < 3) && (*(char *)(param_3 + 0xe) == '\0')) {
          bVar1 = (*(code *)**(undefined8 **)(param_1 + 0x120))(param_1 + 0x120);
          bVar1 = bVar1 ^ 1;
          if (param_2 != (byte *)0x0) {
            *param_2 = bVar1 & 1;
          }
        }
        goto LAB_01e064d4;
      }
      break;
    case 3:
      lVar3 = *(long *)(param_1 + 0x250);
      if (lVar3 != 0) {
        uVar5 = *(uint *)(param_3 + 4);
        uVar4 = *(uint *)(param_1 + 0x248);
LAB_01e06488:
        if (uVar4 <= uVar5) {
          uVar5 = 0;
        }
        goto LAB_01e06490;
      }
      break;
    case 4:
      lVar3 = *(long *)(param_1 + 0x208);
      if (lVar3 != 0) {
        uVar5 = *(uint *)(param_3 + 4);
        uVar4 = *(uint *)(param_1 + 0x200);
        goto LAB_01e06488;
      }
    }
  }
  bVar1 = 1;
LAB_01e064d4:
  return bVar1 & 1;
}

