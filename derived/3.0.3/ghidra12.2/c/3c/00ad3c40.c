
undefined8 FUN_00ad3c40(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint local_88;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb46b0;
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar10 = 0;
      if (lVar8 != 0) {
        lVar10 = lVar8 + 0x70;
      }
      goto LAB_00ad3cc0;
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar10 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
      goto LAB_00ad3cc0;
    }
  }
  lVar10 = 0;
LAB_00ad3cc0:
  if ((*(long **)(lVar10 + 0x1bf260) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x1bf260), puVar11 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar11)();
    uVar5 = uVar5 ^ 1;
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  puStack_78 = &DAT_040b026f;
  uVar9 = FUN_028d5b80(*(long *)(lVar10 + 0x1bf248) + *(long *)(lVar10 + 0x1bf240),&local_80);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x1bf260) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x1bf260) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if (((uVar9 & 1) != 0) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return 0;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return 0;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return 0;
      }
    }
    if ((*(long **)((long)&DAT_001b88b8 + lVar10) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)((long)&DAT_001b88b8 + lVar10),
       puVar11 == (undefined8 *)0x0)) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)*puVar11)();
    }
    puVar4 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)(lVar10 + 0x1b8898);
    lVar2 = *(long *)(lVar10 + 0x1b88a0);
    uVar5 = 0;
    do {
      lVar13 = *(long *)puVar4;
      lVar1 = lVar2 + lVar8 + ((long)((ulong)uVar5 << 0x20) >> 0x1d);
      uVar6 = FUN_0277d6c4(lVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_68 = 0xfffe;
          FUN_0277d4ac(&local_68);
          uVar9 = FUN_01239cf0(&local_68,lVar1,0,1);
          if ((uVar9 & 1) != 0) {
            FUN_0124c030(&local_80,&local_68);
            iVar3 = *param_1;
            iVar7 = FUN_0123db50(&puStack_78,local_70);
            if (iVar3 == iVar7) {
              if (((local_88 & 1) == 0) || (*(long *)((long)&DAT_001b88b8 + lVar10) == 0)) {
                return 1;
              }
              puVar11 = *(undefined8 **)(*(long *)((long)&DAT_001b88b8 + lVar10) + 8);
              uVar12 = 1;
              if (puVar11 == (undefined8 *)0x0) {
                return 1;
              }
              goto LAB_00ad3ed4;
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x20);
    if (((local_88 & 1) != 0) && (*(long *)((long)&DAT_001b88b8 + lVar10) != 0)) {
      puVar11 = *(undefined8 **)(*(long *)((long)&DAT_001b88b8 + lVar10) + 8);
      uVar12 = 0;
      if (puVar11 == (undefined8 *)0x0) {
        return 0;
      }
LAB_00ad3ed4:
      (**(code **)*puVar11)(puVar11);
      return uVar12;
    }
  }
  return 0;
}

