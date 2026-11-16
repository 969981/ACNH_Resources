
undefined8 FUN_02702824(long param_1)

{
  void *__s;
  undefined4 *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_44;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x180);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar8 = (**(code **)(*plVar7 + 0x30))();
  if (lVar8 == 0) {
    return 0;
  }
  uVar5 = FUN_026ef5fc(param_1);
  lVar9 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x30))();
  if ((uVar5 < 8) && (lVar10 = FUN_026eed64(param_1,uVar5), lVar9 != 0 && lVar10 != 0)) {
    local_44 = 0;
    uVar11 = FUN_02b5e950(&local_44,uVar5);
    if (((uVar11 & 1) != 0) && (local_78 = CONCAT44(local_78._4_4_,local_44), DAT_05574040 != 0)) {
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar10 == 0) {
          return 0;
        }
        lVar10 = lVar10 + 0x70;
      }
      else {
        if (puVar14 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar14[0x26] == (long *)0x0) {
          return 0;
        }
        lVar10 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        if (lVar10 == 0) {
          return 0;
        }
      }
      if ((uint)local_78 < 8) {
        lVar2 = lVar10 + 0x119228 + (local_78 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_78) {
          lVar2 = lVar10 + 0x119228;
        }
        if ((*(long *)(lVar8 + 0x28) == 0) ||
           (puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x10), puVar14 == (undefined8 *)0x0
           )) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)*puVar14)();
          uVar11 = uVar11 & 0xffffffff;
        }
        if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)*puVar14)();
          uVar12 = uVar12 & 0xffffffff;
        }
        if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (**(code **)*puVar14)();
          uVar13 = uVar13 & 0xffffffff;
        }
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        __s = (void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
        memset(__s,0,0x74080);
        *(undefined8 *)((long)__s + 0x40) = 0;
        *(undefined2 *)((long)__s + 0xe) = 0xffff;
        *(undefined8 *)((long)__s + 0x46) = 0;
        *(undefined2 *)((long)__s + 0x4e) = 0xffff;
        FUN_027f3760((long)__s + 0x110);
        FUN_02785660((long)__s + 0x28b38);
        *(undefined8 *)((long)__s + 0x73f98) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73fa0) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f88) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f90) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73ee0) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f78) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f80) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f68) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f70) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f58) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f60) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f48) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f50) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f38) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f40) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f28) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f30) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f18) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f20) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f08) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f10) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73ef8) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73f00) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73ee8) = 0xffffffffffffffff;
        *(undefined8 *)((long)__s + 0x73ef0) = 0xffffffffffffffff;
        FUN_027c1184((long)__s + 0x73fa8);
        *(undefined1 *)((long)__s + 0x74070) = 0xff;
        *(undefined4 *)((long)__s + 0x74072) = 0;
        *(undefined4 *)((long)__s + 0x74078) = 0;
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        puVar1 = (undefined4 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
        puVar1[2] = 2;
        *puVar1 = 0xa0002;
        puVar1[1] = 0xa0028;
        puVar4 = PTR_DAT_04bb21a8;
        *(undefined2 *)(puVar1 + 3) = 2;
        puVar1[0x10] = 0xa0002;
        puVar1[0x11] = 0xa0028;
        puVar1[0x12] = 2;
        *(undefined2 *)(puVar1 + 0x13) = 2;
        uVar3 = *(undefined2 *)puVar4;
        *(undefined2 *)((long)puVar1 + 0xe) = uVar3;
        *(undefined2 *)((long)puVar1 + 0x4e) = uVar3;
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        memcpy((void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x110),
               (void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)),0x28a28);
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        memcpy((void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x28b38),
               (void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1e3958),0x4b3a8);
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        memcpy((void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x73ee0),
               (void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x97d390),200);
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        memcpy((void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x73fa8),
               (void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x97d5a8),200);
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x74070) = (char)uVar5;
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        *(uint *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x74078) =
             *(uint *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x959198) >>
             (ulong)((uVar5 & 7) << 2) & 0xf;
        if ((*(long *)(lVar8 + 0x28) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
          local_78 = *(ulong *)(lVar8 + 8);
          uStack_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x74080;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
        lVar10 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
        uVar6 = FUN_006f6900(lVar10 + 0x104,0x73f7c,0);
        *(undefined4 *)(lVar10 + 0x100) = uVar6;
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar14 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar14)();
        }
        return 1;
      }
    }
  }
  return 0;
}

