
/* WARNING: Removing unreachable block (ram,0x0216ff4c) */

void FUN_0216fc10(long param_1,undefined4 *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined *local_50;
  char *pcStack_48;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  if ((undefined1 *)param_3[1] == &DAT_040ac124) {
LAB_0216fcc0:
    uVar8 = 3;
    goto LAB_0216ff28;
  }
  uVar10 = 0;
  bVar4 = true;
  do {
    cVar2 = ((undefined1 *)param_3[1])[uVar10];
    if (cVar2 != (&DAT_040ac124)[uVar10]) break;
    if (cVar2 == '\0') {
      if (bVar4) goto LAB_0216fcc0;
      break;
    }
    bVar4 = uVar10 < 0x80000;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x80001);
  uVar5 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_3,PTR_DAT_04bb3238,1);
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar5 == 0) {
    *param_2 = 1;
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8);
    if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar11 + 0x46) != uVar5)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar5 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0216fd90;
        uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0216fd90:
      uVar5 = 0;
    }
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
      uVar1 = 0;
      if ((int)lVar9 == 1) {
        uVar1 = uVar5;
      }
      if (((uVar10 & 1) != 0) && (uVar1 != 0)) {
        (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
        (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
        if ((undefined1 *)plVar11[0x7d] == &DAT_04076b39) {
LAB_0216fe54:
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*param_3 + 0x18))(param_3);
          if ((undefined1 *)param_3[1] != &DAT_040eeb6a) {
            uVar10 = 0;
            bVar4 = true;
            do {
              cVar2 = ((undefined1 *)param_3[1])[uVar10];
              if (cVar2 != (&DAT_040eeb6a)[uVar10]) break;
              if (cVar2 == '\0') {
                if (bVar4) goto LAB_0216fec0;
                break;
              }
              bVar4 = uVar10 < 0x80000;
              uVar10 = uVar10 + 1;
            } while (uVar10 != 0x80001);
            goto LAB_0216fee8;
          }
LAB_0216fec0:
          local_50 = PTR_DAT_04bb2020 + 0x10;
          pcStack_48 = "gulB_01";
          FUN_0216fff0(plVar11,&local_50);
        }
        else {
          uVar10 = 0;
          bVar4 = true;
          do {
            cVar2 = ((undefined1 *)plVar11[0x7d])[uVar10];
            if (cVar2 != (&DAT_04076b39)[uVar10]) break;
            if (cVar2 == '\0') {
              if (bVar4) goto LAB_0216fe54;
              break;
            }
            bVar4 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
LAB_0216fee8:
          *(undefined1 *)plVar11[0xa3] = 0;
        }
        if (plVar11[0x77] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0216ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)DAT_04179a1a * 4 + 0x216ff24))();
          return;
        }
        uVar8 = 5;
        goto LAB_0216ff28;
      }
    }
  }
  uVar8 = 1;
LAB_0216ff28:
  *param_2 = uVar8;
  return;
}

