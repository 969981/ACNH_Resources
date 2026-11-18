
long * FUN_03290630(long param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
    return (long *)0x0;
  }
  if ((*(long *)(param_1 + 0x18) == 0) &&
     (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
    plVar11 = (long *)(*(long *)(param_1 + 0x58) + -8);
    bVar4 = *(long *)(param_1 + 0x58) != 0;
    if ((bVar4) && (plVar11 != plVar6)) {
      do {
        lVar14 = plVar11[3];
        plVar11 = (long *)(lVar14 + -8);
        bVar4 = lVar14 != 0;
        if (!bVar4) {
          plVar11 = (long *)0x0;
        }
      } while (lVar14 != 0 && plVar11 != plVar6);
    }
    if (((bVar4) && ((*(byte *)(plVar6 + 0xc) & 1) != 0)) &&
       (uVar12 = (**(code **)(*plVar6 + 0x28))(plVar6,1), (uVar12 & 1) != 0)) {
      return *(long **)(param_1 + 0x60);
    }
  }
  bVar10 = (byte)*param_2;
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
LAB_0329075c:
    if (bVar10 != 0) {
LAB_03290760:
      if ((*(long *)(param_1 + 0x18) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x18) + 0x61) >>
           (ulong)(*(uint *)((long)param_2 + 4) & 0x1f) & 1) != 0)) {
        return (long *)0x0;
      }
LAB_03290780:
      bVar10 = 1;
    }
  }
  else if (bVar10 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar14 = **(long **)(param_1 + 0x20);
      if (lVar14 != 0) {
        do {
          if (*(long *)(lVar14 + 0x18) == *(long *)(param_1 + 0x18)) {
            plVar6 = (long *)(lVar14 + 0x20) + *(uint *)((long)param_2 + 4);
            if (3 < *(uint *)((long)param_2 + 4)) {
              plVar6 = (long *)(lVar14 + 0x20);
            }
            if ((long *)*plVar6 != (long *)0x0) {
              return (long *)*plVar6;
            }
            break;
          }
          lVar14 = *(long *)(lVar14 + 0x10);
        } while (lVar14 != 0);
        goto LAB_0329075c;
      }
      goto LAB_03290760;
    }
    goto LAB_03290780;
  }
  if ((*(byte *)(param_1 + 0x170) >> 1 & 1) != 0) {
    bVar10 = bVar10 ^ 1;
    iVar13 = (int)((ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x50)) >> 4);
    iVar5 = iVar13 + 2;
    if (-1 < iVar13) {
      iVar5 = iVar13;
    }
    if (iVar5 < 1) {
      bVar10 = 1;
    }
    if (((bVar10 & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
      uVar12 = *(long *)(param_1 + 0x48) - 0x10;
      plVar6 = (long *)(uVar12 + (ulong)(uVar12 < param_1 + 0x28U) * 0x20);
      plVar11 = (long *)*plVar6;
      iVar5 = (int)plVar6[1];
      if (plVar11 != (long *)0x0) {
        if (*(uint *)((long)param_2 + 4) < 4) {
          if (iVar5 != *(int *)(&DAT_04102010 + (long)(int)*(uint *)((long)param_2 + 4) * 4))
          goto LAB_03290854;
        }
        else if (iVar5 != -1) goto LAB_03290854;
        if (((*(byte *)(plVar11 + 0xc) & 1) != 0) &&
           (uVar12 = (**(code **)(*plVar11 + 0x28))(plVar11,1), (uVar12 & 1) != 0)) {
          return plVar11;
        }
      }
    }
  }
LAB_03290854:
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar14 = plVar6[1];
    if ((*(long *)(lVar14 + 0x18) == 0) || ((*param_2 & 0xff) == 0)) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,lVar14 + 0x58,lVar14 + 0x68);
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,*param_2 >> 0x20);
    }
  }
  plVar7 = *(long **)(param_1 + 0x10);
  plVar11 = plVar6;
  if ((plVar7 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar7 + 0x10))(plVar7,plVar6,param_2,param_3 & 1), (uVar12 & 1) != 0))
  {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    plVar7 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      lVar14 = plVar8[1];
      if ((*(long *)(lVar14 + 0x18) == 0) || ((*param_2 & 0xff) == 0)) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,lVar14 + 0x58,lVar14 + 0x68);
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,*param_2 >> 0x20);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar11 = plVar7;
    }
  }
  puVar3 = PTR_DAT_04bc8fa0;
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    if (((*PTR_DAT_04bc8fa0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8fa0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc8f98 = PTR_DAT_04bc8fa8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc8fa0);
    }
    puVar2 = PTR_DAT_04bc8f98;
    if ((plVar6 != (long *)0x0) &&
       (uVar12 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bc8f98), (uVar12 & 1) != 0)) {
      puVar15 = *(undefined8 **)(param_1 + 0x18);
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8fa0), iVar5 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bc8fa8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc8fa0);
      }
      if (((puVar15 != (undefined8 *)0x0) &&
          (uVar12 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc8f98), (uVar12 & 1) != 0)) &&
         (uVar1 = *(uint *)(plVar6 + 0xf), uVar1 != *(uint *)(puVar15 + 0xf))) {
        lVar14 = *(long *)(param_1 + 0x168);
        if (*(uint *)(param_1 + 0x160) <= uVar1) {
          uVar1 = 0;
        }
        lVar9 = *(long *)(lVar14 + (long)(int)uVar1 * 8);
        if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0x60) & 1) != 0)) &&
           (uVar12 = FUN_0328e6b0(lVar9,1), (uVar12 & 1) != 0)) {
          plVar6 = *(long **)(lVar14 + (long)(int)uVar1 * 8);
        }
      }
    }
  }
  return plVar6;
}

