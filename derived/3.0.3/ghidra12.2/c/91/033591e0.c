
void FUN_033591e0(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar4 = *(long *)PTR_DAT_04bc1118;
  lVar1 = param_1 + 0xb08;
  *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x156c) = param_2;
  *(undefined1 *)(param_1 + 0x1360) = 0;
  uVar3 = *(uint *)(param_1 + 0x1370);
  uVar5 = (ulong)uVar3;
  if (*(int *)(param_1 + 0x1374) == 0 && uVar3 == 0) {
    iVar8 = 0;
    goto LAB_033592a8;
  }
  if (uVar3 == 0) {
    iVar6 = 0;
  }
  else {
    uVar7 = (ulong)(uVar3 - 1);
    if (*(int *)(param_1 + 0x12e0) + -1 <= (int)uVar3) {
      uVar2 = uVar7;
      if (0x1f6 < uVar3) {
        uVar2 = 0;
      }
      if (0x1f5 < uVar3) {
        uVar5 = 0;
      }
      iVar6 = *(int *)(lVar1 + uVar2 * 4) + 1;
      if (iVar6 == *(int *)(lVar1 + uVar5 * 4)) {
        iVar8 = *(int *)(lVar4 + 0x474);
        if (*(short *)(*(long *)(lVar4 + 0x468) + (long)(iVar8 + -1) * 2) == 10) goto LAB_033592a8;
        goto LAB_033592a4;
      }
    }
    if (0x1f6 < uVar3) {
      uVar7 = 0;
    }
    iVar6 = *(int *)(lVar1 + uVar7 * 4) + 1;
  }
LAB_033592a4:
  iVar8 = iVar6 + *(int *)(param_1 + 0x1374);
LAB_033592a8:
  FUN_033618d0(lVar1,0xffffffff);
  FUN_03361cd0(lVar1,&local_34,&local_38,iVar8);
  *(undefined4 *)(param_1 + 0x1370) = local_34;
  *(undefined4 *)(param_1 + 0x1374) = local_38;
  *(undefined1 *)(param_1 + 0x17b3) = 1;
  *(undefined1 *)(param_1 + 0xb00) = 1;
  return;
}

