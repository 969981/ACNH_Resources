
byte FUN_016d4100(undefined4 param_1,uint param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined *local_60;
  char *local_58;
  undefined4 local_50;
  char local_4c [7];
  undefined1 local_45;
  
  if (param_2 != 0xffffffff) {
    local_45 = 0;
    local_50 = 8;
    local_4c[0] = '\0';
    local_58 = local_4c;
    local_60 = PTR_DAT_04bb3768 + 0x10;
    uVar5 = FUN_021d62e0(&local_60,param_1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((*local_58 != '\0') && (DAT_05574040 != 0)) {
      lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
      if (lVar6 == 0) {
        return 0;
      }
      plVar8 = *(long **)(&LAB_00285bb8 + lVar6);
      if ((plVar8 == (long *)0x0) || (puVar7 = (undefined8 *)*plVar8, puVar7 == (undefined8 *)0x0))
      {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar7)();
        uVar3 = uVar3 ^ 1;
      }
      uVar4 = FUN_0220ce00(*(undefined8 *)PTR_DAT_04bb4138,&local_60);
      if ((int)uVar4 < 0) {
        uVar4 = 0xffffffff;
      }
      if ((((uVar3 & 1) == 0) && (lVar9 = *(long *)(&LAB_00285bb8 + lVar6), lVar9 != 0)) &&
         (puVar7 = *(undefined8 **)(lVar9 + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      if (-1 < (int)uVar4) {
        puVar2 = &LAB_00285c00 + lVar6 + (ulong)uVar4 * 0x70;
        if (0x1a3 < uVar4) {
          puVar2 = &LAB_00285c00 + lVar6;
        }
        if ((*(long **)(puVar2 + 0x28) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(puVar2 + 0x28), puVar7 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar7)();
          uVar3 = uVar3 ^ 1;
        }
        bVar1 = *(byte *)(*(long *)(puVar2 + 0x10) + *(long *)(puVar2 + 8)) >>
                (ulong)(param_2 & 0x1f) & 1;
        if ((uVar3 & 1) != 0) {
          return bVar1;
        }
        if (*(long *)(puVar2 + 0x28) == 0) {
          return bVar1;
        }
        puVar7 = *(undefined8 **)(*(long *)(puVar2 + 0x28) + 8);
        if (puVar7 == (undefined8 *)0x0) {
          return bVar1;
        }
        (**(code **)*puVar7)();
        return bVar1;
      }
    }
  }
  return 0;
}

