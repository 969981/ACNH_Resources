
/* WARNING: Removing unreachable block (ram,0x032be5d8) */

void FUN_032be4c0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *__ptr;
  undefined8 *local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined ***local_80;
  undefined **local_78;
  long lStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  if (*(char *)((long)param_2 + 0xc) == '\0') {
    return;
  }
  local_40 = 0;
  local_88 = PTR_DAT_04bc8e70 + 0x10;
  local_58 = PTR_DAT_04bc8e68 + 0x10;
  puStack_50 = PTR_DAT_04bb2120;
  plVar4 = *(long **)(param_1 + 0x30);
  local_48 = 0x100000000;
  local_3c = 1;
  local_38 = 0xffffffff;
  local_b8 = (undefined8 *)*param_2;
  lStack_b0 = *(long *)(plVar4[10] + 0xe8);
  local_a8 = *(long *)(*plVar4 + 0x110);
  if (local_a8 != 0) {
    do {
      while (*(ulong *)(lStack_b0 + 0x30) < *(ulong *)(local_a8 + 0x20)) {
        local_a8 = *(long *)(local_a8 + 8);
        if (local_a8 == 0) goto LAB_032be57c;
      }
      if (*(ulong *)(lStack_b0 + 0x30) <= *(ulong *)(local_a8 + 0x20)) {
        local_a8 = local_a8 + 0x28;
        goto LAB_032be588;
      }
      local_a8 = *(long *)(local_a8 + 0x10);
    } while (local_a8 != 0);
  }
LAB_032be57c:
  local_a8 = 0;
LAB_032be588:
  local_90 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  local_a0 = *plVar4 + 0x108;
  local_80 = &local_78;
  local_78 = &PTR_LAB_04b1acc0;
  local_68 = FUN_032be6dc;
  uStack_60 = 0;
  lStack_70 = param_1;
  uVar2 = (**(code **)(*(long *)*local_b8 + 0x30))((long *)*local_b8,0x590,8);
  FUN_03286a68();
  __ptr = *(void **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  if (__ptr != (void *)0x0) {
    FUN_03286c9c(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_032873d0(uVar2,&local_b8);
  lVar3 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(lVar3 + 0x428);
  if ((lVar5 != 0) && (plVar4 = (long *)(lVar5 + 8), *plVar4 == 0)) {
    plVar6 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x58);
    puVar1 = (undefined8 *)*plVar6;
    if ((undefined8 *)*plVar6 == (undefined8 *)0x0) {
      *plVar6 = (long)plVar4;
    }
    else {
      do {
        puVar7 = puVar1;
        puVar1 = (undefined8 *)puVar7[2];
      } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
      puVar7[2] = plVar4;
      *(undefined8 **)(lVar5 + 0x10) = puVar7;
      plVar6 = (long *)*puVar7;
    }
    *plVar4 = (long)plVar6;
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) goto LAB_032be6b4;
  }
  FUN_032883c0(lVar3,0);
LAB_032be6b4:
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[1])();
  }
  return;
}

