
void FUN_036e8f10(long param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x036e8fd0;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x036e8fd0;
    }
  }
  uVar11 = 0;
joined_r0x036e8fd0:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && (lVar8 = *(long *)PTR_DAT_04bb4138, lVar8 != 0)) {
      (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
      local_34 = FUN_006bd550(plVar9[0x7d],0);
      lVar8 = FUN_0079e770(lVar8,&local_34);
      if (lVar8 != 0) {
        plVar6 = *(long **)(param_1 + 8);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar8 = plVar6[1];
        (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
        if (lVar8 != plVar9[0x7d]) {
          uVar7 = 0;
          bVar4 = true;
          do {
            if (*(char *)(plVar6[1] + uVar7) != *(char *)(plVar9[0x7d] + uVar7)) break;
            if (*(char *)(plVar6[1] + uVar7) == '\0') {
              if (bVar4) {
                return;
              }
              break;
            }
            bVar4 = uVar7 < 0x80000;
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x80001);
          puVar10 = (undefined8 *)plVar9[0x77];
          if (((*PTR_DAT_04bb6bc0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6bc0), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb6bb8 = PTR_DAT_04bb6bc8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6bc0);
          }
          if ((puVar10 != (undefined8 *)0x0) &&
             (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6bb8), (uVar7 & 1) != 0)) {
            *(byte *)((long)puVar10 + 0xe742) = *(byte *)((long)puVar10 + 0xe742) & 0xfe;
            puVar3 = PTR_DAT_04bb3238;
            lVar8 = *(long *)PTR_DAT_04bb3968;
            if ((lVar8 != 0) &&
               (((*(int *)(lVar8 + 0x175a8) != 0 &&
                 (*(int *)(lVar8 + 0x175a8) == *(int *)(puVar10[1] + 0x230))) &&
                (*(int *)(lVar8 + 0x175ac) == 0)))) {
              *(undefined4 *)(lVar8 + 0x175ac) = 2;
              uVar2 = *(undefined4 *)puVar3;
              *(undefined2 *)(lVar8 + 0x175b4) = 0;
              *(undefined4 *)(lVar8 + 0x175b0) = uVar2;
              *(undefined4 *)(lVar8 + 0x17608) = 999;
            }
          }
        }
      }
    }
  }
  return;
}

