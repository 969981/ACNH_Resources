
undefined8 FUN_02670960(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  if (DAT_05574040 != 0) {
    puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + 0x70;
      }
      goto LAB_026709d8;
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar11 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
      goto LAB_026709d8;
    }
  }
  lVar11 = 0;
LAB_026709d8:
  if ((*(long **)(&LAB_00205180 + lVar11) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(&LAB_00205180 + lVar11), puVar10 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar10)();
    uVar7 = uVar7 ^ 1;
  }
  puVar1 = (undefined2 *)(*(long *)(&LAB_00205168 + lVar11) + *(long *)(&LAB_00205160 + lVar11));
  uVar5 = *puVar1;
  uVar3 = *(undefined1 *)(puVar1 + 1);
  uVar4 = *(undefined1 *)((long)puVar1 + 3);
  uVar2 = *(undefined4 *)(puVar1 + 2);
  local_38 = uVar5;
  local_36 = uVar3;
  local_35 = uVar4;
  local_34 = uVar2;
  if ((((uVar7 & 1) == 0) && (*(long *)(&LAB_00205180 + lVar11) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(&LAB_00205180 + lVar11) + 8),
     puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_38);
  lVar11 = *(long *)puVar6;
  if (lVar11 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_58 = 0;
      local_60 = uVar5;
      local_5e = uVar3;
      local_5d = uVar4;
      local_5c = uVar2;
      uVar7 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar6 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_38);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
            lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar11 != 0) {
              local_58 = lVar11;
            }
          }
        }
      }
      uVar9 = FUN_01aed730(&local_68);
      return uVar9;
    }
  }
  return 0;
}

