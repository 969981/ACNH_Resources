
int FUN_002926e0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint local_80 [32];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == param_1 + 8) {
    return 1;
  }
  uVar3 = 0;
  do {
    uVar2 = (uint)uVar3;
    if (uVar2 != 0) {
      uVar5 = uVar3;
      puVar7 = local_80;
      do {
        if (*puVar7 == *(int *)(lVar6 + 0x28)) goto LAB_0029270c;
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
      if (0x1f < uVar2) break;
    }
    local_80[uVar3] = *(uint *)(lVar6 + 0x28);
    uVar3 = (ulong)(uVar2 + 1);
LAB_0029270c:
    lVar6 = *(long *)(lVar6 + 8);
  } while (lVar6 != param_1 + 8);
  if ((int)uVar3 == 1) {
    uVar4 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = 1;
    uVar5 = 0;
    do {
      uVar4 = uVar5 + 2;
      if (local_80[uVar5] < param_2) {
        iVar1 = iVar1 + 1;
      }
      if (local_80[uVar5 + 1] < param_2) {
        iVar1 = iVar1 + 1;
      }
      uVar5 = uVar4;
    } while ((uVar3 & 0xfe) != uVar4);
  }
  if (((uVar3 & 1) != 0) && (local_80[uVar4] < param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

