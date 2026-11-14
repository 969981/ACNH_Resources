
void FUN_016cb384(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48._0_4_ = (uint)local_48 & 0xffffff00;
  local_48 = CONCAT44(0xffffffff,(uint)local_48);
  uVar4 = FUN_016cfd70(&local_48);
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar3 = local_48._4_4_;
  if (local_48._4_4_ == -1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  plVar6 = *(long **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    plVar6 = (long *)*plVar6;
  }
  else {
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar6 = (long *)plVar6[0x26];
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  lVar5 = (**(code **)(*plVar6 + 0x38))();
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
    if (DAT_05574040 == 0) {
      return;
    }
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    puVar8 = &LAB_002057b0 + lVar5;
    if ((char)local_48 != '\0') {
      puVar8 = (undefined1 *)(lVar5 + 0x20b9e8);
    }
    puVar8 = puVar8 + (long)iVar3 * 0xc40;
  }
  else {
    iVar3 = FUN_0252d29c();
    if (DAT_05574040 == 0) {
      return;
    }
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    puVar8 = (undefined1 *)(lVar5 + (long)iVar3 * 0xcb0 + 0x211c58);
  }
  lVar5 = *(long *)(puVar8 + 0x98);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      lVar5 = *(long *)(puVar8 + 0x98);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar5 == 0) goto LAB_016cb550;
    }
    plVar6 = *(long **)(lVar5 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(puVar8 + 0x78);
      uStack_40 = *(undefined8 *)(puVar8 + 0x80);
      local_38 = 0x155c;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_016cb550:
  lVar5 = *(long *)(puVar8 + 0x78);
  lVar1 = *(long *)(puVar8 + 0x80);
  if (((DAT_0523c4c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  uVar2 = *param_1;
  if (*(uint *)PTR_DAT_04bbddf8 <= uVar2) {
    uVar2 = 0;
  }
  *(char *)(lVar1 + lVar5 + 0x153e) =
       (char)*(undefined4 *)(*(long *)(PTR_DAT_04bbddf8 + 8) + (long)(int)uVar2 * 4);
  if ((((uVar4 & 1) != 0) && (*(long *)(puVar8 + 0x98) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(puVar8 + 0x98) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

