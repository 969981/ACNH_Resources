
void FUN_02c21428(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  
  lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0xf0) + 0x40);
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x30) != '\0')) {
    if ((*(undefined8 **)(lVar9 + 0x28) != (undefined8 *)0x0) &&
       (lVar4 = (**(code **)(*(long *)**(undefined8 **)(lVar9 + 0x28) + 0x10))(), lVar4 != 0)) {
      *(undefined2 *)(lVar4 + 0x5c) = 0;
    }
    *(undefined1 *)(lVar9 + 0x31) = 1;
  }
  puVar1 = PTR_DAT_04bc0cb8;
  lVar9 = *(long *)(param_1 + 0xef0);
  if (lVar9 != 0) {
    lVar4 = *(long *)(param_1 + 0xf68);
    if ((lVar4 != 0) && (lVar10 = *(long *)(lVar9 + 8), lVar10 != 0)) {
      local_80 = 0;
      local_78 = 0;
      lVar9 = lVar10 + 0x210;
      uVar5 = (*(code *)**(undefined8 **)(lVar10 + 0x210))(lVar9);
      uVar2 = (**(code **)(*(long *)(lVar10 + 0x210) + 0x28))(lVar9);
      uVar3 = (**(code **)(*(long *)(lVar10 + 0x210) + 0x30))(lVar9);
      plVar6 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x210))(lVar9);
      local_70 = puVar1 + 0x10;
      local_68 = 0xb;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
      uVar7 = (**(code **)(plVar6[3] + 0xd0))(plVar6[1]);
      FUN_030b28c0(*(undefined4 *)(lVar10 + 0x25c),&local_78,&local_80,uVar5,uVar2,uVar3,
                   lVar10 + 0x22c,lVar10 + 0x264,uVar7);
      *(undefined4 *)(lVar4 + 0x50) = (undefined4)local_78;
      *(undefined4 *)(lVar4 + 0x54) = local_78._4_4_;
      lVar9 = *(long *)(param_1 + 0xef0);
    }
    plVar6 = *(long **)(lVar9 + 0x20);
    if (plVar6 != (long *)0x0) {
      puVar1 = puVar1 + 0x10;
      local_68 = 7;
      local_70 = puVar1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
      uVar8 = (**(code **)(plVar6[3] + 0x90))(plVar6[1]);
      if ((uVar8 & 1) == 0) {
        plVar6 = *(long **)(lVar9 + 0x20);
        local_68 = 7;
        local_70 = puVar1;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
        (**(code **)(plVar6[3] + 0x88))(plVar6[1],1);
      }
    }
  }
  return;
}

