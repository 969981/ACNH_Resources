
void FUN_03784d20(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar7 + 7);
  if ((iVar1 != -0x7975b8e8 && iVar1 != -0x17df00c3) && iVar1 != -0x3e092032) {
    return;
  }
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar4 = FUN_03775a30(&local_48);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x28);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_03784e6c;
      plVar3 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined **)(lVar4 + 8);
      local_40 = *(undefined8 *)(lVar4 + 0x10);
      local_38 = 0x48b0;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_03784e6c:
  uVar6 = 8;
  if ((param_1 & 1) == 0) {
    uVar6 = 0;
  }
  *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) =
       *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) & 0xfff7 | uVar6;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

