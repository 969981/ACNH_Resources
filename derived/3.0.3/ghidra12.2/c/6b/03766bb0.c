
/* WARNING: Removing unreachable block (ram,0x03766bec) */
/* WARNING: Removing unreachable block (ram,0x03766cd8) */

void FUN_03766bb0(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar2 = FUN_03775a30();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x3e0);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x3e0) == 0) goto LAB_03766c58;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x3e0) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar2 + 0x3c0);
      uStack_60 = *(undefined8 *)(lVar2 + 0x3c8);
      local_58 = 0xe10;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
LAB_03766c58:
  pvVar1 = (void *)(*(long *)(lVar2 + 0x3c8) + *(long *)(lVar2 + 0x3c0));
  memset(pvVar1,0,0xe10);
  lVar6 = 0;
  do {
    puVar5 = (undefined8 *)((long)pvVar1 + lVar6);
    *puVar5 = 0xfffe;
    FUN_0277d4ac(puVar5);
    lVar6 = lVar6 + 0xc;
    *(undefined4 *)(puVar5 + 1) = 0;
  } while (lVar6 != 0xe10);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x3e0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x3e0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar6 = *(long *)(lVar2 + 0xa38);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0xa38) == 0) goto LAB_03766d44;
      plVar4 = *(long **)(*(long *)(lVar2 + 0xa38) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar2 + 0xa18);
      uStack_60 = *(undefined8 *)(lVar2 + 0xa20);
      local_58 = 0xe10;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
LAB_03766d44:
  pvVar1 = (void *)(*(long *)(lVar2 + 0xa20) + *(long *)(lVar2 + 0xa18));
  memset(pvVar1,0,0xe10);
  lVar6 = 0;
  do {
    puVar5 = (undefined8 *)((long)pvVar1 + lVar6);
    *puVar5 = 0xfffe;
    FUN_0277d4ac(puVar5);
    lVar6 = lVar6 + 0xc;
    *(undefined4 *)(puVar5 + 1) = 0;
  } while (lVar6 != 0xe10);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xa38) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xa38) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

