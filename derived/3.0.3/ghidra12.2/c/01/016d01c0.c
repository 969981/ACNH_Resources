
ulong FUN_016d01c0(void)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  char *__src;
  long *plVar9;
  long lVar10;
  undefined *local_60;
  char *local_58;
  int local_50;
  char local_4c [7];
  undefined1 local_45;
  
  lVar10 = *(long *)PTR_DAT_04bb4938;
  if ((*(int *)(lVar10 + 0x98) == 0) || (*(char *)(lVar10 + 8) == '\0')) {
    iVar4 = FUN_0252d29c();
    lVar10 = *(long *)PTR_DAT_04bb46b0;
    if (lVar10 != 0) {
      puVar8 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar10 != 0) {
          lVar10 = lVar10 + (long)iVar4 * 0xcb0;
          lVar7 = lVar10 + 0x211c90;
          plVar9 = *(long **)(lVar10 + 0x211cb8);
joined_r0x016d0310:
          if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (*(code *)**(undefined8 **)*plVar9)();
            uVar5 = uVar5 & 0xffffffff;
          }
          lVar10 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
          if ((((*(byte *)(lVar10 + 0x1590) ^ 0xff) & 3) == 0) && (*(uint *)(lVar10 + 0x158c) < 8))
          {
            local_45 = 0;
            local_50 = 8;
            local_58 = local_4c;
            local_4c[0] = '\0';
            local_60 = PTR_DAT_04bb3768 + 0x10;
            if ((*(long **)(lVar7 + 0x728) == (long *)0x0) ||
               (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x728), puVar8 == (undefined8 *)0x0)) {
              FUN_02774cf0(*(long *)(lVar7 + 0x710) + *(long *)(lVar7 + 0x708),&local_60);
            }
            else {
              uVar6 = (**(code **)*puVar8)();
              FUN_02774cf0(*(long *)(lVar7 + 0x710) + *(long *)(lVar7 + 0x708),&local_60);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x728) != 0)) &&
                 (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x728) + 8),
                 puVar8 != (undefined8 *)0x0)) {
                (**(code **)*puVar8)();
              }
            }
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
               (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar8)();
            }
            goto LAB_016d0458;
          }
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0))
          {
            (**(code **)*puVar8)();
          }
        }
      }
      else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
              (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 != 0)) {
        lVar10 = lVar10 + (long)iVar4 * 0xcb0;
        lVar7 = lVar10 + 0x211c20;
        plVar9 = *(long **)(lVar10 + 0x211c48);
        goto joined_r0x016d0310;
      }
    }
    puVar3 = PTR_PTR_04bb2238;
    local_45 = 0;
    local_50 = 8;
    local_60 = PTR_DAT_04bb6a30 + 0x10;
    local_58 = local_4c;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(char **)(puVar3 + 8);
    if (local_4c != __src) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar7 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_016d0420;
        lVar10 = *(long *)(puVar3 + 8) + lVar7;
        if (*(char *)(lVar10 + 1) == '\0') goto LAB_016d0414;
        if (*(char *)(lVar10 + 2) == '\0') goto LAB_016d041c;
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      goto LAB_016d040c;
    }
  }
  else {
    local_45 = 0;
    plVar9 = (long *)(lVar10 + 0x58);
    local_50 = 8;
    local_60 = PTR_DAT_04bb6a30 + 0x10;
    local_58 = local_4c;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    __src = *(char **)(lVar10 + 0x60);
    if (local_4c != __src) {
      (**(code **)(*(long *)(lVar10 + 0x58) + 0x18))(plVar9);
      lVar7 = 0;
      do {
        if (*(char *)(*(long *)(lVar10 + 0x60) + lVar7) == '\0') goto LAB_016d0420;
        lVar2 = *(long *)(lVar10 + 0x60) + lVar7;
        if (*(char *)(lVar2 + 1) == '\0') goto LAB_016d0414;
        if (*(char *)(lVar2 + 2) == '\0') goto LAB_016d041c;
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
LAB_016d040c:
      lVar7 = 0;
      goto LAB_016d0420;
    }
  }
  goto LAB_016d0448;
LAB_016d0414:
  lVar7 = lVar7 + 1;
  goto LAB_016d0420;
LAB_016d041c:
  lVar7 = lVar7 + 2;
LAB_016d0420:
  iVar4 = (int)lVar7;
  if (local_50 <= (int)lVar7) {
    iVar4 = local_50 + -1;
  }
  memcpy(local_4c,__src,(long)iVar4);
  local_4c[iVar4] = '\0';
LAB_016d0448:
  local_60 = PTR_DAT_04bb3768 + 0x10;
LAB_016d0458:
  if (*local_58 == '\0') {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_021d7e50(&local_60);
    if ((int)uVar5 == -1) {
      iVar4 = FUN_0252d29c();
      uVar1 = iVar4 + 8;
      if (iVar4 == -1) {
        uVar1 = 0xffffffff;
      }
      uVar5 = (ulong)uVar1;
    }
  }
  return uVar5;
}

