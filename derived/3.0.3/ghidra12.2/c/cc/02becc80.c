
/* WARNING: Removing unreachable block (ram,0x02becd14) */

uint FUN_02becc80(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte local_50 [4];
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_50[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_50[0]) {
    local_50[0] = 0xff;
  }
  lVar5 = FUN_02583354(DAT_055021a0,local_50,1);
  lVar3 = DAT_0532a840;
  puVar2 = PTR_DAT_04bb37e0;
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar8 = *(long *)(DAT_05574040 + 0x20);
    }
    local_44 = 0x72;
    piVar1 = (int *)(DAT_0532a840 + 0xe40);
    uVar9 = *(uint *)(DAT_0532a840 + 0xe44);
    if (uVar9 != 0) {
      uVar11 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (((*piVar1 == 0) || ((int)uVar10 < 0)) || (*(int *)(lVar3 + 0xe44) <= (int)uVar10)) {
          local_4c = *(uint *)puVar2;
          local_48 = *(undefined4 *)(puVar2 + 4);
        }
        else {
          local_48 = 0;
          local_4c = **(uint **)(*(long *)(lVar3 + 0xe48) + uVar11 * 8) & 0xffff;
          FUN_0277d4ac(&local_4c);
        }
        uVar6 = FUN_0277d7b4(&local_4c,param_2);
        if ((uVar6 & 1) != 0) {
          if (*(long **)(lVar8 + 0x2a418) == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2a418);
            uVar4 = 0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar4 = (**(code **)*puVar7)();
            }
          }
          if (uVar10 < 0x100) goto LAB_02becde8;
          uVar9 = 0;
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          goto LAB_02bece04;
        }
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
    if (*(long **)(lVar8 + 0x2a418) == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2a418);
      uVar4 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar7)();
      }
    }
    uVar11 = 0;
LAB_02becde8:
    uVar9 = *(uint *)(*(long *)(lVar8 + 0x2a400) + *(long *)(lVar8 + 0x2a3f8) +
                     (uVar11 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar11 & 0x1f) & 1;
    if ((uVar4 & 1) != 0) {
LAB_02bece04:
      if ((*(long *)(lVar8 + 0x2a418) != 0) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a418) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
  }
  return uVar9;
}

