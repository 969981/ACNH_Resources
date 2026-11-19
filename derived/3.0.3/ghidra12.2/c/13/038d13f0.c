
int FUN_038d13f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_60;
  long lStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  lVar2 = param_1[1];
  local_d0 = param_3;
  uStack_c8 = param_4;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_7;
  uStack_a8 = param_8;
  (**(code **)(*param_1 + 0x18))();
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_038d14b0;
    lVar1 = param_1[1] + lVar7;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038d14b0;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038d14b0;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_038d14b0:
  iVar6 = (int)lVar7;
  uVar3 = (int)param_1[2] - iVar6;
  uVar5 = (ulong)(int)uVar3;
  if (uVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uStack_48 = 0xffffff80ffffffd0;
    local_60 = (undefined1 *)register0x00000008;
    lStack_58 = (long)register0x00000008 + -0xa0;
    local_50 = &local_d0;
    uVar4 = nn::util::VSNPrintf(lVar2 + iVar6,uVar5,param_2,&local_60);
    if (((int)uVar4 < 0) || (uVar5 <= uVar4)) {
      *(undefined1 *)(uVar5 + lVar2 + iVar6 + -1) = 0;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar3 - 1;
    }
    if ((int)uVar4 < 0) {
      uVar4 = uVar3 - 1;
    }
  }
  return uVar4 + iVar6;
}

