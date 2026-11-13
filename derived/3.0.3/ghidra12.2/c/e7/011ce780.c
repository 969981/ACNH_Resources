
/* WARNING: Type propagation algorithm not settling */

void FUN_011ce780(long param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  undefined *__src;
  undefined1 *__src_00;
  long lVar11;
  long lVar12;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  lVar11 = param_1 + 0x38;
  uVar9 = FUN_01238b20(lVar11,param_1,0,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0xf8);
  if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0)) {
    FUN_011d0e00();
    __cxa_guard_release(&DAT_050de808);
  }
  uVar9 = (ulong)*piVar1;
  if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
    uVar9 = 0;
  }
  if (*(int *)(DAT_050de800 + uVar9 * 4) < 2) {
    lVar12 = *(long *)(param_1 + 0x40);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(lVar11);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x40) + lVar11) == '\0') goto LAB_011ce9f4;
      lVar2 = *(long *)(param_1 + 0x40) + lVar11;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_011ce9f4;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_011ce9f4;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_011ce9f4:
    uVar3 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    uVar9 = (ulong)uVar3;
    uVar4 = 2;
    if ((int)(*(int *)(param_1 + 0x48) - uVar3) < 3) {
      uVar4 = *(int *)(param_1 + 0x48) + ~uVar3;
    }
    if (0 < (int)uVar4) {
      pvVar10 = (void *)(lVar12 + uVar9);
      __src = &DAT_040d9de2;
LAB_011cea28:
      memcpy(pvVar10,__src,(ulong)uVar4);
      *(undefined1 *)(lVar12 + uVar4 + uVar9) = 0;
    }
LAB_011cea38:
    bVar5 = true;
  }
  else {
    if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0)) {
      FUN_011d0e00();
      __cxa_guard_release(&DAT_050de808);
    }
    uVar9 = (ulong)*piVar1;
    if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
      uVar9 = 0;
    }
    if (*(int *)(DAT_050de800 + uVar9 * 4) < 6) {
      lVar12 = *(long *)(param_1 + 0x40);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(lVar11);
      lVar11 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x40) + lVar11) == '\0') goto LAB_011cea98;
        lVar2 = *(long *)(param_1 + 0x40) + lVar11;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_011cea98;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_011cea98;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_011cea98:
      uVar3 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
      uVar9 = (ulong)uVar3;
      uVar4 = 2;
      if ((int)(*(int *)(param_1 + 0x48) - uVar3) < 3) {
        uVar4 = *(int *)(param_1 + 0x48) + ~uVar3;
      }
      if ((int)uVar4 < 1) {
LAB_011ceb50:
        bVar5 = false;
        goto joined_r0x011ceb48;
      }
      pvVar10 = (void *)(lVar12 + uVar9);
      __src_00 = &DAT_040ab36f;
    }
    else {
      if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0)) {
        FUN_011d0e00();
        __cxa_guard_release(&DAT_050de808);
      }
      uVar9 = (ulong)*piVar1;
      if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
        uVar9 = 0;
      }
      if (7 < *(int *)(DAT_050de800 + uVar9 * 4)) {
        if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0)) {
          FUN_011d0e00();
          __cxa_guard_release(&DAT_050de808);
        }
        uVar9 = (ulong)*piVar1;
        if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
          uVar9 = 0;
        }
        if (*(int *)(DAT_050de800 + uVar9 * 4) < 0xc) {
          lVar12 = *(long *)(param_1 + 0x40);
          (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(lVar11);
          lVar11 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x40) + lVar11) == '\0') goto LAB_011cec8c;
            lVar2 = *(long *)(param_1 + 0x40) + lVar11;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_011cec8c;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_011cec8c;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_011cec8c:
          uVar3 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
          uVar9 = (ulong)uVar3;
          uVar4 = 2;
          if ((int)(*(int *)(param_1 + 0x48) - uVar3) < 3) {
            uVar4 = *(int *)(param_1 + 0x48) + ~uVar3;
          }
          if (0 < (int)uVar4) {
            pvVar10 = (void *)(lVar12 + uVar9);
            __src = &DAT_040fea34;
            goto LAB_011cea28;
          }
        }
        else {
          if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0))
          {
            FUN_011d0e00();
            __cxa_guard_release(&DAT_050de808);
          }
          uVar9 = (ulong)*piVar1;
          if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
            uVar9 = 0;
          }
          if (*(int *)(DAT_050de800 + uVar9 * 4) < 0x10) {
            puStack_70 = &DAT_04071c1e;
          }
          else {
            uVar9 = FUN_011ceda8(piVar1);
            if ((uVar9 & 1) == 0) {
              puStack_70 = &DAT_040812db;
            }
            else {
              puStack_70 = &DAT_0407c2ac;
            }
          }
          local_78 = PTR_DAT_04bb2020 + 0x10;
          FUN_00958800(lVar11,&local_78,0xffffffff);
        }
        goto LAB_011cea38;
      }
      lVar12 = *(long *)(param_1 + 0x40);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(lVar11);
      lVar11 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x40) + lVar11) == '\0') goto LAB_011ceafc;
        lVar2 = *(long *)(param_1 + 0x40) + lVar11;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_011ceafc;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_011ceafc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_011ceafc:
      uVar3 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
      uVar9 = (ulong)uVar3;
      uVar4 = 2;
      if ((int)(*(int *)(param_1 + 0x48) - uVar3) < 3) {
        uVar4 = *(int *)(param_1 + 0x48) + ~uVar3;
      }
      if ((int)uVar4 < 1) goto LAB_011ceb50;
      pvVar10 = (void *)(lVar12 + uVar9);
      __src_00 = &DAT_0407bd02;
    }
    memcpy(pvVar10,__src_00,(ulong)uVar4);
    bVar5 = false;
    *(undefined1 *)(lVar12 + uVar4 + uVar9) = 0;
  }
joined_r0x011ceb48:
  if (((DAT_050de808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_050de808), iVar8 != 0)) {
    FUN_011d0e00();
    __cxa_guard_release(&DAT_050de808);
  }
  uVar9 = (ulong)*piVar1;
  if ((DAT_050de7f8 & uVar9 < 0x15) == 0) {
    uVar9 = 0;
  }
  uVar3 = *(uint *)(DAT_050de800 + uVar9 * 4);
  if (uVar3 < 0x15) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(&PTR_DAT_04986c80)[(int)uVar3];
  }
  if ((!bVar5 && (param_2 & 1) == 0) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
    FUN_0124c030(&local_78,param_1);
    iVar7 = FUN_0123db50(&puStack_70,local_68);
    bVar5 = ((ulong)puStack_70 & 0x100000000) == 0;
    iVar8 = *(int *)(param_1 + 0xd0);
    bVar6 = iVar7 != 0x2d;
    if (iVar8 == 0) {
      if (bVar5 || bVar6) {
        return;
      }
    }
    else if (iVar8 != -0x80000000 || (bVar5 || bVar6)) {
      if (iVar8 == 0x40000000) {
        if (!bVar5 && !bVar6) {
          return;
        }
      }
      else if (iVar8 != -0x40000000 || !bVar5 && !bVar6) {
        return;
      }
    }
    *(ulong *)(param_1 + 0x108) = *(ulong *)(param_1 + 0x108) | 0x4000000;
  }
  return;
}

