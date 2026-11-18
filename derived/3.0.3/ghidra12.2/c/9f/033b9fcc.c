
void FUN_033b9fcc(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_2c;
  undefined2 local_24;
  
  if (((((*(byte *)(param_1 + 0x74) & 1) != 0) && (*(char *)(param_1 + 0x69) != '\0')) &&
      (uVar5 = FUN_033b97a0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),param_1)
      , (uVar5 & 1) != 0)) &&
     ((uVar5 = FUN_033b9e08(param_1,param_1 + 0x80), (uVar5 & 1) != 0 &&
      (((0x11 < *(uint *)(param_1 + 0x50) ||
        ((1 << (ulong)(*(uint *)(param_1 + 0x50) & 0x1f) & 0x32decU) == 0)) ||
       (uVar5 = FUN_033be2b0(param_1), (uVar5 & 1) != 0)))))) {
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
  }
  bVar3 = *(byte *)(param_1 + 0x74);
  uVar7 = (uint)bVar3;
  if ((bVar3 >> 1 & 1) == 0) {
    if ((bVar3 >> 2 & 1) != 0) {
      uVar5 = FUN_033ba354(param_1);
      puVar4 = PTR_DAT_04bb37e0;
      uVar7 = (uint)*(byte *)(param_1 + 0x74);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(byte *)(param_1 + 0x74) & 0xfffffffb;
        *(char *)(param_1 + 0x74) = (char)uVar7;
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8c);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x90);
        uVar2 = *(undefined4 *)(puVar4 + 4);
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)puVar4;
        *(undefined4 *)(param_1 + 0x90) = uVar2;
      }
    }
  }
  else {
    local_2c = 0xfffe;
    FUN_0277d4ac(&local_2c);
    local_2c = *(undefined8 *)(param_1 + 0x8c);
    local_24 = *(undefined2 *)(param_1 + 0x9c);
    FUN_033ba168(param_1,&local_2c);
    uVar7 = (uint)*(byte *)(param_1 + 0x74);
  }
  if ((uVar7 >> 3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    return;
  }
  uVar5 = FUN_033ba354(param_1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x1b0);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x50))();
      if ((uVar5 & 1) != 0) goto LAB_033ba12c;
      lVar8 = *(long *)(param_1 + 0x60);
      plVar6 = *(long **)(lVar8 + 0x1b0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x50))();
        plVar6 = *(long **)(lVar8 + 0x1b0);
        (**(code **)(*plVar6 + 0x20))(plVar6,0);
      }
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xf7;
  }
LAB_033ba12c:
  puVar1 = (undefined8 *)(param_1 + 0x1190);
  uVar5 = (**(code **)(*(long *)(param_1 + 0x1190) + 0x10))(puVar1);
  if ((uVar5 & 1) != 0) {
    (**(code **)*puVar1)(puVar1);
  }
  return;
}

