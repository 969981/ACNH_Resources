
/* WARNING: Removing unreachable block (ram,0x0376c2d4) */

void FUN_0376c290(long param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  local_48 = CONCAT44(local_48._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (499 < uVar1) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  lVar2 = lVar2 + (ulong)uVar1 * 0x2d48;
  lVar6 = *(long *)(lVar2 + 0x4cca8);
  if (lVar6 == 0) {
    FUN_02756ed0(*(long *)(lVar2 + 0x4cc90) + *(long *)(lVar2 + 0x4cc88),param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0x4cca8);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar6 == 0) goto LAB_0376c3a4;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar2 + 0x4cc88);
    local_40 = *(undefined8 *)(lVar2 + 0x4cc90);
    uStack_38 = 0x10;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0376c3a4:
  FUN_02756ed0(*(long *)(lVar2 + 0x4cc90) + *(long *)(lVar2 + 0x4cc88),param_2,param_3);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x4cca8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x4cca8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

