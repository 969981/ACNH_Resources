
void FUN_0365ba18(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar3 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar3 = FUN_0365c1e0(uVar3,param_1 + 0x2098,iVar1);
    uVar3 = FUN_0365c320(uVar3,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar3,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  if (*(char *)(param_1 + 0x211e) != '\0') {
    if ((*(uint *)(param_1 + 0x2198) < 0x401) && (*(int *)(param_1 + 0x2114) != 0)) {
      *(undefined4 *)(param_1 + 0x2118) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x2118) = *(uint *)(param_1 + 0x2198);
      uVar4 = (param_2 & 0xffffffff) >> 3 & 0x1f;
      bVar2 = (&DAT_041979c4)[uVar4];
      *(char *)(param_1 + 0x211c) = (char)uVar4;
      *(uint *)(param_1 + 0x2114) = (uint)bVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x2130) = 1;
  return;
}

