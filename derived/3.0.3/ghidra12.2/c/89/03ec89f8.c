
undefined8 FUN_03ec89f8(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  if (((param_4 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) && (*param_3 != 0)) {
    lVar6 = param_2[2];
    iVar2 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
    if ((iVar2 < *(int *)(lVar6 + 0x38) + -1 && iVar2 + 1U == (uint)*(ushort *)((long)param_2 + 10))
       || ((*(byte *)(*(long *)(lVar6 + 0x18) + (ulong)(uint)*(ushort *)((long)param_2 + 10) * 0x24
                     + 3) & 1) == 0)) {
      if (((*PTR_DAT_04bd47c8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd47c8), iVar2 != 0)) {
        *(undefined ***)PTR_DAT_04bd47c0 = &PTR_LAB_04ba54e8;
        __cxa_guard_release(PTR_DAT_04bd47c8);
      }
      uVar3 = (**(code **)*param_2)(param_2,PTR_DAT_04bd47c0);
      if (((uVar3 & 1) == 0) &&
         (((((*param_4 != 0 &&
             (uVar3 = FUN_03ec89f8(param_1,*param_4,param_3,param_4[5]), (uVar3 & 1) != 0)) ||
            ((param_4[1] != 0 &&
             (uVar3 = FUN_03ec89f8(param_1,param_4[1],param_3,param_4[6]), (uVar3 & 1) != 0)))) ||
           ((param_4[2] != 0 &&
            (uVar3 = FUN_03ec89f8(param_1,param_4[2],param_3,param_4[7]), (uVar3 & 1) != 0)))) ||
          ((param_4[3] != 0 &&
           (uVar3 = FUN_03ec89f8(param_1,param_4[3],param_3,param_4[8]), (uVar3 & 1) != 0)))))) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 8);
      lVar7 = (long)*(int *)(lVar6 + 0x2c);
      iVar2 = *(int *)(lVar6 + lVar7);
      if (0 < iVar2) {
        lVar8 = 0;
        piVar9 = (int *)(lVar7 + lVar6 + 0xc);
        do {
          if ((short)piVar9[-2] == *(short *)((long)param_2 + 10)) {
            if (piVar9[-1] < 0) {
              lVar10 = param_3[1];
              plVar4 = *(long **)(lVar10 + 0x18);
              uVar1 = (**(code **)(*plVar4 + 0x118))
                                (plVar4,*(undefined8 *)(param_4[0xe] + 0x10),piVar9[-1] & 0xffff);
              plVar4 = *(long **)(lVar10 + 0x20);
              uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,uVar1);
              if ((int)uVar5 == 1) {
                return uVar5;
              }
            }
            else if (*piVar9 == 1) {
              return 1;
            }
            iVar2 = *(int *)(lVar6 + lVar7);
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 0x19;
        } while (lVar8 < iVar2);
      }
    }
  }
  return 0;
}

