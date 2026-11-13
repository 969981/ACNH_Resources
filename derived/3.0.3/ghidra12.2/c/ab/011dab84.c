
/* WARNING: Type propagation algorithm not settling */

byte FUN_011dab84(long param_1,int param_2,undefined1 param_3,uint param_4,byte param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') || (DAT_050dfb28 == 0)) {
LAB_011dabb4:
    bVar6 = 0;
    goto LAB_011dabb8;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  bVar6 = 0;
  if (lVar8 == 0) goto LAB_011dabb8;
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != DAT_050dfb28)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_011dac94;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_011dac94:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) goto LAB_011dabb4;
  lVar8 = plVar9[0x2a];
  if (((*PTR_DAT_04bbbb10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbbb10);
  }
  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbbb08);
  puVar2 = PTR_DAT_04bb2010;
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar10;
  }
  bVar6 = 0;
  if (((uVar5 & 1) == 0) || (uVar1 == 0)) goto LAB_011dabb8;
  uVar7 = param_5 & 1;
  if (param_2 != 1) {
    if (param_2 != 2) {
      FUN_011db530(plVar9,param_1);
      goto switchD_011dade8_default;
    }
    uVar10 = param_4 & 0xff;
    if ((param_4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 1 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 2 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      local_58 = *(int *)(param_1 + 8) + 2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 3 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_5 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 4 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + 2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 5 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + 2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 6 & 1) != 0) {
      local_60 = puVar2 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + 2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_4 >> 7 & 1) == 0) goto LAB_011db3c0;
    goto LAB_011db39c;
  }
  switch(param_3) {
  case 0:
    uVar10 = param_4 & 0xff;
    if ((param_4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 1 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 2 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(int *)(param_1 + 8) + 2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 3 & 1) != 0) {
      iStack_54 = *(int *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + -2;
LAB_011db4bc:
      local_60 = PTR_DAT_04bb2010 + 0x10;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    goto joined_r0x011db3fc;
  case 1:
    if ((param_4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 1 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 3 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_5 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(int *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc);
      goto LAB_011db3ac;
    }
    goto LAB_011db3c0;
  case 2:
    uVar10 = param_4 & 0xff;
    if ((param_4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((uVar10 >> 1 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    goto joined_r0x011daf6c;
  case 3:
    uVar10 = param_4;
joined_r0x011daf6c:
    if ((uVar10 >> 3 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_5 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 5 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + 2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 6 & 1) != 0) {
      local_58 = *(int *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc);
      puVar2 = PTR_DAT_04bb2010;
      goto LAB_011db3a8;
    }
    goto LAB_011db3c0;
  case 4:
    if ((param_4 >> 3 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_5 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 4 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + 2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 5 & 1) != 0) {
      local_58 = *(int *)(param_1 + 8) + -2;
      iStack_54 = *(int *)(param_1 + 0xc) + 2;
LAB_011db484:
      local_60 = PTR_DAT_04bb2010 + 0x10;
      FUN_011db530(plVar9,&local_60);
joined_r0x011db45c:
      uVar7 = true;
    }
    break;
  case 5:
    uVar7 = (param_5 & 1) != 0;
    if ((bool)uVar7) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
    }
    if ((param_4 >> 4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + 2;
      FUN_011db530(plVar9,&local_60);
      goto joined_r0x011db45c;
    }
    break;
  case 6:
    if ((param_4 >> 1 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 2 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(int *)(param_1 + 8) + 2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if ((param_5 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 4 & 1) != 0) {
      iStack_54 = *(int *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + 2;
      goto LAB_011db484;
    }
    break;
  case 7:
    if ((param_4 >> 1 & 1) != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 2 & 1) != 0) {
      local_58 = *(int *)(param_1 + 8) + 2;
      iStack_54 = *(int *)(param_1 + 0xc) + -2;
      goto LAB_011db4bc;
    }
joined_r0x011db3fc:
    if ((param_5 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      local_58 = *(undefined4 *)(param_1 + 8);
      iStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_011db530(plVar9,&local_60);
      uVar7 = true;
    }
    if (((param_4 & 0xff) >> 4 & 1) != 0) {
      local_60 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
      iStack_54 = *(int *)(param_1 + 0xc);
      local_58 = *(int *)(param_1 + 8) + 2;
      goto LAB_011db3ac;
    }
    goto LAB_011db3c0;
  default:
switchD_011dade8_default:
    bVar6 = param_5;
    goto LAB_011dabb8;
  }
  if (((param_4 & 0xff) >> 6 & 1) == 0) {
    puVar2 = PTR_DAT_04bb2010;
  }
  else {
    local_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = *(undefined4 *)(param_1 + 8);
    iStack_54 = *(int *)(param_1 + 0xc) + 2;
    FUN_011db530(plVar9,&local_60);
    uVar7 = true;
    puVar2 = PTR_DAT_04bb2010;
  }
  PTR_DAT_04bb2010 = puVar2;
  if ((param_4 >> 7 & 1) != 0) {
LAB_011db39c:
    iStack_54 = *(int *)(param_1 + 0xc);
    local_58 = *(int *)(param_1 + 8) + 2;
LAB_011db3a8:
    local_60 = puVar2 + 0x10;
    iStack_54 = iStack_54 + 2;
LAB_011db3ac:
    FUN_011db530(plVar9,&local_60);
    uVar7 = true;
  }
LAB_011db3c0:
  bVar6 = (bool)uVar7 != false;
LAB_011dabb8:
  return bVar6 & 1;
}

