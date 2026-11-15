
undefined8 FUN_0228a8b4(long param_1,float *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x308);
  if ((uVar9 == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) {
LAB_0228a9d4:
    uVar9 = *(uint *)(param_1 + 0x340);
    if ((uVar9 != 0) && (lVar7 = *(long *)puVar2, lVar7 != 0)) {
      plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                         ((ulong)(uVar9 >> 0x11) & 0x7ff8));
      if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar8 + 0x46) != uVar9)) {
        plVar8 = (long *)0x0;
      }
      if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
        plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar2;
        iVar3 = (**(code **)(*plVar4 + 0x60))();
        if (iVar3 < 0x11) {
          uVar9 = 1;
        }
        else {
          if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0228aa70;
          uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228aa70:
        uVar9 = 0;
      }
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe9d8);
        uVar1 = 0;
        if ((int)lVar7 == 1) {
          uVar1 = uVar9;
        }
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (uVar1 == 0) {
          return 0;
        }
        if ((*(int *)((long)plVar8 + 0x2a4) == 0) &&
           (((*(byte *)((long)plVar8 + 0x29c) >> 3 & 1) != 0 ||
            ((*(byte *)((long)plVar8 + 0x29c) >> 4 & 1) != 0)))) goto LAB_0228ab94;
      }
    }
    uVar6 = 0;
  }
  else {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if ((plVar8 == (long *)0x0) ||
       (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) != 1 && *(int *)(lVar7 + 0x288) != -1) {
LAB_0228a978:
      uVar9 = 0;
      if (plVar8 != (long *)0x0) goto LAB_0228a98c;
      goto LAB_0228a9d4;
    }
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0228a978;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar8 == (long *)0x0) goto LAB_0228a9d4;
LAB_0228a98c:
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe9d8);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((((uVar5 & 1) == 0) || (uVar1 == 0)) || (*(int *)((long)plVar8 + 0x2a4) != 0)) ||
       (((*(byte *)((long)plVar8 + 0x29c) >> 3 & 1) == 0 &&
        ((*(byte *)((long)plVar8 + 0x29c) >> 4 & 1) == 0)))) goto LAB_0228a9d4;
LAB_0228ab94:
    *param_2 = SQRT(*(float *)((long)plVar8 + 0x32c) * *(float *)((long)plVar8 + 0x32c) +
                    *(float *)((long)plVar8 + 0x324) * *(float *)((long)plVar8 + 0x324));
    fVar10 = *(float *)((long)plVar8 + 0x33c);
    if (fVar10 == 0.0) {
      fVar10 = 0.0;
    }
    else if (fVar10 <= 0.6) {
      fVar10 = fVar10 / 0.6;
    }
    else {
      fVar10 = 1.0;
    }
    param_2[1] = fVar10;
    uVar6 = 1;
    param_2[2] = *(float *)((long)plVar8 + 0x2cc);
  }
  return uVar6;
}

