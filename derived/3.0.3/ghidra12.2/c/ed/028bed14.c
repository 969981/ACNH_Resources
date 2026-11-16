
undefined8 FUN_028bed14(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_05574040 != 0) && (*(long *)(DAT_05574040 + 0x10) != 0)) {
    plVar4 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0xe8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*plVar4 + 0x30))();
    if ((DAT_05574040 != 0) &&
       (puVar10 = *(undefined4 **)(DAT_05574040 + 0x80), lVar5 != 0 && puVar10 != (undefined4 *)0x0)
       ) {
      lVar9 = *(long *)(lVar5 + 0x60);
      if (lVar9 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar5 + 0x60);
          uVar6 = uVar6 & 0xffffffff;
          if (lVar9 == 0) goto LAB_028bedf8;
        }
        plVar4 = *(long **)(lVar9 + 0x20);
        if (plVar4 != (long *)0x0) {
          local_68 = *(undefined8 *)(lVar5 + 0x40);
          uStack_60 = *(undefined8 *)(lVar5 + 0x48);
          local_58 = 0x100;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
      }
LAB_028bedf8:
      puVar1 = (undefined4 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40));
      *puVar1 = 0xa0002;
      puVar1[1] = 0xa0028;
      puVar1[2] = 2;
      puVar3 = PTR_DAT_04bb21a8;
      *(undefined2 *)(puVar1 + 3) = 2;
      uVar8 = *(ushort *)puVar3;
      uVar2 = uVar8;
      if (uVar8 <= *(ushort *)((long)puVar1 + 0xe)) {
        uVar2 = *(ushort *)((long)puVar1 + 0xe);
      }
      *(ushort *)((long)puVar1 + 0xe) = uVar2;
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 0x18), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
        uVar8 = *(ushort *)puVar3;
      }
      *puVar10 = 0xa0002;
      puVar10[1] = 0xa0028;
      puVar10[2] = 2;
      *(undefined2 *)(puVar10 + 3) = 2;
      if (uVar8 <= *(ushort *)((long)puVar10 + 0xe)) {
        uVar8 = *(ushort *)((long)puVar10 + 0xe);
      }
      *(ushort *)((long)puVar10 + 0xe) = uVar8;
      return 1;
    }
  }
  return 0;
}

