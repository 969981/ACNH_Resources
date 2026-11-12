
void FUN_00939474(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,uint param_5
                 )

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb27c8;
  if (*(char *)(param_3 + 0xa0) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c8;
  lVar4 = FUN_00948910(param_3,param_3 + 0x48);
  if ((lVar4 != 0) && (lVar5 = *(long *)(lVar7 + 0x90), lVar5 != 0)) {
    local_68 = 0;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_70 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    local_60 = puStack_70;
    uVar6 = FUN_0096c350(param_1,param_2,lVar5,lVar4,param_4,&local_78,param_5 & 1);
    if ((uVar6 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar7 + 0x90),&local_78);
      cVar2 = *(char *)(param_3 + 0xa0);
      goto joined_r0x00939548;
    }
  }
  local_58._0_4_ = 0;
  local_68._4_4_ = 0;
  local_68._0_4_ = 0;
  local_58._4_4_ = 0;
  cVar2 = *(char *)(param_3 + 0xa0);
joined_r0x00939548:
  if (cVar2 == '\0') {
    lVar4 = *(long *)puVar3;
    lVar7 = *(long *)(lVar4 + 0x1150);
    plVar1 = (long *)(*(int *)(lVar4 + 0x1164) + param_3);
    *(long **)(lVar4 + 0x1150) = plVar1;
    *plVar1 = lVar7;
    plVar1[1] = lVar4 + 0x1150;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar1;
    }
    *(int *)(lVar4 + 0x1160) = *(int *)(lVar4 + 0x1160) + 1;
  }
  *(undefined1 *)(param_3 + 0xa0) = 1;
  *(undefined4 *)(param_3 + 0x30) = (undefined4)local_68;
  *(undefined4 *)(param_3 + 0x34) = local_68._4_4_;
  *(undefined4 *)(param_3 + 0x40) = (undefined4)local_58;
  *(undefined4 *)(param_3 + 0x44) = local_58._4_4_;
  *(undefined4 *)(param_3 + 0xa4) = 1;
  return;
}

