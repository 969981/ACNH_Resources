
void FUN_0033f050(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_70;
  undefined8 uStack_68;
  
  if (param_4 == 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_3 + 0x240) + (ulong)param_4 * 8 + 0x350);
  }
  lVar7 = *(long *)(param_3 + 0x4a8);
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x240) + 0x348);
  uVar9 = *(undefined8 *)(param_2 + 0x1e0);
  uVar10 = *(undefined8 *)(param_6 + 0x28);
  uVar1 = FUN_0033779c(param_1,param_3,(ulong)param_4,lVar6);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(lVar6 + 0x48) != -1) {
      lVar4 = *(long *)(lVar7 + 0x10);
      uStack_68 = *(undefined8 *)(lVar4 + 0x1e0);
      local_70 = ((*(long *)(lVar7 + 0x30) +
                  *(long *)(lVar7 + 0x38) * (ulong)*(uint *)(lVar7 + 0x5c)) -
                 *(long *)(lVar4 + 0x170)) + *(long *)(lVar4 + 0x1d8);
      FUN_00348d48(param_1,(long)*(char *)(lVar6 + 0x48),0,&local_70);
    }
    for (lVar4 = *(long *)(lVar7 + 0x40); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x68)) {
      if (0 < *(int *)(lVar4 + 0x78)) {
        FUN_0033f1f0(param_1,uVar9,uVar10,param_3,lVar6,uVar8,lVar7,lVar4,param_7,param_8);
      }
    }
    iVar3 = *(int *)(param_3 + 0x230);
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 0x18;
      do {
        lVar2 = *(long *)(*(long *)(param_3 + 0xb0) + lVar5);
        if (((lVar2 != 0) && (*(char *)(lVar2 + 0x84) != '\0')) && (0 < *(int *)(lVar2 + 0x78))) {
          FUN_0033f1f0(param_1,uVar9,uVar10,param_3,lVar6,uVar8,lVar7,lVar2,param_7,param_8);
          iVar3 = *(int *)(param_3 + 0x230);
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x20;
      } while (lVar4 < iVar3);
    }
  }
  return;
}

