
void FUN_01182450(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long local_60;
  char local_58;
  char local_56;
  
  lVar8 = *(long *)(param_1 + 0xc0);
  lVar11 = param_1 + -0xa0;
  lVar13 = lVar8 + -0x158;
  plVar6 = (long *)PTR_DAT_04bb27c0;
  if (lVar8 != param_1 + 0xb8) {
    do {
      FUN_0071ca50(&local_60,lVar13 + 8,0);
      if ((((local_60 != 0) && (local_58 != '\0')) && (local_56 != '\0')) &&
         ((*(byte *)(lVar13 + 0x150) & 3) != 1)) {
        (**(code **)(**(long **)(lVar13 + 0x10) + 0x100))();
      }
      lVar8 = *(long *)(lVar8 + 8);
      lVar13 = lVar8 + -0x158;
    } while (lVar13 != lVar11);
    lVar8 = *(long *)(param_1 + 0xc0);
    goto joined_r0x01182508;
  }
  while (PTR_DAT_04bb27c0 = (undefined *)plVar6, lVar13 != lVar11) {
    FUN_0071ca50(&local_60,lVar13 + 8,0);
    if (((local_60 != 0) && (local_58 != '\0')) && (local_56 != '\0')) {
      bVar2 = *(byte *)(lVar13 + 0x150);
      lVar13 = *(long *)(lVar13 + 0x10);
      if (*(long **)(lVar13 + 0x280) != (long *)0x0) {
        (**(code **)(**(long **)(lVar13 + 0x280) + 0x50))();
        *(undefined8 *)(lVar13 + 0x280) = 0;
      }
      *(undefined8 *)(lVar13 + 0x288) = 0;
      *(undefined8 *)(lVar13 + 0x2a0) = 0;
      *(undefined1 *)(lVar13 + 0x2a8) = 0xff;
      if (*(long *)(lVar13 + 0x290) != 0) {
        *(undefined1 *)(*(long *)(lVar13 + 0x290) + 0xc) = 0xff;
      }
      if ((bVar2 & 1) != 0) {
        *(undefined8 *)(lVar13 + 0x2b8) = 0;
        *(undefined8 *)(lVar13 + 0x2b0) = 0;
        *(undefined1 *)(lVar13 + 0x2c0) = 0xff;
      }
    }
    lVar8 = *(long *)(lVar8 + 8);
joined_r0x01182508:
    plVar6 = (long *)PTR_DAT_04bb27c0;
    lVar13 = lVar8 + -0x158;
  }
  if ((*(int *)(param_1 + 0x5fc8) == 0) || (lVar8 = *plVar6, lVar8 == 0)) goto LAB_011826e4;
  uVar12 = *(uint *)PTR_DAT_04bbb7f0;
  if ((uVar12 == 0) ||
     (((plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0 ||
       ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar12)))) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *plVar6;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0118264c;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0118264c:
    uVar12 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbb7e8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbb7e8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbb7e0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbb7e8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbb7e0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar12;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) &&
       (plVar6 = (long *)plVar9[0x50], plVar6 != plVar9 + 0x4f)) {
      plVar5 = plVar6 + -1;
      do {
        if (*(int *)((long)plVar5 + 4) == *(int *)(param_1 + 0x5fc8)) {
          *(undefined1 *)plVar5 = 0;
          break;
        }
        plVar6 = (long *)plVar6[1];
        plVar5 = plVar6 + -1;
      } while (plVar5 != plVar9 + 0x4e);
    }
  }
LAB_011826e4:
  lVar8 = *(long *)(param_1 + 0x5f60);
  if (lVar8 != 0) {
    lVar13 = *(long *)(lVar8 + 0x10);
    if (lVar13 == 0) {
      lVar13 = **(long **)(lVar8 + 0x20);
    }
    FUN_01bf828c(lVar13);
  }
  FUN_01189040(param_1 + 0x51e8,1);
  for (lVar8 = *(long *)(param_1 + 0xc0); lVar8 + -0x158 != lVar11; lVar8 = *(long *)(lVar8 + 8)) {
    FUN_0071ca50(&local_60,lVar8 + -0x150,0);
    if (((local_60 != 0) && (local_58 != '\0')) && (local_56 != '\0')) {
      FUN_010f9740(lVar8 + -0x158);
    }
  }
  uVar10 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  lVar8 = *(long *)PTR_DAT_04bb28b0;
  FUN_038d18d0(lVar8 + 0x3090,uVar10,0xffffffff);
  FUN_038d18d0(lVar8 + 0x3120,uVar10,0xffffffff);
  puVar3 = PTR_DAT_04bb49b8;
  if (((param_2 & 1) != 0) && (0 < *(int *)(param_1 + 0x51e0))) {
    uVar7 = 0;
    lVar8 = param_1 + 0x2f80;
    do {
      lVar13 = lVar8;
      if (99 < uVar7) {
        lVar13 = param_1 + 0x2f80;
      }
      if ((*(byte *)(lVar13 + 0x18) >> 1 & 1) != 0) {
        *(byte *)(lVar13 + 0x18) = *(byte *)(lVar13 + 0x18) & 0xf8 | 4;
        if (*(long *)(lVar13 + 0x38) == 0) {
          if (*(long *)(lVar13 + 0x20) != 0) goto LAB_011827e0;
        }
        else {
          FUN_03f45838(lVar13 + 0x28);
          if (*(long *)(lVar13 + 0x20) == 0) {
            *(undefined4 *)(lVar13 + 0x1c) = 0xe;
          }
          else {
LAB_011827e0:
            FUN_03f35214(*(undefined8 *)puVar3,lVar13 + 0x10);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x58;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x51e0));
  }
  if (*(long *)(param_1 + 0x2eb0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x2eb0) + 8) = 4;
  }
  *(undefined8 *)(param_1 + 8) = 6;
  return;
}

