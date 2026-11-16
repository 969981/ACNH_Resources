
void FUN_02871b90(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_7e0 [8];
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  uVar2 = nn::os::GetSystemTick();
  local_7c = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7d0,param_1 + 1,0x754);
  if (DAT_05574040 != 0) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0x1bf1b8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar4 + 0x1bf1b8), puVar8 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar8)();
      uVar2 = uVar2 ^ 1;
    }
    lVar5 = FUN_01a45204(&local_7d8);
    lVar9 = 0;
    uVar11 = 0;
    do {
      puVar1 = (uint *)(lVar5 + lVar9);
      lVar9 = lVar9 + 4;
      uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
      uVar10 = uVar10 + (uVar10 >> 8);
      uVar11 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + uVar11;
    } while (lVar9 != 0x754);
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        FUN_00889f80(auStack_7e0,&local_7d8,uVar10);
        uVar6 = FUN_027bf130(*(long *)(lVar4 + 0x1bf1a0) + *(long *)(lVar4 + 0x1bf198),auStack_7e0);
        if ((uVar6 & 1) != 0) {
          lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
          uVar3 = FUN_0277d6c4(auStack_7e0);
          if ((uVar3 >> 3 & 0x1fff) < 0x753) {
            lVar5 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
            *(uint *)(lVar9 + lVar5) =
                 *(uint *)(lVar9 + lVar5) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          }
        }
      } while (uVar10 < uVar11);
    }
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar9 = 0;
    iVar7 = 0;
    do {
      puVar1 = (uint *)(lVar5 + lVar9);
      lVar9 = lVar9 + 4;
      uVar11 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar7 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar7;
    } while (lVar9 != 0x754);
    if (iVar7 == 0) {
      memcpy(param_1 + 1,auStack_7d0,0x754);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1bf1b8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar4 + 0x1bf1b8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

