
long FUN_03ec8650(long param_1,long *param_2,long param_3,long *param_4,uint param_5,long param_6)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  short *psVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  undefined1 auStack_e4 [128];
  undefined4 local_64;
  
  iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x10);
  if ((iVar4 < *(int *)(param_1 + 0x38) + -1 && iVar4 + 1U == (uint)*(ushort *)((long)param_2 + 10))
     || ((*(byte *)(*(long *)(param_1 + 0x18) + (ulong)(uint)*(ushort *)((long)param_2 + 10) * 0x24
                   + 3) & 1) == 0)) {
    if (((*PTR_DAT_04bd47c8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd47c8), iVar4 != 0)) {
      *(undefined ***)PTR_DAT_04bd47c0 = &PTR_LAB_04ba54e8;
      __cxa_guard_release(PTR_DAT_04bd47c8);
    }
    uVar5 = (**(code **)*param_2)(param_2,PTR_DAT_04bd47c0);
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_4;
      if (lVar7 != 0) {
        lVar10 = param_4[5];
        *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(param_3 + 0x78);
        lVar7 = FUN_03ec8650(param_1,lVar7,param_3,lVar10,param_5 & 1,param_6);
        if (lVar7 != 0) {
          return lVar7;
        }
      }
      lVar7 = param_4[1];
      if (lVar7 != 0) {
        lVar10 = param_4[6];
        *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(param_3 + 0x78);
        lVar7 = FUN_03ec8650(param_1,lVar7,param_3,lVar10,param_5 & 1,param_6);
        if (lVar7 != 0) {
          return lVar7;
        }
      }
      lVar7 = param_4[2];
      if (lVar7 != 0) {
        lVar10 = param_4[7];
        *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(param_3 + 0x78);
        lVar7 = FUN_03ec8650(param_1,lVar7,param_3,lVar10,param_5 & 1,param_6);
        if (lVar7 != 0) {
          return lVar7;
        }
      }
      lVar7 = param_4[3];
      if (lVar7 != 0) {
        lVar10 = param_4[8];
        *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(param_3 + 0x78);
        lVar7 = FUN_03ec8650(param_1,lVar7,param_3,lVar10,param_5 & 1,param_6);
        if (lVar7 != 0) {
          return lVar7;
        }
      }
    }
    lVar7 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar7 + *(int *)(lVar7 + 0x2c));
    if (0 < *piVar1) {
      lVar10 = 0;
      lVar7 = *(int *)(lVar7 + 0x2c) + lVar7;
      if ((param_5 & 1) == 0) {
        piVar9 = (int *)(lVar7 + 0xc);
        do {
          if ((short)piVar9[-2] == *(short *)((long)param_2 + 10)) {
            if (piVar9[-1] < 0) {
              uVar3 = (**(code **)(**(long **)(param_3 + 0x18) + 0x118))
                                (*(long **)(param_3 + 0x18),*(undefined8 *)(param_4[0xe] + 0x10),
                                 piVar9[-1] & 0xffff);
              iVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x128))
                                (*(long **)(param_3 + 0x20),uVar3);
            }
            else {
              iVar4 = *piVar9;
            }
            if ((iVar4 == 1) &&
               (uVar5 = FUN_03ec8060(piVar9 + -2,param_2,param_3,param_4), (uVar5 & 1) != 0))
            goto LAB_03ec8974;
          }
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 0x19;
        } while (lVar10 < *piVar1);
      }
      else {
        pcVar11 = (char *)(lVar7 + 0x10);
        do {
          psVar8 = (short *)(pcVar11 + -0xc);
          if (*psVar8 != *(short *)((long)param_2 + 10)) goto LAB_03ec8730;
          if ((int)*(uint *)(pcVar11 + -8) < 0) {
            uVar3 = (**(code **)(**(long **)(param_3 + 0x18) + 0x118))
                              (*(long **)(param_3 + 0x18),*(undefined8 *)(param_4[0xe] + 0x10),
                               *(uint *)(pcVar11 + -8) & 0xffff);
            iVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x128))
                              (*(long **)(param_3 + 0x20),uVar3);
            if (iVar4 != 0) goto LAB_03ec87a0;
LAB_03ec87c8:
            uVar5 = FUN_03ec8060(psVar8,param_2,param_3,param_4);
            if ((uVar5 & 1) != 0) {
              if (*pcVar11 != '\0') {
                return param_6;
              }
              local_64 = 0;
              if ((uint)*(ushort *)(pcVar11 + -10) < *(uint *)(param_1 + 0x38)) {
                uVar6 = *(undefined8 *)
                         (*(long *)(param_1 + 0x40) + (ulong)*(ushort *)(pcVar11 + -10) * 8);
              }
              else {
                uVar6 = 0;
              }
              uVar5 = FUN_03ec7ee0(param_1,uVar6,param_6,auStack_e4);
              if ((uVar5 & 1) != 0) {
                uVar2 = *(ushort *)(pcVar11 + -10);
                goto LAB_03ec8980;
              }
            }
          }
          else {
            iVar4 = *(int *)(pcVar11 + -4);
            if (iVar4 == 0) goto LAB_03ec87c8;
LAB_03ec87a0:
            if (iVar4 == 1) {
              uVar5 = FUN_03ec8060(psVar8,param_2,param_3,param_4);
              if ((uVar5 & 1) != 0) goto LAB_03ec8974;
            }
            else if ((iVar4 == 2) &&
                    (uVar5 = (**(code **)(*param_2 + 0x68))(param_2,param_4), (uVar5 & 1) != 0))
            goto LAB_03ec87c8;
          }
LAB_03ec8730:
          lVar10 = lVar10 + 1;
          pcVar11 = pcVar11 + 100;
        } while (lVar10 < *piVar1);
      }
    }
  }
  return 0;
LAB_03ec8974:
  uVar2 = *(ushort *)((long)piVar1 + lVar10 * 100 + 6);
LAB_03ec8980:
  if ((uint)uVar2 < *(uint *)(param_1 + 0x38)) {
    return *(long *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 8);
  }
  return 0;
}

