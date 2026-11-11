
int FUN_00422c80(long *param_1,uint param_2,long *param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  uVar3 = *(uint *)(param_3 + 1);
  uVar4 = *(undefined8 *)PTR_PTR_04bd4d28;
  if (uVar3 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
    FUN_00426990(uVar4,param_3,8);
    uVar3 = *(uint *)(param_3 + 1);
  }
  lVar6 = 0;
  *(long *)(*param_3 + (long)(int)uVar3 * 8) = lVar5;
  while( true ) {
    *(uint *)(param_3 + 1) = uVar3 + 1;
    lVar5 = *param_1;
    pvVar2 = memchr((void *)(lVar5 + (int)(uint)lVar6),param_2 & 0xff,
                    (long)(int)((int)param_1[1] + ~(uint)lVar6));
    iVar1 = (int)pvVar2 - (int)lVar5;
    if (pvVar2 == (void *)0x0) {
      iVar1 = -1;
    }
    if (iVar1 < 0) break;
    *(undefined1 *)(lVar5 + iVar1) = 0;
    lVar6 = (long)iVar1 + 1;
    lVar5 = *param_1;
    uVar3 = *(uint *)(param_3 + 1);
    if (uVar3 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
      FUN_00426990(uVar4,param_3,8);
      uVar3 = *(uint *)(param_3 + 1);
    }
    *(long *)(*param_3 + (long)(int)uVar3 * 8) = lVar5 + lVar6;
  }
  return uVar3 + 1;
}

