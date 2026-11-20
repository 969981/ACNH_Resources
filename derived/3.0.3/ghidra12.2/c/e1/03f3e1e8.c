
void FUN_03f3e1e8(long param_1,void *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  void *local_b0;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined *local_78;
  long *plStack_70;
  undefined4 local_68;
  
  iVar5 = *(int *)(param_1 + 0x32c);
  if ((*(byte *)(param_1 + 9) & 0x18) == 0) {
    iVar6 = -iVar5;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 < 0x21) {
      iVar6 = 0x20;
    }
    bVar3 = -1 < iVar5;
    iVar5 = -iVar6;
    if (bVar3) {
      iVar5 = iVar6;
    }
    plVar7 = *(long **)(param_1 + 0x3f8);
  }
  else {
    if (iVar5 < 0x21) {
      iVar5 = 0x20;
    }
    plVar7 = *(long **)(param_1 + 0x3f8);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar8 = (**(code **)(*plVar7 + 0x70))();
  lVar8 = lVar8 + iVar5 + 8;
  if (lVar8 == 0) {
    return;
  }
  uVar9 = FUN_03f2b7f0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x3f8),lVar8);
  if ((uVar9 & 1) == 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    if (lVar10 == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) {
      uVar9 = FUN_03f2bae0(lVar10,*(undefined8 *)(param_1 + 0x3f8),lVar8);
    }
    else {
      uVar9 = FUN_03f2b960(lVar10,*(undefined8 *)(param_1 + 0x3f8),lVar8);
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    plVar7 = (long *)0x0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x3f8);
    plVar7 = (long *)FUN_03f2b40c(*(undefined8 *)(param_1 + 0x20),lVar8,param_1 + 0x360,1,0,1);
    *(undefined8 *)(param_1 + 0x3f8) = uVar15;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 7:
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0xe8),param_1 + 200,1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf8 | 4;
      if (*(long *)(param_1 + 0x60) == 0) {
        if (*(long *)(param_1 + 0x48) != 0) goto LAB_03f3e37c;
      }
      else {
        FUN_03f45838(param_1 + 0x50);
        if (*(long *)(param_1 + 0x48) == 0) {
          *(undefined4 *)(param_1 + 0x44) = 0xe;
        }
        else {
LAB_03f3e37c:
          if (*(long *)PTR_DAT_04bb49b8 != 0) {
            FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x38);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    break;
  case 8:
  case 9:
    goto switchD_03f3e314_caseD_8;
  default:
    goto switchD_03f3e314_caseD_a;
  case 0xb:
  case 0xc:
    FUN_03f3ebf4(param_1);
  }
  if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) {
switchD_03f3e314_caseD_8:
    puVar17 = *(undefined8 **)(param_1 + 0x30);
    if (puVar17 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      (**(code **)*puVar17)(puVar17,PTR_DAT_04bb4450);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar17 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if (puVar17 == (undefined8 *)0x0) {
LAB_03f3e4b8:
    uVar4 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bb2820);
    puVar1 = PTR_DAT_04bb4488;
    if ((uVar9 & 1) == 0) goto LAB_03f3e4b8;
    uVar4 = *(uint *)(puVar17 + 2);
    uVar9 = (ulong)uVar4;
    if (plVar7 == (long *)0x0) {
      memcpy(param_2,(void *)puVar17[1],uVar9);
    }
    else {
      plVar18 = *(long **)(param_1 + 0x340);
      if (((*PTR_DAT_04bb4488 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb4480 = PTR_DAT_04bb4490 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4488);
      }
      puVar2 = PTR_DAT_04bb4480;
      if ((plVar18 == (long *)0x0) ||
         (uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb4480), (uVar11 & 1) == 0)) {
LAB_03f3e4c0:
        local_b0 = (void *)puVar17[1];
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = *(long **)(param_1 + 0x340);
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar6 != 0)) {
          *(undefined **)puVar2 = PTR_DAT_04bb4490 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4488);
        }
        if ((plVar18 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb4480), (uVar11 & 1) == 0))
        goto LAB_03f3e4c0;
        local_b0 = (void *)puVar17[1];
        plVar18 = (long *)(**(code **)(*plVar18 + 0x38))(plVar18,plVar7,8);
      }
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        pvVar12 = malloc(uVar9);
      }
      else {
        pvVar12 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar9,iVar5);
      }
      puVar1 = PTR_DAT_04bb3350;
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar16 = *(long *)(lVar10 + 0xa8);
      *(long **)(lVar10 + 0xa8) = plVar7;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      if (lVar16 != 1) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        *(long *)(lVar10 + 0xa8) = lVar16;
      }
      memcpy(pvVar12,local_b0,uVar9);
      *(void **)(param_1 + 0x330) = pvVar12;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    if (*(long *)(param_1 + 0x180) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0x180),param_1 + 0x160,1);
    }
    if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
      lVar16 = *(long *)(param_1 + 0x18);
      lVar10 = 0;
      if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
        lVar10 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))();
      }
      *(long *)(lVar16 + 0xc0) = *(long *)(lVar16 + 0xc0) - lVar10;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      lVar10 = *(long *)(param_1 + 0x3f8);
      if (lVar10 == 0) {
        lVar16 = 1;
        plVar18 = *(long **)(param_1 + 0x30);
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar16 = *(long *)(lVar13 + 0xa8);
        *(long *)(lVar13 + 0xa8) = lVar10;
        plVar18 = *(long **)(param_1 + 0x30);
      }
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      if (lVar16 != 1) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar10 + 0xa8) = lVar16;
      }
    }
    lVar10 = *(long *)(param_1 + 0x20);
    if ((((lVar10 != 0) && (*(long *)(param_1 + 0x3f8) != 0)) &&
        (uVar9 = (**(code **)(**(long **)(lVar10 + 0x20) + 0x88))(), (uVar9 & 1) != 0)) &&
       (*(long *)(lVar10 + 0x20) != 0)) {
      nn::os::LockMutex((MutexType *)(lVar10 + 0x90));
      uVar15 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0xd8))(*(long **)(param_1 + 0x3f8),8);
      *(undefined8 *)(lVar10 + 0xb0) = uVar15;
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(uint *)(param_1 + 0x338) = uVar4;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)FUN_03f2b40c(*(undefined8 *)(param_1 + 0x20),lVar8,param_1 + 0x360,1,0,1);
    if (plVar7 == (long *)0x0) {
      return;
    }
    *(long **)(param_1 + 0x3f8) = plVar7;
    *(long **)(param_1 + 0x318) = plVar7;
    *(long **)(param_1 + 800) = plVar7;
    puVar1 = PTR_DAT_04bb4488;
    if (param_2 != (void *)0x0) {
      plVar7 = *(long **)(param_1 + 0x340);
      if (((*PTR_DAT_04bb4488 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb4480 = PTR_DAT_04bb4490 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4488);
      }
      puVar2 = PTR_DAT_04bb4480;
      if ((plVar7 == (long *)0x0) ||
         (uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb4480), (uVar9 & 1) == 0)) {
LAB_03f3e89c:
        plVar18 = *(long **)(param_1 + 0x3f8);
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(param_1 + 0x340);
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar6 != 0)) {
          *(undefined **)puVar2 = PTR_DAT_04bb4490 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4488);
        }
        if ((plVar7 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb4480), (uVar9 & 1) == 0))
        goto LAB_03f3e89c;
        plVar18 = *(long **)(param_1 + 0x3f8);
        plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,plVar18,8);
      }
      uVar9 = (ulong)uVar4;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 == 0) {
        pvVar12 = malloc(uVar9);
LAB_03f3e91c:
        if (plVar18 == (long *)0x0) goto LAB_03f3e948;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)(lVar8 + 0xa8);
        *(long **)(lVar8 + 0xa8) = plVar18;
      }
      else {
        plVar14 = plVar18;
        if (plVar18 != (long *)0x0) {
LAB_03f3e8ec:
          pvVar12 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,uVar9,iVar5);
          goto LAB_03f3e91c;
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar8 + 8);
        if (lVar10 != 0) {
          plVar14 = (long *)(lVar10 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 != (long *)0x0) goto LAB_03f3e8ec;
        pvVar12 = (void *)0x0;
LAB_03f3e948:
        lVar10 = 1;
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (lVar10 != 1) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar8 + 0xa8) = lVar10;
      }
      memcpy(pvVar12,param_2,uVar9);
      plVar7 = *(long **)(param_1 + 800);
      *(void **)(param_1 + 0x330) = pvVar12;
    }
  }
  else {
    *(long **)(param_1 + 0x3f8) = plVar7;
    *(long **)(param_1 + 0x318) = plVar7;
    *(long **)(param_1 + 800) = plVar7;
  }
  local_68 = 8;
  local_a0 = *(undefined8 *)(param_1 + 0x330);
  local_88 = *(undefined8 *)(param_1 + 0x340);
  puStack_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = PTR_DAT_04bb2120;
  local_90 = 1;
  local_98 = uVar4;
  uStack_94 = uVar4;
  plStack_70 = plVar7;
  puVar17 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_a0);
  if (((*PTR_DAT_04bb2840 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2840);
  }
  if ((puVar17 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bb2838), (uVar9 & 1) == 0)) {
    puVar17 = (undefined8 *)0x0;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar17;
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (((puVar17 == (undefined8 *)0x0) ||
      (uVar4 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bb4450), ((uVar4 ^ 1) & 1) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x3f8) + 0x28))();
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  }
  uVar4 = *(uint *)(param_1 + 0xc) | 0x8000;
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0xc) = uVar4 | 0x100000;
  *(undefined4 *)(param_1 + 0x10) = 8;
switchD_03f3e314_caseD_a:
  return;
}

