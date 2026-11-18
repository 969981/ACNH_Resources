
void FUN_03523ac0(long param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  void *__dest;
  int iVar10;
  void *__src;
  long *plVar11;
  undefined **local_60;
  undefined4 local_58;
  int local_44;
  
  lVar7 = param_1 + 0x1ce88 + (ulong)param_2 * 0xf0;
  if (1 < param_2) {
    lVar7 = param_1 + 0x1ce88;
  }
  *(undefined4 *)(lVar7 + 0x28) = *param_3;
  switch(*param_3) {
  case 0:
    local_44 = 1;
    *(undefined4 *)(lVar7 + 0xec) = 1;
    goto LAB_03523d08;
  case 1:
    __dest = *(void **)(lVar7 + 0x38);
    plVar11 = (long *)(param_3 + 0xe);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    __src = *(void **)(param_3 + 0x10);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_3 + 0xe) + 0x18))(plVar11);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_3 + 0x10) + lVar6) == '\0') goto LAB_03523d44;
        lVar2 = *(long *)(param_3 + 0x10) + lVar6;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03523d44;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_03523d44;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_03523d44:
      iVar10 = (int)lVar6;
      if (*(int *)(lVar7 + 0x40) <= (int)lVar6) {
        iVar10 = *(int *)(lVar7 + 0x40) + -1;
      }
      memcpy(__dest,__src,(long)iVar10);
      *(undefined1 *)((long)__dest + (long)iVar10) = 0;
    }
    if (**(char **)(lVar7 + 0x38) != '\0' || *(short *)PTR_DAT_04bb37e0 != -2) {
      iVar8 = 0;
      iVar10 = 0;
      do {
        if ((*(int *)(param_1 + 0x308 + (long)iVar10 * 0x1a8 + 0x1a0) == 0) &&
           (lVar6 = param_1 + 0x308 + (long)iVar10 * 0x1a8, (*(byte *)(lVar6 + 0x18) >> 1 & 1) == 0)
           ) {
          FUN_03412d40(lVar6,lVar7 + 0x30,PTR_DAT_04bb37e0,0x22);
          *(int *)(lVar7 + 0x2c) = -iVar8;
          if (iVar8 != 1) {
            *(undefined4 *)(lVar7 + 0xec) = 2;
          }
          goto LAB_03523e10;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar10 != 0x10e);
    }
    *(undefined4 *)(lVar7 + 0x2c) = 0xffffffff;
LAB_03523e10:
    local_44 = 0;
    if (1 < param_2) {
      return;
    }
    goto LAB_03523e20;
  default:
    FUN_0082f984(lVar7 + 0xe8,param_3 + 2);
    break;
  case 6:
    FUN_0082f294(lVar7 + 0xe8);
    break;
  case 8:
    FUN_00830084(lVar7 + 0xe8,0);
  }
  piVar1 = (int *)(lVar7 + 0xe8);
  uVar4 = FUN_037818a0(piVar1);
  if ((uVar4 & 1) == 0) {
    local_44 = 2;
LAB_03523d08:
    if (param_2 < 2) {
LAB_03523e20:
      lVar7 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)param_2 * 8 + 0x570);
      if ((lVar7 != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar7 + 0x230) + (ulong)(1 < *(uint *)(lVar7 + 0x228)) * 8)
         , plVar11 != (long *)0x0)) {
        local_60 = &PTR_LAB_04aa7fe0;
        local_58 = 0x14;
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
        (**(code **)(plVar11[3] + 0x158))((float)local_44,plVar11[1]);
      }
    }
  }
  else {
    if (((param_2 < 2) &&
        (lVar6 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)param_2 * 8 + 0x570), lVar6 != 0)) &&
       (plVar11 = *(long **)(*(long *)(lVar6 + 0x230) + (ulong)(1 < *(uint *)(lVar6 + 0x228)) * 8),
       plVar11 != (long *)0x0)) {
      local_60 = &PTR_LAB_04aa7fe0;
      local_58 = 0x14;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x158))(0,plVar11[1]);
    }
    if (*piVar1 == -1) {
      uVar5 = 1;
      iVar10 = -1;
    }
    else {
      iVar10 = 0;
      iVar8 = 0;
      param_1 = param_1 + 0x1c260;
      do {
        lVar6 = param_1 + (long)iVar8 * 0x30;
        if (((*(ushort *)(lVar6 + 4) & 1) == 0) &&
           (piVar9 = (int *)(param_1 + (long)iVar8 * 0x30 + 0x20), *piVar9 == -1)) {
          *piVar9 = *piVar1;
          param_1 = param_1 + (long)iVar8 * 0x30;
          *(undefined1 *)(param_1 + 0x24) = 1;
          puVar3 = PTR_DAT_04bb2200;
          *(undefined4 *)(param_1 + 0x28) = 1;
          FUN_015d7b58(*(undefined8 *)(*(long *)puVar3 + 0x140),lVar6,piVar1,0,0);
          uVar5 = 2;
          goto LAB_03523d2c;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar10 != 0x40);
      uVar5 = 1;
      iVar10 = -1;
    }
LAB_03523d2c:
    *(int *)(lVar7 + 0x2c) = iVar10;
    *(undefined4 *)(lVar7 + 0xec) = uVar5;
  }
  return;
}

