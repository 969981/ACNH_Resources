
void FUN_00ad7110(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bb46b0;
  iVar9 = 0;
  do {
    if ((*(long *)puVar2 != 0) && (lVar3 = FUN_026eec4c(*(long *)puVar2,iVar9), lVar3 != 0)) {
      lVar10 = lVar3 + 0x194b0;
      lVar7 = lVar10;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar7 = *(long *)(*(long *)puVar2 + 0x20);
      }
      plVar1 = (long *)(lVar7 + 0x2ad28);
      lVar8 = *(long *)(lVar7 + 0x2ad48);
      if (lVar8 == 0) {
        FUN_02754a90(*(long *)(lVar7 + 0x2ad30) + *plVar1);
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar8 + 0x20);
joined_r0x00ad72dc:
          if (plVar5 != (long *)0x0) {
            local_78 = *plVar1;
            local_70 = *(undefined8 *)(lVar7 + 0x2ad30);
            uStack_68 = 0x100;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar7 + 0x2ad48) != 0) {
            plVar5 = *(long **)(*(long *)(lVar7 + 0x2ad48) + 0x20);
            goto joined_r0x00ad72dc;
          }
        }
        FUN_02754a90(*(long *)(lVar7 + 0x2ad30) + *plVar1);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2ad48) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2ad48) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar10 = *(long *)(*(long *)puVar2 + 0x20);
      }
      plVar1 = (long *)(lVar10 + 0x2acf0);
      lVar3 = *(long *)(lVar10 + 0x2ad10);
      if (lVar3 == 0) {
        FUN_027523f0(*(long *)(lVar10 + 0x2acf8) + *plVar1);
      }
      else {
        if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar3 + 0x20);
joined_r0x00ad72ec:
          if (plVar5 != (long *)0x0) {
            local_78 = *plVar1;
            local_70 = *(undefined8 *)(lVar10 + 0x2acf8);
            uStack_68 = 0x200;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar10 + 0x2ad10) != 0) {
            plVar5 = *(long **)(*(long *)(lVar10 + 0x2ad10) + 0x20);
            goto joined_r0x00ad72ec;
          }
        }
        FUN_027523f0(*(long *)(lVar10 + 0x2acf8) + *plVar1);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x2ad10) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x2ad10) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 8);
  lVar3 = *(long *)puVar2;
  if (lVar3 == 0) {
LAB_00ad7344:
    lVar3 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar3 = 0;
      if (lVar10 != 0) {
        lVar3 = lVar10 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_00ad7344;
      lVar3 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar3 + 0x205208);
  lVar10 = *(long *)(lVar3 + 0x205228);
  if (lVar10 == 0) {
    FUN_02741780(*(long *)(lVar3 + 0x205210) + *plVar1);
    return;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar5 = *(long **)(lVar10 + 0x20);
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar3 + 0x205228) == 0) goto LAB_00ad73a4;
    plVar5 = *(long **)(*(long *)(lVar3 + 0x205228) + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    local_78 = *plVar1;
    local_70 = *(undefined8 *)(lVar3 + 0x205210);
    uStack_68 = 0x100;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
  }
LAB_00ad73a4:
  FUN_02741780(*(long *)(lVar3 + 0x205210) + *plVar1);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x205228) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x205228) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

