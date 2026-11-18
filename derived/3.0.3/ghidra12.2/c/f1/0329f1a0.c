
/* WARNING: Removing unreachable block (ram,0x0329f1d0) */

void FUN_0329f1a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  void *__ptr;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  undefined1 auStack_28 [8];
  
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  lVar4 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x68,8);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x58) = 0;
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(undefined1 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  __ptr = *(void **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar4;
  if (__ptr != (void *)0x0) {
    puVar1 = (undefined8 *)((long)__ptr + 8);
    FUN_032c6840(puVar1);
    plVar8 = *(long **)((long)__ptr + 8);
    *(undefined8 *)((long)__ptr + 0x28) = 0;
    *(undefined8 *)((long)__ptr + 0x30) = 0;
    *(undefined8 *)((long)__ptr + 0x20) = 0;
    if (plVar8 != (long *)0x0) {
      lVar4 = *(long *)((long)__ptr + 0x10);
      lVar9 = *(long *)((long)__ptr + 0x18);
      *(undefined8 *)((long)__ptr + 0x18) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)__ptr + 0x10) = 0;
      if ((undefined8 *)*plVar8 == puVar1) {
        *plVar8 = lVar9;
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar9;
      }
    }
    *(undefined8 *)((long)__ptr + 0x10) = 0;
    *(undefined8 *)((long)__ptr + 0x18) = 0;
    *puVar1 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
      }
    }
  }
  puVar3 = PTR_DAT_04bc8e68;
  lVar9 = *(long *)(param_1 + 0x18);
  local_50 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_48 = "L_WaitIcon";
  lVar4 = FUN_032cb8e0(auStack_28,&local_50,*(undefined8 *)(lVar9 + 0xf0));
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0xe8) != 0)) {
    puVar5 = *(undefined **)(*(long *)(lVar4 + 0xe8) + 0x30);
    puVar2 = PTR_DAT_04bb2120;
    if (puVar5 != (undefined *)0x0) {
      puVar2 = puVar5;
    }
    for (lVar4 = *(long *)(lVar9 + 0x110); lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      while (*(undefined **)(lVar4 + 0x20) <= puVar2) {
        if (puVar2 <= *(undefined **)(lVar4 + 0x20)) {
          lVar4 = lVar4 + 0x28;
          goto LAB_0329f330;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) goto LAB_0329f32c;
      }
    }
  }
LAB_0329f32c:
  lVar4 = 0;
LAB_0329f330:
  pcStack_48 = "L_WaitIcon";
  local_50 = puVar3 + 0x10;
  lVar9 = FUN_032cb8e0(auStack_28,&local_50,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf0));
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar9 + 0xe8);
  }
  lVar7 = *(long *)(param_1 + 0x68);
  lVar9 = lVar7 + 8;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  *(undefined8 **)(lVar7 + 0x20) = param_2;
  FUN_032c6b2c(lVar9,3);
  pcStack_48 = "";
  local_50 = puVar3 + 0x10;
  FUN_032c7570(lVar9,lVar4,&local_50);
  FUN_032c8670(lVar9,1,0);
  return;
}

