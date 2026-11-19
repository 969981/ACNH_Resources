
void FUN_03a06360(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_c8;
  char *pcStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  
  uVar4 = param_3;
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    uVar4 = 0;
  }
  lVar10 = *(long *)(param_1 + 0x110) + (long)(int)uVar4 * 0x430;
  if ((*(byte *)(lVar10 + 0x3c8) & 1) != 0) {
    lVar11 = *(long *)(param_1 + 0x3420);
    plVar3 = *(long **)(lVar10 + 0x318);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      FUN_038e77e4(*(undefined8 *)(lVar10 + 800),param_2,*(undefined8 *)(lVar10 + 0x318));
    }
    bVar2 = *(byte *)(lVar10 + 8);
    uVar5 = (uint)bVar2;
    uVar4 = (uint)bVar2;
    if (*(uint *)(lVar11 + 8) <= (uint)bVar2) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x10) + (ulong)uVar4 * 0x23c0 + 6) >> 4 & 1) != 0) {
      FUN_03af9610(*(undefined8 *)(param_1 + 0x3420),param_2);
      bVar2 = *(byte *)(lVar10 + 8);
      uVar5 = (uint)bVar2;
      plVar3 = *(long **)(lVar10 + 0x318);
      uVar4 = (uint)bVar2;
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)bVar2) {
        uVar4 = 0;
      }
      *(ulong *)(lVar10 + 0xa8) =
           *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar4 * 0x23c0 + 0xec8;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
        FUN_038e77e4(*(undefined8 *)(lVar10 + 800),param_2,*(undefined8 *)(lVar10 + 0x318));
        uVar5 = (uint)*(byte *)(lVar10 + 8);
      }
    }
    plVar3 = *(long **)(param_1 + 0x5590);
    if (plVar3 != (long *)0x0) {
      if (*(uint *)(param_1 + 0x108) <= uVar5) {
        uVar5 = 0;
      }
      (**(code **)(*plVar3 + 0x48))
                (plVar3,param_2,0,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar5 * 0x430);
      uVar5 = (uint)*(byte *)(lVar10 + 8);
    }
    if (*(uint *)(lVar11 + 8) <= uVar5) {
      uVar5 = 0;
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x10) + (ulong)uVar5 * 0x23c0 + 6) >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x118);
      if (*(char *)(lVar6 + 0x630) != '\0') {
        FUN_03a64eac(param_1 + 0x2ee8,param_2,lVar10,lVar11);
        lVar6 = *(long *)(param_1 + 0x118);
      }
      if (*(char *)(lVar6 + 0x7b0) != '\0') {
        local_b8 = *(undefined8 *)(lVar10 + 1000);
        local_a8 = 0;
        uStack_a0 = 0xffff00000040;
        uStack_b0 = 0x100;
        local_98 = 0x10000000f;
        uStack_90 = 0xffffffff00000000;
        local_c8 = &PTR_LAB_048f9770;
        pcStack_c0 = "Model(OpaWater)";
        puVar1 = PTR_DAT_04bd1830 + 0x10;
        local_88 = 0xffffffff;
        puStack_80 = puVar1;
        FUN_039eec04(lVar10,param_2,&local_c8);
        local_a8 = 0;
        uStack_a0 = 0xffff00000040;
        local_b8 = *(long *)(lVar10 + 1000) + 0x40;
        local_c8 = &PTR_LAB_048f9770;
        pcStack_c0 = "Model(XluWater)";
        uStack_b0 = 0x400;
        local_98 = 0x10000000f;
        uStack_90 = 0xffffffff00000000;
        local_88 = 0xffffffff;
        puStack_80 = puVar1;
        FUN_039eec04(lVar10,param_2,&local_c8);
      }
      FUN_03a4f7f0(lVar10,param_2,lVar11,4,0,0,0);
      if (*(char *)(*(long *)(param_1 + 0x118) + 0x630) != '\0') {
        lVar6 = *(long *)(*(long *)(param_1 + 0x31a0) + 0x1d8);
        uVar4 = (uint)*(byte *)(lVar10 + 8);
        if (*(uint *)(*(long *)(param_1 + 0x31a0) + 0x1d0) <= (uint)*(byte *)(lVar10 + 8)) {
          uVar4 = 0;
        }
        lVar7 = lVar6 + (ulong)uVar4 * 0x560;
        puVar9 = (undefined8 *)PTR_DAT_04bbd510;
        if (*(long *)(lVar7 + 800) != 0) {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
          *(undefined8 *)(lVar7 + 800) = 0;
          *(undefined1 *)(lVar6 + (ulong)uVar4 * 0x560 + 0x559) = 1;
          puVar9 = &DAT_05ae90c0;
        }
        lVar7 = lVar6 + (ulong)uVar4 * 0x560;
        if (*(long *)(lVar7 + 0x318) != 0) {
          FUN_039499cc(*puVar9);
          *(undefined8 *)(lVar7 + 0x318) = 0;
        }
        *(undefined1 *)(lVar6 + (ulong)uVar4 * 0x560 + 0x558) = 0;
      }
      uVar8 = 0x11;
      if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
        uVar8 = 0x111;
      }
      (*DAT_04c62b58)(*(undefined8 *)(param_2 + 0xb8),uVar8);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
    plVar3 = *(long **)(param_1 + 0x5590);
    if (plVar3 != (long *)0x0) {
      uVar4 = (uint)*(byte *)(lVar10 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar10 + 8)) {
        uVar4 = 0;
      }
      (**(code **)(*plVar3 + 0x48))
                (plVar3,param_2,1,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar4 * 0x430);
    }
    if (*(char *)(*(long *)(param_1 + 0x118) + 2000) != '\0') {
      local_a8 = 0;
      uStack_a0 = 0xffff00000040;
      local_b8 = *(long *)(lVar10 + 1000) + 0x40;
      local_c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      uStack_b0 = 0x20000000;
      pcStack_c0 = "Model(Xlu)";
      local_98 = 0x10000000f;
      uStack_90 = 0xffffffff00000000;
      puStack_80 = PTR_DAT_04bd1830 + 0x10;
      local_88 = 0xffffffff;
      FUN_039eec04(lVar10,param_2,&local_c8);
    }
    uVar4 = (uint)*(byte *)(lVar10 + 8);
    if (*(uint *)(lVar11 + 8) <= (uint)*(byte *)(lVar10 + 8)) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x10) + (ulong)uVar4 * 0x23c0 + 6) >> 3 & 1) != 0) {
      FUN_03af9610(*(undefined8 *)(param_1 + 0x3420),param_2);
      plVar3 = *(long **)(lVar10 + 0x318);
      uVar4 = (uint)*(byte *)(lVar10 + 8);
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar10 + 8)) {
        uVar4 = 0;
      }
      *(ulong *)(lVar10 + 0xa8) =
           *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar4 * 0x23c0 + 0xec8;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
        FUN_038e77e4(*(undefined8 *)(lVar10 + 800),param_2,*(undefined8 *)(lVar10 + 0x318));
      }
    }
    lVar6 = *(long *)(param_1 + 0x118);
    if (*(char *)(lVar6 + 0x7f0) != '\0') {
      local_b8 = *(undefined8 *)(lVar10 + 1000);
      local_a8 = 0;
      uStack_a0 = 0xffff00000040;
      uStack_b0 = 8;
      local_98 = 0x10000000f;
      uStack_90 = 0xffffffff00000000;
      local_c8 = &PTR_LAB_048f9770;
      pcStack_c0 = "Model(OpaIndirect)";
      puVar1 = PTR_DAT_04bd1830 + 0x10;
      local_88 = 0xffffffff;
      puStack_80 = puVar1;
      FUN_039eec04(lVar10,param_2,&local_c8);
      local_a8 = 0;
      uStack_a0 = 0xffff00000040;
      local_b8 = *(long *)(lVar10 + 1000) + 0x40;
      local_c8 = &PTR_LAB_048f9770;
      pcStack_c0 = "Model(XluIndirect)";
      uStack_b0 = 3;
      local_88 = 0xffffffff;
      local_98 = 0x10000000f;
      uStack_90 = 0xffffffff00000000;
      puStack_80 = puVar1;
      FUN_039eec04(lVar10,param_2,&local_c8);
      lVar6 = *(long *)(param_1 + 0x118);
    }
    if (*(int *)(lVar6 + 0x11e0) == 0) {
      FUN_03a06928(param_1,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x1a20);
    if ((lVar6 != 0) && (*(char *)(*(long *)(param_1 + 0x1600) + 0x830) != '\0')) {
      uVar4 = *(uint *)(lVar6 + 0x5d0);
      if ((uVar4 & 1) != 0) {
        bVar2 = *(byte *)(lVar10 + 8);
        uVar5 = (uint)bVar2;
        if (*(uint *)(lVar11 + 8) <= (uint)bVar2) {
          uVar5 = 0;
        }
        lVar11 = *(long *)(lVar11 + 0x10) + (ulong)uVar5 * 0x23c0 + 0x308;
        FUN_03ac01b0(lVar6,param_2,bVar2,*(undefined8 *)(lVar10 + 0x318),
                     lVar11 + ((ulong)(uVar4 >> 1) & 1) * 0x7c0 + 0x308,
                     lVar11 + (ulong)((uVar4 & 6) == 2) * 0x7c0 + 0x5c0);
      }
    }
    plVar3 = *(long **)(lVar10 + 0x318);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      FUN_038e77e4(*(undefined8 *)(lVar10 + 800),param_2,*(undefined8 *)(lVar10 + 0x318));
    }
  }
  return;
}

