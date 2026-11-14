
undefined8 FUN_0172fbb8(long param_1,undefined4 *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  
  plVar9 = (long *)*param_3;
  lVar11 = plVar9[0xd];
  if (*(int *)((long)plVar9 + 0x15c) == 0x9a) {
    cVar2 = *(char *)((long)param_3 + 10);
    if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb32d0);
    if ((cVar2 != '\0') && ((uVar7 & 1) != 0)) {
      *param_2 = (int)plVar9[0x52];
      param_2[1] = *(undefined4 *)((long)plVar9 + 0x294);
      local_54 = (undefined4)plVar9[0x53];
      goto LAB_0172fe6c;
    }
  }
  else if (*(int *)((long)plVar9 + 0x15c) == 0x5d) {
    cVar2 = *(char *)((long)param_3 + 10);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((cVar2 != '\0') && ((uVar7 & 1) != 0)) {
      if (lVar11 != 0) {
        *param_2 = *(undefined4 *)(lVar11 + 0x278);
        param_2[1] = *(undefined4 *)(lVar11 + 0x27c);
        param_2[2] = *(undefined4 *)(lVar11 + 0x280);
      }
      fVar13 = (float)FUN_01472900(plVar9);
      param_2[1] = (float)param_2[1] + fVar13 * 0.5;
      return 1;
    }
  }
  if (lVar11 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(lVar11 + 0x278);
  param_2[1] = *(undefined4 *)(lVar11 + 0x27c);
  param_2[2] = *(undefined4 *)(lVar11 + 0x280);
  if (*(int *)(param_1 + 0x168) == 3) {
    plVar9 = (long *)*param_3;
    lVar11 = param_3[1];
    cVar2 = *(char *)((long)param_3 + 10);
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    if ((((plVar9 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3758), (uVar7 & 1) != 0)) &&
        ((char)lVar11 != '\0')) && (cVar2 != '\0')) {
      puVar10 = (undefined8 *)plVar9[0xc];
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      *param_2 = *(undefined4 *)((long)puVar10 + 0x15fc);
      param_2[1] = *(undefined4 *)(puVar10 + 0x2c0);
      param_2[2] = *(undefined4 *)((long)puVar10 + 0x1604);
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x70);
  uVar7 = (ulong)uVar3;
  uVar4 = *(ushort *)(param_1 + 0x72);
  uVar5 = (uint)uVar4;
  if ((uVar3 == 0xffff || uVar4 == 0xffff) && (**(char **)(param_1 + 0x20) == '\0')) {
    return 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    return 0;
  }
  if ((char)param_3[1] == '\0') {
    return 0;
  }
  if (*(char *)((long)param_3 + 10) == '\0') {
    return 0;
  }
  lVar8 = *(long *)(lVar11 + 0x68);
  if (lVar8 == 0) {
    return 0;
  }
  if ((*(long *)(lVar11 + 0x60) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar11 + 0x60) + 0x1150), lVar11 == 0)) {
LAB_0172fe58:
    *param_2 = *(undefined4 *)(lVar8 + 0x278);
    param_2[1] = *(undefined4 *)(lVar8 + 0x27c);
    local_54 = *(undefined4 *)(lVar8 + 0x280);
  }
  else {
    if (uVar3 == 0xffff || uVar4 == 0xffff) {
      if (**(char **)(param_1 + 0x20) == '\0') goto LAB_0172fe58;
      if (*(int *)(lVar11 + 0x30) == 0) {
        return 0;
      }
      lVar12 = *(long *)(lVar11 + 0x38);
      uVar7 = 0;
      lVar8 = (long)*(int *)(lVar11 + 0x30) << 3;
      while (plVar9 = (long *)**(undefined8 **)(lVar12 + uVar7 * 8),
            uVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,param_1 + 0x18), uVar5 == 0xffffffff) {
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + -8;
        if (lVar8 == 0) {
          return 0;
        }
      }
      if (((uint)uVar7 & 0xffff) == 0xffff) {
        return 0;
      }
      uVar1 = (uint)uVar7 & 0xffff | uVar5 << 0x10;
      if (0xfffeffff < uVar1) {
        return 0;
      }
      *(uint *)(param_1 + 0x70) = uVar1;
    }
    plVar9 = (long *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + (long)(short)uVar7 * 8);
    (**(code **)(*plVar9 + 0x70))(plVar9,auStack_80,(int)(short)uVar5);
    *param_2 = local_74;
    param_2[1] = local_64;
  }
LAB_0172fe6c:
  param_2[2] = local_54;
  return 1;
}

