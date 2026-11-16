
void FUN_02673de0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined8 local_50;
  long local_48;
  
  if (param_1 == 0) goto LAB_02673f08;
  lVar10 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    lVar9 = *(long *)(lVar10 + 0x98);
    if (lVar9 == 0) goto LAB_02673e68;
LAB_02673e24:
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_02673e9c;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x98) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined ***)(lVar10 + 0x78);
      local_50 = *(undefined8 *)(lVar10 + 0x80);
      local_48 = 0x17c;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x19548);
    if (lVar9 != 0) goto LAB_02673e24;
LAB_02673e68:
    uVar6 = 0;
  }
LAB_02673e9c:
  if (param_2 < 0x28) {
    lVar9 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78);
    uVar4 = *(uint *)(lVar9 + 0x158);
    if (0x13 < uVar4) {
      uVar4 = 0x14;
    }
    puVar1 = (undefined1 *)(lVar9 + 0xa4) + (param_2 - uVar4);
    if (0x13 < param_2 - uVar4) {
      puVar1 = (undefined1 *)(lVar9 + 0xa4);
    }
    puVar2 = (undefined1 *)(lVar9 + (ulong)param_2 + 0x15c);
    if (uVar4 <= param_2) {
      puVar2 = puVar1;
    }
    *puVar2 = 0xff;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02673f08:
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_3;
      local_58 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_3);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
            local_48 = lVar10;
          }
        }
      }
      uVar6 = FUN_01adbe40(&local_58,1,0,0,0);
      if ((uVar6 & 1) != 0) {
        uVar5 = FUN_026750d0(param_1);
        FUN_02674f70(param_1,(ulong)param_2,uVar5);
      }
    }
  }
  return;
}

