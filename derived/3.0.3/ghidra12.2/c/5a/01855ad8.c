
void FUN_01855ad8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x3d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x2d8) + 0x28))(lVar4 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar2 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_01d692e8(plVar1[2]), (uVar2 & 1) == 0))
    goto LAB_01855b54;
  }
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0x1e;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0xf;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined1 *)(param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0x1e;
  *(undefined8 *)(param_1 + 0x508) = 0;
LAB_01855b54:
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x1e8) + 0xf0))
                     (*(long *)(param_1 + 0x4b8) + 0x1e8);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138);
  if (lVar4 != 0) {
    FUN_03850760(*puVar3,lVar4);
  }
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x548) = 1;
  return;
}

