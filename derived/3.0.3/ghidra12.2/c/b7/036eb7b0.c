
/* WARNING: Removing unreachable block (ram,0x036eb7f4) */

void FUN_036eb7b0(void)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) goto LAB_036eba58;
  local_58 = CONCAT44(local_58._4_4_,1);
  if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) ||
     (lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar5 == 0)) goto LAB_036eba58;
  plVar1 = (long *)(&LAB_005d3ee8 + lVar5);
  lVar9 = *(long *)(&LAB_005d3f40 + lVar5);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(&LAB_005d3f40 + lVar5);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar9 == 0) goto LAB_036eb888;
    }
    plVar8 = *(long **)(lVar9 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_58 = *(long *)(&LAB_005d3f20 + lVar5);
      local_50 = *(undefined8 *)(&LAB_005d3f28 + lVar5);
      uStack_48 = 0xe10;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
LAB_036eb888:
  lVar3 = *(long *)(&LAB_005d3f20 + lVar5);
  lVar4 = *(long *)(&LAB_005d3f28 + lVar5);
  memset((void *)(lVar4 + lVar3),0,0xe10);
  lVar9 = 0;
  do {
    puVar7 = (undefined8 *)(lVar4 + lVar3 + lVar9);
    *puVar7 = 0xfffe;
    FUN_0277d4ac(puVar7);
    lVar9 = lVar9 + 0xc;
    *(undefined4 *)(puVar7 + 1) = 0;
  } while (lVar9 != 0xe10);
  if ((((uVar6 & 1) != 0) && (*(long *)(&LAB_005d3f40 + lVar5) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3f40 + lVar5) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  lVar9 = *(long *)(&LAB_005d3fb0 + lVar5);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(&LAB_005d3fb0 + lVar5);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar9 == 0) goto LAB_036eb954;
    }
    plVar8 = *(long **)(lVar9 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_58 = *(long *)(&LAB_005d3f90 + lVar5);
      local_50 = *(undefined8 *)(&LAB_005d3f98 + lVar5);
      uStack_48 = 0x708;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
LAB_036eb954:
  lVar3 = *(long *)(&LAB_005d3f90 + lVar5);
  lVar4 = *(long *)(&LAB_005d3f98 + lVar5);
  memset((void *)(lVar4 + lVar3),0,0x708);
  lVar9 = 0;
  do {
    puVar2 = (undefined4 *)(lVar4 + lVar3 + lVar9);
    lVar9 = lVar9 + 0x18;
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 6) = 0;
    *(undefined1 *)((long)puVar2 + 10) = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined4 *)((long)puVar2 + 0x12) = 0;
    *(undefined1 *)((long)puVar2 + 0x16) = 0;
  } while (lVar9 != 0x708);
  if ((((uVar6 & 1) != 0) && (*(long *)(&LAB_005d3fb0 + lVar5) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3fb0 + lVar5) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  lVar9 = *(long *)(&LAB_005d3f08 + lVar5);
  if (lVar9 == 0) {
    FUN_028f8d1c(*(long *)(&LAB_005d3ef0 + lVar5) + *plVar1);
    goto LAB_036eba58;
  }
  if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
LAB_036eba00:
    plVar8 = *(long **)(lVar9 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(&LAB_005d3ef0 + lVar5);
      uStack_48 = 0x155c;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    lVar9 = *(long *)(&LAB_005d3f08 + lVar5);
    uVar6 = uVar6 & 0xffffffff;
    if (lVar9 != 0) goto LAB_036eba00;
  }
  FUN_028f8d1c(*(long *)(&LAB_005d3ef0 + lVar5) + *plVar1);
  if ((((uVar6 & 1) != 0) && (*(long *)(&LAB_005d3f08 + lVar5) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3f08 + lVar5) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_036eba58:
  if ((DAT_05292338 != 0) && (*(char *)(DAT_05292338 + 0xee4) != '\0')) {
    FUN_017ff6b4(DAT_05292338 + 0xda0);
  }
  FUN_036eb4c0(0);
  return;
}

