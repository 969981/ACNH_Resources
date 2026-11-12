
void FUN_009395b0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb27c8;
  if (*(char *)(param_3 + 0xa0) != '\0') {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c8;
  lVar4 = FUN_00948b10(param_3,param_3 + 0x48);
  if (lVar4 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    cVar2 = *(char *)(param_3 + 0xa0);
  }
  else {
    local_48 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    puStack_50 = puStack_60;
    uVar5 = FUN_0096dcb0(param_1,param_2,*(undefined8 *)(lVar10 + 0x90),lVar4,param_4,&local_68,0);
    uVar6 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0;
    if ((uVar5 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar10 + 0x90),&local_68);
      uVar6 = (undefined4)local_48;
      uVar8 = (undefined4)local_58;
      uVar7 = local_58._4_4_;
      uVar9 = local_48._4_4_;
    }
    cVar2 = *(char *)(param_3 + 0xa0);
  }
  if (cVar2 == '\0') {
    lVar4 = *(long *)puVar3;
    lVar10 = *(long *)(lVar4 + 0x1150);
    plVar1 = (long *)(*(int *)(lVar4 + 0x1164) + param_3);
    *(long **)(lVar4 + 0x1150) = plVar1;
    *plVar1 = lVar10;
    plVar1[1] = lVar4 + 0x1150;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar1;
    }
    *(int *)(lVar4 + 0x1160) = *(int *)(lVar4 + 0x1160) + 1;
  }
  *(undefined1 *)(param_3 + 0xa0) = 1;
  *(undefined4 *)(param_3 + 0x30) = uVar8;
  *(undefined4 *)(param_3 + 0x34) = uVar7;
  *(undefined4 *)(param_3 + 0x40) = uVar6;
  *(undefined4 *)(param_3 + 0x44) = uVar9;
  *(undefined4 *)(param_3 + 0xa4) = 1;
  return;
}

