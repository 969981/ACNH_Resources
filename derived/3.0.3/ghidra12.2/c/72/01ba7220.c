
void FUN_01ba7220(undefined8 *param_1,ulong param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *__dest;
  void *__src;
  undefined8 *puVar5;
  undefined8 local_b8;
  ulong local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined *local_50;
  undefined1 *puStack_48;
  
  __dest = (void *)param_1[2];
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_01ba72c0;
      lVar2 = param_3[1] + lVar4;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01ba72c0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01ba72c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01ba72c0:
    iVar3 = (int)lVar4;
    if (*(int *)(param_1 + 3) <= (int)lVar4) {
      iVar3 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  local_b8._0_4_ = (uint)local_b8 & 0xff000000;
  uStack_7e = 0;
  local_b8 = (undefined *)CONCAT44(8,(uint)local_b8);
  local_70 = 0x100;
  puVar5 = param_1 + 0xc;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = (undefined4)*param_1;
  local_84 = (undefined4)((ulong)*param_1 >> 0x20);
  uStack_80 = 1;
  uStack_6c = 0;
  local_78 = 0x280;
  uStack_74 = 0;
  local_a0 = "MsgAResExtra";
  local_98 = 0;
  local_94 = 0;
  local_b0 = param_2 & 0xffffffff;
  local_a8 = puVar1;
  FUN_03f2ab60(puVar5,&local_b8);
  local_b0 = CONCAT44(local_b0._4_4_,1);
  local_98 = 0x1010100;
  uStack_90 = CONCAT31(uStack_90._1_3_,1);
  local_94 = 0x1000100;
  uStack_68 = 0;
  uStack_74 = 0;
  local_b8 = PTR_DAT_04bdf0b0 + 0x10;
  uStack_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_7d = 0;
  uStack_7c = 0;
  local_78 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_70 = SUB82(puVar5,0);
  uStack_6e = (undefined2)((ulong)puVar5 >> 0x10);
  uStack_6c = (undefined4)((ulong)puVar5 >> 0x20);
  puStack_48 = &DAT_0419b684;
  local_a0 = "MsgAResArcExtra";
  local_a8 = puVar1;
  local_50 = puVar1;
  FUN_0081a630(param_1 + 0x2e,param_1 + 1,&local_b8,1);
  return;
}

