
void FUN_007e70d0(ushort *param_1,uint param_2,uint param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar11 = (ulong)*param_1;
  uVar10 = (uint)*param_1;
  if (uVar10 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar11 = (ulong)uVar10;
    if (iVar6 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar11 = (ulong)uVar10;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar12 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar12 * 4) == (int)(uVar11 >> 0xb)) goto LAB_007e716c;
      uVar12 = uVar12 + 1;
    } while (DAT_04c8c0f0 != uVar12);
  }
  uVar12 = 0;
LAB_007e716c:
  local_58 = CONCAT44(local_58._4_4_,(int)uVar12);
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar10 = (uint)local_58;
  if (DAT_04c8c0f0 <= (uint)local_58) {
    uVar10 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar10 * 4) == 0x11) {
    lVar13 = *(long *)(param_1 + 8);
    if (lVar13 == 0) goto LAB_007e71ec;
    lVar9 = *(long *)(lVar13 + 0x28);
    if (lVar9 == 0) goto LAB_007e71e4;
LAB_007e71a8:
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(lVar13 + 0x28);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar9 == 0) goto LAB_007e7250;
    }
    plVar7 = *(long **)(lVar9 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar13 + 8);
      uStack_50 = *(undefined8 *)(lVar13 + 0x10);
      local_48 = 0x8a8;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
  else {
    uVar11 = FUN_007ef180(param_1);
    if ((uVar11 & 1) == 0) {
LAB_007e71ec:
      lVar13 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(lVar13 + 0x28);
      if (lVar9 == 0) {
        uVar11 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar13 + 0x28);
          uVar11 = uVar11 & 0xffffffff;
          if (lVar9 == 0) goto LAB_007e72d0;
        }
        plVar7 = *(long **)(lVar9 + 0x20);
        if (plVar7 != (long *)0x0) {
          local_58 = *(undefined8 *)(lVar13 + 8);
          uStack_50 = *(undefined8 *)(lVar13 + 0x10);
          local_48 = 0x2a8;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
        }
      }
LAB_007e72d0:
      uVar10 = param_2 & 0x1f;
      uVar3 = param_3 & 0x1f;
      lVar9 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xa5;
      if (-1 < (int)-param_2) {
        uVar10 = -(-param_2 & 0x1f);
      }
      if (-1 < (int)-param_3) {
        uVar3 = -(-param_3 & 0x1f);
      }
      uVar10 = uVar10 + uVar3 * 0x20;
      goto LAB_007e7300;
    }
    lVar13 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(lVar13 + 0x28);
    if (lVar9 != 0) goto LAB_007e71a8;
LAB_007e71e4:
    uVar11 = 0;
  }
LAB_007e7250:
  uVar10 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  lVar1 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xa5;
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar2 = ((int)uVar10 >> 5) * 2 + ((int)uVar3 >> 5);
  uVar10 = (param_2 - (uVar3 & 0xffffffe0)) + (param_3 - (uVar10 & 0x7ffffe0)) * 0x20;
  lVar9 = lVar1 + (ulong)uVar2 * 0x200;
  if (3 < uVar2) {
    lVar9 = lVar1;
  }
LAB_007e7300:
  uVar3 = uVar10 & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = uVar10 + 1;
  }
  lVar1 = (long)((ulong)uVar10 << 0x20) >> 0x21;
  bVar5 = *(byte *)(lVar9 + lVar1);
  bVar4 = bVar5 & 0xf0 | param_4;
  if (uVar3 == 1) {
    bVar4 = bVar5 & 0xf | param_4 << 4;
  }
  *(byte *)(lVar9 + lVar1) = bVar4;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

