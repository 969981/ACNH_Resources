
/* WARNING: Removing unreachable block (ram,0x037691cc) */

void FUN_03769190(void)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_38 = CONCAT44(local_38._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar2 == 0) {
    return;
  }
  if ((*(long **)(lVar2 + 0x36620) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x36620), puVar3 == (undefined8 *)0x0)) {
    cVar1 = *(char *)(*(long *)(lVar2 + 0x36608) + *(long *)(lVar2 + 0x36600));
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    cVar1 = *(char *)(*(long *)(lVar2 + 0x36608) + *(long *)(lVar2 + 0x36600));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x36620) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x36620) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return;
    }
    lVar6 = *(long *)(lVar2 + 0x39058);
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        lVar6 = *(long *)(lVar2 + 0x39058);
        uVar4 = uVar4 & 0xffffffff;
        if (lVar6 == 0) goto LAB_03769364;
      }
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        local_38 = *(undefined8 *)(lVar2 + 0x39038);
        local_30 = *(undefined8 *)(lVar2 + 0x39040);
        uStack_28 = 0x6c;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
      }
    }
LAB_03769364:
    *(undefined8 *)(*(long *)(lVar2 + 0x39040) + *(long *)(lVar2 + 0x39038) + 0x5c) =
         *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x39058);
    goto joined_r0x0376938c;
  }
  lVar6 = *(long *)(lVar2 + 0x37c70);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0x37c70);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar6 == 0) goto LAB_037692fc;
    }
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar2 + 0x37c50);
      local_30 = *(undefined8 *)(lVar2 + 0x37c58);
      uStack_28 = 0x40;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
    }
  }
LAB_037692fc:
  *(undefined8 *)(*(long *)(lVar2 + 0x37c58) + *(long *)(lVar2 + 0x37c50) + 0x34) =
       *(undefined8 *)(DAT_04da6480 + 0x4060);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(lVar2 + 0x37c70);
joined_r0x0376938c:
  if ((lVar2 != 0) && (*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar2 + 0x18))();
  }
  return;
}

