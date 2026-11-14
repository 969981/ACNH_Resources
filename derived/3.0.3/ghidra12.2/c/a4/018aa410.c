
void FUN_018aa410(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = PTR_DAT_04bb7648 + 0x10;
  local_30 = CONCAT62(local_30._2_6_,*DAT_05ab5ea8);
  lVar1 = FUN_03775a30(&local_38);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x108);
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
      if (*(long *)(lVar1 + 0x108) == 0) goto LAB_018aa4bc;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x108) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_38 = *(undefined **)(lVar1 + 0xe8);
      local_30 = *(undefined8 *)(lVar1 + 0xf0);
      local_28 = 0x48a8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    }
  }
LAB_018aa4bc:
  local_38 = (undefined *)CONCAT44(local_38._4_4_,1);
  *(ushort *)(*(long *)(lVar1 + 0xf0) + *(long *)(lVar1 + 0xe8)) =
       *(ushort *)(*(long *)(lVar1 + 0xf0) + *(long *)(lVar1 + 0xe8)) | 2;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x108) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x108) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

