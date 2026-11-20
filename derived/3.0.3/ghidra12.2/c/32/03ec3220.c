
void FUN_03ec3220(undefined4 param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  int local_44;
  undefined8 local_38;
  
  uVar3 = *(uint *)(param_2 + 0x18);
  if (0 < (int)uVar3) {
    if ((param_3 & 1) == 0) {
      lVar4 = *(long *)(param_2 + 0x38);
      bVar6 = 0;
      uVar7 = 0;
      do {
        uVar1 = uVar7;
        if (uVar3 <= uVar7) {
          uVar1 = 0;
        }
        FUN_03ebf780(param_1,*(undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)uVar1 * 0x10),lVar4,
                     param_2 + 0x88);
        lVar4 = *(long *)(param_2 + 0x38);
        uVar7 = uVar7 + 1;
        bVar6 = *(byte *)(lVar4 + 0xb0) | bVar6;
        uVar3 = *(uint *)(param_2 + 0x18);
      } while ((int)uVar7 < (int)uVar3);
      goto LAB_03ec32f0;
    }
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar3 <= uVar7) {
        uVar1 = 0;
      }
      FUN_03ebfae0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)uVar1 * 0x10),
                   *(undefined8 *)(param_2 + 0x38),param_2 + 0x88,
                   (int)param_4 < 0 || param_4 == uVar7);
      uVar3 = *(uint *)(param_2 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar3);
  }
  bVar6 = 0;
LAB_03ec32f0:
  local_38 = 0;
  local_44 = 0;
  FUN_03ec10f0((int *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x28),param_2,(long)&local_38 + 4,
               &local_38,&local_44,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x50));
  puVar2 = *(undefined8 **)(param_2 + 0x1cf0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,(long)&local_38 + 4,&local_38);
  }
  if (local_38._4_4_ < *(int *)(param_2 + 0x58)) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x48))(*(long **)(param_2 + 0x28),0);
  }
  *(int *)(param_2 + 0x58) = local_38._4_4_;
  if ((int)local_38 < *(int *)(param_2 + 0x5c)) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x48))(*(long **)(param_2 + 0x28),1);
  }
  *(int *)(param_2 + 0x5c) = (int)local_38;
  if (local_44 < *(int *)(param_2 + 0x60)) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x48))(*(long **)(param_2 + 0x28),3);
  }
  *(int *)(param_2 + 0x60) = local_44;
  if ((bVar6 & 1) != 0) {
    FUN_03ec5760(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  }
  if (0 < *(int *)(param_2 + 0x88)) {
    lVar4 = 0;
    puVar2 = *(undefined8 **)(param_2 + 0x98);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x90) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar5 = puVar2;
      *(undefined8 **)(param_2 + 0x98) = puVar5;
      puVar2 = puVar5;
    } while (lVar4 < *(int *)(param_2 + 0x88));
  }
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (0 < *(int *)(param_2 + 0x14a8)) {
    lVar4 = 0;
    puVar2 = *(undefined8 **)(param_2 + 0x14b8);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x14b0) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar5 = puVar2;
      *(undefined8 **)(param_2 + 0x14b8) = puVar5;
      puVar2 = puVar5;
    } while (lVar4 < *(int *)(param_2 + 0x14a8));
  }
  *(undefined4 *)(param_2 + 0x14a8) = 0;
  if (0 < *(int *)(param_2 + 0x18c8)) {
    lVar4 = 0;
    puVar2 = *(undefined8 **)(param_2 + 0x18d8);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x18d0) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar5 = puVar2;
      *(undefined8 **)(param_2 + 0x18d8) = puVar5;
      puVar2 = puVar5;
    } while (lVar4 < *(int *)(param_2 + 0x18c8));
  }
  *(undefined4 *)(param_2 + 0x18c8) = 0;
  *(undefined2 *)(param_2 + 0x1ce8) = 0;
  return;
}

