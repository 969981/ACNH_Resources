
void FUN_02812830(long param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  FUN_027f9960(param_1 + 0x10);
  lStack_78 = param_1 + 0x18c;
  local_80 = PTR_DAT_04bc35f8 + 0x10;
  local_70 = PTR_LAB_04bc35e8;
  uStack_68 = 0;
  local_50 = PTR_LAB_04bc35e8;
  uStack_48 = 0;
  uVar7 = *(uint *)(param_1 + 0x11acc);
  if (8999 < uVar7) {
    uVar7 = 9000;
  }
  local_60 = local_80;
  pcStack_58 = (char *)lStack_78;
  FUN_0277bf00(uVar7,&local_60);
  uVar7 = *(uint *)(param_1 + 0x11acc);
  if (8999 < uVar7) {
    uVar7 = 9000;
  }
  FUN_0277b6e0(param_2,uVar7,param_3,&local_80);
  puVar3 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "CatchtFesBox_Valid";
  iVar4 = FUN_0274ce10(param_3,&local_60);
  if ((iVar4 == 0) || (*param_2 != 0)) {
    FUN_028036dc(param_1 + 0x11ad0);
  }
  FUN_028036dc(param_1 + 0x11b74);
  if (*param_2 != 0) {
    local_60 = puVar3 + 0x10;
    pcStack_58 = "CatchtFesBox_Valid";
    FUN_0274d104(param_3,&local_60,0);
  }
  FUN_0281da50(param_1 + 0x2f188,param_2,param_3);
  local_60 = puVar3 + 0x10;
  pcStack_58 = "TodayGrowUp";
  FUN_0274ce10(param_3,&local_60);
  if (*param_2 != 0) {
    lVar1 = param_1 + 0x22150;
    lVar6 = 400;
    puVar5 = (uint *)(param_1 + 0x2d054);
    do {
      lVar2 = lVar1 + (ulong)puVar5[-1] * 0x70;
      if (399 < puVar5[-1]) {
        lVar2 = lVar1;
      }
      *(undefined2 *)(lVar2 + 0x6c) = 0;
      lVar2 = lVar1 + (ulong)*puVar5 * 0x70;
      if (399 < *puVar5) {
        lVar2 = lVar1;
      }
      lVar6 = lVar6 + -2;
      *(undefined2 *)(lVar2 + 0x6c) = 0;
      puVar5 = puVar5 + 2;
    } while (lVar6 != 0);
    if (*param_2 != 0) {
      *(undefined1 *)(param_1 + 0x2f184) = 0;
    }
  }
  FUN_02812a44(param_1,param_2,param_3);
  FUN_0282cbb0(param_1 + 0x13698,param_2,*param_3);
  if (*param_2 != 0) {
    memset((void *)(param_1 + 0x38888),0,0x3fc);
  }
  FUN_02810010(param_1 + 0x38fb0,*(undefined1 *)((long)param_2 + 0x2c));
  if (param_2[1] != 0) {
    *(undefined1 *)(param_1 + 0x3b548) = 0;
    if (param_2[1] != 0) {
      *(undefined2 *)(param_1 + 0x3b531) = 0;
    }
  }
  return;
}

