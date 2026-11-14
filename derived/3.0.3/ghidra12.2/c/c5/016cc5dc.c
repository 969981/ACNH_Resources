
void FUN_016cc5dc(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_38 = CONCAT44(local_38._4_4_,0x22);
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) {
    return;
  }
  lVar2 = FUN_016c6d7c();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x28);
  if (lVar6 == 0) {
    *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) =
         *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) | 1;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_016cc68c:
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        local_38 = *(ulong *)(lVar2 + 8);
        uStack_30 = *(undefined8 *)(lVar2 + 0x10);
        local_28 = 0x158c;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0x28);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_016cc68c;
    }
    *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) =
         *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) | 1;
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar6 = *(long *)(lVar2 + 0x98);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0x98);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 == 0) goto LAB_016cc744;
    }
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_38 = *(ulong *)(lVar2 + 0x78);
      uStack_30 = *(undefined8 *)(lVar2 + 0x80);
      local_28 = 0x155c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
    }
  }
LAB_016cc744:
  local_38 = local_38 & 0xffffffff00000000;
  lVar6 = *(long *)(lVar2 + 0x80) + *(long *)(lVar2 + 0x78);
  *(ushort *)(lVar6 + 0x153c) = *(ushort *)(lVar6 + 0x153c) | 1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x98) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x98) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  FUN_016cc79c();
  return;
}

