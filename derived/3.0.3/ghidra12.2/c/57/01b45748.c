
undefined8 FUN_01b45748(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *__s;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 0x20)), lVar3 == 0))
  {
    return 0;
  }
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar8 = *(long *)(*(long *)puVar2 + 0x20);
  }
  else {
    lVar8 = lVar3 + 0x194b0;
  }
  lVar9 = *(long *)(lVar8 + 0x8528);
  if (lVar9 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar8 + 0x8528) == 0) goto LAB_01b45850;
      plVar5 = *(long **)(*(long *)(lVar8 + 0x8528) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_78 = *(long *)(lVar8 + 0x8508);
      local_70 = *(undefined8 *)(lVar8 + 0x8510);
      uStack_68 = 0xeab4;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    }
  }
LAB_01b45850:
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 < 5) {
    lVar9 = *(long *)(lVar8 + 0x8510) + *(long *)(lVar8 + 0x8508) + 0xdc18;
    __s = (void *)(lVar9 + (ulong)uVar1 * 0x2ec);
    uVar6 = FUN_02829aa0(__s);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x20)) {
        FUN_0282a120(__s,param_2,param_3);
      }
      else if ((*(long **)(lVar3 + 0x17bb0) == (long *)0x0) ||
              (puVar7 = (undefined8 *)**(long **)(lVar3 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
        FUN_02827eec(__s,param_2,*(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90),param_3);
      }
      else {
        uVar6 = (**(code **)*puVar7)();
        FUN_02827eec(__s,param_2,*(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90),param_3);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar3 + 0x17bb0) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
      memset(__s,0,0x2ec);
      *(undefined2 *)((long)__s + 4) = 0xfffe;
      *(undefined1 *)((long)__s + 7) = 0;
      FUN_0277d4ac((undefined2 *)((long)__s + 4));
      memset((void *)((long)__s + 0xc),0,0x2a5);
      lVar9 = lVar9 + (ulong)uVar1 * 0x2ec;
      uVar10 = 1;
      *(undefined4 *)(lVar9 + 0x2b4) = 0;
      *(undefined1 *)(lVar9 + 0x2cc) = 2;
      *(undefined8 *)(lVar9 + 0x2b8) = 0;
      *(undefined8 *)(lVar9 + 0x2c0) = 0;
      *(undefined4 *)(lVar9 + 0x2c8) = 0;
      *(undefined8 *)(lVar9 + 0x2d0) = 0;
      *(undefined8 *)(lVar9 + 0x2d8) = 0;
      *(undefined8 *)(lVar9 + 0x2e0) = 0;
      *(undefined4 *)(lVar9 + 0x2e8) = 0;
      goto joined_r0x01b458a8;
    }
  }
  uVar10 = 0;
joined_r0x01b458a8:
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x8528) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x8528) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar10;
}

