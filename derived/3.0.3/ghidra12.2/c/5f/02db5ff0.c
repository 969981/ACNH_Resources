
undefined8 FUN_02db5ff0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *local_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bc4e60;
  iVar7 = *(int *)(param_1 + 0x240);
  if (iVar7 == 1) {
    puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    puVar4 = PTR_DAT_04bc4e58;
    uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
    if ((uVar8 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    plVar11 = *(long **)(puVar10[0x45] + (ulong)(1 < *(uint *)(puVar10 + 0x44)) * 8);
    if (plVar11 == (long *)0x0) {
LAB_02db60b8:
      puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar8 = (**(code **)*puVar10)(puVar10,puVar4);
      if ((uVar8 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      plVar11 = *(long **)(puVar10[0x45] + (ulong)(2 < *(uint *)(puVar10 + 0x44)) * 0x10);
      if (plVar11 != (long *)0x0) {
        local_70 = PTR_DAT_04bc4f00 + 0x10;
        local_68 = 3;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
        uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
        if ((uVar8 & 1) != 0) goto LAB_02db6144;
      }
      puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if ((((puVar10 == (undefined8 *)0x0) ||
           (uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), (uVar8 & 1) == 0)) ||
          ((long *)puVar10[0x36] == (long *)0x0)) ||
         ((uVar8 = (**(code **)(*(long *)puVar10[0x36] + 0x68))(), (uVar8 & 1) == 0 &&
          (((long *)puVar10[0x36] == (long *)0x0 ||
           (uVar8 = (**(code **)(*(long *)puVar10[0x36] + 0x70))(), (uVar8 & 1) == 0)))))) {
        iVar7 = *(int *)(param_1 + 0x240);
        goto LAB_02db61b4;
      }
    }
    else {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 3;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
      uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
      if ((uVar8 & 1) == 0) goto LAB_02db60b8;
    }
LAB_02db6144:
    uVar9 = 1;
  }
  else {
LAB_02db61b4:
    puVar6 = PTR_DAT_04bc4f00;
    puVar4 = PTR_DAT_04bc4e60;
    puVar5 = PTR_DAT_04bc4e58;
    if (iVar7 == 2) {
      lVar12 = 0;
      puVar1 = PTR_DAT_04bc4d38 + 0x10;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      do {
        lVar13 = *(long *)(param_1 + 0x218 + lVar12);
        uVar3 = *(uint *)(lVar13 + 0x48);
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar3);
        if (uVar3 < 7 && (1 << (ulong)(uVar3 & 0x1f) & 0x58U) != 0) {
          puVar10 = (undefined8 *)**(long **)(lVar13 + 0x3f8);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar4);
          }
          uVar8 = (**(code **)*puVar10)(puVar10,puVar5);
          if ((uVar8 & 1) == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          plVar11 = *(long **)puVar10[0x45];
          if (plVar11 != (long *)0x0) {
            local_70 = puVar6 + 0x10;
            local_68 = 3;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
            uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
            if ((uVar8 & 1) != 0) goto LAB_02db6144;
          }
          puVar10 = (undefined8 *)**(long **)(lVar13 + 0x3f8);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            *(undefined **)puVar5 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(puVar4);
          }
          uVar8 = (**(code **)*puVar10)(puVar10,puVar5);
          if ((uVar8 & 1) == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          plVar11 = *(long **)(puVar10[0x45] + (ulong)(1 < *(uint *)(puVar10 + 0x44)) * 8);
          if (plVar11 != (long *)0x0) {
            local_70 = puVar6 + 0x10;
            local_68 = 3;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
            uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
            if ((uVar8 & 1) != 0) goto LAB_02db6144;
          }
          puVar10 = (undefined8 *)**(long **)(lVar13 + 0x3f8);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            *(undefined **)puVar5 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(puVar4);
          }
          uVar8 = (**(code **)*puVar10)(puVar10,puVar5);
          if ((uVar8 & 1) == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          plVar11 = *(long **)(puVar10[0x45] + (ulong)(2 < *(uint *)(puVar10 + 0x44)) * 0x10);
          if (plVar11 != (long *)0x0) {
            local_70 = puVar6 + 0x10;
            local_68 = 3;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
            uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
            if ((uVar8 & 1) != 0) goto LAB_02db6144;
          }
          puVar10 = (undefined8 *)**(long **)(lVar13 + 0x3f8);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            *(undefined **)puVar5 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(puVar4);
          }
          uVar8 = (**(code **)*puVar10)(puVar10,puVar5);
          if ((uVar8 & 1) == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          lVar13 = 0x18;
          if (*(uint *)(puVar10 + 0x44) < 4) {
            lVar13 = 0;
          }
          plVar11 = *(long **)(puVar10[0x45] + lVar13);
          if (plVar11 != (long *)0x0) {
            local_68 = 3;
            local_70 = puVar2;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
            uVar8 = (**(code **)(plVar11[3] + 0x50))(plVar11[1]);
            if ((uVar8 & 1) != 0) goto LAB_02db6144;
          }
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x28);
    }
    uVar9 = 0;
  }
  return uVar9;
}

