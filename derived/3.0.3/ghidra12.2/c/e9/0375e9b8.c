
void FUN_0375e9b8(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (DAT_05aed670 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar6 + 7) == -0x17df00c3) {
    FUN_0375eb14();
  }
  lVar2 = FUN_03776f00();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar2 + 0x28);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_0375eac0;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar2 + 8);
      uStack_30 = *(undefined8 *)(lVar2 + 0x10);
      local_28 = 0x155c;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
  }
LAB_0375eac0:
  lVar5 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
  local_38 = CONCAT44(local_38._4_4_,1);
  *(ushort *)(lVar5 + 0x153c) = *(ushort *)(lVar5 + 0x153c) | 2;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

