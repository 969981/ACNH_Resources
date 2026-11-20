
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_03ec8314(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long *param_5,
            undefined1 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_e4 [128];
  undefined4 local_64;
  
  if (((*PTR_DAT_04bd47c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd47c8), iVar2 != 0))
  {
    *(undefined ***)PTR_DAT_04bd47c0 = &PTR_LAB_04ba54e8;
    __cxa_guard_release(PTR_DAT_04bd47c8);
  }
  if ((param_2 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*param_2)(param_2,PTR_DAT_04bd47c0), (uVar3 & 1) == 0)) {
    lVar8 = *param_5;
    if (lVar8 != 0) {
      lVar9 = param_5[5];
      *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_4 + 0x78);
      puVar7 = (undefined8 *)FUN_03ec8314(param_1,lVar8,param_3,param_4,lVar9,param_6);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
    }
    lVar8 = param_5[1];
    if (lVar8 != 0) {
      lVar9 = param_5[6];
      *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_4 + 0x78);
      puVar7 = (undefined8 *)FUN_03ec8314(param_1,lVar8,param_3,param_4,lVar9,param_6);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
    }
    lVar8 = param_5[2];
    if (lVar8 != 0) {
      lVar9 = param_5[7];
      *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_4 + 0x78);
      puVar7 = (undefined8 *)FUN_03ec8314(param_1,lVar8,param_3,param_4,lVar9,param_6);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
    }
    lVar8 = param_5[3];
    if (lVar8 != 0) {
      lVar9 = param_5[8];
      *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_4 + 0x78);
      puVar7 = (undefined8 *)FUN_03ec8314(param_1,lVar8,param_3,param_4,lVar9,param_6);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
    }
  }
  if ((param_2 != (undefined8 *)0x0) && (param_2 != param_3)) {
    lVar8 = *(long *)(param_1 + 8);
    lVar9 = (long)*(int *)(lVar8 + 0x2c);
    *param_6 = 0;
    if (0 < *(int *)(lVar8 + lVar9)) {
      lVar5 = 0;
      piVar6 = (int *)(lVar9 + lVar8 + 0xc);
      do {
        if (((short)piVar6[-2] == *(short *)((long)param_2 + 10)) &&
           (((short)piVar6[3] == 0 ||
            (uVar3 = FUN_03ec8060(piVar6 + -2,param_2,param_4,param_5), (uVar3 & 1) != 0)))) {
          if ((uint)*(ushort *)((long)piVar6 + -6) < *(uint *)(param_1 + 0x38)) {
            puVar7 = *(undefined8 **)
                      (*(long *)(param_1 + 0x40) + (ulong)*(ushort *)((long)piVar6 + -6) * 8);
            uVar4 = piVar6[-1];
            if ((int)uVar4 < 0) goto LAB_03ec8590;
LAB_03ec8574:
            iVar2 = *piVar6;
          }
          else {
            puVar7 = (undefined8 *)0x0;
            uVar4 = piVar6[-1];
            if (-1 < (int)uVar4) goto LAB_03ec8574;
LAB_03ec8590:
            uVar1 = (**(code **)(**(long **)(param_4 + 0x18) + 0x118))
                              (*(long **)(param_4 + 0x18),*(undefined8 *)(param_5[0xe] + 0x10),
                               uVar4 & 0xffff);
            iVar2 = (**(code **)(**(long **)(param_4 + 0x20) + 0x128))
                              (*(long **)(param_4 + 0x20),uVar1);
          }
          if ((puVar7 == param_3) || ((char)piVar6[1] != '\0')) {
            if (iVar2 != 2) {
              return (undefined8 *)0x0;
            }
            puVar7 = (undefined8 *)0x0;
LAB_03ec860c:
            *param_6 = 1;
            return puVar7;
          }
          local_64 = 0;
          uVar3 = FUN_03ec7ee0(param_1,puVar7,param_3,auStack_e4);
          if ((uVar3 & 1) != 0) {
            if (iVar2 != 2) {
              return puVar7;
            }
            goto LAB_03ec860c;
          }
        }
        lVar5 = lVar5 + 1;
        piVar6 = piVar6 + 0x19;
      } while (lVar5 < *(int *)(lVar8 + lVar9));
    }
  }
  return (undefined8 *)0x0;
}

