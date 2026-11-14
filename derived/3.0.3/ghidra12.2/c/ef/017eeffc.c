
void FUN_017eeffc(long param_1,int param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  *(int *)(param_1 + 0x140) = param_2;
  if ((param_3 & 1) != 0) {
    FUN_017ef108(param_1,0,0);
    FUN_017eff3c(param_1,0,0);
    FUN_017f0b3c(param_1);
    param_2 = *(int *)(param_1 + 0x140);
  }
  uVar3 = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar3 = 1;
    }
    else {
      if (param_2 != 3) {
        lVar4 = DAT_05231900;
        goto LAB_017ef0a0;
      }
      uVar3 = 2;
    }
  }
  lVar4 = *(long *)PTR_DAT_04bb2200;
  *(undefined4 *)(*(long *)(lVar4 + 0x70) + 0x98) = uVar3;
  *(undefined1 *)(*(long *)(lVar4 + 0x80) + 0x60) = 1;
  param_2 = *(int *)(param_1 + 0x140);
LAB_017ef0a0:
  lVar5 = *(long *)(lVar4 + 0x70);
  *(bool *)(lVar5 + 0x9d) = param_2 != 2;
  *(undefined1 *)(*(long *)(lVar4 + 0x80) + 0x60) = 1;
  uVar1 = *(undefined1 *)(lVar5 + 0x9d);
  *(undefined1 *)(lVar5 + 0x9c) = uVar1;
  if (*(long *)(lVar5 + 0xa8) != 0) {
    lVar4 = *(long *)(*(long *)(lVar5 + 0xa8) + 0x10);
    puVar2 = (undefined1 *)(**(code **)(*(long *)(lVar4 + 0x158) + 0xf0))(lVar4 + 0x158);
    *puVar2 = uVar1;
    *(uint *)(lVar4 + 0x178) = *(uint *)(lVar4 + 0x178) | 0x1000000;
  }
  return;
}

