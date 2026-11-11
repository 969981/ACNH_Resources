
void FUN_00470c60(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_LAB_04864d28;
  if (param_1[3] != 0) {
    iVar2 = *(int *)(param_1 + 5);
    iVar5 = 0;
    do {
      iVar3 = iVar2 - iVar5;
      if (iVar3 == 0 || iVar2 < iVar5) {
        *(undefined4 *)(param_1 + 5) = 0;
        if (param_1[3] == 0) goto LAB_00470cc4;
        goto LAB_00470cc0;
      }
      iVar3 = (**(code **)(*(long *)param_1[3] + 0x28))
                        ((long *)param_1[3],param_1[4] + (long)iVar5,iVar3);
      iVar5 = iVar3 + iVar5;
    } while (iVar3 != 0);
    if (param_1[3] != 0) {
LAB_00470cc0:
      FUN_004435c0();
    }
  }
LAB_00470cc4:
  if (*(char *)(param_1 + 6) != '\0') {
    uVar6 = param_1[4];
    lVar4 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar1 = DAT_04c6f058;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    FUN_00438a10(*(undefined8 *)(lVar1 + 0x58),uVar6);
  }
  FUN_0046fc10(param_1);
  return;
}

