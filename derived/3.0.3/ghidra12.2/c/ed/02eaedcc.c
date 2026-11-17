
void FUN_02eaedcc(long param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  short local_16f0 [4];
  long local_16e8;
  long local_16e0;
  undefined1 auStack_32 [2];
  
  *(undefined4 *)(param_1 + 0x1360) = 2;
  FUN_007ef010(auStack_32);
  FUN_007e4920(local_16f0,auStack_32);
  if (local_16f0[0] == DAT_04cb6038) {
    return;
  }
  if (local_16e0 == 0 && local_16e8 == 0) {
    return;
  }
  FUN_007e4bb0(local_16f0);
  uVar4 = FUN_007e4bb0(local_16f0);
  if ((uVar4 & 1) == 0) {
    lVar9 = local_16e8;
    if (*(long **)(local_16e8 + 0x28) != (long *)0x0) {
      puVar5 = (undefined8 *)**(long **)(local_16e8 + 0x28);
      goto joined_r0x02eaee80;
    }
  }
  else {
    lVar9 = local_16e0;
    if (*(long **)(local_16e0 + 0x28) != (long *)0x0) {
      puVar5 = (undefined8 *)**(long **)(local_16e0 + 0x28);
joined_r0x02eaee80:
      if (puVar5 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
        goto LAB_02eaee9c;
      }
    }
  }
  uVar3 = 1;
LAB_02eaee9c:
  lVar1 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
  *(undefined8 *)(param_1 + 0x1768) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(param_1 + 6000) = *(undefined8 *)(lVar1 + 0x10);
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  uVar8 = *(undefined8 *)(lVar1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x1790) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(param_1 + 0x1788) = uVar7;
  *(undefined8 *)(param_1 + 0x1780) = uVar8;
  *(undefined8 *)(param_1 + 0x1778) = uVar6;
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar8 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined1 *)(param_1 + 0x17b0) = *(undefined1 *)(lVar1 + 0x50);
  *(undefined8 *)(param_1 + 0x17a8) = uVar8;
  *(undefined8 *)(param_1 + 0x17a0) = uVar7;
  *(undefined8 *)(param_1 + 0x1798) = uVar6;
  uVar6 = *(undefined8 *)(lVar1 + 0x54);
  uVar7 = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(param_1 + 0x17c4) = *(undefined8 *)(lVar1 + 100);
  *(undefined8 *)(param_1 + 0x17bc) = uVar7;
  *(undefined8 *)(param_1 + 0x17b4) = uVar6;
  uVar2 = *(uint *)(lVar1 + 0x6c);
  if (1 < uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x17cc) = uVar2;
  *(undefined1 *)(param_1 + 0x17d0) = *(undefined1 *)(lVar1 + 0x70);
  *(undefined1 *)(param_1 + 0x17d1) = *(undefined1 *)(lVar1 + 0x71);
  *(undefined2 *)(param_1 + 0x17d2) = *(undefined2 *)(lVar1 + 0x72);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  memcpy((void *)(param_1 + 0x17e8),param_3,0x6b8);
  *(undefined8 *)(param_1 + 0x1378) = *param_4;
  *(undefined8 *)(param_1 + 0x1ea0) = *param_5;
  return;
}

