
void FUN_016aa2fc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  plVar6 = (long *)(lVar3 + 0x205e80);
  lVar8 = *(long *)(lVar3 + 0x205ea0);
  if (lVar8 == 0) {
    lVar8 = *plVar6;
    lVar9 = *(long *)(FUN_00205e88 + lVar3);
    *(undefined1 *)((undefined4 *)(lVar9 + lVar8) + 1) = 0;
    *(undefined4 *)(lVar9 + lVar8) = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
joined_r0x016aa878:
      if (plVar5 != (long *)0x0) {
        local_38 = *plVar6;
        local_30 = *(undefined8 *)(FUN_00205e88 + lVar3);
        uStack_28 = 5;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x205ea0) != 0) {
        plVar5 = *(long **)(*(long *)(lVar3 + 0x205ea0) + 0x20);
        goto joined_r0x016aa878;
      }
    }
    lVar8 = *plVar6;
    lVar9 = *(long *)(FUN_00205e88 + lVar3);
    *(undefined1 *)((undefined4 *)(lVar9 + lVar8) + 1) = 0;
    *(undefined4 *)(lVar9 + lVar8) = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x205ea0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x205ea0) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(&LAB_00206ae0 + lVar3);
  if (lVar8 == 0) {
    lVar8 = *(long *)(&LAB_00206ac0 + lVar3);
    lVar9 = *(long *)(&LAB_00206ac8 + lVar3);
    *(undefined1 *)((undefined4 *)(lVar9 + lVar8) + 1) = 0;
    *(undefined4 *)(lVar9 + lVar8) = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa888:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(&LAB_00206ac0 + lVar3);
        local_30 = *(undefined8 *)(&LAB_00206ac8 + lVar3);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(&LAB_00206ae0 + lVar3) != 0) {
        plVar6 = *(long **)(*(long *)(&LAB_00206ae0 + lVar3) + 0x20);
        goto joined_r0x016aa888;
      }
    }
    lVar8 = *(long *)(&LAB_00206ac0 + lVar3);
    lVar9 = *(long *)(&LAB_00206ac8 + lVar3);
    *(undefined1 *)((undefined4 *)(lVar9 + lVar8) + 1) = 0;
    *(undefined4 *)(lVar9 + lVar8) = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(&LAB_00206ae0 + lVar3) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(&LAB_00206ae0 + lVar3) + 0x18),
       puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x207720);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x207708) + *(long *)(lVar3 + 0x207700));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa898:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(lVar3 + 0x207700);
        local_30 = *(undefined8 *)(lVar3 + 0x207708);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x207720) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x207720) + 0x20);
        goto joined_r0x016aa898;
      }
    }
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x207708) + *(long *)(lVar3 + 0x207700));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x207720) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x207720) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x208360);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x208348) + *(long *)(lVar3 + 0x208340));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa8a8:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(lVar3 + 0x208340);
        local_30 = *(undefined8 *)(lVar3 + 0x208348);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x208360) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x208360) + 0x20);
        goto joined_r0x016aa8a8;
      }
    }
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x208348) + *(long *)(lVar3 + 0x208340));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x208360) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x208360) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x208fa0);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x208f88) + *(long *)(lVar3 + 0x208f80));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa8b8:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(lVar3 + 0x208f80);
        local_30 = *(undefined8 *)(lVar3 + 0x208f88);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x208fa0) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x208fa0) + 0x20);
        goto joined_r0x016aa8b8;
      }
    }
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x208f88) + *(long *)(lVar3 + 0x208f80));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x208fa0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x208fa0) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x209be0);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x209bc8) + *(long *)(lVar3 + 0x209bc0));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa8c8:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(lVar3 + 0x209bc0);
        local_30 = *(undefined8 *)(lVar3 + 0x209bc8);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if (*(long *)(lVar3 + 0x209be0) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x209be0) + 0x20);
        goto joined_r0x016aa8c8;
      }
    }
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x209bc8) + *(long *)(lVar3 + 0x209bc0));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x209be0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x209be0) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x20a820);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(&LAB_0020a808 + lVar3) + *(long *)(lVar3 + 0x20a800));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x016aa8d8:
      if (plVar6 != (long *)0x0) {
        local_38 = *(long *)(lVar3 + 0x20a800);
        local_30 = *(undefined8 *)(&LAB_0020a808 + lVar3);
        uStack_28 = 5;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if (*(long *)(lVar3 + 0x20a820) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x20a820) + 0x20);
        goto joined_r0x016aa8d8;
      }
    }
    puVar1 = (undefined4 *)(*(long *)(&LAB_0020a808 + lVar3) + *(long *)(lVar3 + 0x20a800));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x20a820) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x20a820) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  lVar8 = *(long *)(lVar3 + 0x20b460);
  if (lVar8 == 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x20b448) + *(long *)(lVar3 + 0x20b440));
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    return;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar6 = *(long **)(lVar8 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar3 + 0x20b460) == 0) goto LAB_016aa814;
    plVar6 = *(long **)(*(long *)(lVar3 + 0x20b460) + 0x20);
  }
  if (plVar6 != (long *)0x0) {
    local_38 = *(long *)(lVar3 + 0x20b440);
    local_30 = *(undefined8 *)(lVar3 + 0x20b448);
    uStack_28 = 5;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
  }
LAB_016aa814:
  puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x20b448) + *(long *)(lVar3 + 0x20b440));
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x20b460) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x20b460) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

