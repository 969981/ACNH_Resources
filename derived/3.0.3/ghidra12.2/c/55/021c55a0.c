
void FUN_021c55a0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_2628;
  undefined8 *local_2620;
  long **local_2618;
  long **local_2610;
  long *local_2608 [5];
  long alStack_25e0 [990];
  undefined8 local_6f0;
  undefined8 local_6c8 [200];
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  local_78 = &DAT_048f9750;
  local_88 = &DAT_048f9750;
  if (DAT_05292338 == 0) {
    local_70 = 0;
    uStack_6c = 0;
    local_80 = 0x10;
    uStack_7c = 0x10;
  }
  else {
    local_70 = *(undefined4 *)(DAT_05292338 + 0xd88);
    uStack_6c = *(undefined4 *)(DAT_05292338 + 0xd8c);
    local_80 = *(undefined4 *)(DAT_05292338 + 0xd98);
    uStack_7c = *(undefined4 *)(DAT_05292338 + 0xd9c);
  }
  local_2618 = local_2608;
  local_2608[0] = alStack_25e0;
  lVar6 = 0xc6;
  local_2628._4_4_ = 0;
  local_2620 = (undefined8 *)0x0;
  plVar5 = local_2608[0];
  do {
    lVar6 = lVar6 + -2;
    *plVar5 = (long)(plVar5 + 5);
    plVar5[5] = (long)(plVar5 + 10);
    plVar5 = plVar5 + 10;
  } while (lVar6 != 0);
  local_6f0 = 0;
  if (local_6c8 != (undefined8 *)0x0) {
    local_2628._4_4_ = 200;
    local_2620 = local_6c8;
  }
  local_2628 = (ulong)local_2628._4_4_ << 0x20;
  local_2610 = local_2618;
  FUN_01521078(&local_2628);
  uVar3 = nn::os::GetSystemTick();
  *param_1 = 0xfffe;
  uVar4 = FUN_0277d4ac(param_1);
  puVar2 = PTR_DAT_04bb3968;
  if ((int)local_2628 != 0) {
    uVar12 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = 0;
    lVar6 = (long)(int)local_2628 << 3;
    uVar8 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
    uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar11 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    puVar10 = local_2620;
    do {
      puVar7 = (undefined2 *)*puVar10;
      uVar4 = FUN_021c5250(uVar4,&local_78,&local_88,puVar7);
      if ((uVar4 & 1) == 0) {
        uVar1 = uVar11;
      }
      else {
        uVar12 = uVar12 ^ uVar12 << 0xb;
        uVar3 = uVar3 + 1;
        uVar1 = uVar11 >> 0x13 ^ uVar12 >> 8 ^ uVar11 ^ uVar12;
        uVar12 = uVar8;
        uVar8 = uVar9;
        uVar9 = uVar11;
        if (((ulong)uVar1 * (ulong)uVar3 & 0xffffffff00000000) == 0) {
          *(undefined2 *)param_1 = *puVar7;
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar7 + 1);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar7 + 3);
          *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar7 + 2);
          *(undefined4 *)(*(long *)puVar2 + 0xcec) = *(undefined4 *)(puVar7 + 0x10);
        }
      }
      uVar11 = uVar1;
      puVar10 = puVar10 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}

