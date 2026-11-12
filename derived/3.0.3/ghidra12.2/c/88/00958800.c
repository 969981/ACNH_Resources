
ulong FUN_00958800(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = param_1[1];
  uVar6 = param_3 & 0xffffffff;
  (**(code **)(*param_1 + 0x18))();
  lVar5 = 0;
  do {
    if (*(char *)(param_1[1] + lVar5) == '\0') {
LAB_0095887c:
      uVar4 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x009588f8;
    }
    lVar1 = param_1[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0095887c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      uVar4 = (int)lVar5 + 2;
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x009588f8;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  uVar4 = 0;
joined_r0x009588f8:
  if ((int)param_3 < 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar6 = 0;
    do {
      if (*(char *)(param_2[1] + uVar6) == '\0') goto LAB_00958884;
      lVar5 = param_2[1] + uVar6;
      if (*(char *)(lVar5 + 1) == '\0') {
        uVar6 = uVar6 + 1;
        goto LAB_00958884;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        uVar6 = uVar6 + 2;
        goto LAB_00958884;
      }
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    uVar6 = 0;
  }
LAB_00958884:
  uVar2 = (uint)uVar6;
  if ((int)((int)param_1[2] - uVar4) <= (int)(uint)uVar6) {
    uVar2 = (int)param_1[2] + ~uVar4;
  }
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy((void *)(lVar3 + (ulong)uVar4),(void *)param_2[1],uVar6);
    *(undefined1 *)(lVar3 + (int)(uVar2 + uVar4)) = 0;
  }
  return uVar6;
}

